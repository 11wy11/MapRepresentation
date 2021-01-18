/***************************************************************************
    qgswidgetwrapper.h
     --------------------------------------
    Date                 : 14.5.2014
    Copyright            : (C) 2013 Matthias Kuhn
    Email                : matthias at opengis dot ch
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSWIDGETWRAPPER_H
#define QGSWIDGETWRAPPER_H

#include <QObject>
#include <QMap>
#include <QVariant>

class QgsVectorLayer;

#include "qgsattributeeditorcontext.h"
#include "qgis_gui.h"
#include "qgis_sip.h"
#include "qgspropertycollection.h"

#ifdef SIP_RUN
// This is required for the ConvertToSubClassCode to work properly
// so RTTI for casting is available in the whole module.
% ModuleCode
#include "qgsrelationwidgetwrapper.h"
#include "qgsqmlwidgetwrapper.h"
#include "qgshtmlwidgetwrapper.h"
% End
#endif

/**
 * \ingroup gui
 * Manages an editor widget
 * Widget and wrapper share the same parent
 *
 * A wrapper controls one attribute editor widget and is able to create a default
 * widget or use a pre-existent widget. It is able to set the widget to the value implied
 * by a field of a vector layer, or return the value it currently holds. Every time it is changed
 * it has to emit a valueChanged signal. If it fails to do so, there is no guarantee that the
 * changed status of the widget will be saved.
 *
 */
class GUI_EXPORT QgsWidgetWrapper : public QObject
{

#ifdef SIP_RUN
    SIP_CONVERT_TO_SUBCLASS_CODE
    if ( qobject_cast<QgsEditorWidgetWrapper *>( sipCpp ) )
      sipType = sipType_QgsEditorWidgetWrapper;
    else if ( qobject_cast<QgsRelationWidgetWrapper *>( sipCpp ) )
      sipType = sipType_QgsRelationWidgetWrapper;
    else if ( qobject_cast<QgsQmlWidgetWrapper *>( sipCpp ) )
      sipType = sipType_QgsQmlWidgetWrapper;
    else if ( qobject_cast<QgsHtmlWidgetWrapper *>( sipCpp ) )
      sipType = sipType_QgsHtmlWidgetWrapper;
    else
      sipType = 0;
    SIP_END
#endif

    Q_OBJECT
  public:

    /**
     * Data defined properties for different editor widgets.
     */
    enum Property
    {
      RootPath = 0, //!< Root path for external resource
      DocumentViewerContent //!< Document type for external resource
    };

    /**
     * Returns the editor widget property definitions.
     * \since QGIS 3.0
     */
    static const QgsPropertiesDefinition &propertyDefinitions();

    /**
     * Create a new widget wrapper
     *
     * \param vl        The layer on which the field is
     * \param editor    An editor widget. Can be NULLPTR if one should be autogenerated.
     * \param parent    A parent widget for this widget wrapper and the created widget.
     */
    explicit QgsWidgetWrapper( QgsVectorLayer *vl, QWidget *editor = nullptr, QWidget *parent = nullptr );

    /**
     * \brief Access the widget managed by this wrapper
     *
     * \returns The widget
     */
    QWidget *widget();

    /**
     * \brief Access the widget managed by this wrapper and cast it to a given type
     *
     * ### Example
     *
     * QPushButton* pb = wrapper->widget<QPushButton*>();
     *
     * \returns The widget as template type or NULLPTR, if it cannot be cast to this type.
     *
     * \note not available in Python bindings
     */
    template <class T> SIP_SKIP
    T *widget() { return dynamic_cast<T>( mWidget ); }

    /**
     * Will set the config of this wrapper to the specified config.
     *
     * \param config The config for this wrapper
     */
    void setConfig( const QVariantMap &config );

    /**
     * Set the context in which this widget is shown
     *
     * \param context context information
     */
    void setContext( const QgsAttributeEditorContext &context );

    /**
     * Use this inside your overridden classes to access the configuration.
     *
     * \param key         The configuration option you want to load
     * \param defaultVal  Default value
     *
     * \returns the value assigned to this configuration option
     */
    QVariant config( const QString &key, const QVariant &defaultVal = QVariant() ) const;

    /**
     * Returns the whole config
     */
    QVariantMap config() const;

    /**
     * Returns information about the context in which this widget is shown
     */
    const QgsAttributeEditorContext &context() const;

    /**
     * Returns the vector layer associated with the widget.
     */
    QgsVectorLayer *layer() const;

    /**
     * Will return a wrapper for a given widget
     * \param widget The widget which was created by a wrapper
     * \returns The wrapper for the widget or NULLPTR
     */
    static QgsWidgetWrapper *fromWidget( QWidget *widget );

    /**
     * Returns TRUE if the widget has been properly initialized.
     * This acts as hint for the calling party if this wrapper can be used
     * after initializing it.
     * If it cannot be used this is a hint to the caller that he may try to find
     * another suitable widget type instead.
     *
     * \returns Validity status of this widget.
     *
     * \since QGIS 2.12
     */
    virtual bool valid() const = 0;


    /**
     * Returns a reference to the editor widget's property collection, used for data defined overrides.
     * \see setDataDefinedProperties()
     *
     * \note not available in Python bindings
     * \since QGIS 3.0
     */
    QgsPropertyCollection &dataDefinedProperties() { return mPropertyCollection; } SIP_SKIP

    /**
     * Returns a reference to the editor widget's property collection, used for data defined overrides.
     * \see setDataDefinedProperties()
     * \see Property
     * \since QGIS 3.0
     */
    const QgsPropertyCollection &dataDefinedProperties() const { return mPropertyCollection; }

    /**
     * Sets the editor widget's property collection, used for data defined overrides.
     * \param collection property collection. Existing properties will be replaced.
     * \see dataDefinedProperties()
     * \see Property
     * \since QGIS 3.0
     */
    void setDataDefinedProperties( const QgsPropertyCollection &collection ) { mPropertyCollection = collection; }

    /**
     * Notify this widget, that the containing form is about to save and
     * that any pending changes should be pushed to the edit buffer or they
     * might be lost.
     *
     * \since QGIS 3.2
     */
    void notifyAboutToSave();

  signals:

    /**
     * Signal when QgsAttributeEditorContext mContext changed
     *
     * \since QGIS 3.4
     */
    void contextChanged();

  protected:

    /**
     * This method should create a new widget with the provided parent. This will only be called
     * if the form did not already provide a widget, so it is not guaranteed to be called!
     * You should not do initialization stuff, which also has to be done for custom editor
     * widgets inside this method. Things like filling comboboxes and assigning other data which
     * will also be used to make widgets on forms created in the QtDesigner usable should be assigned
     * in initWidget().
     *
     * \param parent You should set this parent on the created widget.
     * \returns A new widget
     */
    virtual QWidget *createWidget( QWidget *parent ) = 0;

    /**
     * This method should initialize the editor widget with runtime data. Fill your comboboxes here.
     *
     * \param editor The widget which will represent this attribute editor in a form.
     */
    virtual void initWidget( QWidget *editor );

    //! Data defined property collection
    QgsPropertyCollection mPropertyCollection;

  public slots:

    /**
     * Is called when the value of the widget needs to be changed. Updates the widget representation
     * to reflect the new value.
     *
     * \param feature The new feature
     */
    virtual void setFeature( const QgsFeature &feature ) = 0;

    /**
     * Is used to enable or disable the edit functionality of the managed widget.
     * By default this will not change the enabled state of the widget
     *
     * \param enabled  Enable or Disable?
     */
    virtual void setEnabled( bool enabled );

  private:

    /**
     * Called when the containing attribute form is about to save.
     * Use this to push any widget states to the edit buffer.
     *
     * \since QGIS 3.2
     */
    virtual void aboutToSave();

    QgsAttributeEditorContext mContext;
    QVariantMap mConfig;
    QWidget *mWidget = nullptr;
    QWidget *mParent = nullptr;
    QgsVectorLayer *mLayer = nullptr;
    bool mInitialized;
};

// We'll use this class inside a QVariant in the widgets properties
Q_DECLARE_METATYPE( QgsWidgetWrapper * )

#endif // QGSWIDGETWRAPPER_H
