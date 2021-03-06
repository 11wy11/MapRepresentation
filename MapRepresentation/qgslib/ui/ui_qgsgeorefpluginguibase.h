/********************************************************************************
** Form generated from reading UI file 'qgsgeorefpluginguibase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGEOREFPLUGINGUIBASE_H
#define UI_QGSGEOREFPLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qgsdockwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGeorefPluginGuiBase
{
public:
    QAction *mActionOpenRaster;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionZoomToLayer;
    QAction *mActionPan;
    QAction *mActionTransformSettings;
    QAction *mActionAddPoint;
    QAction *mActionDeletePoint;
    QAction *mActionQuit;
    QAction *mActionStartGeoref;
    QAction *mActionGDALScript;
    QAction *mActionLinkGeorefToQgis;
    QAction *mActionLinkQGisToGeoref;
    QAction *mActionSaveGCPpoints;
    QAction *mActionLoadGCPpoints;
    QAction *mActionGeorefConfig;
    QAction *mActionRasterProperties;
    QAction *mActionMoveGCPPoint;
    QAction *mActionZoomNext;
    QAction *mActionZoomLast;
    QAction *mActionLocalHistogramStretch;
    QAction *mActionFullHistogramStretch;
    QAction *mActionReset;
    QWidget *mCentralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuEdit;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QToolBar *toolBarFile;
    QToolBar *toolBarEdit;
    QToolBar *toolBarView;
    QgsDockWidget *dockWidgetGCPpoints;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QToolBar *toolBarHistogramStretch;

    void setupUi(QMainWindow *QgsGeorefPluginGuiBase)
    {
        if (QgsGeorefPluginGuiBase->objectName().isEmpty())
            QgsGeorefPluginGuiBase->setObjectName(QStringLiteral("QgsGeorefPluginGuiBase"));
        QgsGeorefPluginGuiBase->resize(872, 621);
        mActionOpenRaster = new QAction(QgsGeorefPluginGuiBase);
        mActionOpenRaster->setObjectName(QStringLiteral("mActionOpenRaster"));
        mActionZoomIn = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomIn->setObjectName(QStringLiteral("mActionZoomIn"));
        mActionZoomOut = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomOut->setObjectName(QStringLiteral("mActionZoomOut"));
        mActionZoomToLayer = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomToLayer->setObjectName(QStringLiteral("mActionZoomToLayer"));
        mActionPan = new QAction(QgsGeorefPluginGuiBase);
        mActionPan->setObjectName(QStringLiteral("mActionPan"));
        mActionTransformSettings = new QAction(QgsGeorefPluginGuiBase);
        mActionTransformSettings->setObjectName(QStringLiteral("mActionTransformSettings"));
        mActionAddPoint = new QAction(QgsGeorefPluginGuiBase);
        mActionAddPoint->setObjectName(QStringLiteral("mActionAddPoint"));
        mActionDeletePoint = new QAction(QgsGeorefPluginGuiBase);
        mActionDeletePoint->setObjectName(QStringLiteral("mActionDeletePoint"));
        mActionQuit = new QAction(QgsGeorefPluginGuiBase);
        mActionQuit->setObjectName(QStringLiteral("mActionQuit"));
        mActionStartGeoref = new QAction(QgsGeorefPluginGuiBase);
        mActionStartGeoref->setObjectName(QStringLiteral("mActionStartGeoref"));
        mActionGDALScript = new QAction(QgsGeorefPluginGuiBase);
        mActionGDALScript->setObjectName(QStringLiteral("mActionGDALScript"));
        mActionLinkGeorefToQgis = new QAction(QgsGeorefPluginGuiBase);
        mActionLinkGeorefToQgis->setObjectName(QStringLiteral("mActionLinkGeorefToQgis"));
        mActionLinkGeorefToQgis->setCheckable(true);
        mActionLinkQGisToGeoref = new QAction(QgsGeorefPluginGuiBase);
        mActionLinkQGisToGeoref->setObjectName(QStringLiteral("mActionLinkQGisToGeoref"));
        mActionLinkQGisToGeoref->setCheckable(true);
        mActionSaveGCPpoints = new QAction(QgsGeorefPluginGuiBase);
        mActionSaveGCPpoints->setObjectName(QStringLiteral("mActionSaveGCPpoints"));
        mActionLoadGCPpoints = new QAction(QgsGeorefPluginGuiBase);
        mActionLoadGCPpoints->setObjectName(QStringLiteral("mActionLoadGCPpoints"));
        mActionGeorefConfig = new QAction(QgsGeorefPluginGuiBase);
        mActionGeorefConfig->setObjectName(QStringLiteral("mActionGeorefConfig"));
        mActionRasterProperties = new QAction(QgsGeorefPluginGuiBase);
        mActionRasterProperties->setObjectName(QStringLiteral("mActionRasterProperties"));
        mActionMoveGCPPoint = new QAction(QgsGeorefPluginGuiBase);
        mActionMoveGCPPoint->setObjectName(QStringLiteral("mActionMoveGCPPoint"));
        mActionZoomNext = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomNext->setObjectName(QStringLiteral("mActionZoomNext"));
        mActionZoomLast = new QAction(QgsGeorefPluginGuiBase);
        mActionZoomLast->setObjectName(QStringLiteral("mActionZoomLast"));
        mActionLocalHistogramStretch = new QAction(QgsGeorefPluginGuiBase);
        mActionLocalHistogramStretch->setObjectName(QStringLiteral("mActionLocalHistogramStretch"));
        mActionFullHistogramStretch = new QAction(QgsGeorefPluginGuiBase);
        mActionFullHistogramStretch->setObjectName(QStringLiteral("mActionFullHistogramStretch"));
        mActionReset = new QAction(QgsGeorefPluginGuiBase);
        mActionReset->setObjectName(QStringLiteral("mActionReset"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconClearText.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionReset->setIcon(icon);
        mCentralwidget = new QWidget(QgsGeorefPluginGuiBase);
        mCentralwidget->setObjectName(QStringLiteral("mCentralwidget"));
        QgsGeorefPluginGuiBase->setCentralWidget(mCentralwidget);
        menubar = new QMenuBar(QgsGeorefPluginGuiBase);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 872, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        QgsGeorefPluginGuiBase->setMenuBar(menubar);
        statusbar = new QStatusBar(QgsGeorefPluginGuiBase);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QgsGeorefPluginGuiBase->setStatusBar(statusbar);
        toolBarFile = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarFile->setObjectName(QStringLiteral("toolBarFile"));
        toolBarFile->setIconSize(QSize(24, 24));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarFile);
        toolBarEdit = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarEdit->setObjectName(QStringLiteral("toolBarEdit"));
        toolBarEdit->setIconSize(QSize(24, 24));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarEdit);
        toolBarView = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarView->setObjectName(QStringLiteral("toolBarView"));
        toolBarView->setIconSize(QSize(24, 24));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarView);
        dockWidgetGCPpoints = new QgsDockWidget(QgsGeorefPluginGuiBase);
        dockWidgetGCPpoints->setObjectName(QStringLiteral("dockWidgetGCPpoints"));
        dockWidgetGCPpoints->setFeatures(QgsDockWidget::AllDockWidgetFeatures);
        dockWidgetGCPpoints->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dockWidgetGCPpoints->setWidget(dockWidgetContents);
        QgsGeorefPluginGuiBase->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidgetGCPpoints);
        toolBarHistogramStretch = new QToolBar(QgsGeorefPluginGuiBase);
        toolBarHistogramStretch->setObjectName(QStringLiteral("toolBarHistogramStretch"));
        QgsGeorefPluginGuiBase->addToolBar(Qt::TopToolBarArea, toolBarHistogramStretch);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuFile->addAction(mActionReset);
        menuFile->addAction(mActionOpenRaster);
        menuFile->addSeparator();
        menuFile->addAction(mActionStartGeoref);
        menuFile->addAction(mActionGDALScript);
        menuFile->addSeparator();
        menuFile->addAction(mActionLoadGCPpoints);
        menuFile->addAction(mActionSaveGCPpoints);
        menuFile->addSeparator();
        menuFile->addAction(mActionQuit);
        menuView->addAction(mActionPan);
        menuView->addAction(mActionZoomIn);
        menuView->addAction(mActionZoomOut);
        menuView->addAction(mActionZoomToLayer);
        menuView->addAction(mActionZoomLast);
        menuView->addAction(mActionZoomNext);
        menuView->addSeparator();
        menuView->addAction(mActionLinkGeorefToQgis);
        menuView->addAction(mActionLinkQGisToGeoref);
        menuEdit->addAction(mActionAddPoint);
        menuEdit->addAction(mActionDeletePoint);
        menuEdit->addAction(mActionMoveGCPPoint);
        menuSettings->addAction(mActionTransformSettings);
        menuSettings->addAction(mActionRasterProperties);
        menuSettings->addAction(mActionGeorefConfig);
        toolBarFile->addAction(mActionOpenRaster);
        toolBarFile->addSeparator();
        toolBarFile->addAction(mActionStartGeoref);
        toolBarFile->addAction(mActionGDALScript);
        toolBarFile->addSeparator();
        toolBarFile->addAction(mActionLoadGCPpoints);
        toolBarFile->addAction(mActionSaveGCPpoints);
        toolBarFile->addSeparator();
        toolBarFile->addAction(mActionTransformSettings);
        toolBarEdit->addAction(mActionAddPoint);
        toolBarEdit->addAction(mActionDeletePoint);
        toolBarEdit->addAction(mActionMoveGCPPoint);
        toolBarView->addAction(mActionPan);
        toolBarView->addAction(mActionZoomIn);
        toolBarView->addAction(mActionZoomOut);
        toolBarView->addAction(mActionZoomToLayer);
        toolBarView->addAction(mActionZoomLast);
        toolBarView->addAction(mActionZoomNext);
        toolBarView->addSeparator();
        toolBarView->addAction(mActionLinkGeorefToQgis);
        toolBarView->addAction(mActionLinkQGisToGeoref);
        toolBarHistogramStretch->addAction(mActionFullHistogramStretch);
        toolBarHistogramStretch->addAction(mActionLocalHistogramStretch);

        retranslateUi(QgsGeorefPluginGuiBase);

        QMetaObject::connectSlotsByName(QgsGeorefPluginGuiBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsGeorefPluginGuiBase)
    {
        QgsGeorefPluginGuiBase->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Georeferencer", nullptr));
        mActionOpenRaster->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Open Raster\342\200\246", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionOpenRaster->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Open raster", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionOpenRaster->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        mActionZoomIn->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom In", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionZoomIn->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom In", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomIn->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl++", nullptr));
#endif // QT_NO_SHORTCUT
        mActionZoomOut->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom Out", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionZoomOut->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom Out", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomOut->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        mActionZoomToLayer->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom to Layer", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionZoomToLayer->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom to Layer", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionZoomToLayer->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+Shift+F", nullptr));
#endif // QT_NO_SHORTCUT
        mActionPan->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Pan", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionPan->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Pan", nullptr));
#endif // QT_NO_STATUSTIP
        mActionTransformSettings->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Transformation Settings\342\200\246", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionTransformSettings->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Transformation settings", nullptr));
#endif // QT_NO_STATUSTIP
        mActionAddPoint->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Add Point", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionAddPoint->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Add point", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionAddPoint->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        mActionDeletePoint->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Delete Point", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionDeletePoint->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Delete point", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionDeletePoint->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        mActionQuit->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Close Georeferencer", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionQuit->setToolTip(QApplication::translate("QgsGeorefPluginGuiBase", "Close georeferencer", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionQuit->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Quit", nullptr));
#endif // QT_NO_STATUSTIP
        mActionStartGeoref->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Start Georeferencing", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionStartGeoref->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Start georeferencing", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionStartGeoref->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        mActionGDALScript->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Generate GDAL Script", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionGDALScript->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Generate GDAL script", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionGDALScript->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        mActionLinkGeorefToQgis->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Link Georeferencer to QGIS", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionLinkGeorefToQgis->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Link Georeferencer to QGIS", nullptr));
#endif // QT_NO_STATUSTIP
        mActionLinkQGisToGeoref->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Link QGIS to Georeferencer", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionLinkQGisToGeoref->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Link QGIS to Georeferencer", nullptr));
#endif // QT_NO_STATUSTIP
        mActionSaveGCPpoints->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Save GCP Points as\342\200\246", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionSaveGCPpoints->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Save GCP points as\342\200\246", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionSaveGCPpoints->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        mActionLoadGCPpoints->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Load GCP Points\342\200\246", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionLoadGCPpoints->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Load GCP points", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        mActionLoadGCPpoints->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        mActionGeorefConfig->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Configure Georeferencer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionGeorefConfig->setShortcut(QApplication::translate("QgsGeorefPluginGuiBase", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        mActionRasterProperties->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Raster Properties\342\200\246", nullptr));
        mActionMoveGCPPoint->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Move GCP Point", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionMoveGCPPoint->setStatusTip(QApplication::translate("QgsGeorefPluginGuiBase", "Move GCP point", nullptr));
#endif // QT_NO_STATUSTIP
        mActionZoomNext->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom Next", nullptr));
        mActionZoomLast->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Zoom Last", nullptr));
        mActionLocalHistogramStretch->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Local Histogram Stretch", nullptr));
        mActionFullHistogramStretch->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Full Histogram Stretch", nullptr));
        mActionReset->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Reset Georeferencer", nullptr));
        menuFile->setTitle(QApplication::translate("QgsGeorefPluginGuiBase", "File", nullptr));
        menuView->setTitle(QApplication::translate("QgsGeorefPluginGuiBase", "View", nullptr));
        menuEdit->setTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Edit", nullptr));
        menuSettings->setTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Settings", nullptr));
        toolBarFile->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "File", nullptr));
        toolBarEdit->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Edit", nullptr));
        toolBarView->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "View", nullptr));
        dockWidgetGCPpoints->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "GCP table", nullptr));
        toolBarHistogramStretch->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Histogram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefPluginGuiBase: public Ui_QgsGeorefPluginGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGEOREFPLUGINGUIBASE_H
