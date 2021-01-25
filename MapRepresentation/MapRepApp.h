#pragma once
class QgisAppInterface;
class QgsMapTool;
class QgsVectorLayer;
class QgsMapLayer;
class QgsCustomProjectOpenHandler;
// class QgsHandleBadLayersHandler;

#include <QMainWindow>
#include "ui_MapRepApp.h"
// qgs相关的
#include <qgsmapcanvas.h>
#include "qgsdatasourcemanagerdialog.h"
//#include <qgsmaptoolidentify.h>
#include <qgslayertreeview.h>
//#include <qgsmasterlayoutinterface.h>
//#include "qgslib/app/layout/qgslayoutdesignerdialog.h"
#include "qgslayertreeregistrybridge.h"
//#include "qgslayoutmanager.h"
#include "qgslayertreegroup.h"
//#include "qgsauthmanager.h"
#include "qgslayertree.h"
//#include "qgstaskmanager.h"
#include "qgsbrowserguimodel.h"
//#include "qgsmessagebar.h"
#include "qgscustomprojectopenhandler.h"
// #include "qgshandlebadlayers.h"
#include "qgslayertreemapcanvasbridge.h"
#include "qgscustomlayerorderwidget.h"
#include "qgsdockwidget.h"
//#include "qgsvectorlayer.h"
#include "qgsvectorlayerref.h"

class MapRepApp : public QMainWindow
{
	Q_OBJECT

public:
	MapRepApp(QWidget *parent = Q_NULLPTR);
	~MapRepApp();
	static MapRepApp *instance() { return sInstance; }

private:
	Ui::MapRepApp ui;
	//! Map canvas
	QgsMapCanvas *mMapCanvas = nullptr;
	//! Table of contents (legend) for the map
	QgsLayerTreeView *mLayerTreeView = nullptr;
	//! Helper class that connects layer tree with map canvas
	QgsLayerTreeMapCanvasBridge *mLayerTreeCanvasBridge = nullptr;
	//! Table of contents (legend) to order layers of the map
	QgsCustomLayerOrderWidget *mMapLayerOrder = nullptr;
	QList<QgsMapLayer *> mLayers;
	// docks ------------------------------------------
	QgsDockWidget *mLayerTreeDock = nullptr;
	QgsDockWidget *mLayerOrderDock = nullptr;
	QgsDockWidget *mOverviewDock = nullptr;

	//! Currently open layout designer dialogs
	/*QSet<QgsLayoutDesignerDialog *> mLayoutDesignerDialogs;*/

	//! Data Source Manager
	QgsDataSourceManagerDialog *mDataSourceManagerDialog = nullptr;
	QgsBrowserGuiModel *mBrowserModel = nullptr;

	// project 相关
	QDateTime mProjectLastModified;
	// status bar //! a bar to display warnings in a non-blocker manner
	QgsMessageBar *mInfoBar = nullptr;
	QStackedWidget *mCentralContainer = nullptr;
	QVector<QPointer<QgsCustomProjectOpenHandler>> mCustomProjectOpenHandlers;
	// QgsHandleBadLayersHandler *mAppBadLayersHandler = nullptr;
	// map tools
	class Tools
	{
	public:

		Tools() = default;
		QgsMapTool *mZoomIn = nullptr;
		QgsMapTool *mZoomOut = nullptr;
		QgsMapTool *mPan = nullptr;
		QgsMapTool *mFeatureAction = nullptr;
		QgsMapTool *mMeasureDist = nullptr;
		QgsMapTool *mMeasureArea = nullptr;
		QgsMapTool *mMeasureAngle = nullptr;
		QgsMapTool *mCircularStringCurvePoint = nullptr;
		QgsMapTool *mCircularStringRadius = nullptr;
		QgsMapTool *mCircle2Points = nullptr;
		QgsMapTool *mCircle3Points = nullptr;
		QgsMapTool *mCircle3Tangents = nullptr;
		QgsMapTool *mCircle2TangentsPoint = nullptr;
		QgsMapTool *mCircleCenterPoint = nullptr;
		QgsMapTool *mEllipseCenter2Points = nullptr;
		QgsMapTool *mEllipseCenterPoint = nullptr;
		QgsMapTool *mEllipseExtent = nullptr;
		QgsMapTool *mEllipseFoci = nullptr;
		QgsMapTool *mRectangleCenterPoint = nullptr;
		QgsMapTool *mRectangleExtent = nullptr;
		QgsMapTool *mRectangle3PointsDistance = nullptr;
		QgsMapTool *mRectangle3PointsProjected = nullptr;
		QgsMapTool *mRegularPolygon2Points = nullptr;
		QgsMapTool *mRegularPolygonCenterPoint = nullptr;
		QgsMapTool *mRegularPolygonCenterCorner = nullptr;
		QgsMapTool *mMoveFeature = nullptr;
		QgsMapTool *mMoveFeatureCopy = nullptr;
		QgsMapTool *mOffsetCurve = nullptr;
		QgsMapTool *mReshapeFeatures = nullptr;
		QgsMapTool *mSplitFeatures = nullptr;
		QgsMapTool *mSplitParts = nullptr;
		QgsMapTool *mVertexAdd = nullptr;
		QgsMapTool *mVertexMove = nullptr;
		QgsMapTool *mVertexDelete = nullptr;
		QgsMapTool *mAddRing = nullptr;
		QgsMapTool *mFillRing = nullptr;
		QgsMapTool *mAddPart = nullptr;
		QgsMapTool *mSimplifyFeature = nullptr;
		QgsMapTool *mDeleteRing = nullptr;
		QgsMapTool *mDeletePart = nullptr;
		QgsMapTool *mVertexTool = nullptr;
		QgsMapTool *mVertexToolActiveLayer = nullptr;
		QgsMapTool *mRotatePointSymbolsTool = nullptr;
		QgsMapTool *mOffsetPointSymbolTool = nullptr;
		QgsMapTool *mAnnotation = nullptr;
		QgsMapTool *mFormAnnotation = nullptr;
		QgsMapTool *mHtmlAnnotation = nullptr;
		QgsMapTool *mSvgAnnotation = nullptr;
		QgsMapTool *mTextAnnotation = nullptr;
		QgsMapTool *mPinLabels = nullptr;
		QgsMapTool *mShowHideLabels = nullptr;
		QgsMapTool *mMoveLabel = nullptr;
		QgsMapTool *mRotateFeature = nullptr;
		QgsMapTool *mRotateLabel = nullptr;
		QgsMapTool *mChangeLabelProperties = nullptr;
		QgsMapTool *mReverseLine = nullptr;
		QgsMapTool *mTrimExtendFeature = nullptr;
	} mMapTools;
	QgsMapTool *mNonEditMapTool = nullptr;
	static MapRepApp *sInstance;
	int mFreezeCount = 0;
	//canvasRefreshBlocker
	class QgsCanvasRefreshBlocker
	{
	public:

		QgsCanvasRefreshBlocker()
		{
			if (MapRepApp::instance()->mFreezeCount++ == 0)
			{
				// going from unfrozen to frozen, so freeze canvases
				MapRepApp::instance()->freezeCanvases(true);
			}
		}
		QgsCanvasRefreshBlocker(const QgsCanvasRefreshBlocker &other) = delete;
		QgsCanvasRefreshBlocker &operator=(const QgsCanvasRefreshBlocker &other) = delete;

		void release()
		{
			if (mReleased)
				return;

			mReleased = true;
			if (--MapRepApp::instance()->mFreezeCount == 0)
			{
				// going from frozen to unfrozen, so unfreeze canvases
				MapRepApp::instance()->freezeCanvases(false);
				MapRepApp::instance()->refreshMapCanvas();
			}
		}

		~QgsCanvasRefreshBlocker()
		{
			if (!mReleased)
				release();
		}

	private:

		bool mReleased = false;
	};

	/**
	* \brief dataSourceManager Open the DataSourceManager dialog
	* \param pageName the page name, usually the provider name or "browser" (for the browser panel)
	*        or "ogr" (vector layers) or "raster" (raster layers)
	*/
	void dataSourceManager(const QString &pageName = QString());
	//! Gets the mapcanvas object from the app
	QgsMapCanvas *mapCanvas();

	//! Create a new project
	bool fileNew();
	//! As above but allows forcing without prompt and forcing blank project
	bool fileNew(bool promptToSaveFlag, bool forceBlank = false);
	bool fileNewFromTemplate(const QString &fileName);
	void fileNewFromDefaultTemplate();
	void fileOpen();
	void createCanvasTools();
	//QgsMessageBar *messageBar();
	//QgsMessageBar *visibleMessageBar();
	void pan();
	void zoomIn();
	void zoomOut();
	void showPanMessage(double distance, QgsUnitTypes::DistanceUnit unit, double bearing);
	bool addProject(const QString &projectFile);
	const QList<QgsVectorLayerRef> findBrokenLayerDependencies(QgsVectorLayer *vl, QgsMapLayer::StyleCategories categories) const;
	/*void resolveVectorLayerDependencies(QgsVectorLayer *vectorLayer,
		QgsMapLayer::StyleCategories categories = QgsMapLayer::AllStyleCategories);*/
	//! Checks for running tasks dependent on the open project
	bool checkTasksDependOnProject();
	/**
	* Check to see if the current project file is dirty and if so, prompt the user to save it.
	* \returns TRUE if saved or discarded, FALSE if canceled
	*/
	bool saveDirty();

	void markDirty();
	bool fileSave();
	void saveRecentProjectPath(bool savePreviewImage = true, const QIcon &iconOverlay = QIcon());
	/**
	* Checks for unsaved changes in open layers and prompts the user to save
	* or discard these changes for each layer.
	*
	* Returns TRUE if there are no unsaved layer edits remaining, or the user
	* opted to discard them all. Returns FALSE if the user opted to cancel
	* on any layer.
	*/
	bool checkUnsavedLayerEdits();

	/**
	* Checks whether memory layers (with features) exist in the project, and if so
	* shows a warning to users that their contents will be lost on
	* project unload.
	*
	* Returns TRUE if there are no memory layers present, or if the
	* user opted to discard their contents. Returns FALSE if there
	* are memory layers present and the user clicked 'Cancel' on
	* the warning dialog.
	*/
	bool checkMemoryLayers();

	void applyProjectSettingsToCanvas(QgsMapCanvas *canvas);

	// 数据相关
#pragma region 数据加载相关
	
	//void addMapLayer(QgsMapLayer *mapLayer);

	//QgsRasterLayer *addRasterLayer(const QString &rasterFile, const QString &baseName, bool guiWarning = true);
	//QgsRasterLayer *addRasterLayer(QString const &uri, QString const &baseName, QString const &providerKey);
	//void addRasterLayer();
	//bool addRasterLayer(QgsRasterLayer *rasterLayer);
	///**
	//* Add a vector layer directly without prompting user for location
	//The caller must provide information compatible with the provider plugin
	//using the \a vectorLayerPath and \a baseName. The provider can use these
	//parameters in any way necessary to initialize the layer. The \a baseName
	//parameter is used in the Map Legend so it should be formed in a meaningful
	//way.
	//*/
	//QgsVectorLayer *addVectorLayer(const QString &vectorLayerPath, const QString &baseName, const QString &providerKey);

	//bool addVectorLayersPrivate(const QStringList &layerQStringList, const QString &enc, const QString &dataSourceType, const bool guiWarning);
	//QgsVectorLayer *addVectorLayerPrivate(const QString &vectorLayerPath, const QString &name, const QString &providerKey, const bool guiWarning);
	//QList<QgsMapLayer *> askUserForOGRSublayers(QgsVectorLayer *&parentLayer, const QStringList &sublayers);
	//bool askUserForDatumTransform(const QgsCoordinateReferenceSystem &sourceCrs, const QgsCoordinateReferenceSystem &destinationCrs, const QgsMapLayer *layer);
	//void activateDeactivateLayerRelatedActions(QgsMapLayer *layer);
	//QgsMapLayer *activeLayer();
	///**
	//* Adds a mesh layer directly without prompting user for location
	//* The caller must provide information compatible with the provider plugin
	//* using the \a url and \a baseName. The provider can use these
	//* parameters in any way necessary to initialize the layer. The \a baseName
	//* parameter is used in the Map Legend so it should be formed in a meaningful
	//* way.
	//*/
	//QgsMeshLayer *addMeshLayer(const QString &url, const QString &baseName, const QString &providerKey);

	///**
	//* Adds a vector tile layer directly without prompting user for location
	//* The caller must provide information needed for layer construction
	//* using the \a url and \a baseName. The \a baseName parameter is used
	//* in the Map Legend so it should be formed in a meaningful way.
	//* \since QGIS 3.14
	//*/
	//QgsVectorTileLayer *addVectorTileLayer(const QString &url, const QString &baseName);

	///**
	//* Adds a vector tile layer directly without prompting user for location
	//* The caller must provide information needed for layer construction
	//* using the \a url and \a baseName. The \a baseName parameter is used
	//* in the Map Legend so it should be formed in a meaningful way.
	//* \since QGIS 3.18
	//*/
	//// QgsPointCloudLayer *addPointCloudLayer(const QString &url, const QString &baseName, const QString &providerKey);
	////! Add a list of database layers to the map
	//void addDatabaseLayers(QStringList const &layerPathList, QString const &providerKey);
	////! Add a vector layer defined by uri, layer name, data source uri
	//void addSelectedVectorLayer(const QString &uri, const QString &layerName, const QString &provider);
	////! Replace the selected layer by a vector layer defined by uri, layer name, data source uri
	//void replaceSelectedVectorLayer(const QString &oldId, const QString &uri, const QString &layerName, const QString &provider);

	//void showStatusMessage(const QString &message);
#pragma endregion
	//! clear out any stuff from project
	void closeProject();
	void freezeCanvases(bool frozen = true);
	QList<QgsMapCanvas *> mapCanvases();
	//! refresh map canvas
	void refreshMapCanvas(bool redrawAllLayers = false);

	//public slots:
	//void openProject(QAction *action);
	//void openProject(const QString &fileName);
	//bool openLayer(const QString &fileName, bool allowInteractive);
	//void openLayerDefinition(const QString &path);
	//void openTemplate(const QString &fileName);
	//void runScript(const QString &filePath);
	//// file 
	//	//! Convenience function to open either a project or a layer file.
	//	void openFile(const QString &fileName, const QString &fileTypeHint = QString());
	//	void layerTreeViewDoubleClicked(const QModelIndex &index);

	//	//map nav

	//	//! Zoom to full extent
	//	void zoomFull();
	//	//! Zoom to the previous extent
	//	void zoomToPrevious();
	//	//! Zoom to the forward extent
	//	void zoomToNext();
	//	//! Zoom to selected features
	//	void zoomToSelected();
	//	//! Pan map to selected features
	//	void panToSelected();

	//	//! open the properties dialog for the currently selected layer
	//	void layerProperties();

	//	int messageTimeout();
	//	bool uniqueLayoutTitle(QWidget *parent, QString &title, bool acceptEmpty, QgsMasterLayoutInterface::Type type, const QString &currentTitle);
	//	QgsLayoutDesignerDialog *openLayoutDesignerDialog(QgsMasterLayoutInterface *layout);
		// map 
public: signals:
		
		/**
		* Emitted when a project file is successfully read
		* \note This is useful for plug-ins that store properties with project files.  A
		* plug-in can connect to this signal.  When it is emitted, the plug-in
		* knows to then check the project properties for any relevant state.
		*/
		void projectRead();
		/**
		* Emitted when starting an entirely new project
		* \note
		* This is similar to projectRead(); plug-ins might want to be notified
		* that they're in a new project.  Yes, projectRead() could have been
		* overloaded to be used in the case of new projects instead.  However,
		* it's probably more semantically correct to have an entirely separate
		* signal for when this happens.
		*/
		void newProject();
		/**
		* Emitted when a connection has been added/removed or changed by the provider
		* selection dialogs
		*/
		void connectionsChanged();
		/**
		* Emitted when a new layout \a designer has been opened.
		* \see layoutDesignerWillBeClosed()
		* \since QGIS 3.0
		*/
		//void layoutDesignerOpened(QgsLayoutDesignerInterface *designer);

		///**
		//* Emitted before a layout \a designer is going to be closed
		//* and deleted.
		//* \see layoutDesignerClosed()
		//* \see layoutDesignerOpened()
		//* \since QGIS 3.0
		//*/
		//void layoutDesignerWillBeClosed(QgsLayoutDesignerInterface *designer);

		///**
		//* Emitted after a layout designer window is closed.
		//* \see layoutDesignerWillBeClosed()
		//* \see layoutDesignerOpened()
		//* \since QGIS 3.0
		//*/
		//void layoutDesignerClosed();
};
