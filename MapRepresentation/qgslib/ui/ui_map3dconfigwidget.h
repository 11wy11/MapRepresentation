/********************************************************************************
** Form generated from reading UI file 'map3dconfigwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP3DCONFIGWIDGET_H
#define UI_MAP3DCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"
#include "qgslightswidget.h"
#include "qgsmaplayercombobox.h"
#include "qgsmessagebar.h"
#include "qgsphongmaterialwidget.h"
#include "qgsscrollarea.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_Map3DConfigWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QgsMessageBar *mMessageBar;
    QSplitter *m3DOptionsSplitter;
    QFrame *m3DOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *m3DOptionsListWidget;
    QFrame *m3DOptionGroupsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *m3DOptionsStackedWidget;
    QWidget *mPageTerrain;
    QVBoxLayout *verticalLayout_61;
    QgsScrollArea *scrollAreaTerrain;
    QWidget *scrollAreaTerrainWidgetContents;
    QVBoxLayout *verticalLayoutTerrain;
    QGroupBox *groupTerrain;
    QGridLayout *gridLayout1;
    QLabel *labelTerrainResolution;
    QgsDoubleSpinBox *spinTerrainSkirtHeight;
    QComboBox *cboTerrainType;
    QLabel *labelTerrainSkirtHeight;
    QgsMapLayerComboBox *cboTerrainLayer;
    QgsSpinBox *spinTerrainResolution;
    QLabel *labelTerrainLayer;
    QgsDoubleSpinBox *spinTerrainScale;
    QLabel *labelTerrainType;
    QLabel *labelTerrainScale;
    QgsDoubleSpinBox *terrainElevationOffsetSpinBox;
    QLabel *label_12;
    QFrame *groupMeshTerrainShading;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupTerrainShading;
    QVBoxLayout *verticalLayout_2;
    QgsPhongMaterialWidget *widgetTerrainMaterial;
    QSpacerItem *verticalSpacerTerrain;
    QWidget *mPageLight;
    QVBoxLayout *verticalLayout_64;
    QgsScrollArea *scrollAreaLight;
    QWidget *scrollAreaLightWidgetContents;
    QVBoxLayout *verticalLayoutLight;
    QGroupBox *groupLights;
    QVBoxLayout *verticalLayout_31;
    QgsLightsWidget *widgetLights;
    QSpacerItem *verticalSpacerLights;
    QWidget *mPageShadow;
    QVBoxLayout *verticalLayout_6;
    QgsScrollArea *scrollAreaShadow;
    QWidget *scrollAreaShadowWidgetContents;
    QVBoxLayout *verticalLayoutShadow;
    QGroupBox *groupShadowRendering;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacerShadow;
    QWidget *mPageCameraSkybox;
    QVBoxLayout *verticalLayout_62;
    QgsScrollArea *scrollAreaCameraSkybox;
    QWidget *scrollAreaCameraSkyboxWidgetContents;
    QVBoxLayout *verticalLayoutCameraSkybox;
    QGroupBox *cameraTerrain;
    QGridLayout *gridLayout;
    QLabel *labelCameraProjectionType;
    QComboBox *cboCameraProjectionType;
    QLabel *label_3;
    QgsSpinBox *spinCameraFieldOfView;
    QGroupBox *groupSkyboxSettings;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacerCameraSkybox;
    QWidget *mPageAdvanced;
    QVBoxLayout *verticalLayout_63;
    QgsScrollArea *scrollAreaAdvanced;
    QWidget *scrollAreaAdvancedWidgetContents;
    QVBoxLayout *verticalLayoutAdvanced;
    QGroupBox *groupAdvanced;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayoutAdvanced;
    QCheckBox *chkShowLabels;
    QCheckBox *chkShowBoundingBoxes;
    QCheckBox *chkShowCameraViewCenter;
    QgsDoubleSpinBox *spinScreenError;
    QgsSpinBox *spinMapResolution;
    QgsDoubleSpinBox *spinGroundError;
    QLabel *labelZoomLevels;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_6;
    QCheckBox *chkShowTileInfo;
    QCheckBox *chkShowLightSourceOrigins;
    QGroupBox *mDebugShadowMapGroupBox;
    QGridLayout *gridLayout_10;
    QComboBox *mDebugShadowMapCornerComboBox;
    QLabel *label_8;
    QLabel *label_10;
    QgsDoubleSpinBox *mDebugShadowMapSizeSpinBox;
    QGroupBox *mDebugDepthMapGroupBox;
    QGridLayout *gridLayout_9;
    QComboBox *mDebugDepthMapCornerComboBox;
    QLabel *label_11;
    QLabel *label_9;
    QgsDoubleSpinBox *mDebugDepthMapSizeSpinBox;
    QGroupBox *edlGroupBox;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *edlStrengthSpinBox;
    QLabel *label;
    QLabel *label_2;
    QgsSpinBox *edlDistanceSpinBox;
    QSpacerItem *verticalSpacerAdvanced;

    void setupUi(QWidget *Map3DConfigWidget)
    {
        if (Map3DConfigWidget->objectName().isEmpty())
            Map3DConfigWidget->setObjectName(QStringLiteral("Map3DConfigWidget"));
        Map3DConfigWidget->resize(775, 620);
        verticalLayout_4 = new QVBoxLayout(Map3DConfigWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mMessageBar = new QgsMessageBar(Map3DConfigWidget);
        mMessageBar->setObjectName(QStringLiteral("mMessageBar"));

        verticalLayout_4->addWidget(mMessageBar);

        m3DOptionsSplitter = new QSplitter(Map3DConfigWidget);
        m3DOptionsSplitter->setObjectName(QStringLiteral("m3DOptionsSplitter"));
        m3DOptionsSplitter->setOrientation(Qt::Horizontal);
        m3DOptionsSplitter->setChildrenCollapsible(false);
        m3DOptionsListFrame = new QFrame(m3DOptionsSplitter);
        m3DOptionsListFrame->setObjectName(QStringLiteral("m3DOptionsListFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m3DOptionsListFrame->sizePolicy().hasHeightForWidth());
        m3DOptionsListFrame->setSizePolicy(sizePolicy);
        m3DOptionsListFrame->setMinimumSize(QSize(32, 0));
        m3DOptionsListFrame->setFrameShape(QFrame::NoFrame);
        m3DOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(m3DOptionsListFrame);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        m3DOptionsListWidget = new QListWidget(m3DOptionsListFrame);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mLayoutItem3DMap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionHighlightFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mIconShadow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mIconCamera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/propertyicons/system.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(m3DOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        m3DOptionsListWidget->setObjectName(QStringLiteral("m3DOptionsListWidget"));
        m3DOptionsListWidget->setMinimumSize(QSize(32, 0));
        m3DOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        m3DOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(m3DOptionsListWidget);

        m3DOptionsSplitter->addWidget(m3DOptionsListFrame);
        m3DOptionGroupsFrame = new QFrame(m3DOptionsSplitter);
        m3DOptionGroupsFrame->setObjectName(QStringLiteral("m3DOptionGroupsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m3DOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        m3DOptionGroupsFrame->setSizePolicy(sizePolicy1);
        m3DOptionGroupsFrame->setFrameShape(QFrame::NoFrame);
        m3DOptionGroupsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(m3DOptionGroupsFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        m3DOptionsStackedWidget = new QStackedWidget(m3DOptionGroupsFrame);
        m3DOptionsStackedWidget->setObjectName(QStringLiteral("m3DOptionsStackedWidget"));
        mPageTerrain = new QWidget();
        mPageTerrain->setObjectName(QStringLiteral("mPageTerrain"));
        verticalLayout_61 = new QVBoxLayout(mPageTerrain);
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        verticalLayout_61->setContentsMargins(-1, 0, 0, 0);
        scrollAreaTerrain = new QgsScrollArea(mPageTerrain);
        scrollAreaTerrain->setObjectName(QStringLiteral("scrollAreaTerrain"));
        scrollAreaTerrain->setFrameShape(QFrame::NoFrame);
        scrollAreaTerrain->setWidgetResizable(true);
        scrollAreaTerrainWidgetContents = new QWidget();
        scrollAreaTerrainWidgetContents->setObjectName(QStringLiteral("scrollAreaTerrainWidgetContents"));
        scrollAreaTerrainWidgetContents->setGeometry(QRect(0, 0, 707, 604));
        verticalLayoutTerrain = new QVBoxLayout(scrollAreaTerrainWidgetContents);
        verticalLayoutTerrain->setObjectName(QStringLiteral("verticalLayoutTerrain"));
        verticalLayoutTerrain->setContentsMargins(0, 0, 0, 0);
        groupTerrain = new QGroupBox(scrollAreaTerrainWidgetContents);
        groupTerrain->setObjectName(QStringLiteral("groupTerrain"));
        gridLayout1 = new QGridLayout(groupTerrain);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        labelTerrainResolution = new QLabel(groupTerrain);
        labelTerrainResolution->setObjectName(QStringLiteral("labelTerrainResolution"));

        gridLayout1->addWidget(labelTerrainResolution, 3, 0, 1, 1);

        spinTerrainSkirtHeight = new QgsDoubleSpinBox(groupTerrain);
        spinTerrainSkirtHeight->setObjectName(QStringLiteral("spinTerrainSkirtHeight"));
        spinTerrainSkirtHeight->setDecimals(1);
        spinTerrainSkirtHeight->setMaximum(10000);
        spinTerrainSkirtHeight->setSingleStep(10);

        gridLayout1->addWidget(spinTerrainSkirtHeight, 4, 1, 1, 2);

        cboTerrainType = new QComboBox(groupTerrain);
        cboTerrainType->setObjectName(QStringLiteral("cboTerrainType"));

        gridLayout1->addWidget(cboTerrainType, 0, 1, 1, 2);

        labelTerrainSkirtHeight = new QLabel(groupTerrain);
        labelTerrainSkirtHeight->setObjectName(QStringLiteral("labelTerrainSkirtHeight"));

        gridLayout1->addWidget(labelTerrainSkirtHeight, 4, 0, 1, 1);

        cboTerrainLayer = new QgsMapLayerComboBox(groupTerrain);
        cboTerrainLayer->setObjectName(QStringLiteral("cboTerrainLayer"));

        gridLayout1->addWidget(cboTerrainLayer, 1, 1, 1, 2);

        spinTerrainResolution = new QgsSpinBox(groupTerrain);
        spinTerrainResolution->setObjectName(QStringLiteral("spinTerrainResolution"));
        spinTerrainResolution->setMaximum(4096);

        gridLayout1->addWidget(spinTerrainResolution, 3, 1, 1, 2);

        labelTerrainLayer = new QLabel(groupTerrain);
        labelTerrainLayer->setObjectName(QStringLiteral("labelTerrainLayer"));

        gridLayout1->addWidget(labelTerrainLayer, 1, 0, 1, 1);

        spinTerrainScale = new QgsDoubleSpinBox(groupTerrain);
        spinTerrainScale->setObjectName(QStringLiteral("spinTerrainScale"));
        spinTerrainScale->setValue(1);

        gridLayout1->addWidget(spinTerrainScale, 2, 1, 1, 2);

        labelTerrainType = new QLabel(groupTerrain);
        labelTerrainType->setObjectName(QStringLiteral("labelTerrainType"));

        gridLayout1->addWidget(labelTerrainType, 0, 0, 1, 1);

        labelTerrainScale = new QLabel(groupTerrain);
        labelTerrainScale->setObjectName(QStringLiteral("labelTerrainScale"));

        gridLayout1->addWidget(labelTerrainScale, 2, 0, 1, 1);

        terrainElevationOffsetSpinBox = new QgsDoubleSpinBox(groupTerrain);
        terrainElevationOffsetSpinBox->setObjectName(QStringLiteral("terrainElevationOffsetSpinBox"));
        terrainElevationOffsetSpinBox->setMinimum(-1000);
        terrainElevationOffsetSpinBox->setMaximum(1000);

        gridLayout1->addWidget(terrainElevationOffsetSpinBox, 5, 1, 1, 2);

        label_12 = new QLabel(groupTerrain);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout1->addWidget(label_12, 5, 0, 1, 1);


        verticalLayoutTerrain->addWidget(groupTerrain);

        groupMeshTerrainShading = new QFrame(scrollAreaTerrainWidgetContents);
        groupMeshTerrainShading->setObjectName(QStringLiteral("groupMeshTerrainShading"));
        verticalLayout = new QVBoxLayout(groupMeshTerrainShading);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayoutTerrain->addWidget(groupMeshTerrainShading);

        groupTerrainShading = new QGroupBox(scrollAreaTerrainWidgetContents);
        groupTerrainShading->setObjectName(QStringLiteral("groupTerrainShading"));
        groupTerrainShading->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(groupTerrainShading);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetTerrainMaterial = new QgsPhongMaterialWidget(groupTerrainShading);
        widgetTerrainMaterial->setObjectName(QStringLiteral("widgetTerrainMaterial"));

        verticalLayout_2->addWidget(widgetTerrainMaterial);


        verticalLayoutTerrain->addWidget(groupTerrainShading);

        verticalSpacerTerrain = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutTerrain->addItem(verticalSpacerTerrain);

        scrollAreaTerrain->setWidget(scrollAreaTerrainWidgetContents);

        verticalLayout_61->addWidget(scrollAreaTerrain);

        m3DOptionsStackedWidget->addWidget(mPageTerrain);
        mPageLight = new QWidget();
        mPageLight->setObjectName(QStringLiteral("mPageLight"));
        verticalLayout_64 = new QVBoxLayout(mPageLight);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(-1, 0, 0, 0);
        scrollAreaLight = new QgsScrollArea(mPageLight);
        scrollAreaLight->setObjectName(QStringLiteral("scrollAreaLight"));
        scrollAreaLight->setFrameShape(QFrame::NoFrame);
        scrollAreaLight->setWidgetResizable(true);
        scrollAreaLightWidgetContents = new QWidget();
        scrollAreaLightWidgetContents->setObjectName(QStringLiteral("scrollAreaLightWidgetContents"));
        scrollAreaLightWidgetContents->setGeometry(QRect(0, 0, 707, 604));
        verticalLayoutLight = new QVBoxLayout(scrollAreaLightWidgetContents);
        verticalLayoutLight->setObjectName(QStringLiteral("verticalLayoutLight"));
        verticalLayoutLight->setContentsMargins(0, 0, 0, 0);
        groupLights = new QGroupBox(scrollAreaLightWidgetContents);
        groupLights->setObjectName(QStringLiteral("groupLights"));
        verticalLayout_31 = new QVBoxLayout(groupLights);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        widgetLights = new QgsLightsWidget(groupLights);
        widgetLights->setObjectName(QStringLiteral("widgetLights"));

        verticalLayout_31->addWidget(widgetLights);


        verticalLayoutLight->addWidget(groupLights);

        verticalSpacerLights = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutLight->addItem(verticalSpacerLights);

        scrollAreaLight->setWidget(scrollAreaLightWidgetContents);

        verticalLayout_64->addWidget(scrollAreaLight);

        m3DOptionsStackedWidget->addWidget(mPageLight);
        mPageShadow = new QWidget();
        mPageShadow->setObjectName(QStringLiteral("mPageShadow"));
        verticalLayout_6 = new QVBoxLayout(mPageShadow);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, 0, 0);
        scrollAreaShadow = new QgsScrollArea(mPageShadow);
        scrollAreaShadow->setObjectName(QStringLiteral("scrollAreaShadow"));
        scrollAreaShadow->setFrameShape(QFrame::NoFrame);
        scrollAreaShadow->setWidgetResizable(true);
        scrollAreaShadowWidgetContents = new QWidget();
        scrollAreaShadowWidgetContents->setObjectName(QStringLiteral("scrollAreaShadowWidgetContents"));
        scrollAreaShadowWidgetContents->setGeometry(QRect(0, 0, 707, 604));
        verticalLayoutShadow = new QVBoxLayout(scrollAreaShadowWidgetContents);
        verticalLayoutShadow->setObjectName(QStringLiteral("verticalLayoutShadow"));
        verticalLayoutShadow->setContentsMargins(0, 0, 0, 0);
        groupShadowRendering = new QGroupBox(scrollAreaShadowWidgetContents);
        groupShadowRendering->setObjectName(QStringLiteral("groupShadowRendering"));
        groupShadowRendering->setCheckable(true);
        groupShadowRendering->setChecked(false);
        gridLayout_6 = new QGridLayout(groupShadowRendering);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));

        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        verticalLayoutShadow->addWidget(groupShadowRendering);

        verticalSpacerShadow = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutShadow->addItem(verticalSpacerShadow);

        scrollAreaShadow->setWidget(scrollAreaShadowWidgetContents);

        verticalLayout_6->addWidget(scrollAreaShadow);

        m3DOptionsStackedWidget->addWidget(mPageShadow);
        mPageCameraSkybox = new QWidget();
        mPageCameraSkybox->setObjectName(QStringLiteral("mPageCameraSkybox"));
        verticalLayout_62 = new QVBoxLayout(mPageCameraSkybox);
        verticalLayout_62->setObjectName(QStringLiteral("verticalLayout_62"));
        verticalLayout_62->setContentsMargins(-1, 0, 0, 0);
        scrollAreaCameraSkybox = new QgsScrollArea(mPageCameraSkybox);
        scrollAreaCameraSkybox->setObjectName(QStringLiteral("scrollAreaCameraSkybox"));
        scrollAreaCameraSkybox->setFrameShape(QFrame::NoFrame);
        scrollAreaCameraSkybox->setWidgetResizable(true);
        scrollAreaCameraSkyboxWidgetContents = new QWidget();
        scrollAreaCameraSkyboxWidgetContents->setObjectName(QStringLiteral("scrollAreaCameraSkyboxWidgetContents"));
        scrollAreaCameraSkyboxWidgetContents->setGeometry(QRect(0, 0, 707, 604));
        verticalLayoutCameraSkybox = new QVBoxLayout(scrollAreaCameraSkyboxWidgetContents);
        verticalLayoutCameraSkybox->setObjectName(QStringLiteral("verticalLayoutCameraSkybox"));
        verticalLayoutCameraSkybox->setContentsMargins(0, 0, 0, 0);
        cameraTerrain = new QGroupBox(scrollAreaCameraSkyboxWidgetContents);
        cameraTerrain->setObjectName(QStringLiteral("cameraTerrain"));
        gridLayout = new QGridLayout(cameraTerrain);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCameraProjectionType = new QLabel(cameraTerrain);
        labelCameraProjectionType->setObjectName(QStringLiteral("labelCameraProjectionType"));

        gridLayout->addWidget(labelCameraProjectionType, 1, 0, 1, 1);

        cboCameraProjectionType = new QComboBox(cameraTerrain);
        cboCameraProjectionType->setObjectName(QStringLiteral("cboCameraProjectionType"));

        gridLayout->addWidget(cboCameraProjectionType, 1, 1, 1, 2);

        label_3 = new QLabel(cameraTerrain);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinCameraFieldOfView = new QgsSpinBox(cameraTerrain);
        spinCameraFieldOfView->setObjectName(QStringLiteral("spinCameraFieldOfView"));
        spinCameraFieldOfView->setMaximum(180);

        gridLayout->addWidget(spinCameraFieldOfView, 2, 1, 1, 2);


        verticalLayoutCameraSkybox->addWidget(cameraTerrain);

        groupSkyboxSettings = new QGroupBox(scrollAreaCameraSkyboxWidgetContents);
        groupSkyboxSettings->setObjectName(QStringLiteral("groupSkyboxSettings"));
        groupSkyboxSettings->setCheckable(true);
        groupSkyboxSettings->setChecked(false);
        gridLayout_3 = new QGridLayout(groupSkyboxSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        verticalLayoutCameraSkybox->addWidget(groupSkyboxSettings);

        verticalSpacerCameraSkybox = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCameraSkybox->addItem(verticalSpacerCameraSkybox);

        scrollAreaCameraSkybox->setWidget(scrollAreaCameraSkyboxWidgetContents);

        verticalLayout_62->addWidget(scrollAreaCameraSkybox);

        m3DOptionsStackedWidget->addWidget(mPageCameraSkybox);
        mPageAdvanced = new QWidget();
        mPageAdvanced->setObjectName(QStringLiteral("mPageAdvanced"));
        verticalLayout_63 = new QVBoxLayout(mPageAdvanced);
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(-1, 0, 0, 0);
        scrollAreaAdvanced = new QgsScrollArea(mPageAdvanced);
        scrollAreaAdvanced->setObjectName(QStringLiteral("scrollAreaAdvanced"));
        scrollAreaAdvanced->setFrameShape(QFrame::NoFrame);
        scrollAreaAdvanced->setWidgetResizable(true);
        scrollAreaAdvancedWidgetContents = new QWidget();
        scrollAreaAdvancedWidgetContents->setObjectName(QStringLiteral("scrollAreaAdvancedWidgetContents"));
        scrollAreaAdvancedWidgetContents->setGeometry(QRect(0, -66, 693, 670));
        verticalLayoutAdvanced = new QVBoxLayout(scrollAreaAdvancedWidgetContents);
        verticalLayoutAdvanced->setObjectName(QStringLiteral("verticalLayoutAdvanced"));
        verticalLayoutAdvanced->setContentsMargins(0, 0, 0, 0);
        groupAdvanced = new QGroupBox(scrollAreaAdvancedWidgetContents);
        groupAdvanced->setObjectName(QStringLiteral("groupAdvanced"));
        gridLayout_11 = new QGridLayout(groupAdvanced);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayoutAdvanced = new QGridLayout();
        gridLayoutAdvanced->setObjectName(QStringLiteral("gridLayoutAdvanced"));
        chkShowLabels = new QCheckBox(groupAdvanced);
        chkShowLabels->setObjectName(QStringLiteral("chkShowLabels"));

        gridLayoutAdvanced->addWidget(chkShowLabels, 4, 0, 1, 2);

        chkShowBoundingBoxes = new QCheckBox(groupAdvanced);
        chkShowBoundingBoxes->setObjectName(QStringLiteral("chkShowBoundingBoxes"));

        gridLayoutAdvanced->addWidget(chkShowBoundingBoxes, 6, 0, 1, 2);

        chkShowCameraViewCenter = new QCheckBox(groupAdvanced);
        chkShowCameraViewCenter->setObjectName(QStringLiteral("chkShowCameraViewCenter"));

        gridLayoutAdvanced->addWidget(chkShowCameraViewCenter, 7, 0, 1, 2);

        spinScreenError = new QgsDoubleSpinBox(groupAdvanced);
        spinScreenError->setObjectName(QStringLiteral("spinScreenError"));
        spinScreenError->setDecimals(1);

        gridLayoutAdvanced->addWidget(spinScreenError, 1, 1, 1, 1);

        spinMapResolution = new QgsSpinBox(groupAdvanced);
        spinMapResolution->setObjectName(QStringLiteral("spinMapResolution"));
        spinMapResolution->setMaximum(4096);

        gridLayoutAdvanced->addWidget(spinMapResolution, 0, 1, 1, 1);

        spinGroundError = new QgsDoubleSpinBox(groupAdvanced);
        spinGroundError->setObjectName(QStringLiteral("spinGroundError"));
        spinGroundError->setDecimals(1);
        spinGroundError->setMinimum(0.1);
        spinGroundError->setMaximum(1000);
        spinGroundError->setValue(1);

        gridLayoutAdvanced->addWidget(spinGroundError, 2, 1, 1, 1);

        labelZoomLevels = new QLabel(groupAdvanced);
        labelZoomLevels->setObjectName(QStringLiteral("labelZoomLevels"));

        gridLayoutAdvanced->addWidget(labelZoomLevels, 3, 1, 1, 1);

        label_5 = new QLabel(groupAdvanced);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayoutAdvanced->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(groupAdvanced);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayoutAdvanced->addWidget(label_4, 0, 0, 1, 1);

        label_7 = new QLabel(groupAdvanced);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayoutAdvanced->addWidget(label_7, 3, 0, 1, 1);

        label_6 = new QLabel(groupAdvanced);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayoutAdvanced->addWidget(label_6, 2, 0, 1, 1);

        chkShowTileInfo = new QCheckBox(groupAdvanced);
        chkShowTileInfo->setObjectName(QStringLiteral("chkShowTileInfo"));

        gridLayoutAdvanced->addWidget(chkShowTileInfo, 5, 0, 1, 2);

        chkShowLightSourceOrigins = new QCheckBox(groupAdvanced);
        chkShowLightSourceOrigins->setObjectName(QStringLiteral("chkShowLightSourceOrigins"));

        gridLayoutAdvanced->addWidget(chkShowLightSourceOrigins, 8, 0, 1, 2);


        gridLayout_11->addLayout(gridLayoutAdvanced, 0, 0, 1, 1);

        mDebugShadowMapGroupBox = new QGroupBox(groupAdvanced);
        mDebugShadowMapGroupBox->setObjectName(QStringLiteral("mDebugShadowMapGroupBox"));
        mDebugShadowMapGroupBox->setCheckable(true);
        mDebugShadowMapGroupBox->setChecked(false);
        gridLayout_10 = new QGridLayout(mDebugShadowMapGroupBox);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        mDebugShadowMapCornerComboBox = new QComboBox(mDebugShadowMapGroupBox);
        mDebugShadowMapCornerComboBox->setObjectName(QStringLiteral("mDebugShadowMapCornerComboBox"));

        gridLayout_10->addWidget(mDebugShadowMapCornerComboBox, 0, 1, 1, 1);

        label_8 = new QLabel(mDebugShadowMapGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        label_10 = new QLabel(mDebugShadowMapGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_10->addWidget(label_10, 1, 0, 1, 1);

        mDebugShadowMapSizeSpinBox = new QgsDoubleSpinBox(mDebugShadowMapGroupBox);
        mDebugShadowMapSizeSpinBox->setObjectName(QStringLiteral("mDebugShadowMapSizeSpinBox"));
        mDebugShadowMapSizeSpinBox->setMaximum(1);
        mDebugShadowMapSizeSpinBox->setSingleStep(0.1);
        mDebugShadowMapSizeSpinBox->setValue(0.1);

        gridLayout_10->addWidget(mDebugShadowMapSizeSpinBox, 1, 1, 1, 1);


        gridLayout_11->addWidget(mDebugShadowMapGroupBox, 2, 0, 1, 1);

        mDebugDepthMapGroupBox = new QGroupBox(groupAdvanced);
        mDebugDepthMapGroupBox->setObjectName(QStringLiteral("mDebugDepthMapGroupBox"));
        mDebugDepthMapGroupBox->setCheckable(true);
        mDebugDepthMapGroupBox->setChecked(false);
        gridLayout_9 = new QGridLayout(mDebugDepthMapGroupBox);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        mDebugDepthMapCornerComboBox = new QComboBox(mDebugDepthMapGroupBox);
        mDebugDepthMapCornerComboBox->setObjectName(QStringLiteral("mDebugDepthMapCornerComboBox"));

        gridLayout_9->addWidget(mDebugDepthMapCornerComboBox, 0, 1, 1, 1);

        label_11 = new QLabel(mDebugDepthMapGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_9->addWidget(label_11, 1, 0, 1, 1);

        label_9 = new QLabel(mDebugDepthMapGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_9->addWidget(label_9, 0, 0, 1, 1);

        mDebugDepthMapSizeSpinBox = new QgsDoubleSpinBox(mDebugDepthMapGroupBox);
        mDebugDepthMapSizeSpinBox->setObjectName(QStringLiteral("mDebugDepthMapSizeSpinBox"));
        mDebugDepthMapSizeSpinBox->setMaximum(1);
        mDebugDepthMapSizeSpinBox->setSingleStep(0.1);
        mDebugDepthMapSizeSpinBox->setValue(0.1);

        gridLayout_9->addWidget(mDebugDepthMapSizeSpinBox, 1, 1, 1, 1);


        gridLayout_11->addWidget(mDebugDepthMapGroupBox, 3, 0, 1, 1);

        edlGroupBox = new QGroupBox(groupAdvanced);
        edlGroupBox->setObjectName(QStringLiteral("edlGroupBox"));
        edlGroupBox->setCheckable(true);
        edlGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(edlGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        edlStrengthSpinBox = new QgsDoubleSpinBox(edlGroupBox);
        edlStrengthSpinBox->setObjectName(QStringLiteral("edlStrengthSpinBox"));
        edlStrengthSpinBox->setMaximum(10000);
        edlStrengthSpinBox->setSingleStep(100);
        edlStrengthSpinBox->setValue(1000);

        gridLayout_2->addWidget(edlStrengthSpinBox, 0, 1, 1, 1);

        label = new QLabel(edlGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(edlGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        edlDistanceSpinBox = new QgsSpinBox(edlGroupBox);
        edlDistanceSpinBox->setObjectName(QStringLiteral("edlDistanceSpinBox"));
        edlDistanceSpinBox->setMinimum(1);
        edlDistanceSpinBox->setMaximum(20);

        gridLayout_2->addWidget(edlDistanceSpinBox, 1, 1, 1, 1);


        gridLayout_11->addWidget(edlGroupBox, 1, 0, 1, 1);

        verticalSpacerAdvanced = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacerAdvanced, 4, 0, 1, 1);


        verticalLayoutAdvanced->addWidget(groupAdvanced);

        scrollAreaAdvanced->setWidget(scrollAreaAdvancedWidgetContents);

        verticalLayout_63->addWidget(scrollAreaAdvanced);

        m3DOptionsStackedWidget->addWidget(mPageAdvanced);

        verticalLayout_3->addWidget(m3DOptionsStackedWidget);

        m3DOptionsSplitter->addWidget(m3DOptionGroupsFrame);

        verticalLayout_4->addWidget(m3DOptionsSplitter);

        verticalLayout_4->setStretch(1, 1);
        QWidget::setTabOrder(spinCameraFieldOfView, cboTerrainType);
        QWidget::setTabOrder(cboTerrainType, cboTerrainLayer);
        QWidget::setTabOrder(cboTerrainLayer, spinTerrainScale);
        QWidget::setTabOrder(spinTerrainScale, spinTerrainResolution);
        QWidget::setTabOrder(spinTerrainResolution, spinTerrainSkirtHeight);
        QWidget::setTabOrder(spinTerrainSkirtHeight, groupTerrainShading);
        QWidget::setTabOrder(groupTerrainShading, groupSkyboxSettings);
        QWidget::setTabOrder(groupSkyboxSettings, spinMapResolution);
        QWidget::setTabOrder(spinMapResolution, spinScreenError);
        QWidget::setTabOrder(spinScreenError, spinGroundError);
        QWidget::setTabOrder(spinGroundError, chkShowLabels);
        QWidget::setTabOrder(chkShowLabels, chkShowTileInfo);
        QWidget::setTabOrder(chkShowTileInfo, chkShowBoundingBoxes);
        QWidget::setTabOrder(chkShowBoundingBoxes, chkShowCameraViewCenter);
        QWidget::setTabOrder(chkShowCameraViewCenter, chkShowLightSourceOrigins);

        retranslateUi(Map3DConfigWidget);

        m3DOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Map3DConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *Map3DConfigWidget)
    {
        Map3DConfigWidget->setWindowTitle(QApplication::translate("Map3DConfigWidget", "Configure 3D Map Rendering", nullptr));

        const bool __sortingEnabled = m3DOptionsListWidget->isSortingEnabled();
        m3DOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = m3DOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Map3DConfigWidget", "Terrain", nullptr));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("Map3DConfigWidget", "Terrain settings", nullptr));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = m3DOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Map3DConfigWidget", "Lights", nullptr));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("Map3DConfigWidget", "Lights settings", nullptr));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = m3DOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Map3DConfigWidget", "Shadow", nullptr));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("Map3DConfigWidget", "Shadow settings", nullptr));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = m3DOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Map3DConfigWidget", "Camera & Skybox", nullptr));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("Map3DConfigWidget", "Camera and skybox settings", nullptr));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = m3DOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Map3DConfigWidget", "Advanced", nullptr));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("Map3DConfigWidget", "Advanced settings", nullptr));
#endif // QT_NO_TOOLTIP
        m3DOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupTerrain->setTitle(QApplication::translate("Map3DConfigWidget", "Terrain", nullptr));
        labelTerrainResolution->setText(QApplication::translate("Map3DConfigWidget", "Tile resolution", nullptr));
        spinTerrainSkirtHeight->setSuffix(QApplication::translate("Map3DConfigWidget", " map units", nullptr));
        labelTerrainSkirtHeight->setText(QApplication::translate("Map3DConfigWidget", "Skirt height", nullptr));
        spinTerrainResolution->setSuffix(QApplication::translate("Map3DConfigWidget", " px", nullptr));
        labelTerrainLayer->setText(QApplication::translate("Map3DConfigWidget", "Elevation", nullptr));
        labelTerrainType->setText(QApplication::translate("Map3DConfigWidget", "Type", nullptr));
        labelTerrainScale->setText(QApplication::translate("Map3DConfigWidget", "Vertical scale", nullptr));
        label_12->setText(QApplication::translate("Map3DConfigWidget", "Terrain elevation offset", nullptr));
        groupTerrainShading->setTitle(QApplication::translate("Map3DConfigWidget", "Terrain Shading", nullptr));
        groupLights->setTitle(QApplication::translate("Map3DConfigWidget", "Lights", nullptr));
        groupShadowRendering->setTitle(QApplication::translate("Map3DConfigWidget", "Show Shadows", nullptr));
        cameraTerrain->setTitle(QApplication::translate("Map3DConfigWidget", "Camera", nullptr));
        labelCameraProjectionType->setText(QApplication::translate("Map3DConfigWidget", "Projection type", nullptr));
        label_3->setText(QApplication::translate("Map3DConfigWidget", "Field of View", nullptr));
        spinCameraFieldOfView->setSuffix(QApplication::translate("Map3DConfigWidget", "\302\260", nullptr));
        groupSkyboxSettings->setTitle(QApplication::translate("Map3DConfigWidget", "Show Skybox", nullptr));
        groupAdvanced->setTitle(QApplication::translate("Map3DConfigWidget", "Advanced Settings", nullptr));
        chkShowLabels->setText(QApplication::translate("Map3DConfigWidget", "Show labels", nullptr));
        chkShowBoundingBoxes->setText(QApplication::translate("Map3DConfigWidget", "Show bounding boxes", nullptr));
        chkShowCameraViewCenter->setText(QApplication::translate("Map3DConfigWidget", "Show camera's view center", nullptr));
        spinScreenError->setSuffix(QApplication::translate("Map3DConfigWidget", " px", nullptr));
        spinMapResolution->setSuffix(QApplication::translate("Map3DConfigWidget", " px", nullptr));
        spinGroundError->setSuffix(QApplication::translate("Map3DConfigWidget", " map units", nullptr));
        labelZoomLevels->setText(QApplication::translate("Map3DConfigWidget", "0", nullptr));
        label_5->setText(QApplication::translate("Map3DConfigWidget", "Max. screen error", nullptr));
        label_4->setText(QApplication::translate("Map3DConfigWidget", "Map tile resolution", nullptr));
        label_7->setText(QApplication::translate("Map3DConfigWidget", "Zoom levels", nullptr));
        label_6->setText(QApplication::translate("Map3DConfigWidget", "Max. ground error", nullptr));
        chkShowTileInfo->setText(QApplication::translate("Map3DConfigWidget", "Show map tile info", nullptr));
        chkShowLightSourceOrigins->setText(QApplication::translate("Map3DConfigWidget", "Show light sources", nullptr));
        mDebugShadowMapGroupBox->setTitle(QApplication::translate("Map3DConfigWidget", "Debug Shadow Map", nullptr));
        label_8->setText(QApplication::translate("Map3DConfigWidget", "Corner:", nullptr));
        label_10->setText(QApplication::translate("Map3DConfigWidget", "Size", nullptr));
        mDebugDepthMapGroupBox->setTitle(QApplication::translate("Map3DConfigWidget", "Debug Depth Map", nullptr));
        label_11->setText(QApplication::translate("Map3DConfigWidget", "Size", nullptr));
        label_9->setText(QApplication::translate("Map3DConfigWidget", "Corner", nullptr));
        edlGroupBox->setTitle(QApplication::translate("Map3DConfigWidget", "Show Eye Dome Lighting", nullptr));
        label->setText(QApplication::translate("Map3DConfigWidget", "Lighting strength", nullptr));
        label_2->setText(QApplication::translate("Map3DConfigWidget", "Lighting distance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map3DConfigWidget: public Ui_Map3DConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP3DCONFIGWIDGET_H
