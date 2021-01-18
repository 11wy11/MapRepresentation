/***************************************************************************
    qgsconfigureshortcutsdialog.cpp
    -------------------------------
    begin                : May 2009
    copyright            : (C) 2009 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgsconfigureshortcutsdialog.h"

#include "qgsshortcutsmanager.h"
#include "qgslogger.h"
#include "qgssettings.h"
#include "qgsgui.h"

#include <QKeyEvent>
#include <QKeySequence>
#include <QMessageBox>
#include <QShortcut>
#include <QDomDocument>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>

QgsConfigureShortcutsDialog::QgsConfigureShortcutsDialog( QWidget *parent, QgsShortcutsManager *manager )
  : QDialog( parent )
  , mManager( manager )
{
  setupUi( this );
  QgsGui::enableAutoGeometryRestore( this );
  connect( mLeFilter, &QgsFilterLineEdit::textChanged, this, &QgsConfigureShortcutsDialog::mLeFilter_textChanged );

  if ( !mManager )
    mManager = QgsGui::shortcutsManager();

  connect( buttonBox, &QDialogButtonBox::helpRequested, this, &QgsConfigureShortcutsDialog::showHelp ); // Vérifier nommage des boutons
  connect( btnChangeShortcut, &QAbstractButton::clicked, this, &QgsConfigureShortcutsDialog::changeShortcut );
  connect( btnResetShortcut, &QAbstractButton::clicked, this, &QgsConfigureShortcutsDialog::resetShortcut );
  connect( btnSetNoShortcut, &QAbstractButton::clicked, this, &QgsConfigureShortcutsDialog::setNoShortcut );
  connect( btnSaveShortcuts, &QAbstractButton::clicked, this, &QgsConfigureShortcutsDialog::saveShortcuts );
  connect( btnLoadShortcuts, &QAbstractButton::clicked, this, &QgsConfigureShortcutsDialog::loadShortcuts );

  connect( treeActions, &QTreeWidget::currentItemChanged,
           this, &QgsConfigureShortcutsDialog::actionChanged );

  populateActions();
}

void QgsConfigureShortcutsDialog::populateActions()
{
  QList<QObject *> objects = mManager->listAll();

  QList<QTreeWidgetItem *> items;
  items.reserve( objects.count() );
  const auto constObjects = objects;
  for ( QObject *obj : constObjects )
  {
    QString actionText;
    QString sequence;
    QIcon icon;

    if ( QAction *action = qobject_cast< QAction * >( obj ) )
    {
      actionText = action->text();
      actionText.remove( '&' ); // remove the accelerator
      sequence = action->shortcut().toString( QKeySequence::NativeText );
      icon = action->icon();
    }
    else if ( QShortcut *shortcut = qobject_cast< QShortcut * >( obj ) )
    {
      actionText = shortcut->whatsThis();
      sequence = shortcut->key().toString( QKeySequence::NativeText );
      icon = shortcut->property( "Icon" ).value<QIcon>();
    }
    else
    {
      continue;
    }

    if ( actionText.isEmpty() )
    {
      continue;
    }

    QStringList lst;
    lst << actionText << sequence;
    QTreeWidgetItem *item = new QTreeWidgetItem( lst );
    item->setIcon( 0, icon );
    item->setData( 0, Qt::UserRole, QVariant::fromValue( obj ) );
    items.append( item );
  }

  treeActions->addTopLevelItems( items );

  // make sure everything's visible and sorted
  treeActions->resizeColumnToContents( 0 );
  treeActions->sortItems( 0, Qt::AscendingOrder );

  actionChanged( treeActions->currentItem(), nullptr );
}

void QgsConfigureShortcutsDialog::saveShortcuts()
{
  QString fileName = QFileDialog::getSaveFileName( this, tr( "Save Shortcuts" ), QDir::homePath(),
                     tr( "XML file" ) + " (*.xml);;" + tr( "All files" ) + " (*)" );

  if ( fileName.isEmpty() )
    return;

  // ensure the user never omitted the extension from the file name
  if ( !fileName.endsWith( QLatin1String( ".xml" ), Qt::CaseInsensitive ) )
  {
    fileName += QLatin1String( ".xml" );
  }

  QFile file( fileName );
  if ( !file.open( QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate ) )
  {
    QMessageBox::warning( this, tr( "Saving Shortcuts" ),
                          tr( "Cannot write file %1:\n%2." )
                          .arg( fileName,
                                file.errorString() ) );
    return;
  }

  QgsSettings settings;

  QDomDocument doc( QStringLiteral( "shortcuts" ) );
  QDomElement root = doc.createElement( QStringLiteral( "qgsshortcuts" ) );
  root.setAttribute( QStringLiteral( "version" ), QStringLiteral( "1.0" ) );
  root.setAttribute( QStringLiteral( "locale" ), settings.value( QStringLiteral( "locale/userLocale" ), "en_US" ).toString() );
  doc.appendChild( root );

  settings.beginGroup( mManager->settingsPath() );
  QStringList keys = settings.childKeys();

  QString actionText;
  QString actionShortcut;

  for ( int i = 0; i < keys.count(); ++i )
  {
    actionText = keys[ i ];
    actionShortcut = settings.value( actionText, "" ).toString();

    QDomElement el = doc.createElement( QStringLiteral( "act" ) );
    el.setAttribute( QStringLiteral( "name" ), actionText );
    el.setAttribute( QStringLiteral( "shortcut" ), actionShortcut );
    root.appendChild( el );
  }

  QTextStream out( &file );
  doc.save( out, 4 );
}

void QgsConfigureShortcutsDialog::loadShortcuts()
{
  QString fileName = QFileDialog::getOpenFileName( this, tr( "Load Shortcuts" ), QDir::homePath(),
                     tr( "XML file" ) + " (*.xml);;" + tr( "All files" ) + " (*)" );

  if ( fileName.isEmpty() )
  {
    return;
  }

  QFile file( fileName );
  if ( !file.open( QIODevice::ReadOnly | QIODevice::Text ) )
  {
    QMessageBox::warning( this, tr( "Loading Shortcuts" ),
                          tr( "Cannot read file %1:\n%2." )
                          .arg( fileName,
                                file.errorString() ) );
    return;
  }

  QDomDocument  doc;
  QString errorStr;
  int errorLine;
  int errorColumn;

  if ( !doc.setContent( &file, true, &errorStr, &errorLine, &errorColumn ) )
  {
    QMessageBox::information( this, tr( "Loading Shortcuts" ),
                              tr( "Parse error at line %1, column %2:\n%3" )
                              .arg( errorLine )
                              .arg( errorColumn )
                              .arg( errorStr ) );
    return;
  }

  QDomElement root = doc.documentElement();
  if ( root.tagName() != QLatin1String( "qgsshortcuts" ) )
  {
    QMessageBox::information( this, tr( "Loading Shortcuts" ),
                              tr( "The file is not an shortcuts exchange file." ) );
    return;
  }

  QgsSettings settings;
  QString currentLocale;

  bool localeOverrideFlag = settings.value( QStringLiteral( "locale/overrideFlag" ), false ).toBool();
  if ( localeOverrideFlag )
  {
    currentLocale = settings.value( QStringLiteral( "locale/userLocale" ), "en_US" ).toString();
  }
  else // use QGIS locale
  {
    currentLocale = QLocale().name();
  }

  if ( root.attribute( QStringLiteral( "locale" ) ) != currentLocale )
  {
    QMessageBox::information( this, tr( "Loading Shortcuts" ),
                              tr( "The file contains shortcuts created with different locale, so you can't use it." ) );
    return;
  }

  QString actionName;
  QString actionShortcut;

  QDomElement child = root.firstChildElement();
  while ( !child.isNull() )
  {
    actionName = child.attribute( QStringLiteral( "name" ) );
    actionShortcut = child.attribute( QStringLiteral( "shortcut" ) );
    mManager->setKeySequence( actionName, actionShortcut );

    child = child.nextSiblingElement();
  }

  treeActions->clear();
  populateActions();
}

void QgsConfigureShortcutsDialog::changeShortcut()
{
  setFocus(); // make sure we have focus
  setGettingShortcut( true );
}

void QgsConfigureShortcutsDialog::resetShortcut()
{
  QObject *object = currentObject();
  QString sequence = mManager->objectDefaultKeySequence( object );
  setCurrentActionShortcut( sequence );
}

void QgsConfigureShortcutsDialog::setNoShortcut()
{
  setCurrentActionShortcut( QKeySequence() );
}

QAction *QgsConfigureShortcutsDialog::currentAction()
{
  return qobject_cast<QAction *>( currentObject() );
}

QShortcut *QgsConfigureShortcutsDialog::currentShortcut()
{
  return qobject_cast<QShortcut *>( currentObject() );
}

void QgsConfigureShortcutsDialog::actionChanged( QTreeWidgetItem *current, QTreeWidgetItem *previous )
{
  Q_UNUSED( current )
  Q_UNUSED( previous )
  // cancel previous shortcut setting (if any)
  setGettingShortcut( false );

  QString shortcut;
  QKeySequence sequence;
  if ( QAction *action = currentAction() )
  {
    // show which one is the default action
    shortcut = mManager->defaultKeySequence( action );
    sequence = action->shortcut();
  }
  else if ( QShortcut *object = currentShortcut() )
  {
    // show which one is the default action
    shortcut = mManager->defaultKeySequence( object );
    sequence = object->key();
  }
  else
  {
    return;
  }

  if ( shortcut.isEmpty() )
    shortcut = tr( "None" );
  btnResetShortcut->setText( tr( "Set default (%1)" ).arg( shortcut ) );

  // if there's no shortcut, disable set none
  btnSetNoShortcut->setEnabled( !sequence.isEmpty() );
  // if the shortcut is default, disable set default
  btnResetShortcut->setEnabled( sequence != QKeySequence( shortcut ) );
}

void QgsConfigureShortcutsDialog::keyPressEvent( QKeyEvent *event )
{
  if ( !mGettingShortcut )
  {
    QDialog::keyPressEvent( event );
    return;
  }

  int key = event->key();
  switch ( key )
  {
    // modifiers
    case Qt::Key_Meta:
      mModifiers |= Qt::META;
      updateShortcutText();
      break;
    case Qt::Key_Alt:
      mModifiers |= Qt::ALT;
      updateShortcutText();
      break;
    case Qt::Key_Control:
      mModifiers |= Qt::CTRL;
      updateShortcutText();
      break;
    case Qt::Key_Shift:
      mModifiers |= Qt::SHIFT;
      updateShortcutText();
      break;

    // escape aborts the acquisition of shortcut
    case Qt::Key_Escape:
      setGettingShortcut( false );
      break;

    default:
      mKey = key;
      updateShortcutText();
  }
}

void QgsConfigureShortcutsDialog::keyReleaseEvent( QKeyEvent *event )
{
  if ( !mGettingShortcut )
  {
    QDialog::keyReleaseEvent( event );
    return;
  }

  int key = event->key();
  switch ( key )
  {
    // modifiers
    case Qt::Key_Meta:
      mModifiers &= ~Qt::META;
      updateShortcutText();
      break;
    case Qt::Key_Alt:
      mModifiers &= ~Qt::ALT;
      updateShortcutText();
      break;
    case Qt::Key_Control:
      mModifiers &= ~Qt::CTRL;
      updateShortcutText();
      break;
    case Qt::Key_Shift:
      mModifiers &= ~Qt::SHIFT;
      updateShortcutText();
      break;

    case Qt::Key_Escape:
      break;

    default:
    {
      // an ordinary key - set it with modifiers as a shortcut
      setCurrentActionShortcut( QKeySequence( mModifiers + mKey ) );
      setGettingShortcut( false );
    }
  }
}

QObject *QgsConfigureShortcutsDialog::currentObject()
{
  if ( !treeActions->currentItem() )
    return nullptr;

  QObject *object = treeActions->currentItem()->data( 0, Qt::UserRole ).value<QObject *>();
  return object;
}

void QgsConfigureShortcutsDialog::updateShortcutText()
{
  // update text of the button so that user can see what has typed already
  QKeySequence s( mModifiers + mKey );
  btnChangeShortcut->setText( tr( "Input: " ) + s.toString( QKeySequence::NativeText ) );
}

void QgsConfigureShortcutsDialog::setGettingShortcut( bool getting )
{
  mModifiers = 0;
  mKey = 0;
  mGettingShortcut = getting;
  if ( !getting )
  {
    btnChangeShortcut->setChecked( false );
    btnChangeShortcut->setText( tr( "Change" ) );
  }
  else
  {
    updateShortcutText();
  }
}

void QgsConfigureShortcutsDialog::setCurrentActionShortcut( const QKeySequence &s )
{
  QObject *object = currentObject();
  if ( !object )
    return;

  // first check whether this action is not taken already
  QObject *otherObject = mManager->objectForSequence( s );
  if ( otherObject == object )
    return;

  if ( otherObject )
  {
    QString otherText;
    if ( QAction *otherAction = qobject_cast< QAction * >( otherObject ) )
    {
      otherText = otherAction->text();
      otherText.remove( '&' ); // remove the accelerator
    }
    else if ( QShortcut *otherShortcut = qobject_cast< QShortcut * >( otherObject ) )
    {
      otherText = otherShortcut->whatsThis();
    }

    int res = QMessageBox::question( this, tr( "Change Shortcut" ),
                                     tr( "This shortcut is already assigned to action %1. Reassign?" ).arg( otherText ),
                                     QMessageBox::Yes | QMessageBox::No );

    if ( res != QMessageBox::Yes )
      return;

    // reset action of the conflicting other action!
    mManager->setObjectKeySequence( otherObject, QString() );
    QList<QTreeWidgetItem *> items = treeActions->findItems( otherText, Qt::MatchExactly );
    if ( !items.isEmpty() ) // there should be exactly one
      items[0]->setText( 1, QString() );
  }

  // update manager
  mManager->setObjectKeySequence( object, s.toString( QKeySequence::NativeText ) );

  // update gui
  treeActions->currentItem()->setText( 1, s.toString( QKeySequence::NativeText ) );

  actionChanged( treeActions->currentItem(), nullptr );
}

void QgsConfigureShortcutsDialog::mLeFilter_textChanged( const QString &text )
{
  for ( int i = 0; i < treeActions->topLevelItemCount(); i++ )
  {
    QTreeWidgetItem *item = treeActions->topLevelItem( i );
    if ( !item->text( 0 ).contains( text, Qt::CaseInsensitive ) && !item->text( 1 ).contains( text, Qt::CaseInsensitive ) )
    {
      item->setHidden( true );
    }
    else
    {
      item->setHidden( false );
    }
  }
}

void QgsConfigureShortcutsDialog::showHelp()
{
  QgsHelp::openHelp( QStringLiteral( "introduction/qgis_configuration.html#keyboard-shortcuts" ) );
}
