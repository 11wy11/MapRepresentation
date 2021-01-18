/***************************************************************************
  qgshtmlwidgetwrapper.h

 ---------------------
 begin                : 23.03.2019
 copyright            : (C) 2019 by Alessandro Pasotti
 email                : elpaso at itopen dot it
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSHTMLWIDGETWRAPPER_H
#define QGSHTMLWIDGETWRAPPER_H

#include "qgswidgetwrapper.h"
#include "qgswebview.h"
#include "qgis_sip.h"
#include "qgis_gui.h"

/**
 * \ingroup gui
 * Wraps a QQuickWidget to display HTML code
 * \since QGIS 3.4
 */
class GUI_EXPORT QgsHtmlWidgetWrapper : public QgsWidgetWrapper
{
    Q_OBJECT

  public:

    /**
     * Create a html widget wrapper
     *
     * \param layer     The layer on which the feature is
     * \param editor    An editor widget. Can be NULLPTR if one should be autogenerated.
     * \param parent    A parent widget
     */
    QgsHtmlWidgetWrapper( QgsVectorLayer *layer, QWidget *editor, QWidget *parent );

    bool valid() const override;

    QWidget *createWidget( QWidget *parent ) override;

    void initWidget( QWidget *editor ) override;

    //! Clears the content and makes new initialization
    void reinitWidget();

    //! Sets the HTML code to \a htmlCode
    void setHtmlCode( const QString &htmlCode );

  public slots:
    void setFeature( const QgsFeature &feature ) override;

  private slots:
    //! sets the html context with the current values
    void setHtmlContext( );
#ifdef WITH_QTWEBKIT
    void fixHeight();
#endif

  private:
    QString mHtmlCode;
    QgsWebView *mWidget = nullptr;
    QgsFeature mFeature;
};


#ifndef SIP_RUN
///@cond PRIVATE

/**
 * \ingroup gui
 * To pass the QgsExpression functionality and it's context to the context of the QWebView
 * \since QGIS 3.8
 */
class HtmlExpression : public QObject
{
    Q_OBJECT

  public:
    //! set the \a context of the expression
    void setExpressionContext( const QgsExpressionContext &context );

  public:

    //! evaluates the value regarding the \a expression and the context
    Q_INVOKABLE QString evaluate( const QString &expression ) const;

  private:
    QgsExpressionContext mExpressionContext;
};
///@endcond
#endif //SIP_RUN

#endif // QGSHTMLWIDGETWRAPPER_H
