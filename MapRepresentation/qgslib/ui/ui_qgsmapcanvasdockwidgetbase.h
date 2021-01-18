/********************************************************************************
** Form generated from reading UI file 'qgsmapcanvasdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPCANVASDOCKWIDGETBASE_H
#define UI_QGSMAPCANVASDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapCanvasDockWidgetBase
{
public:
    QAction *mActionSetCrs;
    QAction *mActionRename;
    QAction *mActionZoomToSelected;
    QAction *mActionZoomToLayer;
    QAction *mActionZoomFullExtent;
    QAction *mActionShowAnnotations;
    QAction *mActionShowCursor;
    QAction *mActionShowExtent;
    QAction *mActionShowLabels;
    QWidget *mContents;
    QVBoxLayout *verticalLayout;
    QToolBar *mToolbar;
    QWidget *mMainWidget;

    void setupUi(QgsDockWidget *QgsMapCanvasDockWidgetBase)
    {
        if (QgsMapCanvasDockWidgetBase->objectName().isEmpty())
            QgsMapCanvasDockWidgetBase->setObjectName(QStringLiteral("QgsMapCanvasDockWidgetBase"));
        QgsMapCanvasDockWidgetBase->resize(216, 138);
        mActionSetCrs = new QAction(QgsMapCanvasDockWidgetBase);
        mActionSetCrs->setObjectName(QStringLiteral("mActionSetCrs"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSetCrs->setIcon(icon);
        mActionRename = new QAction(QgsMapCanvasDockWidgetBase);
        mActionRename->setObjectName(QStringLiteral("mActionRename"));
        mActionZoomToSelected = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomToSelected->setObjectName(QStringLiteral("mActionZoomToSelected"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToSelected->setIcon(icon1);
        mActionZoomToLayer = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomToLayer->setObjectName(QStringLiteral("mActionZoomToLayer"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionZoomToLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToLayer->setIcon(icon2);
        mActionZoomFullExtent = new QAction(QgsMapCanvasDockWidgetBase);
        mActionZoomFullExtent->setObjectName(QStringLiteral("mActionZoomFullExtent"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomFullExtent->setIcon(icon3);
        mActionShowAnnotations = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowAnnotations->setObjectName(QStringLiteral("mActionShowAnnotations"));
        mActionShowAnnotations->setCheckable(true);
        mActionShowCursor = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowCursor->setObjectName(QStringLiteral("mActionShowCursor"));
        mActionShowCursor->setCheckable(true);
        mActionShowExtent = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowExtent->setObjectName(QStringLiteral("mActionShowExtent"));
        mActionShowExtent->setCheckable(true);
        mActionShowLabels = new QAction(QgsMapCanvasDockWidgetBase);
        mActionShowLabels->setObjectName(QStringLiteral("mActionShowLabels"));
        mActionShowLabels->setCheckable(true);
        mContents = new QWidget();
        mContents->setObjectName(QStringLiteral("mContents"));
        verticalLayout = new QVBoxLayout(mContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mToolbar = new QToolBar(mContents);
        mToolbar->setObjectName(QStringLiteral("mToolbar"));
        mToolbar->setIconSize(QSize(16, 16));
        mToolbar->setFloatable(false);

        verticalLayout->addWidget(mToolbar);

        mMainWidget = new QWidget(mContents);
        mMainWidget->setObjectName(QStringLiteral("mMainWidget"));

        verticalLayout->addWidget(mMainWidget);

        QgsMapCanvasDockWidgetBase->setWidget(mContents);

        mToolbar->addAction(mActionZoomFullExtent);
        mToolbar->addAction(mActionZoomToSelected);
        mToolbar->addAction(mActionZoomToLayer);

        retranslateUi(QgsMapCanvasDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsMapCanvasDockWidgetBase);
    } // setupUi

    void retranslateUi(QgsDockWidget *QgsMapCanvasDockWidgetBase)
    {
        QgsMapCanvasDockWidgetBase->setWindowTitle(QApplication::translate("QgsMapCanvasDockWidgetBase", "Map Canvas", nullptr));
        mActionSetCrs->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Set Map CRS\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSetCrs->setToolTip(QApplication::translate("QgsMapCanvasDockWidgetBase", "Set Map CRS", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRename->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Rename View\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRename->setToolTip(QApplication::translate("QgsMapCanvasDockWidgetBase", "Rename View", nullptr));
#endif // QT_NO_TOOLTIP
        mActionZoomToSelected->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom to &Selection", nullptr));
        mActionZoomToLayer->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom to &Layer", nullptr));
        mActionZoomFullExtent->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Zoom &Full", nullptr));
        mActionShowAnnotations->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Show Annotations", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionShowAnnotations->setToolTip(QApplication::translate("QgsMapCanvasDockWidgetBase", "Show Annotations", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowCursor->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Show Cursor Position", nullptr));
        mActionShowExtent->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Show Main Canvas Extent", nullptr));
        mActionShowLabels->setText(QApplication::translate("QgsMapCanvasDockWidgetBase", "Show Labels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapCanvasDockWidgetBase: public Ui_QgsMapCanvasDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPCANVASDOCKWIDGETBASE_H
