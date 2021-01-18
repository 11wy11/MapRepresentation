/********************************************************************************
** Form generated from reading UI file 'qgisapp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGISAPP_H
#define UI_QGISAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mActionNewProject;
    QAction *mActionOpenProject;
    QAction *mActionSaveProject;
    QAction *mActionSaveProjectAs;
    QAction *mActionSaveMapAsImage;
    QAction *mActionSaveMapAsPdf;
    QAction *mActionNewMapCanvas;
    QAction *mActionExit;
    QAction *mActionUndo;
    QAction *mActionRedo;
    QAction *mActionCutFeatures;
    QAction *mActionCopyFeatures;
    QAction *mActionPasteFeatures;
    QAction *mActionAddFeature;
    QAction *mActionMoveFeature;
    QAction *mActionReshapeFeatures;
    QAction *mActionSplitFeatures;
    QAction *mActionSplitParts;
    QAction *mActionDeleteSelected;
    QAction *mActionAddRing;
    QAction *mActionAddPart;
    QAction *mActionSimplifyFeature;
    QAction *mActionDeleteRing;
    QAction *mActionDeletePart;
    QAction *mActionMergeFeatures;
    QAction *mActionMergeFeatureAttributes;
    QAction *mActionVertexTool;
    QAction *mActionRotatePointSymbols;
    QAction *mActionOffsetPointSymbol;
    QAction *mActionReverseLine;
    QAction *mActionTrimExtendFeature;
    QAction *mActionSnappingOptions;
    QAction *mActionPan;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionSelectFeatures;
    QAction *mActionSelectPolygon;
    QAction *mActionSelectFreehand;
    QAction *mActionSelectRadius;
    QAction *mActionDeselectAll;
    QAction *mActionDeselectActiveLayer;
    QAction *mActionSelectAll;
    QAction *mActionInvertSelection;
    QAction *mActionIdentify;
    QAction *mActionMeasure;
    QAction *mActionMeasureArea;
    QAction *mActionMeasureAngle;
    QAction *mActionZoomFullExtent;
    QAction *mActionZoomToLayer;
    QAction *mActionZoomToSelected;
    QAction *mActionZoomLast;
    QAction *mActionZoomNext;
    QAction *mActionZoomActualSize;
    QAction *mActionMapTips;
    QAction *mActionNewBookmark;
    QAction *mActionShowBookmarks;
    QAction *mActionShowBookmarkManager;
    QAction *mActionDraw;
    QAction *mActionTextAnnotation;
    QAction *mActionFormAnnotation;
    QAction *mActionAnnotation;
    QAction *mActionLabeling;
    QAction *mActionNewVectorLayer;
    QAction *mActionNewSpatiaLiteLayer;
    QAction *mActionShowRasterCalculator;
    QAction *mActionAddOgrLayer;
    QAction *mActionAddRasterLayer;
    QAction *mActionAddPgLayer;
    QAction *mActionAddSpatiaLiteLayer;
    QAction *mActionAddMssqlLayer;
    QAction *mActionAddDb2Layer;
    QAction *mActionAddOracleLayer;
    QAction *mActionAddWmsLayer;
    QAction *mActionOpenTable;
    QAction *mActionToggleEditing;
    QAction *mActionSaveEdits;
    QAction *mActionLayerSaveAs;
    QAction *mActionRemoveLayer;
    QAction *mActionSetLayerCRS;
    QAction *mActionSetProjectCRSFromLayer;
    QAction *mActionLayerProperties;
    QAction *mActionLayerSubsetString;
    QAction *mActionAddToOverview;
    QAction *mActionAddAllToOverview;
    QAction *mActionRemoveAllFromOverview;
    QAction *mActionShowAllLayers;
    QAction *mActionHideAllLayers;
    QAction *mActionManagePlugins;
    QAction *mActionToggleFullScreen;
    QAction *mActionTogglePanelsVisibility;
    QAction *mActionToggleMapOnly;
    QAction *mActionProjectProperties;
    QAction *mActionOptions;
    QAction *mActionCustomProjection;
    QAction *mActionConfigureShortcuts;
    QAction *mActionLocalHistogramStretch;
    QAction *mActionHelpContents;
    QAction *mActionHelpAPI;
    QAction *mActionQgisHomePage;
    QAction *mActionCheckQgisVersion;
    QAction *mActionAbout;
    QAction *mActionSponsors;
    QAction *mActionMoveLabel;
    QAction *mActionRotateLabel;
    QAction *mActionChangeLabelProperties;
    QAction *mActionStyleManager;
    QAction *mActionShowPythonDialog;
    QAction *mActionFullHistogramStretch;
    QAction *mActionAddLayerSeparator;
    QAction *mActionCustomization;
    QAction *actionActionCatchForCustomization;
    QAction *mActionEmbedLayers;
    QAction *mActionDecorationTitle;
    QAction *mActionDecorationCopyright;
    QAction *mActionDecorationImage;
    QAction *mActionDecorationNorthArrow;
    QAction *mActionDecorationScaleBar;
    QAction *mActionAddWfsLayer;
    QAction *mActionFeatureAction;
    QAction *mActionPanToSelected;
    QAction *mActionOffsetCurve;
    QAction *mActionCopyStyle;
    QAction *mActionPasteStyle;
    QAction *mActionAddWcsLayer;
    QAction *mActionDecorationGrid;
    QAction *mActionPinLabels;
    QAction *mActionShowPinnedLabels;
    QAction *mActionNewBlankProject;
    QAction *mActionLocalCumulativeCutStretch;
    QAction *mActionFullCumulativeCutStretch;
    QAction *mActionShowHideLabels;
    QAction *mActionHtmlAnnotation;
    QAction *mActionDuplicateLayer;
    QAction *mActionSvgAnnotation;
    QAction *mActionSaveAllEdits;
    QAction *mActionRollbackAllEdits;
    QAction *mActionCancelAllEdits;
    QAction *mActionRollbackEdits;
    QAction *mActionAllEdits;
    QAction *mActionCancelEdits;
    QAction *mActionSaveLayerEdits;
    QAction *mActionRotateFeature;
    QAction *mActionIncreaseBrightness;
    QAction *mActionDecreaseBrightness;
    QAction *mActionIncreaseContrast;
    QAction *mActionDecreaseContrast;
    QAction *mActionSelectByExpression;
    QAction *mActionNeedSupport;
    QAction *mActionOpenFieldCalc;
    QAction *mActionAddDelimitedText;
    QAction *mActionAddVirtualLayer;
    QAction *mActionPasteAsNewVector;
    QAction *mActionPasteAsNewMemoryVector;
    QAction *mActionDxfExport;
    QAction *mActionDwgImport;
    QAction *mActionFillRing;
    QAction *mActionAddLayerDefinition;
    QAction *mActionSaveLayerDefinition;
    QAction *mActionPreviewModeOff;
    QAction *mActionPreviewModeMono;
    QAction *mActionPreviewModeGrayscale;
    QAction *mActionPreviewProtanope;
    QAction *mActionPreviewDeuteranope;
    QAction *mActionPreviewTritanope;
    QAction *mActionSetLayerScaleVisibility;
    QAction *mActionShowSelectedLayers;
    QAction *mActionHideSelectedLayers;
    QAction *mActionToggleSelectedLayers;
    QAction *mActionToggleSelectedLayersIndependently;
    QAction *mActionHideDeselectedLayers;
    QAction *mActionNewMemoryLayer;
    QAction *mActionStatisticalSummary;
    QAction *mActionShowAlignRasterTool;
    QAction *mActionCircularStringCurvePoint;
    QAction *mActionCircularStringRadius;
    QAction *mActionReportaBug;
    QAction *mActionDiagramProperties;
    QAction *mActionNewGeoPackageLayer;
    QAction *mActionMultiEditAttributes;
    QAction *mActionAddAmsLayer;
    QAction *mActionAddAfsLayer;
    QAction *mActionSelectByForm;
    QAction *mActionMoveFeatureCopy;
    QAction *mActionDecorationLayoutExtent;
    QAction *mActionDataSourceManager;
    QAction *mActionCircle2Points;
    QAction *mActionCircle3Points;
    QAction *mActionCircleCenterPoint;
    QAction *mActionEllipseCenter2Points;
    QAction *mActionEllipseCenterPoint;
    QAction *mActionEllipseExtent;
    QAction *mActionEllipseFoci;
    QAction *mActionRectangleExtent;
    QAction *mActionRectangleCenterPoint;
    QAction *mActionRegularPolygonCenterPoint;
    QAction *mActionRegularPolygon2Points;
    QAction *mActionCircle3Tangents;
    QAction *mActionRectangle3PointsDistance;
    QAction *mActionCircle2TangentsPoint;
    QAction *mActionRegularPolygonCenterCorner;
    QAction *mActionNew3DMapCanvas;
    QAction *mActionShowLayoutManager;
    QAction *mActionNewPrintLayout;
    QAction *mActionNewReport;
    QAction *mActionCloseProject;
    QAction *mActionRevertProject;
    QAction *mActionCopyLayer;
    QAction *mActionPasteLayer;
    QAction *mActionVertexToolActiveLayer;
    QAction *mActionRectangle3PointsProjected;
    QAction *mActionShowMeshCalculator;
    QAction *mActionAddMeshLayer;
    QAction *mActionNewVirtualLayer;
    QAction *mActionShowUnplacedLabels;
    QAction *mActionReselect;
    QAction *mActionTemporalController;
    QAction *mActionAddXyzLayer;
    QAction *mActionAddVectorTileLayer;
    QAction *mActionShowGeoreferencer;
    QAction *mActionDecreaseGamma;
    QAction *mActionIncreaseGamma;
    QAction *mActionDigitizeWithCurve;
    QAction *mActionAddPointCloudLayer;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *mProjectMenu;
    QMenu *mRecentProjectsMenu;
    QMenu *mLayoutsMenu;
    QMenu *mProjectFromTemplateMenu;
    QMenu *mProjectToStorageMenu;
    QMenu *mProjectFromStorageMenu;
    QMenu *menuImport_Export;
    QMenu *mViewMenu;
    QMenu *menuMeasure;
    QMenu *menuDecorations;
    QMenu *mMenuPreviewMode;
    QMenu *mLayerMenu;
    QMenu *mNewLayerMenu;
    QMenu *mAddLayerMenu;
    QMenu *mPluginMenu;
    QMenu *mHelpMenu;
    QMenu *mMenuPluginHelp;
    QMenu *mSettingsMenu;
    QMenu *mRasterMenu;
    QMenu *mVectorMenu;
    QMenu *mEditMenu;
    QMenu *menuSelect;
    QMenu *mMenuPasteAs;
    QMenu *mMenuCircle;
    QMenu *mMenuEllipse;
    QMenu *mMenuRectangle;
    QMenu *mMenuRegularPolygon;
    QMenu *mMenuAnnotation;
    QMenu *mMeshMenu;
    QStatusBar *statusbar;
    QToolBar *mFileToolBar;
    QToolBar *mLayerToolBar;
    QToolBar *mDigitizeToolBar;
    QToolBar *mAdvancedDigitizeToolBar;
    QToolBar *mMapNavToolBar;
    QToolBar *mAttributesToolBar;
    QToolBar *mPluginToolBar;
    QToolBar *mHelpToolBar;
    QToolBar *mRasterToolBar;
    QToolBar *mLabelToolBar;
    QToolBar *mVectorToolBar;
    QToolBar *mDatabaseToolBar;
    QToolBar *mWebToolBar;
    QToolBar *mSnappingToolBar;
    QToolBar *mDataSourceManagerToolBar;
    QToolBar *mShapeDigitizeToolBar;
    QToolBar *mSelectionToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1064, 506);
        mActionNewProject = new QAction(MainWindow);
        mActionNewProject->setObjectName(QStringLiteral("mActionNewProject"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFileNew.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewProject->setIcon(icon);
        mActionOpenProject = new QAction(MainWindow);
        mActionOpenProject->setObjectName(QStringLiteral("mActionOpenProject"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenProject->setIcon(icon1);
        mActionSaveProject = new QAction(MainWindow);
        mActionSaveProject->setObjectName(QStringLiteral("mActionSaveProject"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveProject->setIcon(icon2);
        mActionSaveProjectAs = new QAction(MainWindow);
        mActionSaveProjectAs->setObjectName(QStringLiteral("mActionSaveProjectAs"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveProjectAs->setIcon(icon3);
        mActionSaveMapAsImage = new QAction(MainWindow);
        mActionSaveMapAsImage->setObjectName(QStringLiteral("mActionSaveMapAsImage"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionSaveMapAsImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveMapAsImage->setIcon(icon4);
        mActionSaveMapAsPdf = new QAction(MainWindow);
        mActionSaveMapAsPdf->setObjectName(QStringLiteral("mActionSaveMapAsPdf"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionSaveAsPDF.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveMapAsPdf->setIcon(icon5);
        mActionNewMapCanvas = new QAction(MainWindow);
        mActionNewMapCanvas->setObjectName(QStringLiteral("mActionNewMapCanvas"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/mActionNewMap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewMapCanvas->setIcon(icon6);
        mActionExit = new QAction(MainWindow);
        mActionExit->setObjectName(QStringLiteral("mActionExit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/themes/default/mActionFileExit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExit->setIcon(icon7);
        mActionExit->setMenuRole(QAction::QuitRole);
        mActionUndo = new QAction(MainWindow);
        mActionUndo->setObjectName(QStringLiteral("mActionUndo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/themes/default/mActionUndo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUndo->setIcon(icon8);
        mActionRedo = new QAction(MainWindow);
        mActionRedo->setObjectName(QStringLiteral("mActionRedo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/themes/default/mActionRedo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRedo->setIcon(icon9);
        mActionCutFeatures = new QAction(MainWindow);
        mActionCutFeatures->setObjectName(QStringLiteral("mActionCutFeatures"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/themes/default/mActionEditCut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCutFeatures->setIcon(icon10);
        mActionCopyFeatures = new QAction(MainWindow);
        mActionCopyFeatures->setObjectName(QStringLiteral("mActionCopyFeatures"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/themes/default/mActionEditCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopyFeatures->setIcon(icon11);
        mActionPasteFeatures = new QAction(MainWindow);
        mActionPasteFeatures->setObjectName(QStringLiteral("mActionPasteFeatures"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/themes/default/mActionEditPaste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPasteFeatures->setIcon(icon12);
        mActionAddFeature = new QAction(MainWindow);
        mActionAddFeature->setObjectName(QStringLiteral("mActionAddFeature"));
        mActionAddFeature->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/themes/default/mActionCapturePolygon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddFeature->setIcon(icon13);
        mActionMoveFeature = new QAction(MainWindow);
        mActionMoveFeature->setObjectName(QStringLiteral("mActionMoveFeature"));
        mActionMoveFeature->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/themes/default/mActionMoveFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveFeature->setIcon(icon14);
        mActionReshapeFeatures = new QAction(MainWindow);
        mActionReshapeFeatures->setObjectName(QStringLiteral("mActionReshapeFeatures"));
        mActionReshapeFeatures->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/themes/default/mActionReshape.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionReshapeFeatures->setIcon(icon15);
        mActionSplitFeatures = new QAction(MainWindow);
        mActionSplitFeatures->setObjectName(QStringLiteral("mActionSplitFeatures"));
        mActionSplitFeatures->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/themes/default/mActionSplitFeatures.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSplitFeatures->setIcon(icon16);
        mActionSplitParts = new QAction(MainWindow);
        mActionSplitParts->setObjectName(QStringLiteral("mActionSplitParts"));
        mActionSplitParts->setCheckable(true);
        mActionSplitParts->setIcon(icon16);
        mActionDeleteSelected = new QAction(MainWindow);
        mActionDeleteSelected->setObjectName(QStringLiteral("mActionDeleteSelected"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/themes/default/mActionDeleteSelectedFeatures.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteSelected->setIcon(icon17);
        mActionAddRing = new QAction(MainWindow);
        mActionAddRing->setObjectName(QStringLiteral("mActionAddRing"));
        mActionAddRing->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/themes/default/mActionAddRing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddRing->setIcon(icon18);
        mActionAddPart = new QAction(MainWindow);
        mActionAddPart->setObjectName(QStringLiteral("mActionAddPart"));
        mActionAddPart->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/themes/default/mActionAddPart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddPart->setIcon(icon19);
        mActionSimplifyFeature = new QAction(MainWindow);
        mActionSimplifyFeature->setObjectName(QStringLiteral("mActionSimplifyFeature"));
        mActionSimplifyFeature->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/images/themes/default/mActionSimplify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSimplifyFeature->setIcon(icon20);
        mActionDeleteRing = new QAction(MainWindow);
        mActionDeleteRing->setObjectName(QStringLiteral("mActionDeleteRing"));
        mActionDeleteRing->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/images/themes/default/mActionDeleteRing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteRing->setIcon(icon21);
        mActionDeletePart = new QAction(MainWindow);
        mActionDeletePart->setObjectName(QStringLiteral("mActionDeletePart"));
        mActionDeletePart->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/images/themes/default/mActionDeletePart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeletePart->setIcon(icon22);
        mActionMergeFeatures = new QAction(MainWindow);
        mActionMergeFeatures->setObjectName(QStringLiteral("mActionMergeFeatures"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/images/themes/default/mActionMergeFeatures.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMergeFeatures->setIcon(icon23);
        mActionMergeFeatureAttributes = new QAction(MainWindow);
        mActionMergeFeatureAttributes->setObjectName(QStringLiteral("mActionMergeFeatureAttributes"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/images/themes/default/mActionMergeFeatureAttributes.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMergeFeatureAttributes->setIcon(icon24);
        mActionVertexTool = new QAction(MainWindow);
        mActionVertexTool->setObjectName(QStringLiteral("mActionVertexTool"));
        mActionVertexTool->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/images/themes/default/mActionVertexTool.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionVertexTool->setIcon(icon25);
        mActionRotatePointSymbols = new QAction(MainWindow);
        mActionRotatePointSymbols->setObjectName(QStringLiteral("mActionRotatePointSymbols"));
        mActionRotatePointSymbols->setCheckable(true);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/images/themes/default/mActionRotatePointSymbols.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRotatePointSymbols->setIcon(icon26);
        mActionOffsetPointSymbol = new QAction(MainWindow);
        mActionOffsetPointSymbol->setObjectName(QStringLiteral("mActionOffsetPointSymbol"));
        mActionOffsetPointSymbol->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/images/themes/default/mActionMoveVertex.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOffsetPointSymbol->setIcon(icon27);
        mActionReverseLine = new QAction(MainWindow);
        mActionReverseLine->setObjectName(QStringLiteral("mActionReverseLine"));
        mActionReverseLine->setCheckable(true);
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/images/themes/default/mActionReverseLine.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionReverseLine->setIcon(icon28);
        mActionTrimExtendFeature = new QAction(MainWindow);
        mActionTrimExtendFeature->setObjectName(QStringLiteral("mActionTrimExtendFeature"));
        mActionTrimExtendFeature->setCheckable(true);
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/images/themes/default/mActionTrimExtendFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionTrimExtendFeature->setIcon(icon29);
        mActionSnappingOptions = new QAction(MainWindow);
        mActionSnappingOptions->setObjectName(QStringLiteral("mActionSnappingOptions"));
        mActionPan = new QAction(MainWindow);
        mActionPan->setObjectName(QStringLiteral("mActionPan"));
        mActionPan->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/images/themes/default/mActionPan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPan->setIcon(icon30);
        mActionZoomIn = new QAction(MainWindow);
        mActionZoomIn->setObjectName(QStringLiteral("mActionZoomIn"));
        mActionZoomIn->setCheckable(true);
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomIn->setIcon(icon31);
        mActionZoomOut = new QAction(MainWindow);
        mActionZoomOut->setObjectName(QStringLiteral("mActionZoomOut"));
        mActionZoomOut->setCheckable(true);
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomOut->setIcon(icon32);
        mActionSelectFeatures = new QAction(MainWindow);
        mActionSelectFeatures->setObjectName(QStringLiteral("mActionSelectFeatures"));
        mActionSelectFeatures->setCheckable(true);
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/images/themes/default/mActionSelectRectangle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFeatures->setIcon(icon33);
        mActionSelectPolygon = new QAction(MainWindow);
        mActionSelectPolygon->setObjectName(QStringLiteral("mActionSelectPolygon"));
        mActionSelectPolygon->setCheckable(true);
        QIcon icon34;
        icon34.addFile(QStringLiteral(":/images/themes/default/mActionSelectPolygon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectPolygon->setIcon(icon34);
        mActionSelectFreehand = new QAction(MainWindow);
        mActionSelectFreehand->setObjectName(QStringLiteral("mActionSelectFreehand"));
        mActionSelectFreehand->setCheckable(true);
        QIcon icon35;
        icon35.addFile(QStringLiteral(":/images/themes/default/mActionSelectFreehand.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectFreehand->setIcon(icon35);
        mActionSelectRadius = new QAction(MainWindow);
        mActionSelectRadius->setObjectName(QStringLiteral("mActionSelectRadius"));
        mActionSelectRadius->setCheckable(true);
        QIcon icon36;
        icon36.addFile(QStringLiteral(":/images/themes/default/mActionSelectRadius.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectRadius->setIcon(icon36);
        mActionDeselectAll = new QAction(MainWindow);
        mActionDeselectAll->setObjectName(QStringLiteral("mActionDeselectAll"));
        QIcon icon37;
        icon37.addFile(QStringLiteral(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeselectAll->setIcon(icon37);
        mActionDeselectActiveLayer = new QAction(MainWindow);
        mActionDeselectActiveLayer->setObjectName(QStringLiteral("mActionDeselectActiveLayer"));
        QIcon icon38;
        icon38.addFile(QStringLiteral(":/images/themes/default/mActionDeselectActiveLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeselectActiveLayer->setIcon(icon38);
        mActionSelectAll = new QAction(MainWindow);
        mActionSelectAll->setObjectName(QStringLiteral("mActionSelectAll"));
        QIcon icon39;
        icon39.addFile(QStringLiteral(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon39);
        mActionInvertSelection = new QAction(MainWindow);
        mActionInvertSelection->setObjectName(QStringLiteral("mActionInvertSelection"));
        QIcon icon40;
        icon40.addFile(QStringLiteral(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvertSelection->setIcon(icon40);
        mActionIdentify = new QAction(MainWindow);
        mActionIdentify->setObjectName(QStringLiteral("mActionIdentify"));
        mActionIdentify->setCheckable(true);
        QIcon icon41;
        icon41.addFile(QStringLiteral(":/images/themes/default/mActionIdentify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionIdentify->setIcon(icon41);
        mActionMeasure = new QAction(MainWindow);
        mActionMeasure->setObjectName(QStringLiteral("mActionMeasure"));
        mActionMeasure->setCheckable(true);
        QIcon icon42;
        icon42.addFile(QStringLiteral(":/images/themes/default/mActionMeasure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMeasure->setIcon(icon42);
        mActionMeasureArea = new QAction(MainWindow);
        mActionMeasureArea->setObjectName(QStringLiteral("mActionMeasureArea"));
        mActionMeasureArea->setCheckable(true);
        QIcon icon43;
        icon43.addFile(QStringLiteral(":/images/themes/default/mActionMeasureArea.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMeasureArea->setIcon(icon43);
        mActionMeasureAngle = new QAction(MainWindow);
        mActionMeasureAngle->setObjectName(QStringLiteral("mActionMeasureAngle"));
        mActionMeasureAngle->setCheckable(true);
        QIcon icon44;
        icon44.addFile(QStringLiteral(":/images/themes/default/mActionMeasureAngle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMeasureAngle->setIcon(icon44);
        mActionZoomFullExtent = new QAction(MainWindow);
        mActionZoomFullExtent->setObjectName(QStringLiteral("mActionZoomFullExtent"));
        QIcon icon45;
        icon45.addFile(QStringLiteral(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomFullExtent->setIcon(icon45);
        mActionZoomToLayer = new QAction(MainWindow);
        mActionZoomToLayer->setObjectName(QStringLiteral("mActionZoomToLayer"));
        QIcon icon46;
        icon46.addFile(QStringLiteral(":/images/themes/default/mActionZoomToLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToLayer->setIcon(icon46);
        mActionZoomToSelected = new QAction(MainWindow);
        mActionZoomToSelected->setObjectName(QStringLiteral("mActionZoomToSelected"));
        QIcon icon47;
        icon47.addFile(QStringLiteral(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomToSelected->setIcon(icon47);
        mActionZoomLast = new QAction(MainWindow);
        mActionZoomLast->setObjectName(QStringLiteral("mActionZoomLast"));
        QIcon icon48;
        icon48.addFile(QStringLiteral(":/images/themes/default/mActionZoomLast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomLast->setIcon(icon48);
        mActionZoomNext = new QAction(MainWindow);
        mActionZoomNext->setObjectName(QStringLiteral("mActionZoomNext"));
        QIcon icon49;
        icon49.addFile(QStringLiteral(":/images/themes/default/mActionZoomNext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomNext->setIcon(icon49);
        mActionZoomActualSize = new QAction(MainWindow);
        mActionZoomActualSize->setObjectName(QStringLiteral("mActionZoomActualSize"));
        QIcon icon50;
        icon50.addFile(QStringLiteral(":/images/themes/default/mActionZoomActual.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomActualSize->setIcon(icon50);
        mActionMapTips = new QAction(MainWindow);
        mActionMapTips->setObjectName(QStringLiteral("mActionMapTips"));
        mActionMapTips->setCheckable(true);
        QIcon icon51;
        icon51.addFile(QStringLiteral(":/images/themes/default/mActionMapTips.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMapTips->setIcon(icon51);
        mActionNewBookmark = new QAction(MainWindow);
        mActionNewBookmark->setObjectName(QStringLiteral("mActionNewBookmark"));
        QIcon icon52;
        icon52.addFile(QStringLiteral(":/images/themes/default/mActionNewBookmark.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewBookmark->setIcon(icon52);
        mActionShowBookmarks = new QAction(MainWindow);
        mActionShowBookmarks->setObjectName(QStringLiteral("mActionShowBookmarks"));
        QIcon icon53;
        icon53.addFile(QStringLiteral(":/images/themes/default/mActionShowBookmarks.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowBookmarks->setIcon(icon53);
        mActionShowBookmarkManager = new QAction(MainWindow);
        mActionShowBookmarkManager->setObjectName(QStringLiteral("mActionShowBookmarkManager"));
        mActionShowBookmarkManager->setCheckable(true);
        mActionShowBookmarkManager->setIcon(icon53);
        mActionDraw = new QAction(MainWindow);
        mActionDraw->setObjectName(QStringLiteral("mActionDraw"));
        QIcon icon54;
        icon54.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDraw->setIcon(icon54);
        mActionTextAnnotation = new QAction(MainWindow);
        mActionTextAnnotation->setObjectName(QStringLiteral("mActionTextAnnotation"));
        mActionTextAnnotation->setCheckable(true);
        QIcon icon55;
        icon55.addFile(QStringLiteral(":/images/themes/default/mActionTextAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionTextAnnotation->setIcon(icon55);
        mActionFormAnnotation = new QAction(MainWindow);
        mActionFormAnnotation->setObjectName(QStringLiteral("mActionFormAnnotation"));
        mActionFormAnnotation->setCheckable(true);
        QIcon icon56;
        icon56.addFile(QStringLiteral(":/images/themes/default/mActionFormAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionFormAnnotation->setIcon(icon56);
        mActionAnnotation = new QAction(MainWindow);
        mActionAnnotation->setObjectName(QStringLiteral("mActionAnnotation"));
        mActionAnnotation->setCheckable(true);
        QIcon icon57;
        icon57.addFile(QStringLiteral(":/images/themes/default/mActionAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAnnotation->setIcon(icon57);
        mActionLabeling = new QAction(MainWindow);
        mActionLabeling->setObjectName(QStringLiteral("mActionLabeling"));
        QIcon icon58;
        icon58.addFile(QStringLiteral(":/images/themes/default/mActionLabeling.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLabeling->setIcon(icon58);
        mActionNewVectorLayer = new QAction(MainWindow);
        mActionNewVectorLayer->setObjectName(QStringLiteral("mActionNewVectorLayer"));
        QIcon icon59;
        icon59.addFile(QStringLiteral(":/images/themes/default/mActionNewVectorLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewVectorLayer->setIcon(icon59);
        mActionNewSpatiaLiteLayer = new QAction(MainWindow);
        mActionNewSpatiaLiteLayer->setObjectName(QStringLiteral("mActionNewSpatiaLiteLayer"));
        QIcon icon60;
        icon60.addFile(QStringLiteral(":/images/themes/default/mActionNewSpatiaLiteLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewSpatiaLiteLayer->setIcon(icon60);
        mActionShowRasterCalculator = new QAction(MainWindow);
        mActionShowRasterCalculator->setObjectName(QStringLiteral("mActionShowRasterCalculator"));
        QIcon icon61;
        icon61.addFile(QStringLiteral(":/images/themes/default/mActionShowRasterCalculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowRasterCalculator->setIcon(icon61);
        mActionAddOgrLayer = new QAction(MainWindow);
        mActionAddOgrLayer->setObjectName(QStringLiteral("mActionAddOgrLayer"));
        QIcon icon62;
        icon62.addFile(QStringLiteral(":/images/themes/default/mActionAddOgrLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddOgrLayer->setIcon(icon62);
        mActionAddRasterLayer = new QAction(MainWindow);
        mActionAddRasterLayer->setObjectName(QStringLiteral("mActionAddRasterLayer"));
        QIcon icon63;
        icon63.addFile(QStringLiteral(":/images/themes/default/mActionAddRasterLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddRasterLayer->setIcon(icon63);
        mActionAddPgLayer = new QAction(MainWindow);
        mActionAddPgLayer->setObjectName(QStringLiteral("mActionAddPgLayer"));
        QIcon icon64;
        icon64.addFile(QStringLiteral(":/images/themes/default/mActionAddPostgisLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddPgLayer->setIcon(icon64);
        mActionAddSpatiaLiteLayer = new QAction(MainWindow);
        mActionAddSpatiaLiteLayer->setObjectName(QStringLiteral("mActionAddSpatiaLiteLayer"));
        QIcon icon65;
        icon65.addFile(QStringLiteral(":/images/themes/default/mActionAddSpatiaLiteLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddSpatiaLiteLayer->setIcon(icon65);
        mActionAddMssqlLayer = new QAction(MainWindow);
        mActionAddMssqlLayer->setObjectName(QStringLiteral("mActionAddMssqlLayer"));
        QIcon icon66;
        icon66.addFile(QStringLiteral(":/images/themes/default/mActionAddMssqlLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddMssqlLayer->setIcon(icon66);
        mActionAddDb2Layer = new QAction(MainWindow);
        mActionAddDb2Layer->setObjectName(QStringLiteral("mActionAddDb2Layer"));
        QIcon icon67;
        icon67.addFile(QStringLiteral(":/images/themes/default/mActionAddDb2Layer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddDb2Layer->setIcon(icon67);
        mActionAddOracleLayer = new QAction(MainWindow);
        mActionAddOracleLayer->setObjectName(QStringLiteral("mActionAddOracleLayer"));
        QIcon icon68;
        icon68.addFile(QStringLiteral(":/images/themes/default/mActionAddOracleLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddOracleLayer->setIcon(icon68);
        mActionAddWmsLayer = new QAction(MainWindow);
        mActionAddWmsLayer->setObjectName(QStringLiteral("mActionAddWmsLayer"));
        QIcon icon69;
        icon69.addFile(QStringLiteral(":/images/themes/default/mActionAddWmsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddWmsLayer->setIcon(icon69);
        mActionOpenTable = new QAction(MainWindow);
        mActionOpenTable->setObjectName(QStringLiteral("mActionOpenTable"));
        QIcon icon70;
        icon70.addFile(QStringLiteral(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenTable->setIcon(icon70);
        mActionToggleEditing = new QAction(MainWindow);
        mActionToggleEditing->setObjectName(QStringLiteral("mActionToggleEditing"));
        mActionToggleEditing->setCheckable(true);
        QIcon icon71;
        icon71.addFile(QStringLiteral(":/images/themes/default/mActionToggleEditing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionToggleEditing->setIcon(icon71);
        mActionSaveEdits = new QAction(MainWindow);
        mActionSaveEdits->setObjectName(QStringLiteral("mActionSaveEdits"));
        QIcon icon72;
        icon72.addFile(QStringLiteral(":/images/themes/default/mActionSaveEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveEdits->setIcon(icon72);
        mActionLayerSaveAs = new QAction(MainWindow);
        mActionLayerSaveAs->setObjectName(QStringLiteral("mActionLayerSaveAs"));
        mActionRemoveLayer = new QAction(MainWindow);
        mActionRemoveLayer->setObjectName(QStringLiteral("mActionRemoveLayer"));
        QIcon icon73;
        icon73.addFile(QStringLiteral(":/images/themes/default/mActionRemoveLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveLayer->setIcon(icon73);
        mActionSetLayerCRS = new QAction(MainWindow);
        mActionSetLayerCRS->setObjectName(QStringLiteral("mActionSetLayerCRS"));
        mActionSetProjectCRSFromLayer = new QAction(MainWindow);
        mActionSetProjectCRSFromLayer->setObjectName(QStringLiteral("mActionSetProjectCRSFromLayer"));
        mActionLayerProperties = new QAction(MainWindow);
        mActionLayerProperties->setObjectName(QStringLiteral("mActionLayerProperties"));
        mActionLayerSubsetString = new QAction(MainWindow);
        mActionLayerSubsetString->setObjectName(QStringLiteral("mActionLayerSubsetString"));
        mActionAddToOverview = new QAction(MainWindow);
        mActionAddToOverview->setObjectName(QStringLiteral("mActionAddToOverview"));
        QIcon icon74;
        icon74.addFile(QStringLiteral(":/images/themes/default/mActionInOverview.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddToOverview->setIcon(icon74);
        mActionAddAllToOverview = new QAction(MainWindow);
        mActionAddAllToOverview->setObjectName(QStringLiteral("mActionAddAllToOverview"));
        QIcon icon75;
        icon75.addFile(QStringLiteral(":/images/themes/default/mActionAddAllToOverview.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddAllToOverview->setIcon(icon75);
        mActionRemoveAllFromOverview = new QAction(MainWindow);
        mActionRemoveAllFromOverview->setObjectName(QStringLiteral("mActionRemoveAllFromOverview"));
        QIcon icon76;
        icon76.addFile(QStringLiteral(":/images/themes/default/mActionRemoveAllFromOverview.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRemoveAllFromOverview->setIcon(icon76);
        mActionShowAllLayers = new QAction(MainWindow);
        mActionShowAllLayers->setObjectName(QStringLiteral("mActionShowAllLayers"));
        QIcon icon77;
        icon77.addFile(QStringLiteral(":/images/themes/default/mActionShowAllLayers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowAllLayers->setIcon(icon77);
        mActionHideAllLayers = new QAction(MainWindow);
        mActionHideAllLayers->setObjectName(QStringLiteral("mActionHideAllLayers"));
        QIcon icon78;
        icon78.addFile(QStringLiteral(":/images/themes/default/mActionHideAllLayers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionHideAllLayers->setIcon(icon78);
        mActionManagePlugins = new QAction(MainWindow);
        mActionManagePlugins->setObjectName(QStringLiteral("mActionManagePlugins"));
        QIcon icon79;
        icon79.addFile(QStringLiteral(":/images/themes/default/mActionShowPluginManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionManagePlugins->setIcon(icon79);
        mActionToggleFullScreen = new QAction(MainWindow);
        mActionToggleFullScreen->setObjectName(QStringLiteral("mActionToggleFullScreen"));
        mActionTogglePanelsVisibility = new QAction(MainWindow);
        mActionTogglePanelsVisibility->setObjectName(QStringLiteral("mActionTogglePanelsVisibility"));
        mActionToggleMapOnly = new QAction(MainWindow);
        mActionToggleMapOnly->setObjectName(QStringLiteral("mActionToggleMapOnly"));
        mActionProjectProperties = new QAction(MainWindow);
        mActionProjectProperties->setObjectName(QStringLiteral("mActionProjectProperties"));
        QIcon icon80;
        icon80.addFile(QStringLiteral(":/images/themes/default/mActionProjectProperties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionProjectProperties->setIcon(icon80);
        mActionOptions = new QAction(MainWindow);
        mActionOptions->setObjectName(QStringLiteral("mActionOptions"));
        QIcon icon81;
        icon81.addFile(QStringLiteral(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOptions->setIcon(icon81);
        mActionOptions->setMenuRole(QAction::NoRole);
        mActionCustomProjection = new QAction(MainWindow);
        mActionCustomProjection->setObjectName(QStringLiteral("mActionCustomProjection"));
        QIcon icon82;
        icon82.addFile(QStringLiteral(":/images/themes/default/mActionCustomProjection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCustomProjection->setIcon(icon82);
        mActionConfigureShortcuts = new QAction(MainWindow);
        mActionConfigureShortcuts->setObjectName(QStringLiteral("mActionConfigureShortcuts"));
        QIcon icon83;
        icon83.addFile(QStringLiteral(":/images/themes/default/mActionKeyboardShortcuts.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionConfigureShortcuts->setIcon(icon83);
        mActionConfigureShortcuts->setMenuRole(QAction::NoRole);
        mActionLocalHistogramStretch = new QAction(MainWindow);
        mActionLocalHistogramStretch->setObjectName(QStringLiteral("mActionLocalHistogramStretch"));
        QIcon icon84;
        icon84.addFile(QStringLiteral(":/images/themes/default/mActionLocalHistogramStretch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLocalHistogramStretch->setIcon(icon84);
        mActionHelpContents = new QAction(MainWindow);
        mActionHelpContents->setObjectName(QStringLiteral("mActionHelpContents"));
        QIcon icon85;
        icon85.addFile(QStringLiteral(":/images/themes/default/mActionHelpContents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionHelpContents->setIcon(icon85);
        mActionHelpAPI = new QAction(MainWindow);
        mActionHelpAPI->setObjectName(QStringLiteral("mActionHelpAPI"));
        mActionQgisHomePage = new QAction(MainWindow);
        mActionQgisHomePage->setObjectName(QStringLiteral("mActionQgisHomePage"));
        QIcon icon86;
        icon86.addFile(QStringLiteral(":/images/themes/default/mActionQgisHomePage.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionQgisHomePage->setIcon(icon86);
        mActionCheckQgisVersion = new QAction(MainWindow);
        mActionCheckQgisVersion->setObjectName(QStringLiteral("mActionCheckQgisVersion"));
        QIcon icon87;
        icon87.addFile(QStringLiteral(":/images/themes/default/mIconSuccess.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCheckQgisVersion->setIcon(icon87);
        mActionAbout = new QAction(MainWindow);
        mActionAbout->setObjectName(QStringLiteral("mActionAbout"));
        QIcon icon88;
        icon88.addFile(QStringLiteral(":/images/themes/default/mActionHelpAbout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAbout->setIcon(icon88);
        mActionAbout->setMenuRole(QAction::AboutRole);
        mActionSponsors = new QAction(MainWindow);
        mActionSponsors->setObjectName(QStringLiteral("mActionSponsors"));
        QIcon icon89;
        icon89.addFile(QStringLiteral(":/images/themes/default/mActionHelpSponsors.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSponsors->setIcon(icon89);
        mActionMoveLabel = new QAction(MainWindow);
        mActionMoveLabel->setObjectName(QStringLiteral("mActionMoveLabel"));
        mActionMoveLabel->setCheckable(true);
        QIcon icon90;
        icon90.addFile(QStringLiteral(":/images/themes/default/mActionMoveLabel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveLabel->setIcon(icon90);
        mActionRotateLabel = new QAction(MainWindow);
        mActionRotateLabel->setObjectName(QStringLiteral("mActionRotateLabel"));
        mActionRotateLabel->setCheckable(true);
        QIcon icon91;
        icon91.addFile(QStringLiteral(":/images/themes/default/mActionRotateLabel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRotateLabel->setIcon(icon91);
        mActionChangeLabelProperties = new QAction(MainWindow);
        mActionChangeLabelProperties->setObjectName(QStringLiteral("mActionChangeLabelProperties"));
        mActionChangeLabelProperties->setCheckable(true);
        QIcon icon92;
        icon92.addFile(QStringLiteral(":/images/themes/default/mActionChangeLabelProperties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionChangeLabelProperties->setIcon(icon92);
        mActionStyleManager = new QAction(MainWindow);
        mActionStyleManager->setObjectName(QStringLiteral("mActionStyleManager"));
        QIcon icon93;
        icon93.addFile(QStringLiteral(":/images/themes/default/mActionStyleManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionStyleManager->setIcon(icon93);
        mActionShowPythonDialog = new QAction(MainWindow);
        mActionShowPythonDialog->setObjectName(QStringLiteral("mActionShowPythonDialog"));
        mActionShowPythonDialog->setCheckable(true);
        QIcon icon94;
        icon94.addFile(QStringLiteral(":/images/themes/default/console/mIconRunConsole.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowPythonDialog->setIcon(icon94);
        mActionFullHistogramStretch = new QAction(MainWindow);
        mActionFullHistogramStretch->setObjectName(QStringLiteral("mActionFullHistogramStretch"));
        QIcon icon95;
        icon95.addFile(QStringLiteral(":/images/themes/default/mActionFullHistogramStretch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionFullHistogramStretch->setIcon(icon95);
        mActionAddLayerSeparator = new QAction(MainWindow);
        mActionAddLayerSeparator->setObjectName(QStringLiteral("mActionAddLayerSeparator"));
        mActionAddLayerSeparator->setText(QStringLiteral("More Add Layer actions here"));
        mActionAddLayerSeparator->setIconText(QStringLiteral("More Add Layer actions here"));
#ifndef QT_NO_TOOLTIP
        mActionAddLayerSeparator->setToolTip(QStringLiteral("More Add Layer Actions here"));
#endif // QT_NO_TOOLTIP
        mActionAddLayerSeparator->setVisible(false);
        mActionCustomization = new QAction(MainWindow);
        mActionCustomization->setObjectName(QStringLiteral("mActionCustomization"));
        QIcon icon96;
        icon96.addFile(QStringLiteral(":/images/themes/default/mActionInterfaceCustomization.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCustomization->setIcon(icon96);
        actionActionCatchForCustomization = new QAction(MainWindow);
        actionActionCatchForCustomization->setObjectName(QStringLiteral("actionActionCatchForCustomization"));
        actionActionCatchForCustomization->setText(QStringLiteral("mActionCatchForCustomization"));
        mActionEmbedLayers = new QAction(MainWindow);
        mActionEmbedLayers->setObjectName(QStringLiteral("mActionEmbedLayers"));
        mActionDecorationTitle = new QAction(MainWindow);
        mActionDecorationTitle->setObjectName(QStringLiteral("mActionDecorationTitle"));
        QIcon icon97;
        icon97.addFile(QStringLiteral(":/images/themes/default/copyright_label.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecorationTitle->setIcon(icon97);
        mActionDecorationCopyright = new QAction(MainWindow);
        mActionDecorationCopyright->setObjectName(QStringLiteral("mActionDecorationCopyright"));
        mActionDecorationCopyright->setIcon(icon97);
        mActionDecorationImage = new QAction(MainWindow);
        mActionDecorationImage->setObjectName(QStringLiteral("mActionDecorationImage"));
        QIcon icon98;
        icon98.addFile(QStringLiteral(":/images/themes/default/mActionAddImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecorationImage->setIcon(icon98);
        mActionDecorationNorthArrow = new QAction(MainWindow);
        mActionDecorationNorthArrow->setObjectName(QStringLiteral("mActionDecorationNorthArrow"));
        QIcon icon99;
        icon99.addFile(QStringLiteral(":/images/themes/default/north_arrow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecorationNorthArrow->setIcon(icon99);
        mActionDecorationScaleBar = new QAction(MainWindow);
        mActionDecorationScaleBar->setObjectName(QStringLiteral("mActionDecorationScaleBar"));
        QIcon icon100;
        icon100.addFile(QStringLiteral(":/images/themes/default/mActionScaleBar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecorationScaleBar->setIcon(icon100);
        mActionAddWfsLayer = new QAction(MainWindow);
        mActionAddWfsLayer->setObjectName(QStringLiteral("mActionAddWfsLayer"));
        QIcon icon101;
        icon101.addFile(QStringLiteral(":/images/themes/default/mActionAddWfsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddWfsLayer->setIcon(icon101);
        mActionFeatureAction = new QAction(MainWindow);
        mActionFeatureAction->setObjectName(QStringLiteral("mActionFeatureAction"));
        mActionFeatureAction->setCheckable(true);
        QIcon icon102;
        icon102.addFile(QStringLiteral(":/images/themes/default/mAction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionFeatureAction->setIcon(icon102);
        mActionPanToSelected = new QAction(MainWindow);
        mActionPanToSelected->setObjectName(QStringLiteral("mActionPanToSelected"));
        QIcon icon103;
        icon103.addFile(QStringLiteral(":/images/themes/default/mActionPanToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPanToSelected->setIcon(icon103);
        mActionOffsetCurve = new QAction(MainWindow);
        mActionOffsetCurve->setObjectName(QStringLiteral("mActionOffsetCurve"));
        mActionOffsetCurve->setCheckable(true);
        QIcon icon104;
        icon104.addFile(QStringLiteral(":/images/themes/default/mActionOffsetCurve.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOffsetCurve->setIcon(icon104);
        mActionCopyStyle = new QAction(MainWindow);
        mActionCopyStyle->setObjectName(QStringLiteral("mActionCopyStyle"));
        mActionCopyStyle->setIcon(icon11);
        mActionPasteStyle = new QAction(MainWindow);
        mActionPasteStyle->setObjectName(QStringLiteral("mActionPasteStyle"));
        mActionPasteStyle->setIcon(icon12);
        mActionAddWcsLayer = new QAction(MainWindow);
        mActionAddWcsLayer->setObjectName(QStringLiteral("mActionAddWcsLayer"));
        QIcon icon105;
        icon105.addFile(QStringLiteral(":/images/themes/default/mActionAddWcsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddWcsLayer->setIcon(icon105);
        mActionDecorationGrid = new QAction(MainWindow);
        mActionDecorationGrid->setObjectName(QStringLiteral("mActionDecorationGrid"));
        QIcon icon106;
        icon106.addFile(QStringLiteral(":/images/themes/default/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecorationGrid->setIcon(icon106);
        mActionPinLabels = new QAction(MainWindow);
        mActionPinLabels->setObjectName(QStringLiteral("mActionPinLabels"));
        mActionPinLabels->setCheckable(true);
        QIcon icon107;
        icon107.addFile(QStringLiteral(":/images/themes/default/mActionPinLabels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPinLabels->setIcon(icon107);
        mActionShowPinnedLabels = new QAction(MainWindow);
        mActionShowPinnedLabels->setObjectName(QStringLiteral("mActionShowPinnedLabels"));
        mActionShowPinnedLabels->setCheckable(true);
        QIcon icon108;
        icon108.addFile(QStringLiteral(":/images/themes/default/mActionShowPinnedLabels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowPinnedLabels->setIcon(icon108);
        mActionNewBlankProject = new QAction(MainWindow);
        mActionNewBlankProject->setObjectName(QStringLiteral("mActionNewBlankProject"));
        mActionNewBlankProject->setIcon(icon);
        mActionLocalCumulativeCutStretch = new QAction(MainWindow);
        mActionLocalCumulativeCutStretch->setObjectName(QStringLiteral("mActionLocalCumulativeCutStretch"));
        QIcon icon109;
        icon109.addFile(QStringLiteral(":/images/themes/default/mActionLocalCumulativeCutStretch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLocalCumulativeCutStretch->setIcon(icon109);
        mActionFullCumulativeCutStretch = new QAction(MainWindow);
        mActionFullCumulativeCutStretch->setObjectName(QStringLiteral("mActionFullCumulativeCutStretch"));
        QIcon icon110;
        icon110.addFile(QStringLiteral(":/images/themes/default/mActionFullCumulativeCutStretch.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionFullCumulativeCutStretch->setIcon(icon110);
        mActionShowHideLabels = new QAction(MainWindow);
        mActionShowHideLabels->setObjectName(QStringLiteral("mActionShowHideLabels"));
        mActionShowHideLabels->setCheckable(true);
        QIcon icon111;
        icon111.addFile(QStringLiteral(":/images/themes/default/mActionShowHideLabels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowHideLabels->setIcon(icon111);
        mActionHtmlAnnotation = new QAction(MainWindow);
        mActionHtmlAnnotation->setObjectName(QStringLiteral("mActionHtmlAnnotation"));
        mActionHtmlAnnotation->setCheckable(true);
        QIcon icon112;
        icon112.addFile(QStringLiteral(":/images/themes/default/mActionHtmlAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionHtmlAnnotation->setIcon(icon112);
        mActionDuplicateLayer = new QAction(MainWindow);
        mActionDuplicateLayer->setObjectName(QStringLiteral("mActionDuplicateLayer"));
        QIcon icon113;
        icon113.addFile(QStringLiteral(":/images/themes/default/mActionDuplicateLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDuplicateLayer->setIcon(icon113);
        mActionSvgAnnotation = new QAction(MainWindow);
        mActionSvgAnnotation->setObjectName(QStringLiteral("mActionSvgAnnotation"));
        mActionSvgAnnotation->setCheckable(true);
        QIcon icon114;
        icon114.addFile(QStringLiteral(":/images/themes/default/mActionSvgAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSvgAnnotation->setIcon(icon114);
        mActionSaveAllEdits = new QAction(MainWindow);
        mActionSaveAllEdits->setObjectName(QStringLiteral("mActionSaveAllEdits"));
        QIcon icon115;
        icon115.addFile(QStringLiteral(":/images/themes/default/mActionSaveAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveAllEdits->setIcon(icon115);
        mActionRollbackAllEdits = new QAction(MainWindow);
        mActionRollbackAllEdits->setObjectName(QStringLiteral("mActionRollbackAllEdits"));
        QIcon icon116;
        icon116.addFile(QStringLiteral(":/images/themes/default/mActionRollbackAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRollbackAllEdits->setIcon(icon116);
        mActionCancelAllEdits = new QAction(MainWindow);
        mActionCancelAllEdits->setObjectName(QStringLiteral("mActionCancelAllEdits"));
        QIcon icon117;
        icon117.addFile(QStringLiteral(":/images/themes/default/mActionCancelAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCancelAllEdits->setIcon(icon117);
        mActionRollbackEdits = new QAction(MainWindow);
        mActionRollbackEdits->setObjectName(QStringLiteral("mActionRollbackEdits"));
        QIcon icon118;
        icon118.addFile(QStringLiteral(":/images/themes/default/mActionRollbackEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRollbackEdits->setIcon(icon118);
        mActionAllEdits = new QAction(MainWindow);
        mActionAllEdits->setObjectName(QStringLiteral("mActionAllEdits"));
        QIcon icon119;
        icon119.addFile(QStringLiteral(":/images/themes/default/mActionAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAllEdits->setIcon(icon119);
        mActionCancelEdits = new QAction(MainWindow);
        mActionCancelEdits->setObjectName(QStringLiteral("mActionCancelEdits"));
        QIcon icon120;
        icon120.addFile(QStringLiteral(":/images/themes/default/mActionCancelEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCancelEdits->setIcon(icon120);
        mActionSaveLayerEdits = new QAction(MainWindow);
        mActionSaveLayerEdits->setObjectName(QStringLiteral("mActionSaveLayerEdits"));
        mActionSaveLayerEdits->setIcon(icon115);
        mActionRotateFeature = new QAction(MainWindow);
        mActionRotateFeature->setObjectName(QStringLiteral("mActionRotateFeature"));
        mActionRotateFeature->setCheckable(true);
        QIcon icon121;
        icon121.addFile(QStringLiteral(":/images/themes/default/mActionRotateFeature.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRotateFeature->setIcon(icon121);
        mActionIncreaseBrightness = new QAction(MainWindow);
        mActionIncreaseBrightness->setObjectName(QStringLiteral("mActionIncreaseBrightness"));
        QIcon icon122;
        icon122.addFile(QStringLiteral(":/images/themes/default/mActionIncreaseBrightness.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionIncreaseBrightness->setIcon(icon122);
        mActionDecreaseBrightness = new QAction(MainWindow);
        mActionDecreaseBrightness->setObjectName(QStringLiteral("mActionDecreaseBrightness"));
        QIcon icon123;
        icon123.addFile(QStringLiteral(":/images/themes/default/mActionDecreaseBrightness.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecreaseBrightness->setIcon(icon123);
        mActionIncreaseContrast = new QAction(MainWindow);
        mActionIncreaseContrast->setObjectName(QStringLiteral("mActionIncreaseContrast"));
        QIcon icon124;
        icon124.addFile(QStringLiteral(":/images/themes/default/mActionIncreaseContrast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionIncreaseContrast->setIcon(icon124);
        mActionDecreaseContrast = new QAction(MainWindow);
        mActionDecreaseContrast->setObjectName(QStringLiteral("mActionDecreaseContrast"));
        QIcon icon125;
        icon125.addFile(QStringLiteral(":/images/themes/default/mActionDecreaseContrast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecreaseContrast->setIcon(icon125);
        mActionSelectByExpression = new QAction(MainWindow);
        mActionSelectByExpression->setObjectName(QStringLiteral("mActionSelectByExpression"));
        QIcon icon126;
        icon126.addFile(QStringLiteral(":/images/themes/default/mIconExpressionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectByExpression->setIcon(icon126);
        mActionNeedSupport = new QAction(MainWindow);
        mActionNeedSupport->setObjectName(QStringLiteral("mActionNeedSupport"));
        mActionOpenFieldCalc = new QAction(MainWindow);
        mActionOpenFieldCalc->setObjectName(QStringLiteral("mActionOpenFieldCalc"));
        QIcon icon127;
        icon127.addFile(QStringLiteral(":/images/themes/default/mActionCalculateField.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOpenFieldCalc->setIcon(icon127);
        mActionAddDelimitedText = new QAction(MainWindow);
        mActionAddDelimitedText->setObjectName(QStringLiteral("mActionAddDelimitedText"));
        QIcon icon128;
        icon128.addFile(QStringLiteral(":/images/themes/default/mActionAddDelimitedTextLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddDelimitedText->setIcon(icon128);
        mActionAddVirtualLayer = new QAction(MainWindow);
        mActionAddVirtualLayer->setObjectName(QStringLiteral("mActionAddVirtualLayer"));
        QIcon icon129;
        icon129.addFile(QStringLiteral(":/images/themes/default/mActionAddVirtualLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddVirtualLayer->setIcon(icon129);
        mActionPasteAsNewVector = new QAction(MainWindow);
        mActionPasteAsNewVector->setObjectName(QStringLiteral("mActionPasteAsNewVector"));
        mActionPasteAsNewMemoryVector = new QAction(MainWindow);
        mActionPasteAsNewMemoryVector->setObjectName(QStringLiteral("mActionPasteAsNewMemoryVector"));
        mActionDxfExport = new QAction(MainWindow);
        mActionDxfExport->setObjectName(QStringLiteral("mActionDxfExport"));
        mActionDwgImport = new QAction(MainWindow);
        mActionDwgImport->setObjectName(QStringLiteral("mActionDwgImport"));
        mActionFillRing = new QAction(MainWindow);
        mActionFillRing->setObjectName(QStringLiteral("mActionFillRing"));
        mActionFillRing->setCheckable(true);
        QIcon icon130;
        icon130.addFile(QStringLiteral(":/images/themes/default/mActionFillRing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionFillRing->setIcon(icon130);
        mActionAddLayerDefinition = new QAction(MainWindow);
        mActionAddLayerDefinition->setObjectName(QStringLiteral("mActionAddLayerDefinition"));
        mActionSaveLayerDefinition = new QAction(MainWindow);
        mActionSaveLayerDefinition->setObjectName(QStringLiteral("mActionSaveLayerDefinition"));
        mActionPreviewModeOff = new QAction(MainWindow);
        mActionPreviewModeOff->setObjectName(QStringLiteral("mActionPreviewModeOff"));
        mActionPreviewModeOff->setCheckable(true);
        mActionPreviewModeOff->setChecked(true);
        mActionPreviewModeMono = new QAction(MainWindow);
        mActionPreviewModeMono->setObjectName(QStringLiteral("mActionPreviewModeMono"));
        mActionPreviewModeMono->setCheckable(true);
        mActionPreviewModeGrayscale = new QAction(MainWindow);
        mActionPreviewModeGrayscale->setObjectName(QStringLiteral("mActionPreviewModeGrayscale"));
        mActionPreviewModeGrayscale->setCheckable(true);
        mActionPreviewProtanope = new QAction(MainWindow);
        mActionPreviewProtanope->setObjectName(QStringLiteral("mActionPreviewProtanope"));
        mActionPreviewProtanope->setCheckable(true);
        mActionPreviewDeuteranope = new QAction(MainWindow);
        mActionPreviewDeuteranope->setObjectName(QStringLiteral("mActionPreviewDeuteranope"));
        mActionPreviewDeuteranope->setCheckable(true);
        mActionPreviewTritanope = new QAction(MainWindow);
        mActionPreviewTritanope->setObjectName(QStringLiteral("mActionPreviewTritanope"));
        mActionPreviewTritanope->setCheckable(true);
        mActionSetLayerScaleVisibility = new QAction(MainWindow);
        mActionSetLayerScaleVisibility->setObjectName(QStringLiteral("mActionSetLayerScaleVisibility"));
        mActionShowSelectedLayers = new QAction(MainWindow);
        mActionShowSelectedLayers->setObjectName(QStringLiteral("mActionShowSelectedLayers"));
        QIcon icon131;
        icon131.addFile(QStringLiteral(":/images/themes/default/mActionShowSelectedLayers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowSelectedLayers->setIcon(icon131);
        mActionHideSelectedLayers = new QAction(MainWindow);
        mActionHideSelectedLayers->setObjectName(QStringLiteral("mActionHideSelectedLayers"));
        QIcon icon132;
        icon132.addFile(QStringLiteral(":/images/themes/default/mActionHideSelectedLayers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionHideSelectedLayers->setIcon(icon132);
        mActionToggleSelectedLayers = new QAction(MainWindow);
        mActionToggleSelectedLayers->setObjectName(QStringLiteral("mActionToggleSelectedLayers"));
        QIcon icon133;
        icon133.addFile(QStringLiteral(":/images/themes/default/mActionToggleSelectedLayers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionToggleSelectedLayers->setIcon(icon133);
        mActionToggleSelectedLayersIndependently = new QAction(MainWindow);
        mActionToggleSelectedLayersIndependently->setObjectName(QStringLiteral("mActionToggleSelectedLayersIndependently"));
        mActionHideDeselectedLayers = new QAction(MainWindow);
        mActionHideDeselectedLayers->setObjectName(QStringLiteral("mActionHideDeselectedLayers"));
        QIcon icon134;
        icon134.addFile(QStringLiteral(":/images/themes/default/mActionHideDeselectedLayers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionHideDeselectedLayers->setIcon(icon134);
        mActionNewMemoryLayer = new QAction(MainWindow);
        mActionNewMemoryLayer->setObjectName(QStringLiteral("mActionNewMemoryLayer"));
        QIcon icon135;
        icon135.addFile(QStringLiteral(":/images/themes/default/mActionCreateMemory.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewMemoryLayer->setIcon(icon135);
        mActionStatisticalSummary = new QAction(MainWindow);
        mActionStatisticalSummary->setObjectName(QStringLiteral("mActionStatisticalSummary"));
        mActionStatisticalSummary->setCheckable(true);
        QIcon icon136;
        icon136.addFile(QStringLiteral(":/images/themes/default/mActionSum.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionStatisticalSummary->setIcon(icon136);
        mActionShowAlignRasterTool = new QAction(MainWindow);
        mActionShowAlignRasterTool->setObjectName(QStringLiteral("mActionShowAlignRasterTool"));
        mActionCircularStringCurvePoint = new QAction(MainWindow);
        mActionCircularStringCurvePoint->setObjectName(QStringLiteral("mActionCircularStringCurvePoint"));
        mActionCircularStringCurvePoint->setCheckable(true);
        QIcon icon137;
        icon137.addFile(QStringLiteral(":/images/themes/default/mActionCircularStringCurvePoint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircularStringCurvePoint->setIcon(icon137);
        mActionCircularStringRadius = new QAction(MainWindow);
        mActionCircularStringRadius->setObjectName(QStringLiteral("mActionCircularStringRadius"));
        mActionCircularStringRadius->setCheckable(true);
        QIcon icon138;
        icon138.addFile(QStringLiteral(":/images/themes/default/mActionCircularStringRadius.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircularStringRadius->setIcon(icon138);
        mActionReportaBug = new QAction(MainWindow);
        mActionReportaBug->setObjectName(QStringLiteral("mActionReportaBug"));
        mActionDiagramProperties = new QAction(MainWindow);
        mActionDiagramProperties->setObjectName(QStringLiteral("mActionDiagramProperties"));
        QIcon icon139;
        icon139.addFile(QStringLiteral(":/images/themes/default/propertyicons/diagram.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDiagramProperties->setIcon(icon139);
        mActionNewGeoPackageLayer = new QAction(MainWindow);
        mActionNewGeoPackageLayer->setObjectName(QStringLiteral("mActionNewGeoPackageLayer"));
        QIcon icon140;
        icon140.addFile(QStringLiteral(":/images/themes/default/mActionNewGeoPackageLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewGeoPackageLayer->setIcon(icon140);
        mActionMultiEditAttributes = new QAction(MainWindow);
        mActionMultiEditAttributes->setObjectName(QStringLiteral("mActionMultiEditAttributes"));
        QIcon icon141;
        icon141.addFile(QStringLiteral(":/images/themes/default/mActionMultiEdit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMultiEditAttributes->setIcon(icon141);
        mActionAddAmsLayer = new QAction(MainWindow);
        mActionAddAmsLayer->setObjectName(QStringLiteral("mActionAddAmsLayer"));
        QIcon icon142;
        icon142.addFile(QStringLiteral(":/images/themes/default/mActionAddAmsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddAmsLayer->setIcon(icon142);
        mActionAddAfsLayer = new QAction(MainWindow);
        mActionAddAfsLayer->setObjectName(QStringLiteral("mActionAddAfsLayer"));
        QIcon icon143;
        icon143.addFile(QStringLiteral(":/images/themes/default/mActionAddAfsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddAfsLayer->setIcon(icon143);
        mActionSelectByForm = new QAction(MainWindow);
        mActionSelectByForm->setObjectName(QStringLiteral("mActionSelectByForm"));
        QIcon icon144;
        icon144.addFile(QStringLiteral(":/images/themes/default/mIconFormSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectByForm->setIcon(icon144);
        mActionMoveFeatureCopy = new QAction(MainWindow);
        mActionMoveFeatureCopy->setObjectName(QStringLiteral("mActionMoveFeatureCopy"));
        mActionMoveFeatureCopy->setCheckable(true);
        QIcon icon145;
        icon145.addFile(QStringLiteral(":/images/themes/default/mActionMoveFeatureCopy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMoveFeatureCopy->setIcon(icon145);
        mActionDecorationLayoutExtent = new QAction(MainWindow);
        mActionDecorationLayoutExtent->setObjectName(QStringLiteral("mActionDecorationLayoutExtent"));
        QIcon icon146;
        icon146.addFile(QStringLiteral(":/images/themes/default/mActionAddMap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecorationLayoutExtent->setIcon(icon146);
        mActionDataSourceManager = new QAction(MainWindow);
        mActionDataSourceManager->setObjectName(QStringLiteral("mActionDataSourceManager"));
        QIcon icon147;
        icon147.addFile(QStringLiteral(":/images/themes/default/mActionDataSourceManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDataSourceManager->setIcon(icon147);
        mActionCircle2Points = new QAction(MainWindow);
        mActionCircle2Points->setObjectName(QStringLiteral("mActionCircle2Points"));
        mActionCircle2Points->setCheckable(true);
        QIcon icon148;
        icon148.addFile(QStringLiteral(":/images/themes/default/mActionCircle2Points.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircle2Points->setIcon(icon148);
        mActionCircle3Points = new QAction(MainWindow);
        mActionCircle3Points->setObjectName(QStringLiteral("mActionCircle3Points"));
        mActionCircle3Points->setCheckable(true);
        QIcon icon149;
        icon149.addFile(QStringLiteral(":/images/themes/default/mActionCircle3Points.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircle3Points->setIcon(icon149);
        mActionCircleCenterPoint = new QAction(MainWindow);
        mActionCircleCenterPoint->setObjectName(QStringLiteral("mActionCircleCenterPoint"));
        mActionCircleCenterPoint->setCheckable(true);
        QIcon icon150;
        icon150.addFile(QStringLiteral(":/images/themes/default/mActionCircleCenterPoint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircleCenterPoint->setIcon(icon150);
        mActionEllipseCenter2Points = new QAction(MainWindow);
        mActionEllipseCenter2Points->setObjectName(QStringLiteral("mActionEllipseCenter2Points"));
        mActionEllipseCenter2Points->setCheckable(true);
        QIcon icon151;
        icon151.addFile(QStringLiteral(":/images/themes/default/mActionEllipseCenter2Points.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEllipseCenter2Points->setIcon(icon151);
        mActionEllipseCenterPoint = new QAction(MainWindow);
        mActionEllipseCenterPoint->setObjectName(QStringLiteral("mActionEllipseCenterPoint"));
        mActionEllipseCenterPoint->setCheckable(true);
        QIcon icon152;
        icon152.addFile(QStringLiteral(":/images/themes/default/mActionEllipseCenterPoint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEllipseCenterPoint->setIcon(icon152);
        mActionEllipseExtent = new QAction(MainWindow);
        mActionEllipseExtent->setObjectName(QStringLiteral("mActionEllipseExtent"));
        mActionEllipseExtent->setCheckable(true);
        QIcon icon153;
        icon153.addFile(QStringLiteral(":/images/themes/default/mActionEllipseExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEllipseExtent->setIcon(icon153);
        mActionEllipseFoci = new QAction(MainWindow);
        mActionEllipseFoci->setObjectName(QStringLiteral("mActionEllipseFoci"));
        mActionEllipseFoci->setCheckable(true);
        QIcon icon154;
        icon154.addFile(QStringLiteral(":/images/themes/default/mActionEllipseFoci.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEllipseFoci->setIcon(icon154);
        mActionRectangleExtent = new QAction(MainWindow);
        mActionRectangleExtent->setObjectName(QStringLiteral("mActionRectangleExtent"));
        mActionRectangleExtent->setCheckable(true);
        QIcon icon155;
        icon155.addFile(QStringLiteral(":/images/themes/default/mActionRectangleExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRectangleExtent->setIcon(icon155);
        mActionRectangleCenterPoint = new QAction(MainWindow);
        mActionRectangleCenterPoint->setObjectName(QStringLiteral("mActionRectangleCenterPoint"));
        mActionRectangleCenterPoint->setCheckable(true);
        QIcon icon156;
        icon156.addFile(QStringLiteral(":/images/themes/default/mActionRectangleCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRectangleCenterPoint->setIcon(icon156);
        mActionRegularPolygonCenterPoint = new QAction(MainWindow);
        mActionRegularPolygonCenterPoint->setObjectName(QStringLiteral("mActionRegularPolygonCenterPoint"));
        mActionRegularPolygonCenterPoint->setCheckable(true);
        QIcon icon157;
        icon157.addFile(QStringLiteral(":/images/themes/default/mActionRegularPolygonCenterPoint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRegularPolygonCenterPoint->setIcon(icon157);
        mActionRegularPolygon2Points = new QAction(MainWindow);
        mActionRegularPolygon2Points->setObjectName(QStringLiteral("mActionRegularPolygon2Points"));
        mActionRegularPolygon2Points->setCheckable(true);
        QIcon icon158;
        icon158.addFile(QStringLiteral(":/images/themes/default/mActionRegularPolygon2Points.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRegularPolygon2Points->setIcon(icon158);
        mActionCircle3Tangents = new QAction(MainWindow);
        mActionCircle3Tangents->setObjectName(QStringLiteral("mActionCircle3Tangents"));
        mActionCircle3Tangents->setCheckable(true);
        QIcon icon159;
        icon159.addFile(QStringLiteral(":/images/themes/default/mActionCircle3Tangents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircle3Tangents->setIcon(icon159);
        mActionRectangle3PointsDistance = new QAction(MainWindow);
        mActionRectangle3PointsDistance->setObjectName(QStringLiteral("mActionRectangle3PointsDistance"));
        mActionRectangle3PointsDistance->setCheckable(true);
        QIcon icon160;
        icon160.addFile(QStringLiteral(":/images/themes/default/mActionRectangle3PointsDistance.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRectangle3PointsDistance->setIcon(icon160);
        mActionCircle2TangentsPoint = new QAction(MainWindow);
        mActionCircle2TangentsPoint->setObjectName(QStringLiteral("mActionCircle2TangentsPoint"));
        mActionCircle2TangentsPoint->setCheckable(true);
        QIcon icon161;
        icon161.addFile(QStringLiteral(":/images/themes/default/mActionCircle2TangentsPoint.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCircle2TangentsPoint->setIcon(icon161);
        mActionRegularPolygonCenterCorner = new QAction(MainWindow);
        mActionRegularPolygonCenterCorner->setObjectName(QStringLiteral("mActionRegularPolygonCenterCorner"));
        mActionRegularPolygonCenterCorner->setCheckable(true);
        QIcon icon162;
        icon162.addFile(QStringLiteral(":/images/themes/default/mActionRegularPolygonCenterCorner.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRegularPolygonCenterCorner->setIcon(icon162);
        mActionNew3DMapCanvas = new QAction(MainWindow);
        mActionNew3DMapCanvas->setObjectName(QStringLiteral("mActionNew3DMapCanvas"));
        QIcon icon163;
        icon163.addFile(QStringLiteral(":/images/themes/default/mActionNew3DMap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNew3DMapCanvas->setIcon(icon163);
        mActionShowLayoutManager = new QAction(MainWindow);
        mActionShowLayoutManager->setObjectName(QStringLiteral("mActionShowLayoutManager"));
        QIcon icon164;
        icon164.addFile(QStringLiteral(":/images/themes/default/mActionLayoutManager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowLayoutManager->setIcon(icon164);
        mActionNewPrintLayout = new QAction(MainWindow);
        mActionNewPrintLayout->setObjectName(QStringLiteral("mActionNewPrintLayout"));
        QIcon icon165;
        icon165.addFile(QStringLiteral(":/images/themes/default/mActionNewLayout.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewPrintLayout->setIcon(icon165);
        mActionNewReport = new QAction(MainWindow);
        mActionNewReport->setObjectName(QStringLiteral("mActionNewReport"));
        QIcon icon166;
        icon166.addFile(QStringLiteral(":/images/themes/default/mActionNewReport.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewReport->setIcon(icon166);
        mActionCloseProject = new QAction(MainWindow);
        mActionCloseProject->setObjectName(QStringLiteral("mActionCloseProject"));
        mActionRevertProject = new QAction(MainWindow);
        mActionRevertProject->setObjectName(QStringLiteral("mActionRevertProject"));
        mActionCopyLayer = new QAction(MainWindow);
        mActionCopyLayer->setObjectName(QStringLiteral("mActionCopyLayer"));
        mActionCopyLayer->setIcon(icon11);
        mActionPasteLayer = new QAction(MainWindow);
        mActionPasteLayer->setObjectName(QStringLiteral("mActionPasteLayer"));
        mActionPasteLayer->setIcon(icon12);
        mActionVertexToolActiveLayer = new QAction(MainWindow);
        mActionVertexToolActiveLayer->setObjectName(QStringLiteral("mActionVertexToolActiveLayer"));
        mActionVertexToolActiveLayer->setCheckable(true);
        mActionVertexToolActiveLayer->setIcon(icon25);
        mActionRectangle3PointsProjected = new QAction(MainWindow);
        mActionRectangle3PointsProjected->setObjectName(QStringLiteral("mActionRectangle3PointsProjected"));
        mActionRectangle3PointsProjected->setCheckable(true);
        QIcon icon167;
        icon167.addFile(QStringLiteral(":/images/themes/default/mActionRectangle3PointsProjected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRectangle3PointsProjected->setIcon(icon167);
        mActionShowMeshCalculator = new QAction(MainWindow);
        mActionShowMeshCalculator->setObjectName(QStringLiteral("mActionShowMeshCalculator"));
        QIcon icon168;
        icon168.addFile(QStringLiteral(":/images/themes/default/mActionShowMeshCalculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowMeshCalculator->setIcon(icon168);
        mActionAddMeshLayer = new QAction(MainWindow);
        mActionAddMeshLayer->setObjectName(QStringLiteral("mActionAddMeshLayer"));
        QIcon icon169;
        icon169.addFile(QStringLiteral(":/images/themes/default/mActionAddMeshLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddMeshLayer->setIcon(icon169);
        mActionNewVirtualLayer = new QAction(MainWindow);
        mActionNewVirtualLayer->setObjectName(QStringLiteral("mActionNewVirtualLayer"));
        QIcon icon170;
        icon170.addFile(QStringLiteral(":/images/themes/default/mActionNewVirtualLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewVirtualLayer->setIcon(icon170);
        mActionShowUnplacedLabels = new QAction(MainWindow);
        mActionShowUnplacedLabels->setObjectName(QStringLiteral("mActionShowUnplacedLabels"));
        mActionShowUnplacedLabels->setCheckable(true);
        QIcon icon171;
        icon171.addFile(QStringLiteral(":/images/themes/default/mActionShowUnplacedLabel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowUnplacedLabels->setIcon(icon171);
        mActionReselect = new QAction(MainWindow);
        mActionReselect->setObjectName(QStringLiteral("mActionReselect"));
        mActionTemporalController = new QAction(MainWindow);
        mActionTemporalController->setObjectName(QStringLiteral("mActionTemporalController"));
        QIcon icon172;
        icon172.addFile(QStringLiteral(":/images/themes/default/propertyicons/temporal.svg"), QSize(), QIcon::Normal, QIcon::On);
        mActionTemporalController->setIcon(icon172);
        mActionAddXyzLayer = new QAction(MainWindow);
        mActionAddXyzLayer->setObjectName(QStringLiteral("mActionAddXyzLayer"));
        QIcon icon173;
        icon173.addFile(QStringLiteral(":/images/themes/default/mActionAddXyzLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddXyzLayer->setIcon(icon173);
        mActionAddVectorTileLayer = new QAction(MainWindow);
        mActionAddVectorTileLayer->setObjectName(QStringLiteral("mActionAddVectorTileLayer"));
        QIcon icon174;
        icon174.addFile(QStringLiteral(":/images/themes/default/mActionAddVectorTileLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddVectorTileLayer->setIcon(icon174);
        mActionShowGeoreferencer = new QAction(MainWindow);
        mActionShowGeoreferencer->setObjectName(QStringLiteral("mActionShowGeoreferencer"));
        QIcon icon175;
        icon175.addFile(QStringLiteral(":/images/themes/default/georeferencer/mGeorefRun.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowGeoreferencer->setIcon(icon175);
        mActionDecreaseGamma = new QAction(MainWindow);
        mActionDecreaseGamma->setObjectName(QStringLiteral("mActionDecreaseGamma"));
        QIcon icon176;
        icon176.addFile(QStringLiteral(":/images/themes/default/mActionDecreaseGamma.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDecreaseGamma->setIcon(icon176);
        mActionIncreaseGamma = new QAction(MainWindow);
        mActionIncreaseGamma->setObjectName(QStringLiteral("mActionIncreaseGamma"));
        QIcon icon177;
        icon177.addFile(QStringLiteral(":/images/themes/default/mActionIncreaseGamma.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionIncreaseGamma->setIcon(icon177);
        mActionDigitizeWithCurve = new QAction(MainWindow);
        mActionDigitizeWithCurve->setObjectName(QStringLiteral("mActionDigitizeWithCurve"));
        mActionDigitizeWithCurve->setCheckable(true);
        mActionDigitizeWithCurve->setEnabled(false);
        QIcon icon178;
        icon178.addFile(QStringLiteral(":/images/themes/default/mActionDigitizeWithCurve.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDigitizeWithCurve->setIcon(icon178);
        mActionAddPointCloudLayer = new QAction(MainWindow);
        mActionAddPointCloudLayer->setObjectName(QStringLiteral("mActionAddPointCloudLayer"));
        QIcon icon179;
        icon179.addFile(QStringLiteral(":/images/themes/default/mActionAddPointCloudLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddPointCloudLayer->setIcon(icon179);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1064, 20));
        mProjectMenu = new QMenu(menubar);
        mProjectMenu->setObjectName(QStringLiteral("mProjectMenu"));
        mRecentProjectsMenu = new QMenu(mProjectMenu);
        mRecentProjectsMenu->setObjectName(QStringLiteral("mRecentProjectsMenu"));
        mLayoutsMenu = new QMenu(mProjectMenu);
        mLayoutsMenu->setObjectName(QStringLiteral("mLayoutsMenu"));
        mProjectFromTemplateMenu = new QMenu(mProjectMenu);
        mProjectFromTemplateMenu->setObjectName(QStringLiteral("mProjectFromTemplateMenu"));
        mProjectToStorageMenu = new QMenu(mProjectMenu);
        mProjectToStorageMenu->setObjectName(QStringLiteral("mProjectToStorageMenu"));
        mProjectFromStorageMenu = new QMenu(mProjectMenu);
        mProjectFromStorageMenu->setObjectName(QStringLiteral("mProjectFromStorageMenu"));
        menuImport_Export = new QMenu(mProjectMenu);
        menuImport_Export->setObjectName(QStringLiteral("menuImport_Export"));
        mViewMenu = new QMenu(menubar);
        mViewMenu->setObjectName(QStringLiteral("mViewMenu"));
        menuMeasure = new QMenu(mViewMenu);
        menuMeasure->setObjectName(QStringLiteral("menuMeasure"));
        menuDecorations = new QMenu(mViewMenu);
        menuDecorations->setObjectName(QStringLiteral("menuDecorations"));
        mMenuPreviewMode = new QMenu(mViewMenu);
        mMenuPreviewMode->setObjectName(QStringLiteral("mMenuPreviewMode"));
        mLayerMenu = new QMenu(menubar);
        mLayerMenu->setObjectName(QStringLiteral("mLayerMenu"));
        mNewLayerMenu = new QMenu(mLayerMenu);
        mNewLayerMenu->setObjectName(QStringLiteral("mNewLayerMenu"));
        mAddLayerMenu = new QMenu(mLayerMenu);
        mAddLayerMenu->setObjectName(QStringLiteral("mAddLayerMenu"));
        mPluginMenu = new QMenu(menubar);
        mPluginMenu->setObjectName(QStringLiteral("mPluginMenu"));
        mHelpMenu = new QMenu(menubar);
        mHelpMenu->setObjectName(QStringLiteral("mHelpMenu"));
        mMenuPluginHelp = new QMenu(mHelpMenu);
        mMenuPluginHelp->setObjectName(QStringLiteral("mMenuPluginHelp"));
        mSettingsMenu = new QMenu(menubar);
        mSettingsMenu->setObjectName(QStringLiteral("mSettingsMenu"));
        mRasterMenu = new QMenu(menubar);
        mRasterMenu->setObjectName(QStringLiteral("mRasterMenu"));
        mVectorMenu = new QMenu(menubar);
        mVectorMenu->setObjectName(QStringLiteral("mVectorMenu"));
        mEditMenu = new QMenu(menubar);
        mEditMenu->setObjectName(QStringLiteral("mEditMenu"));
        menuSelect = new QMenu(mEditMenu);
        menuSelect->setObjectName(QStringLiteral("menuSelect"));
        mMenuPasteAs = new QMenu(mEditMenu);
        mMenuPasteAs->setObjectName(QStringLiteral("mMenuPasteAs"));
        mMenuCircle = new QMenu(mEditMenu);
        mMenuCircle->setObjectName(QStringLiteral("mMenuCircle"));
        mMenuEllipse = new QMenu(mEditMenu);
        mMenuEllipse->setObjectName(QStringLiteral("mMenuEllipse"));
        mMenuRectangle = new QMenu(mEditMenu);
        mMenuRectangle->setObjectName(QStringLiteral("mMenuRectangle"));
        mMenuRegularPolygon = new QMenu(mEditMenu);
        mMenuRegularPolygon->setObjectName(QStringLiteral("mMenuRegularPolygon"));
        mMenuAnnotation = new QMenu(mEditMenu);
        mMenuAnnotation->setObjectName(QStringLiteral("mMenuAnnotation"));
        mMeshMenu = new QMenu(menubar);
        mMeshMenu->setObjectName(QStringLiteral("mMeshMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        mFileToolBar = new QToolBar(MainWindow);
        mFileToolBar->setObjectName(QStringLiteral("mFileToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mFileToolBar);
        mLayerToolBar = new QToolBar(MainWindow);
        mLayerToolBar->setObjectName(QStringLiteral("mLayerToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mLayerToolBar);
        mDigitizeToolBar = new QToolBar(MainWindow);
        mDigitizeToolBar->setObjectName(QStringLiteral("mDigitizeToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mDigitizeToolBar);
        MainWindow->insertToolBarBreak(mDigitizeToolBar);
        mAdvancedDigitizeToolBar = new QToolBar(MainWindow);
        mAdvancedDigitizeToolBar->setObjectName(QStringLiteral("mAdvancedDigitizeToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mAdvancedDigitizeToolBar);
        mMapNavToolBar = new QToolBar(MainWindow);
        mMapNavToolBar->setObjectName(QStringLiteral("mMapNavToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mMapNavToolBar);
        mAttributesToolBar = new QToolBar(MainWindow);
        mAttributesToolBar->setObjectName(QStringLiteral("mAttributesToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mAttributesToolBar);
        MainWindow->insertToolBarBreak(mAttributesToolBar);
        mPluginToolBar = new QToolBar(MainWindow);
        mPluginToolBar->setObjectName(QStringLiteral("mPluginToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mPluginToolBar);
        mHelpToolBar = new QToolBar(MainWindow);
        mHelpToolBar->setObjectName(QStringLiteral("mHelpToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mHelpToolBar);
        mRasterToolBar = new QToolBar(MainWindow);
        mRasterToolBar->setObjectName(QStringLiteral("mRasterToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mRasterToolBar);
        mLabelToolBar = new QToolBar(MainWindow);
        mLabelToolBar->setObjectName(QStringLiteral("mLabelToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mLabelToolBar);
        mVectorToolBar = new QToolBar(MainWindow);
        mVectorToolBar->setObjectName(QStringLiteral("mVectorToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mVectorToolBar);
        mDatabaseToolBar = new QToolBar(MainWindow);
        mDatabaseToolBar->setObjectName(QStringLiteral("mDatabaseToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mDatabaseToolBar);
        mWebToolBar = new QToolBar(MainWindow);
        mWebToolBar->setObjectName(QStringLiteral("mWebToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mWebToolBar);
        mSnappingToolBar = new QToolBar(MainWindow);
        mSnappingToolBar->setObjectName(QStringLiteral("mSnappingToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mSnappingToolBar);
        mDataSourceManagerToolBar = new QToolBar(MainWindow);
        mDataSourceManagerToolBar->setObjectName(QStringLiteral("mDataSourceManagerToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mDataSourceManagerToolBar);
        mShapeDigitizeToolBar = new QToolBar(MainWindow);
        mShapeDigitizeToolBar->setObjectName(QStringLiteral("mShapeDigitizeToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mShapeDigitizeToolBar);
        mSelectionToolBar = new QToolBar(MainWindow);
        mSelectionToolBar->setObjectName(QStringLiteral("mSelectionToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mSelectionToolBar);

        menubar->addAction(mProjectMenu->menuAction());
        menubar->addAction(mEditMenu->menuAction());
        menubar->addAction(mViewMenu->menuAction());
        menubar->addAction(mLayerMenu->menuAction());
        menubar->addAction(mSettingsMenu->menuAction());
        menubar->addAction(mPluginMenu->menuAction());
        menubar->addAction(mVectorMenu->menuAction());
        menubar->addAction(mRasterMenu->menuAction());
        menubar->addAction(mMeshMenu->menuAction());
        menubar->addAction(mHelpMenu->menuAction());
        mProjectMenu->addAction(mActionNewProject);
        mProjectMenu->addAction(mProjectFromTemplateMenu->menuAction());
        mProjectMenu->addSeparator();
        mProjectMenu->addAction(mActionOpenProject);
        mProjectMenu->addAction(mProjectFromStorageMenu->menuAction());
        mProjectMenu->addAction(mRecentProjectsMenu->menuAction());
        mProjectMenu->addSeparator();
        mProjectMenu->addAction(mActionCloseProject);
        mProjectMenu->addSeparator();
        mProjectMenu->addAction(mActionSaveProject);
        mProjectMenu->addAction(mActionSaveProjectAs);
        mProjectMenu->addAction(mProjectToStorageMenu->menuAction());
        mProjectMenu->addAction(mActionRevertProject);
        mProjectMenu->addSeparator();
        mProjectMenu->addAction(mActionProjectProperties);
        mProjectMenu->addAction(mActionSnappingOptions);
        mProjectMenu->addAction(menuImport_Export->menuAction());
        mProjectMenu->addSeparator();
        mProjectMenu->addAction(mActionNewPrintLayout);
        mProjectMenu->addAction(mActionNewReport);
        mProjectMenu->addAction(mActionShowLayoutManager);
        mProjectMenu->addAction(mLayoutsMenu->menuAction());
        mProjectMenu->addSeparator();
        mProjectMenu->addAction(mActionExit);
        menuImport_Export->addAction(mActionSaveMapAsImage);
        menuImport_Export->addAction(mActionSaveMapAsPdf);
        menuImport_Export->addAction(mActionDxfExport);
        menuImport_Export->addSeparator();
        menuImport_Export->addAction(mActionDwgImport);
        mViewMenu->addAction(mActionNewMapCanvas);
        mViewMenu->addAction(mActionNew3DMapCanvas);
        mViewMenu->addAction(mActionPan);
        mViewMenu->addAction(mActionPanToSelected);
        mViewMenu->addAction(mActionZoomIn);
        mViewMenu->addAction(mActionZoomOut);
        mViewMenu->addSeparator();
        mViewMenu->addAction(mActionIdentify);
        mViewMenu->addAction(menuMeasure->menuAction());
        mViewMenu->addAction(mActionStatisticalSummary);
        mViewMenu->addSeparator();
        mViewMenu->addAction(mActionZoomFullExtent);
        mViewMenu->addAction(mActionZoomToSelected);
        mViewMenu->addAction(mActionZoomToLayer);
        mViewMenu->addAction(mActionZoomActualSize);
        mViewMenu->addAction(mActionZoomLast);
        mViewMenu->addAction(mActionZoomNext);
        mViewMenu->addSeparator();
        mViewMenu->addAction(menuDecorations->menuAction());
        mViewMenu->addAction(mMenuPreviewMode->menuAction());
        mViewMenu->addAction(mActionMapTips);
        mViewMenu->addAction(mActionNewBookmark);
        mViewMenu->addAction(mActionShowBookmarks);
        mViewMenu->addAction(mActionShowBookmarkManager);
        mViewMenu->addAction(mActionDraw);
        mViewMenu->addSeparator();
        mViewMenu->addAction(mActionShowAllLayers);
        mViewMenu->addAction(mActionHideAllLayers);
        mViewMenu->addAction(mActionShowSelectedLayers);
        mViewMenu->addAction(mActionHideSelectedLayers);
        mViewMenu->addAction(mActionToggleSelectedLayers);
        mViewMenu->addAction(mActionToggleSelectedLayersIndependently);
        mViewMenu->addAction(mActionHideDeselectedLayers);
        mViewMenu->addSeparator();
        menuMeasure->addAction(mActionMeasure);
        menuMeasure->addAction(mActionMeasureArea);
        menuMeasure->addAction(mActionMeasureAngle);
        menuDecorations->addAction(mActionDecorationGrid);
        menuDecorations->addAction(mActionDecorationScaleBar);
        menuDecorations->addAction(mActionDecorationImage);
        menuDecorations->addAction(mActionDecorationNorthArrow);
        menuDecorations->addAction(mActionDecorationTitle);
        menuDecorations->addAction(mActionDecorationCopyright);
        menuDecorations->addAction(mActionDecorationLayoutExtent);
        mMenuPreviewMode->addAction(mActionPreviewModeOff);
        mMenuPreviewMode->addAction(mActionPreviewModeMono);
        mMenuPreviewMode->addAction(mActionPreviewModeGrayscale);
        mMenuPreviewMode->addAction(mActionPreviewProtanope);
        mMenuPreviewMode->addAction(mActionPreviewDeuteranope);
        mMenuPreviewMode->addAction(mActionPreviewTritanope);
        mLayerMenu->addAction(mActionDataSourceManager);
        mLayerMenu->addAction(mNewLayerMenu->menuAction());
        mLayerMenu->addAction(mAddLayerMenu->menuAction());
        mLayerMenu->addAction(mActionEmbedLayers);
        mLayerMenu->addAction(mActionAddLayerDefinition);
        mLayerMenu->addSeparator();
        mLayerMenu->addAction(mActionCopyStyle);
        mLayerMenu->addAction(mActionPasteStyle);
        mLayerMenu->addSeparator();
        mLayerMenu->addAction(mActionCopyLayer);
        mLayerMenu->addAction(mActionPasteLayer);
        mLayerMenu->addSeparator();
        mLayerMenu->addAction(mActionOpenTable);
        mLayerMenu->addAction(mActionToggleEditing);
        mLayerMenu->addAction(mActionSaveLayerEdits);
        mLayerMenu->addAction(mActionAllEdits);
        mLayerMenu->addSeparator();
        mLayerMenu->addAction(mActionLayerSaveAs);
        mLayerMenu->addAction(mActionSaveLayerDefinition);
        mLayerMenu->addAction(mActionRemoveLayer);
        mLayerMenu->addAction(mActionDuplicateLayer);
        mLayerMenu->addAction(mActionSetLayerScaleVisibility);
        mLayerMenu->addAction(mActionSetLayerCRS);
        mLayerMenu->addAction(mActionSetProjectCRSFromLayer);
        mLayerMenu->addAction(mActionLayerProperties);
        mLayerMenu->addAction(mActionLayerSubsetString);
        mLayerMenu->addAction(mActionLabeling);
        mLayerMenu->addSeparator();
        mLayerMenu->addAction(mActionAddToOverview);
        mLayerMenu->addAction(mActionAddAllToOverview);
        mLayerMenu->addAction(mActionRemoveAllFromOverview);
        mNewLayerMenu->addAction(mActionNewGeoPackageLayer);
        mNewLayerMenu->addAction(mActionNewVectorLayer);
        mNewLayerMenu->addAction(mActionNewSpatiaLiteLayer);
        mNewLayerMenu->addAction(mActionNewMemoryLayer);
        mNewLayerMenu->addSeparator();
        mNewLayerMenu->addAction(mActionNewVirtualLayer);
        mAddLayerMenu->addAction(mActionAddOgrLayer);
        mAddLayerMenu->addAction(mActionAddRasterLayer);
        mAddLayerMenu->addAction(mActionAddMeshLayer);
        mAddLayerMenu->addAction(mActionAddDelimitedText);
        mAddLayerMenu->addAction(mActionAddPgLayer);
        mAddLayerMenu->addAction(mActionAddSpatiaLiteLayer);
        mAddLayerMenu->addAction(mActionAddMssqlLayer);
        mAddLayerMenu->addAction(mActionAddDb2Layer);
        mAddLayerMenu->addAction(mActionAddOracleLayer);
        mAddLayerMenu->addAction(mActionAddVirtualLayer);
        mAddLayerMenu->addAction(mActionAddWmsLayer);
        mAddLayerMenu->addAction(mActionAddXyzLayer);
        mAddLayerMenu->addAction(mActionAddAmsLayer);
        mAddLayerMenu->addAction(mActionAddLayerSeparator);
        mAddLayerMenu->addAction(mActionAddWcsLayer);
        mAddLayerMenu->addAction(mActionAddWfsLayer);
        mAddLayerMenu->addAction(mActionAddAfsLayer);
        mAddLayerMenu->addAction(mActionAddVectorTileLayer);
        mAddLayerMenu->addAction(mActionAddPointCloudLayer);
        mPluginMenu->addAction(mActionManagePlugins);
        mPluginMenu->addSeparator();
        mPluginMenu->addAction(mActionShowPythonDialog);
        mHelpMenu->addAction(mActionHelpContents);
        mHelpMenu->addAction(mActionHelpAPI);
        mHelpMenu->addSeparator();
        mHelpMenu->addAction(mMenuPluginHelp->menuAction());
        mHelpMenu->addSeparator();
        mHelpMenu->addAction(mActionReportaBug);
        mHelpMenu->addAction(mActionNeedSupport);
        mHelpMenu->addSeparator();
        mHelpMenu->addAction(mActionQgisHomePage);
        mHelpMenu->addAction(mActionCheckQgisVersion);
        mHelpMenu->addSeparator();
        mHelpMenu->addAction(mActionAbout);
        mHelpMenu->addAction(mActionSponsors);
        mSettingsMenu->addAction(mActionStyleManager);
        mSettingsMenu->addAction(mActionCustomProjection);
        mSettingsMenu->addSeparator();
        mSettingsMenu->addAction(mActionConfigureShortcuts);
        mSettingsMenu->addAction(mActionCustomization);
        mSettingsMenu->addSeparator();
        mSettingsMenu->addAction(mActionOptions);
        mRasterMenu->addAction(mActionShowRasterCalculator);
        mRasterMenu->addAction(mActionShowAlignRasterTool);
        mRasterMenu->addAction(mActionShowGeoreferencer);
        mEditMenu->addAction(mActionUndo);
        mEditMenu->addAction(mActionRedo);
        mEditMenu->addSeparator();
        mEditMenu->addAction(mActionCutFeatures);
        mEditMenu->addAction(mActionCopyFeatures);
        mEditMenu->addAction(mActionPasteFeatures);
        mEditMenu->addAction(mMenuPasteAs->menuAction());
        mEditMenu->addAction(menuSelect->menuAction());
        mEditMenu->addSeparator();
        mEditMenu->addAction(mActionAddFeature);
        mEditMenu->addAction(mActionCircularStringCurvePoint);
        mEditMenu->addAction(mActionCircularStringRadius);
        mEditMenu->addAction(mMenuCircle->menuAction());
        mEditMenu->addAction(mMenuRectangle->menuAction());
        mEditMenu->addAction(mMenuRegularPolygon->menuAction());
        mEditMenu->addAction(mMenuEllipse->menuAction());
        mEditMenu->addAction(mMenuAnnotation->menuAction());
        mEditMenu->addAction(mActionMoveFeature);
        mEditMenu->addAction(mActionMoveFeatureCopy);
        mEditMenu->addAction(mActionDeleteSelected);
        mEditMenu->addAction(mActionMultiEditAttributes);
        mEditMenu->addSeparator();
        mEditMenu->addAction(mActionRotateFeature);
        mEditMenu->addAction(mActionSimplifyFeature);
        mEditMenu->addAction(mActionAddRing);
        mEditMenu->addAction(mActionAddPart);
        mEditMenu->addAction(mActionFillRing);
        mEditMenu->addAction(mActionDeleteRing);
        mEditMenu->addAction(mActionDeletePart);
        mEditMenu->addAction(mActionReshapeFeatures);
        mEditMenu->addAction(mActionOffsetCurve);
        mEditMenu->addAction(mActionSplitFeatures);
        mEditMenu->addAction(mActionSplitParts);
        mEditMenu->addAction(mActionMergeFeatures);
        mEditMenu->addAction(mActionMergeFeatureAttributes);
        mEditMenu->addAction(mActionVertexTool);
        mEditMenu->addAction(mActionRotatePointSymbols);
        mEditMenu->addAction(mActionOffsetPointSymbol);
        mEditMenu->addAction(mActionReverseLine);
        mEditMenu->addAction(mActionTrimExtendFeature);
        menuSelect->addAction(mActionSelectFeatures);
        menuSelect->addAction(mActionSelectPolygon);
        menuSelect->addAction(mActionSelectFreehand);
        menuSelect->addAction(mActionSelectRadius);
        menuSelect->addAction(mActionSelectByForm);
        menuSelect->addAction(mActionSelectByExpression);
        menuSelect->addAction(mActionDeselectAll);
        menuSelect->addAction(mActionDeselectActiveLayer);
        menuSelect->addAction(mActionReselect);
        menuSelect->addAction(mActionSelectAll);
        menuSelect->addAction(mActionInvertSelection);
        mMenuPasteAs->addAction(mActionPasteAsNewVector);
        mMenuPasteAs->addAction(mActionPasteAsNewMemoryVector);
        mMenuCircle->addAction(mActionCircle2Points);
        mMenuCircle->addAction(mActionCircle3Points);
        mMenuCircle->addAction(mActionCircle3Tangents);
        mMenuCircle->addAction(mActionCircle2TangentsPoint);
        mMenuCircle->addAction(mActionCircleCenterPoint);
        mMenuEllipse->addAction(mActionEllipseCenter2Points);
        mMenuEllipse->addAction(mActionEllipseCenterPoint);
        mMenuEllipse->addAction(mActionEllipseExtent);
        mMenuEllipse->addAction(mActionEllipseFoci);
        mMenuRectangle->addAction(mActionRectangleExtent);
        mMenuRectangle->addAction(mActionRectangleCenterPoint);
        mMenuRectangle->addAction(mActionRectangle3PointsDistance);
        mMenuRectangle->addAction(mActionRectangle3PointsProjected);
        mMenuRegularPolygon->addAction(mActionRegularPolygonCenterPoint);
        mMenuRegularPolygon->addAction(mActionRegularPolygonCenterCorner);
        mMenuRegularPolygon->addAction(mActionRegularPolygon2Points);
        mMenuAnnotation->addAction(mActionTextAnnotation);
        mMenuAnnotation->addAction(mActionFormAnnotation);
        mMenuAnnotation->addAction(mActionHtmlAnnotation);
        mMenuAnnotation->addAction(mActionSvgAnnotation);
        mMeshMenu->addAction(mActionShowMeshCalculator);
        mFileToolBar->addAction(mActionNewProject);
        mFileToolBar->addAction(mActionOpenProject);
        mFileToolBar->addAction(mActionSaveProject);
        mFileToolBar->addAction(mActionNewPrintLayout);
        mFileToolBar->addAction(mActionShowLayoutManager);
        mFileToolBar->addAction(mActionStyleManager);
        mLayerToolBar->addAction(mActionAddOgrLayer);
        mLayerToolBar->addAction(mActionAddRasterLayer);
        mLayerToolBar->addAction(mActionAddMeshLayer);
        mLayerToolBar->addAction(mActionAddDelimitedText);
        mLayerToolBar->addAction(mActionAddSpatiaLiteLayer);
        mLayerToolBar->addAction(mActionAddVirtualLayer);
        mLayerToolBar->addAction(mActionAddWmsLayer);
        mLayerToolBar->addAction(mActionAddWcsLayer);
        mLayerToolBar->addAction(mActionAddWfsLayer);
        mDigitizeToolBar->addAction(mActionAllEdits);
        mDigitizeToolBar->addAction(mActionToggleEditing);
        mDigitizeToolBar->addAction(mActionSaveLayerEdits);
        mDigitizeToolBar->addAction(mActionAddFeature);
        mDigitizeToolBar->addAction(mActionVertexTool);
        mDigitizeToolBar->addAction(mActionMultiEditAttributes);
        mDigitizeToolBar->addAction(mActionDeleteSelected);
        mDigitizeToolBar->addAction(mActionCutFeatures);
        mDigitizeToolBar->addAction(mActionCopyFeatures);
        mDigitizeToolBar->addAction(mActionPasteFeatures);
        mDigitizeToolBar->addAction(mActionUndo);
        mDigitizeToolBar->addAction(mActionRedo);
        mAdvancedDigitizeToolBar->addAction(mActionDigitizeWithCurve);
        mAdvancedDigitizeToolBar->addAction(mActionRotateFeature);
        mAdvancedDigitizeToolBar->addAction(mActionSimplifyFeature);
        mAdvancedDigitizeToolBar->addAction(mActionAddRing);
        mAdvancedDigitizeToolBar->addAction(mActionAddPart);
        mAdvancedDigitizeToolBar->addAction(mActionFillRing);
        mAdvancedDigitizeToolBar->addAction(mActionDeleteRing);
        mAdvancedDigitizeToolBar->addAction(mActionDeletePart);
        mAdvancedDigitizeToolBar->addAction(mActionReshapeFeatures);
        mAdvancedDigitizeToolBar->addAction(mActionOffsetCurve);
        mAdvancedDigitizeToolBar->addAction(mActionReverseLine);
        mAdvancedDigitizeToolBar->addAction(mActionTrimExtendFeature);
        mAdvancedDigitizeToolBar->addAction(mActionSplitFeatures);
        mAdvancedDigitizeToolBar->addAction(mActionSplitParts);
        mAdvancedDigitizeToolBar->addAction(mActionMergeFeatures);
        mAdvancedDigitizeToolBar->addAction(mActionMergeFeatureAttributes);
        mMapNavToolBar->addAction(mActionPan);
        mMapNavToolBar->addAction(mActionPanToSelected);
        mMapNavToolBar->addAction(mActionZoomIn);
        mMapNavToolBar->addAction(mActionZoomOut);
        mMapNavToolBar->addAction(mActionZoomFullExtent);
        mMapNavToolBar->addAction(mActionZoomToSelected);
        mMapNavToolBar->addAction(mActionZoomToLayer);
        mMapNavToolBar->addAction(mActionZoomActualSize);
        mMapNavToolBar->addAction(mActionZoomLast);
        mMapNavToolBar->addAction(mActionZoomNext);
        mMapNavToolBar->addAction(mActionNewMapCanvas);
        mMapNavToolBar->addAction(mActionNew3DMapCanvas);
        mMapNavToolBar->addAction(mActionNewBookmark);
        mMapNavToolBar->addAction(mActionShowBookmarks);
        mMapNavToolBar->addAction(mActionTemporalController);
        mMapNavToolBar->addAction(mActionDraw);
        mAttributesToolBar->addAction(mActionIdentify);
        mAttributesToolBar->addAction(mActionOpenTable);
        mAttributesToolBar->addAction(mActionOpenFieldCalc);
        mAttributesToolBar->addAction(mActionStatisticalSummary);
        mAttributesToolBar->addAction(mActionMapTips);
        mPluginToolBar->addAction(mActionShowPythonDialog);
        mHelpToolBar->addAction(mActionHelpContents);
        mRasterToolBar->addAction(mActionLocalCumulativeCutStretch);
        mRasterToolBar->addAction(mActionFullCumulativeCutStretch);
        mRasterToolBar->addAction(mActionLocalHistogramStretch);
        mRasterToolBar->addAction(mActionFullHistogramStretch);
        mRasterToolBar->addAction(mActionIncreaseBrightness);
        mRasterToolBar->addAction(mActionDecreaseBrightness);
        mRasterToolBar->addAction(mActionIncreaseContrast);
        mRasterToolBar->addAction(mActionDecreaseContrast);
        mRasterToolBar->addAction(mActionIncreaseGamma);
        mRasterToolBar->addAction(mActionDecreaseGamma);
        mLabelToolBar->addAction(mActionLabeling);
        mLabelToolBar->addAction(mActionDiagramProperties);
        mLabelToolBar->addSeparator();
        mLabelToolBar->addAction(mActionShowPinnedLabels);
        mLabelToolBar->addAction(mActionShowUnplacedLabels);
        mLabelToolBar->addSeparator();
        mLabelToolBar->addAction(mActionPinLabels);
        mLabelToolBar->addAction(mActionShowHideLabels);
        mLabelToolBar->addAction(mActionMoveLabel);
        mLabelToolBar->addAction(mActionRotateLabel);
        mLabelToolBar->addAction(mActionChangeLabelProperties);
        mDataSourceManagerToolBar->addAction(mActionDataSourceManager);
        mDataSourceManagerToolBar->addAction(mActionNewGeoPackageLayer);
        mDataSourceManagerToolBar->addAction(mActionNewVectorLayer);
        mDataSourceManagerToolBar->addAction(mActionNewSpatiaLiteLayer);
        mDataSourceManagerToolBar->addAction(mActionNewMemoryLayer);
        mDataSourceManagerToolBar->addSeparator();
        mDataSourceManagerToolBar->addAction(mActionNewVirtualLayer);
        mDataSourceManagerToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        mActionNewProject->setText(QApplication::translate("MainWindow", "&New", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewProject->setToolTip(QApplication::translate("MainWindow", "New Project", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionNewProject->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        mActionOpenProject->setText(QApplication::translate("MainWindow", "&Open\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionOpenProject->setToolTip(QApplication::translate("MainWindow", "Open Project", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionOpenProject->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSaveProject->setText(QApplication::translate("MainWindow", "&Save", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveProject->setToolTip(QApplication::translate("MainWindow", "Save Project", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSaveProject->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSaveProjectAs->setText(QApplication::translate("MainWindow", "Save &As\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveProjectAs->setToolTip(QApplication::translate("MainWindow", "Save Project As", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSaveProjectAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSaveMapAsImage->setText(QApplication::translate("MainWindow", "Export Map to &Image\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveMapAsImage->setToolTip(QApplication::translate("MainWindow", "Save Map as Image", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSaveMapAsPdf->setText(QApplication::translate("MainWindow", "Export Map to &PDF\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveMapAsPdf->setToolTip(QApplication::translate("MainWindow", "Save Map as PDF", nullptr));
#endif // QT_NO_TOOLTIP
        mActionNewMapCanvas->setText(QApplication::translate("MainWindow", "New &Map View", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewMapCanvas->setToolTip(QApplication::translate("MainWindow", "New Map View", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionNewMapCanvas->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        mActionExit->setText(QApplication::translate("MainWindow", "Exit QGIS", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        mActionUndo->setText(QApplication::translate("MainWindow", "&Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        mActionRedo->setText(QApplication::translate("MainWindow", "&Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_NO_SHORTCUT
        mActionCutFeatures->setText(QApplication::translate("MainWindow", "Cut Features", nullptr));
        mActionCopyFeatures->setText(QApplication::translate("MainWindow", "Copy Features", nullptr));
        mActionPasteFeatures->setText(QApplication::translate("MainWindow", "Paste Features", nullptr));
        mActionAddFeature->setText(QApplication::translate("MainWindow", "Add Feature", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddFeature->setShortcut(QApplication::translate("MainWindow", "Ctrl+.", nullptr));
#endif // QT_NO_SHORTCUT
        mActionMoveFeature->setText(QApplication::translate("MainWindow", "Move Feature(s)", nullptr));
        mActionReshapeFeatures->setText(QApplication::translate("MainWindow", "Reshape Features", nullptr));
        mActionSplitFeatures->setText(QApplication::translate("MainWindow", "Split Features", nullptr));
        mActionSplitParts->setText(QApplication::translate("MainWindow", "Split Parts", nullptr));
        mActionDeleteSelected->setText(QApplication::translate("MainWindow", "Delete Selected", nullptr));
        mActionAddRing->setText(QApplication::translate("MainWindow", "Add Ring", nullptr));
        mActionAddPart->setText(QApplication::translate("MainWindow", "Add Part", nullptr));
        mActionSimplifyFeature->setText(QApplication::translate("MainWindow", "Simplify Feature", nullptr));
        mActionDeleteRing->setText(QApplication::translate("MainWindow", "Delete Ring", nullptr));
        mActionDeletePart->setText(QApplication::translate("MainWindow", "Delete Part", nullptr));
        mActionMergeFeatures->setText(QApplication::translate("MainWindow", "Merge Selected Features", nullptr));
        mActionMergeFeatureAttributes->setText(QApplication::translate("MainWindow", "Merge Attributes of Selected Features", nullptr));
        mActionVertexTool->setText(QApplication::translate("MainWindow", "&Vertex Tool (All Layers)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionVertexTool->setToolTip(QApplication::translate("MainWindow", "Vertex Tool (All Layers)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRotatePointSymbols->setText(QApplication::translate("MainWindow", "Rotate Point Symbols", nullptr));
        mActionOffsetPointSymbol->setText(QApplication::translate("MainWindow", "Offset Point Symbol", nullptr));
        mActionReverseLine->setText(QApplication::translate("MainWindow", "Reverse line", nullptr));
        mActionTrimExtendFeature->setText(QApplication::translate("MainWindow", "Trim/Extend Feature", nullptr));
        mActionSnappingOptions->setText(QApplication::translate("MainWindow", "&Snapping Options\342\200\246", nullptr));
        mActionPan->setText(QApplication::translate("MainWindow", "Pan Map", nullptr));
        mActionZoomIn->setText(QApplication::translate("MainWindow", "Zoom In", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionZoomIn->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt++", nullptr));
#endif // QT_NO_SHORTCUT
        mActionZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionZoomOut->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+-", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSelectFeatures->setText(QApplication::translate("MainWindow", "Select Feature(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSelectFeatures->setToolTip(QApplication::translate("MainWindow", "Select Features by Area or Single Click", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSelectPolygon->setText(QApplication::translate("MainWindow", "Select Features by Polygon", nullptr));
        mActionSelectFreehand->setText(QApplication::translate("MainWindow", "Select Features by Freehand", nullptr));
        mActionSelectRadius->setText(QApplication::translate("MainWindow", "Select Features by Radius", nullptr));
        mActionDeselectAll->setText(QApplication::translate("MainWindow", "Deselect Features from All Layers", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionDeselectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
        mActionDeselectActiveLayer->setText(QApplication::translate("MainWindow", "Deselect Features from the Current Active Layer", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionDeselectActiveLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSelectAll->setText(QApplication::translate("MainWindow", "Select All Features", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSelectAll->setToolTip(QApplication::translate("MainWindow", "Select All Features", nullptr));
#endif // QT_NO_TOOLTIP
        mActionInvertSelection->setText(QApplication::translate("MainWindow", "Invert Feature Selection", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionInvertSelection->setToolTip(QApplication::translate("MainWindow", "Invert Feature Selection", nullptr));
#endif // QT_NO_TOOLTIP
        mActionIdentify->setText(QApplication::translate("MainWindow", "Identify Features", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionIdentify->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+I", nullptr));
#endif // QT_NO_SHORTCUT
        mActionMeasure->setText(QApplication::translate("MainWindow", "Measure Line", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionMeasure->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+M", nullptr));
#endif // QT_NO_SHORTCUT
        mActionMeasureArea->setText(QApplication::translate("MainWindow", "Measure Area", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionMeasureArea->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+J", nullptr));
#endif // QT_NO_SHORTCUT
        mActionMeasureAngle->setText(QApplication::translate("MainWindow", "Measure Angle", nullptr));
        mActionZoomFullExtent->setText(QApplication::translate("MainWindow", "Zoom &Full", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionZoomFullExtent->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F", nullptr));
#endif // QT_NO_SHORTCUT
        mActionZoomToLayer->setText(QApplication::translate("MainWindow", "Zoom to &Layer", nullptr));
        mActionZoomToSelected->setText(QApplication::translate("MainWindow", "Zoom to &Selection", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionZoomToSelected->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_NO_SHORTCUT
        mActionZoomLast->setText(QApplication::translate("MainWindow", "Zoom Last", nullptr));
        mActionZoomNext->setText(QApplication::translate("MainWindow", "Zoom Next", nullptr));
        mActionZoomActualSize->setText(QApplication::translate("MainWindow", "Zoom to Native Resolution (100%)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionZoomActualSize->setToolTip(QApplication::translate("MainWindow", "Zoom to Native Resolution (100%)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionMapTips->setText(QApplication::translate("MainWindow", "Show Map Tips", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionMapTips->setStatusTip(QApplication::translate("MainWindow", "Show information about a feature when the mouse is hovered over it", nullptr));
#endif // QT_NO_STATUSTIP
        mActionNewBookmark->setText(QApplication::translate("MainWindow", "New Spatial Bookmark\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionNewBookmark->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        mActionShowBookmarks->setText(QApplication::translate("MainWindow", "Show Spatial Bookmarks", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionShowBookmarks->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_NO_SHORTCUT
        mActionShowBookmarkManager->setText(QApplication::translate("MainWindow", "Show Spatial Bookmark Manager", nullptr));
        mActionDraw->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionDraw->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        mActionTextAnnotation->setText(QApplication::translate("MainWindow", "Text Annotation", nullptr));
        mActionFormAnnotation->setText(QApplication::translate("MainWindow", "Form Annotation", nullptr));
        mActionAnnotation->setText(QApplication::translate("MainWindow", "Move Annotation", nullptr));
        mActionLabeling->setText(QApplication::translate("MainWindow", "Labeling", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionLabeling->setToolTip(QApplication::translate("MainWindow", "Layer Labeling Options", nullptr));
#endif // QT_NO_TOOLTIP
        mActionNewVectorLayer->setText(QApplication::translate("MainWindow", "New Shapefile Layer\342\200\246", nullptr));
        mActionNewSpatiaLiteLayer->setText(QApplication::translate("MainWindow", "New SpatiaLite Layer\342\200\246", nullptr));
        mActionShowRasterCalculator->setText(QApplication::translate("MainWindow", "Raster Calculator\342\200\246", nullptr));
        mActionAddOgrLayer->setText(QApplication::translate("MainWindow", "Add Vector Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddOgrLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddRasterLayer->setText(QApplication::translate("MainWindow", "Add Raster Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddRasterLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddPgLayer->setText(QApplication::translate("MainWindow", "Add PostGIS Layers\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddPgLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddSpatiaLiteLayer->setText(QApplication::translate("MainWindow", "Add SpatiaLite Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddSpatiaLiteLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+L", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddMssqlLayer->setText(QApplication::translate("MainWindow", "Add MSSQL Spatial Layer\342\200\246", nullptr));
        mActionAddDb2Layer->setText(QApplication::translate("MainWindow", "Add DB2 Spatial Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddDb2Layer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+2", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddOracleLayer->setText(QApplication::translate("MainWindow", "Add Oracle Spatial Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddOracleLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddWmsLayer->setText(QApplication::translate("MainWindow", "Add WMS/WMTS Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionAddWmsLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_NO_SHORTCUT
        mActionOpenTable->setText(QApplication::translate("MainWindow", "Open &Attribute Table", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionOpenTable->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        mActionToggleEditing->setText(QApplication::translate("MainWindow", "Toggle Editing", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionToggleEditing->setStatusTip(QApplication::translate("MainWindow", "Toggles the editing state of the current layer", nullptr));
#endif // QT_NO_STATUSTIP
        mActionSaveEdits->setText(QApplication::translate("MainWindow", "Save for Selected Layer(s)", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionSaveEdits->setStatusTip(QApplication::translate("MainWindow", "Save edits to current layer, but continue editing", nullptr));
#endif // QT_NO_STATUSTIP
        mActionLayerSaveAs->setText(QApplication::translate("MainWindow", "&Save As\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionLayerSaveAs->setToolTip(QApplication::translate("MainWindow", "Save Layer As", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRemoveLayer->setText(QApplication::translate("MainWindow", "Remove Layer/Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRemoveLayer->setToolTip(QApplication::translate("MainWindow", "Remove Layer/Group", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionRemoveLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSetLayerCRS->setText(QApplication::translate("MainWindow", "Set CRS of Layer(s)", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionSetLayerCRS->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_NO_SHORTCUT
        mActionSetProjectCRSFromLayer->setText(QApplication::translate("MainWindow", "Set Project CRS from Layer", nullptr));
        mActionLayerProperties->setText(QApplication::translate("MainWindow", "Layer &Properties\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionLayerProperties->setToolTip(QApplication::translate("MainWindow", "Layer Properties", nullptr));
#endif // QT_NO_TOOLTIP
        mActionLayerSubsetString->setText(QApplication::translate("MainWindow", "Filter\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionLayerSubsetString->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddToOverview->setText(QApplication::translate("MainWindow", "Show in Overview", nullptr));
        mActionAddAllToOverview->setText(QApplication::translate("MainWindow", "Show All in Overview", nullptr));
        mActionRemoveAllFromOverview->setText(QApplication::translate("MainWindow", "Hide All from Overview", nullptr));
        mActionShowAllLayers->setText(QApplication::translate("MainWindow", "Show All Layers", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionShowAllLayers->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+U", nullptr));
#endif // QT_NO_SHORTCUT
        mActionHideAllLayers->setText(QApplication::translate("MainWindow", "Hide All Layers", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionHideAllLayers->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+H", nullptr));
#endif // QT_NO_SHORTCUT
        mActionManagePlugins->setText(QApplication::translate("MainWindow", "Manage and Install Plugins\342\200\246", nullptr));
        mActionToggleFullScreen->setText(QApplication::translate("MainWindow", "Toggle Full Scr&een Mode", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionToggleFullScreen->setShortcut(QApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        mActionTogglePanelsVisibility->setText(QApplication::translate("MainWindow", "Toggle Panel &Visibility", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionTogglePanelsVisibility->setShortcut(QApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_NO_SHORTCUT
        mActionToggleMapOnly->setText(QApplication::translate("MainWindow", "Toggle Map Only", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionToggleMapOnly->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Tab", nullptr));
#endif // QT_NO_SHORTCUT
        mActionProjectProperties->setText(QApplication::translate("MainWindow", "&Properties\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionProjectProperties->setToolTip(QApplication::translate("MainWindow", "Project Properties", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionProjectProperties->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_NO_SHORTCUT
        mActionOptions->setText(QApplication::translate("MainWindow", "&Options\342\200\246", nullptr));
        mActionCustomProjection->setText(QApplication::translate("MainWindow", "Custom Projections\342\200\246", nullptr));
        mActionConfigureShortcuts->setText(QApplication::translate("MainWindow", "Keyboard Shortcuts\342\200\246", nullptr));
        mActionLocalHistogramStretch->setText(QApplication::translate("MainWindow", "Local Histogram Stretch", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionLocalHistogramStretch->setStatusTip(QApplication::translate("MainWindow", "Stretch histogram of active raster to view extents", nullptr));
#endif // QT_NO_STATUSTIP
        mActionHelpContents->setText(QApplication::translate("MainWindow", "Help Contents", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionHelpContents->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        mActionHelpAPI->setText(QApplication::translate("MainWindow", "API Documentation", nullptr));
        mActionQgisHomePage->setText(QApplication::translate("MainWindow", "QGIS Home Page", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionQgisHomePage->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        mActionCheckQgisVersion->setText(QApplication::translate("MainWindow", "Check QGIS Version", nullptr));
#ifndef QT_NO_STATUSTIP
        mActionCheckQgisVersion->setStatusTip(QApplication::translate("MainWindow", "Check if your QGIS version is up to date (requires internet access)", nullptr));
#endif // QT_NO_STATUSTIP
        mActionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        mActionSponsors->setText(QApplication::translate("MainWindow", "QGIS Sustaining Members", nullptr));
        mActionMoveLabel->setText(QApplication::translate("MainWindow", "Move Label and Diagram", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionMoveLabel->setToolTip(QApplication::translate("MainWindow", "Moves a Label or Diagram\n"
"Acts on all layers.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRotateLabel->setText(QApplication::translate("MainWindow", "Rotate Label", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRotateLabel->setToolTip(QApplication::translate("MainWindow", "Rotates a Label\n"
"Holding Ctrl (Cmd) while rotating increments by 15 deg.\n"
"Acts on all layers.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionChangeLabelProperties->setText(QApplication::translate("MainWindow", "Change Label", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionChangeLabelProperties->setToolTip(QApplication::translate("MainWindow", "Change Label Properties\n"
"Allows customization of individual label properties such as font size and color.\n"
"Acts on all layers.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionStyleManager->setText(QApplication::translate("MainWindow", "Style Manager\342\200\246", nullptr));
        mActionShowPythonDialog->setText(QApplication::translate("MainWindow", "Python Console", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionShowPythonDialog->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+P", nullptr));
#endif // QT_NO_SHORTCUT
        mActionFullHistogramStretch->setText(QApplication::translate("MainWindow", "Full Histogram Stretch", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionFullHistogramStretch->setToolTip(QApplication::translate("MainWindow", "Stretch Histogram to Full Dataset", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCustomization->setText(QApplication::translate("MainWindow", "Interface Customization\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        actionActionCatchForCustomization->setToolTip(QApplication::translate("MainWindow", "This is here just to avoid shortcut conflicts, the shortcut is caught in QgsCustomization", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionActionCatchForCustomization->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        mActionEmbedLayers->setText(QApplication::translate("MainWindow", "Embed Layers and Groups\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEmbedLayers->setToolTip(QApplication::translate("MainWindow", "Embed Layers and Groups from other Project Files", nullptr));
#endif // QT_NO_TOOLTIP
        mActionDecorationTitle->setText(QApplication::translate("MainWindow", "&Title Label\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationTitle->setToolTip(QApplication::translate("MainWindow", "Title Label", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mActionDecorationTitle->setWhatsThis(QApplication::translate("MainWindow", "Creates a title label that is displayed on the map canvas.", nullptr));
#endif // QT_NO_WHATSTHIS
        mActionDecorationCopyright->setText(QApplication::translate("MainWindow", "&Copyright Label\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationCopyright->setToolTip(QApplication::translate("MainWindow", "Copyright Label", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mActionDecorationCopyright->setWhatsThis(QApplication::translate("MainWindow", "Creates a copyright label that is displayed on the map canvas.", nullptr));
#endif // QT_NO_WHATSTHIS
        mActionDecorationImage->setText(QApplication::translate("MainWindow", "&Image\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationImage->setToolTip(QApplication::translate("MainWindow", "Image", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mActionDecorationImage->setWhatsThis(QApplication::translate("MainWindow", "\"Creates an image that is displayed on the map canvas\"", nullptr));
#endif // QT_NO_WHATSTHIS
        mActionDecorationNorthArrow->setText(QApplication::translate("MainWindow", "&North Arrow\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationNorthArrow->setToolTip(QApplication::translate("MainWindow", "North Arrow", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mActionDecorationNorthArrow->setWhatsThis(QApplication::translate("MainWindow", "\"Creates a north arrow that is displayed on the map canvas\"", nullptr));
#endif // QT_NO_WHATSTHIS
        mActionDecorationScaleBar->setText(QApplication::translate("MainWindow", "&Scale Bar\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationScaleBar->setToolTip(QApplication::translate("MainWindow", "Scale Bar", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mActionDecorationScaleBar->setWhatsThis(QApplication::translate("MainWindow", "Creates a scale bar that is displayed on the map canvas", nullptr));
#endif // QT_NO_WHATSTHIS
        mActionAddWfsLayer->setText(QApplication::translate("MainWindow", "Add WFS Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddWfsLayer->setToolTip(QApplication::translate("MainWindow", "Add WFS Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionFeatureAction->setText(QApplication::translate("MainWindow", "Feature Action", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionFeatureAction->setToolTip(QApplication::translate("MainWindow", "Run Feature Action", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPanToSelected->setText(QApplication::translate("MainWindow", "Pan Map to Selection", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPanToSelected->setToolTip(QApplication::translate("MainWindow", "Pan Map to Selection", nullptr));
#endif // QT_NO_TOOLTIP
        mActionOffsetCurve->setText(QApplication::translate("MainWindow", "Offset Curve", nullptr));
        mActionCopyStyle->setText(QApplication::translate("MainWindow", "Copy Style", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCopyStyle->setToolTip(QApplication::translate("MainWindow", "Copy Style", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPasteStyle->setText(QApplication::translate("MainWindow", "Paste Style", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPasteStyle->setToolTip(QApplication::translate("MainWindow", "Paste Style", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddWcsLayer->setText(QApplication::translate("MainWindow", "Add WCS Layer\342\200\246", nullptr));
        mActionDecorationGrid->setText(QApplication::translate("MainWindow", "&Grid\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationGrid->setToolTip(QApplication::translate("MainWindow", "Grid", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mActionDecorationGrid->setWhatsThis(QApplication::translate("MainWindow", "Creates a scale bar that is displayed on the map canvas", nullptr));
#endif // QT_NO_WHATSTHIS
        mActionPinLabels->setText(QApplication::translate("MainWindow", "Pin/Unpin Labels and Diagrams", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPinLabels->setToolTip(QApplication::translate("MainWindow", "Pin/Unpin Labels and Diagrams\n"
"Click or marquee on label/diagram to pin.\n"
"Shift clicking or marqueeing unpins labels, while Ctrl (Cmd) toggles label state.\n"
"Acts on all layers.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowPinnedLabels->setText(QApplication::translate("MainWindow", "Highlight Pinned Labels and Diagrams", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionShowPinnedLabels->setToolTip(QApplication::translate("MainWindow", "Highlight Pinned Labels and Diagrams\n"
"Shows highlight rectangles around labels which are fixed in place, e.g. due to manual placement.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionNewBlankProject->setText(QApplication::translate("MainWindow", "New Blank Project", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewBlankProject->setToolTip(QApplication::translate("MainWindow", "New Blank Project", nullptr));
#endif // QT_NO_TOOLTIP
        mActionLocalCumulativeCutStretch->setText(QApplication::translate("MainWindow", "Local Cumulative Cut Stretch", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionLocalCumulativeCutStretch->setToolTip(QApplication::translate("MainWindow", "Local cumulative cut stretch using current extent, default limits and estimated values.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionFullCumulativeCutStretch->setText(QApplication::translate("MainWindow", "Full Dataset Cumulative Cut Stretch", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionFullCumulativeCutStretch->setToolTip(QApplication::translate("MainWindow", "Cumulative cut stretch using full dataset extent, default limits and estimated values.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowHideLabels->setText(QApplication::translate("MainWindow", "Show/Hide Labels and Diagrams", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionShowHideLabels->setToolTip(QApplication::translate("MainWindow", "Show/Hide Labels and Diagrams\n"
"Click or marquee on features to show individual labels or diagrams.\n"
"Shift+click or marquee on a label or diagram to hide it.\n"
"Acts on the currently active layer only.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionHtmlAnnotation->setText(QApplication::translate("MainWindow", "HTML Annotation", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionHtmlAnnotation->setToolTip(QApplication::translate("MainWindow", "HTML Annotation", nullptr));
#endif // QT_NO_TOOLTIP
        mActionDuplicateLayer->setText(QApplication::translate("MainWindow", "Duplicate Layer(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDuplicateLayer->setToolTip(QApplication::translate("MainWindow", "Duplicate Layer(s)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSvgAnnotation->setText(QApplication::translate("MainWindow", "SVG Annotation", nullptr));
        mActionSaveAllEdits->setText(QApplication::translate("MainWindow", "Save for All Layers", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveAllEdits->setToolTip(QApplication::translate("MainWindow", "Save for All Layers", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionSaveAllEdits->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mActionRollbackAllEdits->setText(QApplication::translate("MainWindow", "Rollback for All Layers", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRollbackAllEdits->setToolTip(QApplication::translate("MainWindow", "Rollback for All Layers", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionRollbackAllEdits->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mActionCancelAllEdits->setText(QApplication::translate("MainWindow", "Cancel for All Layers", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCancelAllEdits->setToolTip(QApplication::translate("MainWindow", "Cancel for All Layers", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionCancelAllEdits->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mActionRollbackEdits->setText(QApplication::translate("MainWindow", "Rollback for Selected Layer(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRollbackEdits->setToolTip(QApplication::translate("MainWindow", "Rollback for Selected Layer(s)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionRollbackEdits->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mActionAllEdits->setText(QApplication::translate("MainWindow", "Current Edits", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAllEdits->setToolTip(QApplication::translate("MainWindow", "Current Edits", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionAllEdits->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mActionCancelEdits->setText(QApplication::translate("MainWindow", "Cancel for Selected Layer(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCancelEdits->setToolTip(QApplication::translate("MainWindow", "Cancel for Selected Layer(s)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        mActionCancelEdits->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        mActionSaveLayerEdits->setText(QApplication::translate("MainWindow", "Save Layer Edits", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveLayerEdits->setToolTip(QApplication::translate("MainWindow", "Save Layer Edits", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRotateFeature->setText(QApplication::translate("MainWindow", "Rotate Feature(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRotateFeature->setToolTip(QApplication::translate("MainWindow", "Rotate Feature(s)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionIncreaseBrightness->setText(QApplication::translate("MainWindow", "Increase Brightness", nullptr));
        mActionDecreaseBrightness->setText(QApplication::translate("MainWindow", "Decrease Brightness", nullptr));
        mActionIncreaseContrast->setText(QApplication::translate("MainWindow", "Increase Contrast", nullptr));
        mActionDecreaseContrast->setText(QApplication::translate("MainWindow", "Decrease Contrast", nullptr));
        mActionSelectByExpression->setText(QApplication::translate("MainWindow", "Select Features by Expression\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSelectByExpression->setToolTip(QApplication::translate("MainWindow", "Select Features Using an Expression", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectByExpression->setShortcut(QApplication::translate("MainWindow", "Ctrl+F3", nullptr));
#endif // QT_NO_SHORTCUT
        mActionNeedSupport->setText(QApplication::translate("MainWindow", "Need Commercial Support?", nullptr));
        mActionOpenFieldCalc->setText(QApplication::translate("MainWindow", "Open Field Calculator\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionOpenFieldCalc->setToolTip(QApplication::translate("MainWindow", "Open Field Calculator", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddDelimitedText->setText(QApplication::translate("MainWindow", "Add Delimited Text Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddDelimitedText->setToolTip(QApplication::translate("MainWindow", "Add Delimited Text Layer", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionAddDelimitedText->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddVirtualLayer->setText(QApplication::translate("MainWindow", "Add/Edit Virtual Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddVirtualLayer->setToolTip(QApplication::translate("MainWindow", "Add/Edit Virtual Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPasteAsNewVector->setText(QApplication::translate("MainWindow", "New Vector Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPasteAsNewVector->setToolTip(QApplication::translate("MainWindow", "Paste features in clipboard into a new OGR vector layer.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPasteAsNewMemoryVector->setText(QApplication::translate("MainWindow", "Temporary Scratch Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPasteAsNewMemoryVector->setToolTip(QApplication::translate("MainWindow", "Paste features in clipboard into a new temporary scratch layer.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionPasteAsNewMemoryVector->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+V", nullptr));
#endif // QT_NO_SHORTCUT
        mActionDxfExport->setText(QApplication::translate("MainWindow", "Export Project to DXF\342\200\246", nullptr));
        mActionDwgImport->setText(QApplication::translate("MainWindow", "Import Layers from DWG/DXF\342\200\246", nullptr));
        mActionFillRing->setText(QApplication::translate("MainWindow", "Fill Ring", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionFillRing->setToolTip(QApplication::translate("MainWindow", "Fill Ring", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddLayerDefinition->setText(QApplication::translate("MainWindow", "Add from Layer Definition File\342\200\246", nullptr));
        mActionSaveLayerDefinition->setText(QApplication::translate("MainWindow", "Save As Layer Definition File\342\200\246", nullptr));
        mActionPreviewModeOff->setText(QApplication::translate("MainWindow", "Normal", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPreviewModeOff->setToolTip(QApplication::translate("MainWindow", "Normal Preview Mode", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPreviewModeMono->setText(QApplication::translate("MainWindow", "Simulate Monochrome", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPreviewModeMono->setToolTip(QApplication::translate("MainWindow", "Simulate Monochrome", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPreviewModeGrayscale->setText(QApplication::translate("MainWindow", "Simulate Achromatopsia Color Blindness (Grayscale)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPreviewModeGrayscale->setToolTip(QApplication::translate("MainWindow", "Simulate Achromatopsia Color Blindness (Grayscale)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPreviewProtanope->setText(QApplication::translate("MainWindow", "Simulate Protanopia Color Blindness (No Red)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPreviewProtanope->setToolTip(QApplication::translate("MainWindow", "Simulate Protanopia Color Blindness (No Red)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPreviewDeuteranope->setText(QApplication::translate("MainWindow", "Simulate Deuteranopia Color Blindness (No Green)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPreviewDeuteranope->setToolTip(QApplication::translate("MainWindow", "Simulate Deuteranopia Color Blindness (No Green)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionPreviewTritanope->setText(QApplication::translate("MainWindow", "Simulate Tritanopia Color Blindness (No Blue)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPreviewTritanope->setToolTip(QApplication::translate("MainWindow", "Simulate Tritanopia Color Blindness (No Blue)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSetLayerScaleVisibility->setText(QApplication::translate("MainWindow", "Set Scale Visibility of Layer(s)", nullptr));
        mActionShowSelectedLayers->setText(QApplication::translate("MainWindow", "Show Selected Layers", nullptr));
        mActionHideSelectedLayers->setText(QApplication::translate("MainWindow", "Hide Selected Layers", nullptr));
        mActionToggleSelectedLayers->setText(QApplication::translate("MainWindow", "Toggle Selected Layers", nullptr));
        mActionToggleSelectedLayersIndependently->setText(QApplication::translate("MainWindow", "Toggle Selected Layers Independently", nullptr));
        mActionHideDeselectedLayers->setText(QApplication::translate("MainWindow", "Hide Deselected Layers", nullptr));
        mActionNewMemoryLayer->setText(QApplication::translate("MainWindow", "New Temporary Scratch Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewMemoryLayer->setToolTip(QApplication::translate("MainWindow", "New Temporary Scratch Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionStatisticalSummary->setText(QApplication::translate("MainWindow", "Statistical Summary", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionStatisticalSummary->setToolTip(QApplication::translate("MainWindow", "Show Statistical Summary", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowAlignRasterTool->setText(QApplication::translate("MainWindow", "Align Rasters\342\200\246", nullptr));
        mActionCircularStringCurvePoint->setText(QApplication::translate("MainWindow", "Add Circular String", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircularStringCurvePoint->setToolTip(QApplication::translate("MainWindow", "Add Circular String", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCircularStringRadius->setText(QApplication::translate("MainWindow", "Add Circular String by Radius", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircularStringRadius->setToolTip(QApplication::translate("MainWindow", "Add Circular String by Radius", nullptr));
#endif // QT_NO_TOOLTIP
        mActionReportaBug->setText(QApplication::translate("MainWindow", "Report an Issue", nullptr));
        mActionDiagramProperties->setText(QApplication::translate("MainWindow", "Diagram Options", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDiagramProperties->setToolTip(QApplication::translate("MainWindow", "Layer Diagram Options", nullptr));
#endif // QT_NO_TOOLTIP
        mActionNewGeoPackageLayer->setText(QApplication::translate("MainWindow", "New GeoPackage Layer\342\200\246", nullptr));
#ifndef QT_NO_SHORTCUT
        mActionNewGeoPackageLayer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_NO_SHORTCUT
        mActionMultiEditAttributes->setText(QApplication::translate("MainWindow", "Modify Attributes of Selected Features", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionMultiEditAttributes->setToolTip(QApplication::translate("MainWindow", "Modify the Attributes of all Selected Features Simultaneously", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddAmsLayer->setText(QApplication::translate("MainWindow", "Add Arc&GIS Map Service Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddAmsLayer->setToolTip(QApplication::translate("MainWindow", "Add ArcGIS Map Service Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddAfsLayer->setText(QApplication::translate("MainWindow", "Add Ar&cGIS Feature Service Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddAfsLayer->setToolTip(QApplication::translate("MainWindow", "Add ArcGIS Feature Service Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSelectByForm->setText(QApplication::translate("MainWindow", "Select Features by Value\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSelectByForm->setToolTip(QApplication::translate("MainWindow", "Select Features by Value", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionSelectByForm->setShortcut(QApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_NO_SHORTCUT
        mActionMoveFeatureCopy->setText(QApplication::translate("MainWindow", "Copy and Move Feature(s)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionMoveFeatureCopy->setToolTip(QApplication::translate("MainWindow", "Copy and Move Feature(s)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionDecorationLayoutExtent->setText(QApplication::translate("MainWindow", "&Layout Extents\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecorationLayoutExtent->setToolTip(QApplication::translate("MainWindow", "Layout Extents", nullptr));
#endif // QT_NO_TOOLTIP
        mActionDataSourceManager->setText(QApplication::translate("MainWindow", "&Data Source Manager", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDataSourceManager->setToolTip(QApplication::translate("MainWindow", "Open Data Source Manager", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionDataSourceManager->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        mActionCircle2Points->setText(QApplication::translate("MainWindow", "Add Circle from &2 Points", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircle2Points->setToolTip(QApplication::translate("MainWindow", "Add Circle from 2 Points", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCircle3Points->setText(QApplication::translate("MainWindow", "Add Circle from &3 Points", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircle3Points->setToolTip(QApplication::translate("MainWindow", "Add Circle from 3 Points", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCircleCenterPoint->setText(QApplication::translate("MainWindow", "&Add Circle by a Center Point and Another Point", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircleCenterPoint->setToolTip(QApplication::translate("MainWindow", "Add Circle by a Center Point and Another Point", nullptr));
#endif // QT_NO_TOOLTIP
        mActionEllipseCenter2Points->setText(QApplication::translate("MainWindow", "&Add Ellipse from Center and 2 Points", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEllipseCenter2Points->setToolTip(QApplication::translate("MainWindow", "Add Ellipse from Center and 2 Points", nullptr));
#endif // QT_NO_TOOLTIP
        mActionEllipseCenterPoint->setText(QApplication::translate("MainWindow", "Add Ellipse from &Center and a Point", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEllipseCenterPoint->setToolTip(QApplication::translate("MainWindow", "Add Ellipse from center and a point", nullptr));
#endif // QT_NO_TOOLTIP
        mActionEllipseExtent->setText(QApplication::translate("MainWindow", "Add Ellipse from &Extent", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEllipseExtent->setToolTip(QApplication::translate("MainWindow", "Add Ellipse from Extent", nullptr));
#endif // QT_NO_TOOLTIP
        mActionEllipseFoci->setText(QApplication::translate("MainWindow", "Add Ellipse from &Foci", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEllipseFoci->setToolTip(QApplication::translate("MainWindow", "Add Ellipse from Foci", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRectangleExtent->setText(QApplication::translate("MainWindow", "&Add Rectangle from Extent", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRectangleExtent->setToolTip(QApplication::translate("MainWindow", "Add Rectangle from Extent", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRectangleCenterPoint->setText(QApplication::translate("MainWindow", "Add &Rectangle from Center and a Point", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRectangleCenterPoint->setToolTip(QApplication::translate("MainWindow", "Add Rectangle from Center and a Point", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRegularPolygonCenterPoint->setText(QApplication::translate("MainWindow", "&Add Regular Polygon from Center and a Point", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRegularPolygonCenterPoint->setToolTip(QApplication::translate("MainWindow", "Add Regular Polygon from Center and a Point", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRegularPolygon2Points->setText(QApplication::translate("MainWindow", "Add &Regular Polygon from 2 Points", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRegularPolygon2Points->setToolTip(QApplication::translate("MainWindow", "Add Regular Polygon from 2 Points", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCircle3Tangents->setText(QApplication::translate("MainWindow", "Add &Circle from 3 Tangents", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircle3Tangents->setToolTip(QApplication::translate("MainWindow", "Add Circle from 3 Tangents", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRectangle3PointsDistance->setText(QApplication::translate("MainWindow", "Add Rectangle &from 3 Points (Distance from 2nd and 3rd point)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRectangle3PointsDistance->setToolTip(QApplication::translate("MainWindow", "Add Rectangle from 3 Points (Distance from 2nd and 3rd Point)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCircle2TangentsPoint->setText(QApplication::translate("MainWindow", "Add Circle &from 2 Tangents and a Point", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCircle2TangentsPoint->setToolTip(QApplication::translate("MainWindow", "Add Circle from 2 Tangents and a Point", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRegularPolygonCenterCorner->setText(QApplication::translate("MainWindow", "Add Regular &Polygon from Center and a Corner", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRegularPolygonCenterCorner->setToolTip(QApplication::translate("MainWindow", "Add Regular Polygon from Center and a Corner", nullptr));
#endif // QT_NO_TOOLTIP
        mActionNew3DMapCanvas->setText(QApplication::translate("MainWindow", "New &3D Map View", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNew3DMapCanvas->setToolTip(QApplication::translate("MainWindow", "New 3D Map View", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionNew3DMapCanvas->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+M", nullptr));
#endif // QT_NO_SHORTCUT
        mActionShowLayoutManager->setText(QApplication::translate("MainWindow", "Layout Manager\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionShowLayoutManager->setToolTip(QApplication::translate("MainWindow", "Show Layout Manager", nullptr));
#endif // QT_NO_TOOLTIP
        mActionNewPrintLayout->setText(QApplication::translate("MainWindow", "New &Print Layout\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewPrintLayout->setToolTip(QApplication::translate("MainWindow", "New Print Layout", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionNewPrintLayout->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        mActionNewReport->setText(QApplication::translate("MainWindow", "New &Report\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewReport->setToolTip(QApplication::translate("MainWindow", "New Report", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCloseProject->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionCloseProject->setToolTip(QApplication::translate("MainWindow", "Close Project", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRevertProject->setText(QApplication::translate("MainWindow", "Revert\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRevertProject->setToolTip(QApplication::translate("MainWindow", "Revert Project to Saved Version", nullptr));
#endif // QT_NO_TOOLTIP
        mActionCopyLayer->setText(QApplication::translate("MainWindow", "Copy Layer", nullptr));
        mActionPasteLayer->setText(QApplication::translate("MainWindow", "Paste Layer/Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionPasteLayer->setToolTip(QApplication::translate("MainWindow", "Paste Layer/Group", nullptr));
#endif // QT_NO_TOOLTIP
        mActionVertexToolActiveLayer->setText(QApplication::translate("MainWindow", "&Vertex Tool (Current Layer)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionVertexToolActiveLayer->setToolTip(QApplication::translate("MainWindow", "Vertex Tool (Current Layer)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionRectangle3PointsProjected->setText(QApplication::translate("MainWindow", "Add Rectangle &from 3 Points (Distance from projected point on segment p1 and p2)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionRectangle3PointsProjected->setToolTip(QApplication::translate("MainWindow", "Add Rectangle from 3 Points (Distance from Projected Point on Segment p1 and p2)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowMeshCalculator->setText(QApplication::translate("MainWindow", "Mesh Calculator\342\200\246", nullptr));
        mActionAddMeshLayer->setText(QApplication::translate("MainWindow", "Add Mesh Layer...", nullptr));
        mActionNewVirtualLayer->setText(QApplication::translate("MainWindow", "New Virtual Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionNewVirtualLayer->setToolTip(QApplication::translate("MainWindow", "New Virtual Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowUnplacedLabels->setText(QApplication::translate("MainWindow", "Show Unplaced Labels", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionShowUnplacedLabels->setToolTip(QApplication::translate("MainWindow", "Toggles Display of Unplaced Labels\n"
"Shows placeholders for labels which could not be placed, e.g. due to overlaps with other map labels.", nullptr));
#endif // QT_NO_TOOLTIP
        mActionReselect->setText(QApplication::translate("MainWindow", "Reselect Features", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionReselect->setToolTip(QApplication::translate("MainWindow", "Reselect Features from Current Layer", nullptr));
#endif // QT_NO_TOOLTIP
        mActionTemporalController->setText(QApplication::translate("MainWindow", "Temporal Controller", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionTemporalController->setToolTip(QApplication::translate("MainWindow", "Temporal Controller Panel", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddXyzLayer->setText(QApplication::translate("MainWindow", "Add XYZ Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddXyzLayer->setToolTip(QApplication::translate("MainWindow", "Add XYZ Layer\342\200\246", nullptr));
#endif // QT_NO_TOOLTIP
        mActionAddVectorTileLayer->setText(QApplication::translate("MainWindow", "Add Vector Tile Layer\342\200\246", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAddVectorTileLayer->setToolTip(QApplication::translate("MainWindow", "Add Vector Tile Layer\342\200\246", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowGeoreferencer->setText(QApplication::translate("MainWindow", "Georeferencer\342\200\246", nullptr));
        mActionDecreaseGamma->setText(QApplication::translate("MainWindow", "Decrease Gamma", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDecreaseGamma->setToolTip(QApplication::translate("MainWindow", "Decrease Gamma", nullptr));
#endif // QT_NO_TOOLTIP
        mActionIncreaseGamma->setText(QApplication::translate("MainWindow", "Increase Gamma", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionIncreaseGamma->setToolTip(QApplication::translate("MainWindow", "Increase Gamma", nullptr));
#endif // QT_NO_TOOLTIP
        mActionDigitizeWithCurve->setText(QApplication::translate("MainWindow", "Digitize with curve", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionDigitizeWithCurve->setToolTip(QApplication::translate("MainWindow", "Digitize with curve", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mActionDigitizeWithCurve->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+G", nullptr));
#endif // QT_NO_SHORTCUT
        mActionAddPointCloudLayer->setText(QApplication::translate("MainWindow", "Add Point Cloud Layer...", nullptr));
#ifndef QT_NO_TOOLTIP
        menubar->setToolTip(QApplication::translate("MainWindow", "Menu Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mProjectMenu->setTitle(QApplication::translate("MainWindow", "Pro&ject", nullptr));
        mRecentProjectsMenu->setTitle(QApplication::translate("MainWindow", "Open &Recent", nullptr));
        mLayoutsMenu->setTitle(QApplication::translate("MainWindow", "Layouts", nullptr));
        mProjectFromTemplateMenu->setTitle(QApplication::translate("MainWindow", "New from Template", nullptr));
        mProjectToStorageMenu->setTitle(QApplication::translate("MainWindow", "Save To", nullptr));
        mProjectFromStorageMenu->setTitle(QApplication::translate("MainWindow", "Open From", nullptr));
        menuImport_Export->setTitle(QApplication::translate("MainWindow", "Import/Export", nullptr));
        mViewMenu->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menuMeasure->setTitle(QApplication::translate("MainWindow", "Measure", nullptr));
        menuDecorations->setTitle(QApplication::translate("MainWindow", "&Decorations", nullptr));
        mMenuPreviewMode->setTitle(QApplication::translate("MainWindow", "Preview Mode", nullptr));
        mLayerMenu->setTitle(QApplication::translate("MainWindow", "&Layer", nullptr));
        mNewLayerMenu->setTitle(QApplication::translate("MainWindow", "Create Layer", nullptr));
        mAddLayerMenu->setTitle(QApplication::translate("MainWindow", "Add Layer", nullptr));
        mPluginMenu->setTitle(QApplication::translate("MainWindow", "&Plugins", nullptr));
        mHelpMenu->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        mMenuPluginHelp->setTitle(QApplication::translate("MainWindow", "Plugins", nullptr));
        mSettingsMenu->setTitle(QApplication::translate("MainWindow", "&Settings", nullptr));
        mRasterMenu->setTitle(QApplication::translate("MainWindow", "&Raster", nullptr));
        mVectorMenu->setTitle(QApplication::translate("MainWindow", "Vect&or", nullptr));
        mEditMenu->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menuSelect->setTitle(QApplication::translate("MainWindow", "Select", nullptr));
        mMenuPasteAs->setTitle(QApplication::translate("MainWindow", "Paste Features As", nullptr));
        mMenuCircle->setTitle(QApplication::translate("MainWindow", "Add Circle", nullptr));
        mMenuEllipse->setTitle(QApplication::translate("MainWindow", "Add Ellipse", nullptr));
        mMenuRectangle->setTitle(QApplication::translate("MainWindow", "Add Rectangle", nullptr));
        mMenuRegularPolygon->setTitle(QApplication::translate("MainWindow", "Add Regular Polygon", nullptr));
        mMenuAnnotation->setTitle(QApplication::translate("MainWindow", "Add Annotation", nullptr));
        mMeshMenu->setTitle(QApplication::translate("MainWindow", "&Mesh", nullptr));
#ifndef QT_NO_TOOLTIP
        statusbar->setToolTip(QApplication::translate("MainWindow", "Statusbar", nullptr));
#endif // QT_NO_TOOLTIP
        mFileToolBar->setWindowTitle(QApplication::translate("MainWindow", "Project Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mFileToolBar->setToolTip(QApplication::translate("MainWindow", "Project Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mLayerToolBar->setWindowTitle(QApplication::translate("MainWindow", "Manage Layers Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mLayerToolBar->setToolTip(QApplication::translate("MainWindow", "Manage Layers Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mDigitizeToolBar->setWindowTitle(QApplication::translate("MainWindow", "Digitizing Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mDigitizeToolBar->setToolTip(QApplication::translate("MainWindow", "Digitizing Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mAdvancedDigitizeToolBar->setWindowTitle(QApplication::translate("MainWindow", "Advanced Digitizing Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mAdvancedDigitizeToolBar->setToolTip(QApplication::translate("MainWindow", "Advanced Digitizing Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mMapNavToolBar->setWindowTitle(QApplication::translate("MainWindow", "Map Navigation Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mMapNavToolBar->setToolTip(QApplication::translate("MainWindow", "Map Navigation Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mAttributesToolBar->setWindowTitle(QApplication::translate("MainWindow", "Attributes Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mAttributesToolBar->setToolTip(QApplication::translate("MainWindow", "Attributes Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mPluginToolBar->setWindowTitle(QApplication::translate("MainWindow", "Plugins Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mPluginToolBar->setToolTip(QApplication::translate("MainWindow", "Plugins Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mHelpToolBar->setWindowTitle(QApplication::translate("MainWindow", "Help Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mHelpToolBar->setToolTip(QApplication::translate("MainWindow", "Help Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mRasterToolBar->setWindowTitle(QApplication::translate("MainWindow", "Raster Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mRasterToolBar->setToolTip(QApplication::translate("MainWindow", "Raster Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mLabelToolBar->setWindowTitle(QApplication::translate("MainWindow", "Label Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mLabelToolBar->setToolTip(QApplication::translate("MainWindow", "Label Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mVectorToolBar->setWindowTitle(QApplication::translate("MainWindow", "Vector Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mVectorToolBar->setToolTip(QApplication::translate("MainWindow", "Vector Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mDatabaseToolBar->setWindowTitle(QApplication::translate("MainWindow", "Database Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mDatabaseToolBar->setToolTip(QApplication::translate("MainWindow", "Database Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mWebToolBar->setWindowTitle(QApplication::translate("MainWindow", "Web Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mWebToolBar->setToolTip(QApplication::translate("MainWindow", "Web Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mSnappingToolBar->setWindowTitle(QApplication::translate("MainWindow", "Snapping Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mSnappingToolBar->setToolTip(QApplication::translate("MainWindow", "Snapping Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mDataSourceManagerToolBar->setWindowTitle(QApplication::translate("MainWindow", "Data Source Manager Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mDataSourceManagerToolBar->setToolTip(QApplication::translate("MainWindow", "Data Source Manager Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mShapeDigitizeToolBar->setWindowTitle(QApplication::translate("MainWindow", "Shape Digitizing Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mShapeDigitizeToolBar->setToolTip(QApplication::translate("MainWindow", "Shape Digitizing Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        mSelectionToolBar->setWindowTitle(QApplication::translate("MainWindow", "Selection Toolbar", nullptr));
#ifndef QT_NO_TOOLTIP
        mSelectionToolBar->setToolTip(QApplication::translate("MainWindow", "Selection Toolbar", nullptr));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGISAPP_H
