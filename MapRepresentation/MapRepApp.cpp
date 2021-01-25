#include "QFileDialog"
#include "MapRepApp.h"

#include <qmessagebox.h>

#include "qgsapplication.h"

// master 最新版
#include "qgslib\core\qgsproviderregistry.h"
#include "qgsproject.h"
#include "qgsapplication.h"
#include <cpl_error.h>


#include "qgslayertreemodel.h"
//#include "qgsauthguiutils.h"
//#include "qgsgui.h"
//#include "qgslib\core\qgslayerdefinition.h"
//#include "qgsrasterlayer.h"
#include "qgsprojectviewsettings.h"
#include "qgsfileutils.h"
#include <QShortcut>
#include "qgsziputils.h"
#include "qgslayertreemodel.h"
#include "qgsfieldformatter.h"
#include "qgsgui.h"
#include "qgsfieldformatterregistry.h"
#include "qgseditorwidgetregistry.h"
#include "qgsmessagelog.h"
// #include "qgsweakrelation.h"
#include "qgsprovidermetadata.h"

//Map tools
#include "qgsmaptoolzoom.h"
#include "qgsmaptoolpan.h"
#include "qgsmaptoolpinlabels.h"
#include "qgsmaptoolshowhidelabels.h"
#include "qgsmaptoolchangelabelproperties.h"

// qgs 界面
//#include "qgssublayersdialog.h"
//#include "qgsdatumtransformdialog.h"
//#include "qgsprintlayout.h"
//#include "qgsnewnamedialog.h"


MapRepApp *MapRepApp::sInstance = nullptr;

MapRepApp::MapRepApp(QWidget *parent)
	: QMainWindow(parent)
{
	sInstance = this;
	ui.setupUi(this);
	// initialize the map canvas
	mMapCanvas = new QgsMapCanvas();
	mMapCanvas->setCanvasColor(QColor(255, 255, 255));
	mMapCanvas->setVisible(true);
	mMapCanvas->enableAntiAliasing(true);
	QWidget *centralWidget = this->centralWidget();
	QGridLayout *centralLayout = new QGridLayout(centralWidget);
	centralWidget->setLayout(centralLayout);
	centralLayout->setContentsMargins(0, 0, 0, 0);
	mCentralContainer = new QStackedWidget;
	mCentralContainer->insertWidget(0, mMapCanvas);
	centralLayout->addWidget(mCentralContainer, 0, 0, 1, 1);
	//mInfoBar->raise();
	mLayerTreeView = new QgsLayerTreeView(this);
	// init layertree
	QgsLayerTreeModel *model = new QgsLayerTreeModel(QgsProject::instance()->layerTreeRoot(), this);
	mLayerTreeView->setModel(model);
	// mLayerTreeView->setMessageBar(mInfoBar);
	centralLayout->addWidget(mLayerTreeView, 0, 1, 1, 1);
	mBrowserModel = new QgsBrowserGuiModel(this);
	mLayerTreeCanvasBridge = new QgsLayerTreeMapCanvasBridge(QgsProject::instance()->layerTreeRoot(), mMapCanvas, this);

	mMapLayerOrder = new QgsCustomLayerOrderWidget(mLayerTreeCanvasBridge, this);
	mMapLayerOrder->setObjectName(QStringLiteral("theMapLayerOrder"));

	mLayerOrderDock = new QgsDockWidget(tr("Layer Order"), this);
	mLayerOrderDock->setObjectName(QStringLiteral("LayerOrder"));
	mLayerOrderDock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);

	QShortcut *showLayerOrderDock = new QShortcut(QKeySequence(tr("Ctrl+9")), this);
	connect(showLayerOrderDock, &QShortcut::activated, mLayerOrderDock, &QgsDockWidget::toggleUserVisible);
	showLayerOrderDock->setObjectName(QStringLiteral("ShowLayerOrderPanel"));
	showLayerOrderDock->setWhatsThis(tr("Show Layer Order Panel"));

	mLayerOrderDock->setWidget(mMapLayerOrder);
	addDockWidget(Qt::LeftDockWidgetArea, mLayerOrderDock);
	mLayerOrderDock->hide();

	// menu items
	connect(ui.mActionDataSourceManager,&QAction::triggered, this, [=]() {dataSourceManager(); });
	connect(ui.mActionNewProject, &QAction::triggered, this, [=] { fileNew(); });
	connect(ui.mActionOpenProject, &QAction::triggered, this, [=] { fileOpen(); });
	// 
	// View Menu Items
	connect(ui.mActionPan, &QAction::triggered, this, &MapRepApp::pan);
	connect(ui.mActionZoomIn, &QAction::triggered, this, &MapRepApp::zoomIn);
	connect(ui.mActionZoomOut, &QAction::triggered, this, &MapRepApp::zoomOut);
	//status bar
	/*mInfoBar = new QgsMessageBar(centralWidget);
	mInfoBar->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
	centralLayout->addWidget(mInfoBar, 0, 0, 1, 1);*/

	// set handler for missing layers (will be owned by QgsProject)
	/*mAppBadLayersHandler = new QgsHandleBadLayersHandler();
	QgsProject::instance()->setBadLayerHandler(mAppBadLayersHandler);*/
	createCanvasTools();
}

MapRepApp::~MapRepApp()
{
	delete mDataSourceManagerDialog;
	delete mMapCanvas;

	delete mMapTools.mZoomIn;
	delete mMapTools.mZoomOut;
	delete mMapTools.mPan;
	delete mMapTools.mAddPart;
	delete mMapTools.mAddRing;
	delete mMapTools.mFillRing;
	delete mMapTools.mAnnotation;
	delete mMapTools.mChangeLabelProperties;
	delete mMapTools.mDeletePart;
	delete mMapTools.mDeleteRing;
	delete mMapTools.mTrimExtendFeature;
	delete mMapTools.mFeatureAction;
	delete mMapTools.mFormAnnotation;
	delete mMapTools.mHtmlAnnotation;
	// delete mMapTools.mIdentify;
	delete mMapTools.mMeasureAngle;
	delete mMapTools.mMeasureArea;
	delete mMapTools.mMeasureDist;
	delete mMapTools.mMoveFeature;
	delete mMapTools.mMoveFeatureCopy;
	delete mMapTools.mMoveLabel;
	delete mMapTools.mVertexTool;
	delete mMapTools.mVertexToolActiveLayer;
	delete mMapTools.mOffsetCurve;
	delete mMapTools.mPinLabels;
	delete mMapTools.mReshapeFeatures;
	delete mMapTools.mReverseLine;
	delete mMapTools.mRotateFeature;
	delete mMapTools.mRotateLabel;
	delete mMapTools.mRotatePointSymbolsTool;
	delete mMapTools.mOffsetPointSymbolTool;
	/*delete mMapTools.mSelectFreehand;
	delete mMapTools.mSelectPolygon;
	delete mMapTools.mSelectRadius;
	delete mMapTools.mSelectFeatures;*/
	delete mMapTools.mShowHideLabels;
	delete mMapTools.mSimplifyFeature;
	delete mMapTools.mSplitFeatures;
	delete mMapTools.mSplitParts;
	delete mMapTools.mSvgAnnotation;
	delete mMapTools.mTextAnnotation;
	delete mMapTools.mCircularStringCurvePoint;
	delete mMapTools.mCircularStringRadius;
	delete mMapTools.mCircle2Points;
	delete mMapTools.mCircle3Points;
	delete mMapTools.mCircle3Tangents;
	delete mMapTools.mCircle2TangentsPoint;
	delete mMapTools.mCircleCenterPoint;
	delete mMapTools.mEllipseCenter2Points;
	delete mMapTools.mEllipseCenterPoint;
	delete mMapTools.mEllipseExtent;
	delete mMapTools.mEllipseFoci;
	delete mMapTools.mRectangleCenterPoint;
	delete mMapTools.mRectangleExtent;
	delete mMapTools.mRectangle3PointsDistance;
	delete mMapTools.mRectangle3PointsProjected;
	delete mMapTools.mRegularPolygon2Points;
	delete mMapTools.mRegularPolygonCenterPoint;
	delete mMapTools.mRegularPolygonCenterCorner;
	// delete mMapTools.mAddFeature;
	delete mNonEditMapTool;
}

void MapRepApp::dataSourceManager(const QString &pageName /*= QString()*/)
{
	if (!mDataSourceManagerDialog)
	{
		mDataSourceManagerDialog = new QgsDataSourceManagerDialog(mBrowserModel, this, mapCanvas());
		connect(this, &MapRepApp::connectionsChanged, mDataSourceManagerDialog, &QgsDataSourceManagerDialog::refresh);
		connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::connectionsChanged, this, &MapRepApp::connectionsChanged);
		connect(mDataSourceManagerDialog, SIGNAL(addRasterLayer(QString const &, QString const &, QString const &)),
			this, SLOT(addRasterLayer(QString const &, QString const &, QString const &)));
		connect(mDataSourceManagerDialog, SIGNAL(addVectorLayer(QString const &, QString const &, QString const &)),
			this, SLOT(addVectorLayer(QString const &, QString const &, QString const &)));
		connect(mDataSourceManagerDialog, SIGNAL(addVectorLayers(QStringList const &, QString const &, QString const &)),
			this, SLOT(addVectorLayers(QStringList const &, QString const &, QString const &)));
		//connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::addMeshLayer, this, &MapRepApp::addMeshLayer);
		//connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::addVectorTileLayer, this, &MapRepApp::addVectorTileLayer);
		//// connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::addPointCloudLayer, this, &MapRepApp::addPointCloudLayer);
		//connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::showStatusMessage, this, &MapRepApp::showStatusMessage);
		//connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::addDatabaseLayers, this, &MapRepApp::addDatabaseLayers);
		//connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::replaceSelectedVectorLayer, this, &MapRepApp::replaceSelectedVectorLayer);
		//connect(mDataSourceManagerDialog, static_cast<void (QgsDataSourceManagerDialog::*)()>(&QgsDataSourceManagerDialog::addRasterLayer), this, static_cast<void (MapRepApp::*)()>(&MapRepApp::addRasterLayer));
		//// connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::handleDropUriList, this, &MapRepApp::handleDropUriList);
		connect(this, &MapRepApp::newProject, mDataSourceManagerDialog, &QgsDataSourceManagerDialog::updateProjectHome);
		//connect(mDataSourceManagerDialog, &QgsDataSourceManagerDialog::openFile, this, &MapRepApp::openFile);
	}
	else
	{
		mDataSourceManagerDialog->reset();
	}
	// Try to open the dialog on a particular page
	if (!pageName.isEmpty())
	{
		mDataSourceManagerDialog->openPage(pageName);
	}
	if (QgsSettings().value(QStringLiteral("/qgis/dataSourceManagerNonModal"), true).toBool())
	{
		mDataSourceManagerDialog->show();
	}
	else
	{
		mDataSourceManagerDialog->exec();
	}
}

QgsMapCanvas * MapRepApp::mapCanvas()
{
		Q_ASSERT(mMapCanvas);
		return mMapCanvas;
}

bool MapRepApp::fileNew()
{
	return fileNew(true); // prompts whether to save project
}

bool MapRepApp::fileNew(bool promptToSaveFlag, bool forceBlank /*= false*/)
{
	if (checkTasksDependOnProject())
		return false;

	if (promptToSaveFlag)
	{
		if (!checkUnsavedLayerEdits() || !checkMemoryLayers() || !saveDirty())
		{
			return false; //cancel pressed
		}
	}

	mProjectLastModified = QDateTime();

	QgsSettings settings;

	MAYBE_UNUSED QgsProjectDirtyBlocker dirtyBlocker(QgsProject::instance());
	// QgsCanvasRefreshBlocker refreshBlocker;
	closeProject();

	QgsProject *prj = QgsProject::instance();
	prj->layerTreeRegistryBridge()->setNewLayersVisible(settings.value(QStringLiteral("qgis/new_layers_visible"), true).toBool());

	//set the canvas to the default project background color
	// mOverviewCanvas->setBackgroundColor(prj->backgroundColor());
	applyProjectSettingsToCanvas(mMapCanvas);

	prj->setDirty(false);

	//setTitleBarText_(*this);

	// emit signal so listeners know we have a new project
	emit newProject();

	mMapCanvas->clearExtentHistory();
	mMapCanvas->setRotation(0.0);
	//mScaleWidget->updateScales();

	// set project CRS
	const QgsCoordinateReferenceSystem srs = QgsCoordinateReferenceSystem(settings.value(QStringLiteral("/projections/defaultProjectCrs"), geoEpsgCrsAuthId(), QgsSettings::App).toString());
	// write the projections _proj string_ to project settings
	const bool planimetric = settings.value(QStringLiteral("measure/planimetric"), true, QgsSettings::Core).toBool();
	prj->setCrs(srs, !planimetric); // If the default ellipsoid is not planimetric, set it from the default crs
	if (planimetric)
		prj->setEllipsoid(geoNone());

	/* New Empty Project Created
	(before attempting to load custom project templates/filepaths) */

	// load default template
	/* NOTE: don't open default template on launch until after initialization,
	in case a project was defined via command line */

	// don't open template if last auto-opening of a project failed
	if (!forceBlank)
	{
		forceBlank = !settings.value(QStringLiteral("qgis/projOpenedOKAtLaunch"), QVariant(true)).toBool();
	}

	if (!forceBlank && settings.value(QStringLiteral("qgis/newProjectDefault"), QVariant(false)).toBool())
	{
		fileNewFromDefaultTemplate();
	}

	// set the initial map tool
	mMapCanvas->setMapTool(mMapTools.mPan);
	mNonEditMapTool = mMapTools.mPan;  // signals are not yet setup to catch this

	prj->setDirty(false);
	return true;
}

bool MapRepApp::fileNewFromTemplate(const QString &fileName)
{
	if (checkTasksDependOnProject())
		return false;

	if (!checkUnsavedLayerEdits() || !checkMemoryLayers() || !saveDirty())
	{
		return false; //cancel pressed
	}

	MAYBE_UNUSED QgsProjectDirtyBlocker dirtyBlocker(QgsProject::instance());
	QgsDebugMsgLevel(QStringLiteral("loading project template: %1").arg(fileName), 2);
	if (addProject(fileName))
	{
		// set null filename so we don't override the template
		QgsProject::instance()->setFileName(QString());
		return true;
	}
	return false;
}

void MapRepApp::fileNewFromDefaultTemplate()
{
	QString projectTemplate = QgsApplication::qgisSettingsDirPath() + QStringLiteral("project_default.qgs");
	QString msgTxt;
	if (!projectTemplate.isEmpty() && QFile::exists(projectTemplate))
	{
		if (fileNewFromTemplate(projectTemplate))
		{
			return;
		}
		msgTxt = tr("Default failed to open: %1");
	}
	else
	{
		msgTxt = tr("Default not found: %1");
	}
	/*visibleMessageBar()->pushMessage(tr("Open Template Project"),
		msgTxt.arg(projectTemplate),
		Qgis::Warning);*/
}

void MapRepApp::fileOpen()
{
	if (checkTasksDependOnProject())
		return;

	// possibly save any pending work before opening a new project
	if (checkUnsavedLayerEdits() && checkMemoryLayers() && saveDirty())
	{
		// Retrieve last used project dir from persistent settings
		QgsSettings settings;
		QString lastUsedDir = settings.value(QStringLiteral("UI/lastProjectDir"), QDir::homePath()).toString();

		QStringList fileFilters;
		QStringList extensions;
		fileFilters << tr("QGIS files") + QStringLiteral(" (*.qgs *.qgz *.QGS *.QGZ)");
		extensions << QStringLiteral("qgs") << QStringLiteral("qgz");
		for (QgsCustomProjectOpenHandler *handler : qgis::as_const(mCustomProjectOpenHandlers))
		{
			if (handler)
			{
				const QStringList filters = handler->filters();
				fileFilters.append(filters);
				for (const QString &filter : filters)
					extensions.append(QgsFileUtils::extensionsFromFilter(filter));
			}
		}

		// generate master "all projects" extension list
		QString allEntry = tr("All Project Files") + QStringLiteral(" (");
		for (const QString &extension : extensions)
			allEntry += QStringLiteral("*.%1 *.%2 ").arg(extension.toLower(), extension.toUpper());
		allEntry.chop(1); // remove trailing ' '
		allEntry += ')';
		fileFilters.insert(0, allEntry);

		QString fullPath = QFileDialog::getOpenFileName(this,
			tr("Open Project"),
			lastUsedDir,
			fileFilters.join(QLatin1String(";;")));
		if (fullPath.isNull())
		{
			return;
		}

		QFileInfo myFI(fullPath);
		QString myPath = myFI.path();
		// Persist last used project dir
		settings.setValue(QStringLiteral("UI/lastProjectDir"), myPath);

		// open the selected project
		addProject(fullPath);
	}
}

//QgsMessageBar *MapRepApp::messageBar()
//{
//	// Q_ASSERT( mInfoBar );
//	return mInfoBar;
//}
//
//QgsMessageBar *MapRepApp::visibleMessageBar()
//{
//	if (mDataSourceManagerDialog &&
//		mDataSourceManagerDialog->isVisible() &&
//		mDataSourceManagerDialog->isModal())
//	{
//		return mDataSourceManagerDialog->messageBar();
//	}
//	else
//	{
//		return messageBar();
//	}
//}

void MapRepApp::createCanvasTools()
{
	// create tools
	//mMapTools.mZoomIn = new QgsMapToolZoom(mMapCanvas, false /* zoomIn */);
	//mMapTools.mZoomIn->setAction(ui.mActionZoomIn);
	//mMapTools.mZoomOut = new QgsMapToolZoom(mMapCanvas, true /* zoomOut */);
	//mMapTools.mZoomOut->setAction(ui.mActionZoomOut);
	//mMapTools.mPan = new QgsMapToolPan(mMapCanvas);
	//connect(static_cast<QgsMapToolPan *>(mMapTools.mPan), &QgsMapToolPan::panDistanceBearingChanged, this, &MapRepApp::showPanMessage);
	//mMapTools.mPan->setAction(ui.mActionPan);
	//mMapTools.mPinLabels = new QgsMapToolPinLabels(mMapCanvas);
	//mMapTools.mPinLabels->setAction(ui.mActionPinLabels);
	//mMapTools.mShowHideLabels = new QgsMapToolShowHideLabels(mMapCanvas);
	//mMapTools.mShowHideLabels->setAction(ui.mActionShowHideLabels);
	//mMapTools.mChangeLabelProperties = new QgsMapToolChangeLabelProperties(mMapCanvas);
	//mMapTools.mChangeLabelProperties->setAction(ui.mActionChangeLabelProperties);
	////ensure that non edit tool is initialized or we will get crashes in some situations
	//mNonEditMapTool = mMapTools.mPan;
}


void MapRepApp::pan()
{
	mMapCanvas->setMapTool(mMapTools.mPan);
}

void MapRepApp::zoomIn()
{
	QgsDebugMsgLevel(QStringLiteral("Setting map tool to zoomIn"), 2);

	mMapCanvas->setMapTool(mMapTools.mZoomIn);
}

void MapRepApp::zoomOut()
{
	mMapCanvas->setMapTool(mMapTools.mZoomOut);
}

void MapRepApp::showPanMessage(double distance, QgsUnitTypes::DistanceUnit unit, double bearing)
{
	const bool showMessage = QgsSettings().value(QStringLiteral("showPanDistanceInStatusBar"), true, QgsSettings::App).toBool();
	if (!showMessage)
		return;

	const double distanceInProjectUnits = distance * QgsUnitTypes::fromUnitToUnitFactor(unit, QgsProject::instance()->distanceUnits());
	const int distanceDecimalPlaces = QgsSettings().value(QStringLiteral("qgis/measure/decimalplaces"), "3").toInt();
	const QString distanceString = QgsDistanceArea::formatDistance(distanceInProjectUnits, distanceDecimalPlaces, QgsProject::instance()->distanceUnits());
	// const QString bearingString = mBearingNumericFormat->formatDouble(bearing, QgsNumericFormatContext());
	//mStatusBar->showMessage(tr("Pan distance %1 (%2)").arg(distanceString, bearingString), 2000);
}

bool MapRepApp::addProject(const QString &projectFile)
{
	QgsCanvasRefreshBlocker refreshBlocker;

	bool returnCode = false;
	std::unique_ptr< QgsProjectDirtyBlocker > dirtyBlocker = qgis::make_unique< QgsProjectDirtyBlocker >(QgsProject::instance());
	QObject connectionScope; // manually control scope of layersChanged lambda connection - we need the connection automatically destroyed when this function finishes
	bool badLayersHandled = false;
	//connect(mAppBadLayersHandler, &QgsHandleBadLayersHandler::layersChanged, &connectionScope, [&badLayersHandled] { badLayersHandled = true; });

	// close the previous opened project if any
	closeProject();

	QFileInfo pfi(projectFile);
	//mStatusBar->showMessage(tr("Loading project: %1").arg(pfi.fileName()));
	qApp->processEvents();

	QApplication::setOverrideCursor(Qt::WaitCursor);

	bool autoSetupOnFirstLayer = mLayerTreeCanvasBridge->autoSetupOnFirstLayer();
	mLayerTreeCanvasBridge->setAutoSetupOnFirstLayer(false);

	// give custom handlers a chance first
	bool usedCustomHandler = false;
	bool customHandlerWantsThumbnail = false;
	QIcon customHandlerIcon;
	for (QgsCustomProjectOpenHandler *handler : qgis::as_const(mCustomProjectOpenHandlers))
	{
		if (handler && handler->handleProjectOpen(projectFile))
		{
			usedCustomHandler = true;
			customHandlerWantsThumbnail = handler->createDocumentThumbnailAfterOpen();
			customHandlerIcon = handler->icon();
			break;
		}
	}

	if (!usedCustomHandler && !QgsProject::instance()->read(projectFile) && !QgsZipUtils::isZipFile(projectFile))
	{
		QString backupFile = projectFile + "~";
		QString loadBackupPrompt;
		QMessageBox::StandardButtons buttons;
		if (QFile(backupFile).exists())
		{
			loadBackupPrompt = "\n\n" + tr("Do you want to open the backup file\n%1\ninstead?").arg(backupFile);
			buttons |= QMessageBox::Yes;
			buttons |= QMessageBox::No;
		}
		else
		{
			buttons |= QMessageBox::Ok;
		}
		QApplication::restoreOverrideCursor();
		// mStatusBar->clearMessage();

		int r = QMessageBox::critical(this,
			tr("Unable to open project"),
			QgsProject::instance()->error() + loadBackupPrompt,
			buttons);

		if (QMessageBox::Yes == r && addProject(backupFile))
		{
			// We loaded data from the backup file, but we pretend to work on the original project file.
			QgsProject::instance()->setFileName(projectFile);
			QgsProject::instance()->setDirty(true);
			mProjectLastModified = QgsProject::instance()->lastModified();
			returnCode = true;
		}
		else
		{
			returnCode = false;
		}
	}
	else
	{

		mProjectLastModified = QgsProject::instance()->lastModified();

		// setTitleBarText_(*this);
		// mOverviewCanvas->setBackgroundColor(QgsProject::instance()->backgroundColor());

		applyProjectSettingsToCanvas(mMapCanvas);

		//load project scales
		bool projectScales = QgsProject::instance()->viewSettings()->useProjectScales();
		if (projectScales)
		{
			// mScaleWidget->updateScales();
		}

		mMapCanvas->updateScale();
		QgsDebugMsgLevel(QStringLiteral("Scale restored..."), 3);

		// mFilterLegendByMapContentAction->setChecked(QgsProject::instance()->readBoolEntry(QStringLiteral("Legend"), QStringLiteral("filterByMap")));

		// Select the first layer
		if (mLayerTreeView->layerTreeModel()->rootGroup()->findLayers().count() > 0)
		{
			mLayerTreeView->setCurrentLayer(mLayerTreeView->layerTreeModel()->rootGroup()->findLayers().at(0)->layer());
		}

		QgsSettings settings;
		// Check for missing layer widget dependencies
		//const auto constVLayers{ QgsProject::instance()->layers<QgsVectorLayer *>() };
		//for (QgsVectorLayer *vl : constVLayers)
		//{
		//	if (vl->isValid())
		//	{
		//		// resolveVectorLayerDependencies(vl);
		//	}
		//}

		//emit projectRead(); // let plug-ins know that we've read in a new
		//					// project so that they can check any project
		//					// specific plug-in state

		//					// add this to the list of recently used project files
		//					// if a custom handler was used, then we generate a thumbnail
		//if (!usedCustomHandler || !customHandlerWantsThumbnail)
		//	saveRecentProjectPath(false);
		//else if (!QgsProject::instance()->originalPath().isEmpty())
		//{
		//	// we have to delay the thumbnail creation until after the canvas has refreshed for the first time
		//	QMetaObject::Connection *connection = new QMetaObject::Connection();
		//	*connection = connect(mMapCanvas, &QgsMapCanvas::mapCanvasRefreshed, [=]()
		//	{
		//		QObject::disconnect(*connection);
		//		delete connection;
		//		saveRecentProjectPath(true, customHandlerIcon);
		//	});
		//}

		QApplication::restoreOverrideCursor();

		/*if (autoSetupOnFirstLayer)
			mLayerTreeCanvasBridge->setAutoSetupOnFirstLayer(true);*/

		// mStatusBar->showMessage(tr("Project loaded"), 3000);
		returnCode = true;
	}

	if (badLayersHandled)
	{
		dirtyBlocker.reset(); // allow project dirtying again
		QgsProject::instance()->setDirty(true);
	}

	return returnCode;
} // QgisApp::addProject(QString projectFile)

const QList<QgsVectorLayerRef> MapRepApp::findBrokenLayerDependencies(QgsVectorLayer *vl, QgsMapLayer::StyleCategories categories) const
{
	QList<QgsVectorLayerRef> brokenDependencies;

//	if (categories.testFlag(QgsMapLayer::StyleCategory::Forms))
//	{
//		for (int i = 0; i < vl->fields().count(); i++)
//		{
//			const QgsEditorWidgetSetup setup = QgsGui::editorWidgetRegistry()->findBest(vl, vl->fields().field(i).name());
//			QgsFieldFormatter *fieldFormatter = QgsApplication::fieldFormatterRegistry()->fieldFormatter(setup.type());
//			if (fieldFormatter)
//			{
//				const QList<QgsVectorLayerRef> constDependencies{ fieldFormatter->layerDependencies(setup.config()) };
//				for (const QgsVectorLayerRef &dependency : constDependencies)
//				{
//					// I guess we need and isNull()/isValid() method for the ref
//					if (dependency.layer ||
//						!dependency.name.isEmpty() ||
//						!dependency.source.isEmpty() ||
//						!dependency.layerId.isEmpty())
//					{
//						const QgsVectorLayer *depVl{ QgsVectorLayerRef(dependency).resolveWeakly(QgsProject::instance(), QgsVectorLayerRef::MatchType::Name) };
//						if (!depVl || !depVl->isValid())
//						{
//							brokenDependencies.append(dependency);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	if (categories.testFlag(QgsMapLayer::StyleCategory::Relations))
//	{
//		// Check for layer weak relations
//		const QList<QgsWeakRelation> constWeakRelations{ vl->weakRelations() };
//		for (const QgsWeakRelation &rel : constWeakRelations)
//		{
//			QgsRelation relation{ rel.resolvedRelation(QgsProject::instance(), QgsVectorLayerRef::MatchType::Name) };
//			QgsVectorLayerRef dependency;
//			bool found = false;
//			if (!relation.isValid())
//			{
//				// This is the big question: do we really
//				// want to automatically load the referencing layer(s) too?
//				// This could potentially lead to a cascaded load of a
//				// long list of layers.
//				// The code is in place but let's leave it disabled for now.
//				if (relation.referencedLayer() == vl)
//				{
//					// Do nothing because vl is the referenced layer
//#if 0
//					dependency = rel.referencingLayer();
//					found = true;
//#endif
//				}
//				else if (relation.referencingLayer() == vl)
//				{
//					dependency = rel.referencedLayer();
//					found = true;
//				}
//				else
//				{
//					// Something wrong is going on here, maybe this relation
//					// does not really apply to this layer?
//					QgsMessageLog::logMessage(tr("None of the layers in the relation stored in the style match the current layer, skipping relation id: %1.").arg(relation.id()));
//				}
//
//				if (found)
//				{
//					// Make sure we don't add it twice if it was already added by the form widgets check
//					bool refFound = false;
//					for (const QgsVectorLayerRef &otherRef : qgis::as_const(brokenDependencies))
//					{
//						if (dependency.layerId == otherRef.layerId || (dependency.source == otherRef.source && dependency.provider == otherRef.provider))
//						{
//							refFound = true;
//							break;
//						}
//					}
//					if (!refFound)
//					{
//						brokenDependencies.append(dependency);
//					}
//				}
//			}
//		}
//	}
	return brokenDependencies;
}


//void MapRepApp::resolveVectorLayerDependencies(QgsVectorLayer *vl, QgsMapLayer::StyleCategories categories)
//{
//	if (vl && vl->isValid())
//	{
//		const auto constDependencies{ findBrokenLayerDependencies(vl, categories) };
//		for (const QgsVectorLayerRef &dependency : constDependencies)
//		{
//			// Check for projects without layer dependencies (see 7e8c7b3d0e094737336ff4834ea2af625d2921bf)
//			if (QgsProject::instance()->mapLayer(dependency.layerId) || (dependency.name.isEmpty() && dependency.source.isEmpty()))
//			{
//				continue;
//			}
//			// try to aggressively resolve the broken dependencies
//			bool loaded = false;
//			const QString providerName{ vl->dataProvider()->name() };
//			QgsProviderMetadata *providerMetadata{ QgsProviderRegistry::instance()->providerMetadata(providerName) };
//			if (providerMetadata)
//			{
//				// Retrieve the DB connection (if any)
//				std::unique_ptr< QgsAbstractDatabaseProviderConnection > conn{ static_cast<QgsAbstractDatabaseProviderConnection *>(providerMetadata->createConnection(vl->dataProvider()->uri().uri(),{})) };
//				if (conn)
//				{
//					QString tableSchema;
//					QString tableName;
//					const QVariantMap sourceParts{ providerMetadata->decodeUri(dependency.source) };
//
//					// This part should really be abstracted out to the connection classes or to the providers directly.
//					// Different providers decode the uri differently, for example we don't get the table name out of OGR
//					// but the layerName/layerId instead, so let's try different approaches
//
//					// This works for GPKG
//					tableName = sourceParts.value(QStringLiteral("layerName")).toString();
//
//					// This works for PG and spatialite
//					if (tableName.isEmpty())
//					{
//						tableName = sourceParts.value(QStringLiteral("table")).toString();
//						tableSchema = sourceParts.value(QStringLiteral("schema")).toString();
//					}
//
//					// Helper to find layers in connections
//					auto layerFinder = [&conn, &dependency, &providerName](const QString & tableSchema, const QString & tableName) -> bool
//					{
//						// First try the current schema (or no schema if it's not supported from the provider)
//						try
//						{
//							const QString layerUri{ conn->tableUri(tableSchema, tableName) };
//							// Load it!
//							std::unique_ptr< QgsVectorLayer > newVl = qgis::make_unique< QgsVectorLayer >(layerUri, dependency.name, providerName);
//							if (newVl->isValid())
//							{
//								QgsProject::instance()->addMapLayer(newVl.release());
//								return true;
//							}
//						}
//						catch (QgsProviderConnectionException &)
//						{
//							// Do nothing!
//						}
//						return false;
//					};
//
//					loaded = layerFinder(tableSchema, tableName);
//
//					// Try different schemas
//					if (!loaded && conn->capabilities().testFlag(QgsAbstractDatabaseProviderConnection::Capability::Schemas) && !tableSchema.isEmpty())
//					{
//						const QStringList schemas{ conn->schemas() };
//						for (const QString &schemaName : schemas)
//						{
//							if (schemaName != tableSchema)
//							{
//								loaded = layerFinder(schemaName, tableName);
//							}
//							if (loaded)
//							{
//								break;
//							}
//						}
//					}
//				}
//			}
//			if (!loaded)
//			{
//				const QString msg{ tr("layer '%1' requires layer '%2' to be loaded but '%2' could not be found, please load it manually if possible.").arg(vl->name(), dependency.name) };
//				//messageBar()->pushWarning(tr("Missing layer form dependency"), msg);
//			}
//			else
//			{
//				/*messageBar()->pushSuccess(tr("Missing layer form dependency"), tr("Layer dependency '%2' required by '%1' was automatically loaded.")
//					.arg(vl->name())
//					.arg(dependency.name));*/
//			}
//		}
//	}
//}
//

bool MapRepApp::checkTasksDependOnProject()
{
	QSet< QString > activeTaskDescriptions;
	QMap<QString, QgsMapLayer *> layers = QgsProject::instance()->mapLayers();
	QMap<QString, QgsMapLayer *>::const_iterator layerIt = layers.constBegin();

	for (; layerIt != layers.constEnd(); ++layerIt)
	{
		QList< QgsTask * > tasks = QgsApplication::taskManager()->tasksDependentOnLayer(layerIt.value());
		if (!tasks.isEmpty())
		{
			const auto constTasks = tasks;
			for (QgsTask *task : constTasks)
			{
				activeTaskDescriptions.insert(tr(" • %1").arg(task->description()));
			}
		}
	}

	if (!activeTaskDescriptions.isEmpty())
	{
		QMessageBox::warning(this, tr("Active Tasks"),
			tr("The following tasks are currently running which depend on layers in this project:\n\n%1\n\nPlease cancel these tasks and retry.").arg(qgis::setToList(activeTaskDescriptions).join(QLatin1Char('\n'))));
		return true;
	}
	return false;
}

bool MapRepApp::saveDirty()
{
	QString whyDirty;
	bool hasUnsavedEdits = false;
	// extra check to see if there are any vector layers with unsaved provider edits
	// to ensure user has opportunity to save any editing
	if (QgsProject::instance()->count() > 0)
	{
		QMap<QString, QgsMapLayer *> layers = QgsProject::instance()->mapLayers();
		for (QMap<QString, QgsMapLayer *>::iterator it = layers.begin(); it != layers.end(); ++it)
		{
			QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>(it.value());
			// note that we skip the unsaved edits check for memory layers -- it's misleading, because their contents aren't actually
			// saved if this is part of a project close operation. Instead we let these get picked up by checkMemoryLayers().
			if (!vl || vl->providerType() == QLatin1String("memory"))
			{
				continue;
			}

			hasUnsavedEdits = (vl->isEditable() && vl->isModified());
			if (hasUnsavedEdits)
			{
				break;
			}
		}

		if (hasUnsavedEdits)
		{
			markDirty();
			whyDirty = QStringLiteral("<p style='color:darkred;'>");
			whyDirty += tr("Project has layer(s) in edit mode with unsaved edits, which will NOT be saved!");
			whyDirty += QLatin1String("</p>");
		}
	}

	QMessageBox::StandardButton answer(QMessageBox::Discard);
	QgsCanvasRefreshBlocker refreshBlocker;

	QgsSettings settings;
	bool askThem = settings.value(QStringLiteral("qgis/askToSaveProjectChanges"), true).toBool();

	if (askThem && QgsProject::instance()->isDirty())
	{
		// flag project as dirty since dirty state of canvas is reset if "dirty"
		// is based on a zoom or pan
		markDirty();

		// prompt user to save
		answer = QMessageBox::question(this, tr("Save Project"),
			tr("Do you want to save the current project? %1")
			.arg(whyDirty),
			QMessageBox::Save | QMessageBox::Cancel | QMessageBox::Discard,
			hasUnsavedEdits ? QMessageBox::Cancel : QMessageBox::Save);
		if (QMessageBox::Save == answer)
		{
			if (!fileSave())
				answer = QMessageBox::Cancel;
		}
	}

	if (answer == QMessageBox::Cancel)
		return false;

	// for memory layers, we discard all unsaved changes manually. Users have already been warned about
	// these by an earlier call to checkMemoryLayers(), and we don't want duplicate "unsaved changes" prompts
	// and anyway, saving the changes to a memory layer here won't actually save ANYTHING!
	// we do this at the very end here, because if the user opted to cancel above then ALL unsaved
	// changes in memory layers should still exist for them.
	const QMap<QString, QgsMapLayer *> layers = QgsProject::instance()->mapLayers();
	for (auto it = layers.begin(); it != layers.end(); ++it)
	{
		if (QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>(it.value()))
		{
			if (vl->providerType() == QLatin1String("memory") && vl->isEditable() && vl->isModified())
			{
				vl->rollBack();
			}
		}
	}

	return true;
}
void MapRepApp::markDirty()
{
	// notify the project that there was a change
	QgsProject::instance()->setDirty(true);
}

bool MapRepApp::fileSave()
{
	// if we don't have a file name, then obviously we need to get one; note
	// that the project file name is reset to null in fileNew()

	if (QgsProject::instance()->fileName().isNull())
	{
		// Retrieve last used project dir from persistent settings
		QgsSettings settings;
		QString lastUsedDir = settings.value(QStringLiteral("UI/lastProjectDir"), QDir::homePath()).toString();

		const QString qgsExt = tr("QGIS files") + " (*.qgs)";
		const QString zipExt = tr("QGZ files") + " (*.qgz)";

		QString exts;
		QgsProject::FileFormat defaultProjectFileFormat = settings.enumValue(QStringLiteral("/qgis/defaultProjectFileFormat"), QgsProject::FileFormat::Qgz);
		if (defaultProjectFileFormat == QgsProject::FileFormat::Qgs)
		{
			exts = qgsExt + QStringLiteral(";;") + zipExt;
		}
		else
		{
			exts = zipExt + QStringLiteral(";;") + qgsExt;
		}
		QString filter;
		QString path = QFileDialog::getSaveFileName(
			this,
			tr("Choose a QGIS project file"),
			lastUsedDir + '/' + QgsProject::instance()->title(),
			exts, &filter);
		if (path.isEmpty())
			return false;

		QFileInfo fullPath;
		fullPath.setFile(path);

		// make sure we have the .qgs extension in the file name
		if (filter == zipExt)
		{
			if (fullPath.suffix().compare(QLatin1String("qgz"), Qt::CaseInsensitive) != 0)
				fullPath.setFile(fullPath.filePath() + ".qgz");
		}
		else
		{
			if (fullPath.suffix().compare(QLatin1String("qgs"), Qt::CaseInsensitive) != 0)
				fullPath.setFile(fullPath.filePath() + ".qgs");
		}

		QgsProject::instance()->setFileName(fullPath.filePath());
	}
	else
	{
		bool usingProjectStorage = QgsProject::instance()->projectStorage();
		bool fileExists = usingProjectStorage ? true : QFileInfo::exists(QgsProject::instance()->fileName());

		if (fileExists && !mProjectLastModified.isNull() && mProjectLastModified != QgsProject::instance()->lastModified())
		{
			if (QMessageBox::warning(this,
				tr("Open a Project"),
				tr("The loaded project file on disk was meanwhile changed. Do you want to overwrite the changes?\n"
					"\nLast modification date on load was: %1"
					"\nCurrent last modification date is: %2")
				.arg(mProjectLastModified.toString(Qt::DefaultLocaleLongDate),
					QgsProject::instance()->lastModified().toString(Qt::DefaultLocaleLongDate)),
				QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Cancel)
				return false;
		}

		if (fileExists && !usingProjectStorage && !QFileInfo(QgsProject::instance()->fileName()).isWritable())
		{
			/*visibleMessageBar()->pushMessage(tr("Insufficient permissions"),
				tr("The project file is not writable."),Qgis::Warning);*/
			return false;
		}
	}

	// Store current map view settings into the project
	QgsProject::instance()->viewSettings()->setDefaultViewExtent(QgsReferencedRectangle(mapCanvas()->extent(), QgsProject::instance()->crs()));

	if (QgsProject::instance()->write())
	{
		//setTitleBarText_(*this); // update title bar
		//mStatusBar->showMessage(tr("Saved project to: %1").arg(QDir::toNativeSeparators(QgsProject::instance()->fileName())), 5000);

		saveRecentProjectPath();

		mProjectLastModified = QgsProject::instance()->lastModified();
	}
	else
	{
		QMessageBox::critical(this,
			tr("Unable to save project %1").arg(QDir::toNativeSeparators(QgsProject::instance()->fileName())),
			QgsProject::instance()->error());
		return false;
	}

	// run the saved project macro
	/*if (mPythonMacrosEnabled)
	{
		QgsPythonRunner::run(QStringLiteral("qgis.utils.saveProjectMacro();"));
	}*/

	return true;
} // QgisApp::fileSave

  // add this file to the recently opened/saved projects list
void MapRepApp::saveRecentProjectPath(bool savePreviewImage, const QIcon &iconOverlay)
{
	//// first, re-read the recent project paths. This prevents loss of recent
	//// projects when multiple QGIS sessions are open
	//readRecentProjects();

	//// Get canonical absolute path
	//QgsRecentProjectItemsModel::RecentProjectData projectData;
	//projectData.path = QgsProject::instance()->absoluteFilePath();
	//QString templateDirName = QgsSettings().value(QStringLiteral("qgis/projectTemplateDir"),
	//	QString(QgsApplication::qgisSettingsDirPath() + "project_templates")).toString();

	//// We don't want the template path to appear in the recent projects list. Never.
	//if (projectData.path.startsWith(templateDirName))
	//	return;

	//if (projectData.path.isEmpty())  // in case of custom project storage
	//	projectData.path = !QgsProject::instance()->fileName().isEmpty() ? QgsProject::instance()->fileName() : QgsProject::instance()->originalPath();
	//projectData.title = QgsProject::instance()->title();
	//if (projectData.title.isEmpty())
	//	projectData.title = !QgsProject::instance()->baseName().isEmpty() ? QgsProject::instance()->baseName() : QFileInfo(QgsProject::instance()->originalPath()).completeBaseName();

	//projectData.crs = QgsProject::instance()->crs().authid();

	//int idx = mRecentProjects.indexOf(projectData);
	//if (idx != -1)
	//	projectData.pin = mRecentProjects.at(idx).pin;

	//if (savePreviewImage)
	//{
	//	// Generate a unique file name
	//	QString fileName(QCryptographicHash::hash((projectData.path.toUtf8()), QCryptographicHash::Md5).toHex());
	//	QString previewDir = QStringLiteral("%1/previewImages").arg(QgsApplication::qgisSettingsDirPath());
	//	projectData.previewImagePath = QStringLiteral("%1/%2.png").arg(previewDir, fileName);
	//	QDir().mkdir(previewDir);

	//	createPreviewImage(projectData.previewImagePath, iconOverlay);
	//}
	//else
	//{
	//	if (idx != -1)
	//		projectData.previewImagePath = mRecentProjects.at(idx).previewImagePath;
	//}

	//// Count the number of pinned items, those shouldn't affect trimming
	//int pinnedCount = 0;
	//int nonPinnedPos = 0;
	//bool pinnedTop = true;
	//for (const QgsRecentProjectItemsModel::RecentProjectData &recentProject : qgis::as_const(mRecentProjects))
	//{
	//	if (recentProject.pin)
	//	{
	//		pinnedCount++;
	//		if (pinnedTop)
	//		{
	//			nonPinnedPos++;
	//		}
	//	}
	//	else if (pinnedTop)
	//	{
	//		pinnedTop = false;
	//	}
	//}

	//// If this file is already in the list, remove it
	//mRecentProjects.removeAll(projectData);

	//// Insert this file to the list
	//mRecentProjects.insert(projectData.pin ? 0 : nonPinnedPos, projectData);

	//const uint maxProjects = QgsSettings().value(QStringLiteral("maxRecentProjects"), 20, QgsSettings::App).toUInt();

	//// Keep the list to maxProjects items by trimming excess off the bottom
	//// And remove the associated image
	//while (static_cast<uint>(mRecentProjects.count()) > maxProjects + pinnedCount)
	//{
	//	const QString previewImagePath = mRecentProjects.takeLast().previewImagePath;
	//	if (QFileInfo::exists(previewImagePath))
	//		QFile(mRecentProjects.takeLast().previewImagePath).remove();
	//}

	//// Persist the list
	//saveRecentProjects();

	//// Update menu list of paths
	//updateRecentProjectPaths();

	//// Update welcome page list
	//if (mWelcomePage)
	//	mWelcomePage->setRecentProjects(mRecentProjects);

} // QgisApp::saveRecentProjectPath

bool MapRepApp::checkUnsavedLayerEdits()
{
	if (QgsProject::instance()->count() > 0)
	{
		const QMap<QString, QgsMapLayer *> layers = QgsProject::instance()->mapLayers();
		for (auto it = layers.begin(); it != layers.end(); ++it)
		{
			if (QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>(it.value()))
			{
				// note that we skip the unsaved edits check for memory layers -- it's misleading, because their contents aren't actually
				// saved if this is part of a project close operation. Instead we let these get picked up by checkMemoryLayers()
				if (!vl->dataProvider() || vl->providerType() == QLatin1String("memory"))
					continue;

				const bool hasUnsavedEdits = (vl->isEditable() && vl->isModified());
				if (!hasUnsavedEdits)
					continue;

				/*if (!toggleEditing(vl, true))
					return false;*/  // temp
			}
		}
	}

	return true;
}

bool MapRepApp::checkMemoryLayers()
{
	if (!QgsSettings().value(QStringLiteral("askToSaveMemoryLayers"), true, QgsSettings::App).toBool())
		return true;

	// check to see if there are any temporary layers present (with features)
	bool hasTemporaryLayers = false;
	bool hasMemoryLayers = false;

	const QMap<QString, QgsMapLayer *> layers = QgsProject::instance()->mapLayers();
	for (auto it = layers.begin(); it != layers.end(); ++it)
	{
		if (it.value() && it.value()->providerType() == QLatin1String("memory"))
		{
			QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>(it.value());
			if (vl && vl->featureCount() != 0 && !vl->customProperty(QStringLiteral("skipMemoryLayersCheck")).toInt())
			{
				hasMemoryLayers = true;
				break;
			}
		}
		else if (it.value() && it.value()->isTemporary())
		{
			hasTemporaryLayers = true;
		}
	}

	bool close = true;
	if (hasTemporaryLayers)
		close &= QMessageBox::warning(this,
			tr("Close Project"),
			tr("This project includes one or more temporary layers. These layers are not permanently saved and their contents will be lost. Are you sure you want to proceed?"),
			QMessageBox::Yes | QMessageBox::Cancel, QMessageBox::Cancel) == QMessageBox::Yes;
	else if (hasMemoryLayers)
		// use the more specific warning for memory layers
		close &= QMessageBox::warning(this,
			tr("Close Project"),
			tr("This project includes one or more temporary scratch layers. These layers are not saved to disk and their contents will be permanently lost. Are you sure you want to proceed?"),
			QMessageBox::Yes | QMessageBox::Cancel, QMessageBox::Cancel) == QMessageBox::Yes;

	return close;
}

void MapRepApp::applyProjectSettingsToCanvas(QgsMapCanvas *canvas)
{
	canvas->setCanvasColor(QgsProject::instance()->backgroundColor());
	canvas->setSelectionColor(QgsProject::instance()->selectionColor());
}

//void MapRepApp::addMapLayer(QgsMapLayer *mapLayer)
//{
//
//}
//
//QgsRasterLayer * MapRepApp::addRasterLayer(const QString &rasterFile, const QString &baseName, bool guiWarning /*= true*/)
//{
//
//}
//
//QgsRasterLayer * MapRepApp::addRasterLayer(QString const &uri, QString const &baseName, QString const &providerKey)
//{
//
//}
//
//void MapRepApp::addRasterLayer()
//{
//
//}
//
//bool MapRepApp::addRasterLayer(QgsRasterLayer *rasterLayer)
//{
//
//}
//
//QgsVectorLayer * MapRepApp::addVectorLayer(const QString &vectorLayerPath, const QString &baseName, const QString &providerKey)
//{
//
//}
//
//bool MapRepApp::addVectorLayersPrivate(const QStringList &layerQStringList, const QString &enc, const QString &dataSourceType, const bool guiWarning)
//{
//	//QgsCanvasRefreshBlocker refreshBlocker;
//
//	//QList<QgsMapLayer *> layersToAdd;
//	//QList<QgsMapLayer *> addedLayers;
//	//QgsSettings settings;
//	//bool userAskedToAddLayers = false;
//
//	//for (QString src : layerQStringList)
//	//{
//	//	src = src.trimmed();
//	//	QString baseName;
//	//	if (dataSourceType == QLatin1String("file"))
//	//	{
//	//		QString srcWithoutLayername(src);
//	//		int posPipe = srcWithoutLayername.indexOf('|');
//	//		if (posPipe >= 0)
//	//			srcWithoutLayername.resize(posPipe);
//	//		QFileInfo fi(srcWithoutLayername);
//	//		baseName = fi.completeBaseName();
//	//	}
//	//	else if (dataSourceType == QLatin1String("database"))
//	//	{
//	//		// Try to extract the database name and use it as base name
//	//		// sublayers names (if any) will be appended to the layer name
//	//		auto parts(QgsProviderRegistry::instance()->decodeUri(QStringLiteral("ogr"), src));
//	//		if (parts.value(QStringLiteral("databaseName")).isValid())
//	//			baseName = parts.value(QStringLiteral("databaseName")).toString();
//	//		else
//	//			baseName = src;
//	//	}
//	//	else //directory //protocol
//	//	{
//	//		QFileInfo fi(src);
//	//		baseName = fi.completeBaseName();
//	//	}
//	//	if (settings.value(QStringLiteral("qgis/formatLayerName"), false).toBool())
//	//	{
//	//		baseName = QgsMapLayer::formatLayerName(baseName);
//	//	}
//
//	//	QgsDebugMsgLevel("completeBaseName: " + baseName, 2);
//	//	const bool isVsiCurl{ src.startsWith(QLatin1String("/vsicurl"), Qt::CaseInsensitive) };
//	//	const auto scheme{ QUrl(src).scheme() };
//	//	const bool isRemoteUrl{ scheme.startsWith(QLatin1String("http")) || scheme == QLatin1String("ftp") };
//
//	//	// create the layer
//	//	QgsVectorLayer::LayerOptions options{ QgsProject::instance()->transformContext() };
//	//	options.loadDefaultStyle = false;
//	//	if (isVsiCurl || isRemoteUrl)
//	//	{
//	//		visibleMessageBar()->pushInfo(tr("Remote layer"), tr("loading %1, please wait …").arg(src));
//	//		QApplication::setOverrideCursor(Qt::WaitCursor);
//	//		qApp->processEvents();
//	//	}
//	//	QgsVectorLayer *layer = new QgsVectorLayer(src, baseName, QStringLiteral("ogr"), options);
//	//	Q_CHECK_PTR(layer);
//	//	if (isVsiCurl || isRemoteUrl)
//	//	{
//	//		QApplication::restoreOverrideCursor();
//	//	}
//	//	if (!layer)
//	//	{
//	//		// Let render() do its own cursor management
//	//		//      QApplication::restoreOverrideCursor();
//
//	//		// XXX insert meaningful whine to the user here
//	//		return false;
//	//	}
//
//	//	if (layer->isValid())
//	//	{
//	//		userAskedToAddLayers = true;
//	//		if (!enc.isEmpty())
//	//			layer->setProviderEncoding(enc);
//
//	//		QStringList sublayers = layer->dataProvider()->subLayers();
//	//		QgsDebugMsgLevel(QStringLiteral("got valid layer with %1 sublayers").arg(sublayers.count()), 2);
//
//	//		// If the newly created layer has more than 1 layer of data available, we show the
//	//		// sublayers selection dialog so the user can select the sublayers to actually load.
//	//		if (sublayers.count() > 1)
//	//		{
//	//			addedLayers.append(askUserForOGRSublayers(layer, sublayers));
//	//			// layer is no longer valid and has been nullified
//
//	//			for (QgsMapLayer *l : addedLayers)
//	//				askUserForDatumTransform(l->crs(), QgsProject::instance()->crs(), l);
//	//		}
//	//		else if (!sublayers.isEmpty()) // there is 1 layer of data available
//	//		{
//	//			setupVectorLayer(src, sublayers, layer,
//	//				QStringLiteral("ogr"), options);
//
//	//			layersToAdd << layer;
//	//		}
//	//		else
//	//		{
//	//			if (guiWarning)
//	//			{
//	//				QString msg = tr("%1 doesn't have any layers.").arg(src);
//	//				visibleMessageBar()->pushMessage(tr("Invalid Data Source"), msg, Qgis::Critical, messageTimeout());
//	//			}
//	//			delete layer;
//	//		}
//	//	}
//	//	else
//	//	{
//	//		// since the layer is bad, stomp on it
//	//		delete layer;
//	//		QString msg = tr("%1 is not a valid or recognized data source.").arg(src);
//	//		// If the failed layer was a vsicurl type, give the user a chance to try the normal download.
//	//		if (isVsiCurl &&
//	//			QMessageBox::question(this, tr("Invalid Data Source"),
//	//				tr("Download with \"Protocol\" source type has failed, do you want to try the \"File\" source type?")) == QMessageBox::Yes)
//	//		{
//	//			return addVectorLayersPrivate(QStringList() << src.replace(QLatin1String("/vsicurl/"), " "), enc, dataSourceType, guiWarning);
//	//		}
//	//		else if (guiWarning)
//	//		{
//	//			visibleMessageBar()->pushMessage(tr("Invalid Data Source"), msg, Qgis::Critical, messageTimeout());
//	//		}
//	//	}
//	//}
//
//	//// make sure at least one layer was successfully added
//	//if (layersToAdd.isEmpty())
//	//{
//	//	// we also return true if we asked the user for sublayers, but they choose none. In this case nothing
//	//	// went wrong, so we shouldn't return false and cause GUI warnings to appear
//	//	return userAskedToAddLayers || !addedLayers.isEmpty();
//	//}
//
//	//// Register this layer with the layers registry
//	//QgsProject::instance()->addMapLayers(layersToAdd);
//	//for (QgsMapLayer *l : qgis::as_const(layersToAdd))
//	//{
//	//	bool ok;
//	//	l->loadDefaultStyle(ok);
//	//	l->loadDefaultMetadata(ok);
//	//	askUserForDatumTransform(l->crs(), QgsProject::instance()->crs(), l);
//	//}
//	//activateDeactivateLayerRelatedActions(activeLayer());
//
//	return true;
//}
//
//QgsVectorLayer *MapRepApp::addVectorLayerPrivate(const QString &vectorLayerPath, const QString &name, const QString &providerKey, const bool guiWarning)
//{
//	//QgsSettings settings;
//
//	//QgsCanvasRefreshBlocker refreshBlocker;
//
//	//QString baseName = settings.value(QStringLiteral("qgis/formatLayerName"), false).toBool() ? QgsMapLayer::formatLayerName(name) : name;
//
//	///* Eliminate the need to instantiate the layer based on provider type.
//	//The caller is responsible for cobbling together the needed information to
//	//open the layer
//	//*/
//	//QgsDebugMsgLevel("Creating new vector layer using " + vectorLayerPath
//	//	+ " with baseName of " + baseName
//	//	+ " and providerKey of " + providerKey, 2);
//
//	//// if the layer needs authentication, ensure the master password is set
//	//bool authok = true;
//	//QRegExp rx("authcfg=([a-z]|[A-Z]|[0-9]){7}");
//	//if (rx.indexIn(vectorLayerPath) != -1)
//	//{
//	//	authok = false;
//	//	if (!QgsAuthGuiUtils::isDisabled(messageBar(), messageTimeout()))
//	//	{
//	//		authok = QgsApplication::authManager()->setMasterPassword(true);
//	//	}
//	//}
//
//	//// create the layer
//	//QgsVectorLayer::LayerOptions options{ QgsProject::instance()->transformContext() };
//	//// Default style is loaded later in this method
//	//options.loadDefaultStyle = false;
//
//	//QVariantMap uriElements = QgsProviderRegistry::instance()->decodeUri(providerKey, vectorLayerPath);
//	//if (uriElements.contains(QStringLiteral("path")))
//	//{
//	//	// run layer path through QgsPathResolver so that all inbuilt paths and other localised paths are correctly expanded
//	//	uriElements[QStringLiteral("path")] = QgsPathResolver().readPath(uriElements.value(QStringLiteral("path")).toString());
//	//}
//	//// Not all providers implement decodeUri(), so use original vectorLayerPath if uriElements is empty
//	//const QString updatedUri = uriElements.isEmpty() ? vectorLayerPath : QgsProviderRegistry::instance()->encodeUri(providerKey, uriElements);
//	//QgsVectorLayer *layer = new QgsVectorLayer(updatedUri, baseName, providerKey, options);
//
//	//if (authok && layer->isValid())
//	//{
//	//	const bool layerIsSpecified = vectorLayerPath.contains(QLatin1String("layerid=")) ||
//	//		vectorLayerPath.contains(QLatin1String("layername="));
//
//	//	const QStringList sublayers = layer->dataProvider()->subLayers();
//	//	if (!layerIsSpecified)
//	//	{
//	//		QgsDebugMsgLevel(QStringLiteral("got valid layer with %1 sublayers").arg(sublayers.count()), 2);
//	//	}
//
//	//	// If the newly created layer has more than 1 layer of data available, we show the
//	//	// sublayers selection dialog so the user can select the sublayers to actually load.
//	//	if (!layerIsSpecified && sublayers.count() > 1)
//	//	{
//	//		QList< QgsMapLayer * > addedLayers = askUserForOGRSublayers(layer, sublayers);
//	//		// layer is no longer valid and has been nullified
//
//	//		layer = addedLayers.isEmpty() ? nullptr : qobject_cast< QgsVectorLayer * >(addedLayers.at(0));
//	//		for (QgsMapLayer *l : addedLayers)
//	//			askUserForDatumTransform(l->crs(), QgsProject::instance()->crs(), l);
//	//	}
//	//	else
//	//	{
//	//		// Register this layer with the layers registry
//	//		QList<QgsMapLayer *> myList;
//
//	//		//set friendly name for datasources with only one layer
//	//		if (!sublayers.isEmpty())
//	//		{
//	//			setupVectorLayer(vectorLayerPath, sublayers, layer,
//	//				providerKey, options);
//	//		}
//
//	//		myList << layer;
//	//		QgsProject::instance()->addMapLayers(myList);
//
//	//		askUserForDatumTransform(layer->crs(), QgsProject::instance()->crs(), layer);
//
//	//		bool ok;
//	//		layer->loadDefaultStyle(ok);
//	//		layer->loadDefaultMetadata(ok);
//	//	}
//	//}
//	//else
//	//{
//	//	if (guiWarning)
//	//	{
//	//		QString message = layer->dataProvider() ? layer->dataProvider()->error().message(QgsErrorMessage::Text) : tr("Invalid provider");
//	//		QString msg = tr("The layer %1 is not a valid layer and can not be added to the map. Reason: %2").arg(vectorLayerPath, message);
//	//		visibleMessageBar()->pushMessage(tr("Layer is not valid"), msg, Qgis::Critical, messageTimeout());
//	//	}
//
//	//	delete layer;
//	//	return nullptr;
//	//}
//
//	//// Let render() do its own cursor management
//	////  QApplication::restoreOverrideCursor();
//
//	//return layer;
//
//    //temp
//return NULL;
//
//}
//
//QList<QgsMapLayer *> MapRepApp::askUserForOGRSublayers(QgsVectorLayer *&parentLayer, const QStringList &sublayers)
//{
//	QList<QgsMapLayer *> result;
//
//	//QgsSublayersDialog::LayerDefinitionList list;
//	//QMap< QString, int > mapLayerNameToCount;
//	//bool uniqueNames = true;
//	//int lastLayerId = -1;
//	//const auto constSublayers = sublayers;
//	//for (const QString &sublayer : constSublayers)
//	//{
//	//	// OGR provider returns items in this format:
//	//	// <layer_index>:<name>:<feature_count>:<geom_type>
//
//	//	QStringList elements = splitSubLayerDef(sublayer);
//	//	if (elements.count() >= 4)
//	//	{
//	//		QgsSublayersDialog::LayerDefinition def;
//	//		def.layerId = elements[0].toInt();
//	//		def.layerName = elements[1];
//	//		def.count = elements[2].toInt();
//	//		def.type = elements[3];
//	//		// ignore geometry column name at elements[4]
//	//		if (elements.count() >= 6)
//	//			def.description = elements[5];
//	//		if (lastLayerId != def.layerId)
//	//		{
//	//			int count = ++mapLayerNameToCount[def.layerName];
//	//			if (count > 1 || def.layerName.isEmpty())
//	//				uniqueNames = false;
//	//			lastLayerId = def.layerId;
//	//		}
//	//		list << def;
//	//	}
//	//	else
//	//	{
//	//		QgsDebugMsg("Unexpected output from OGR provider's subLayers()! " + sublayer);
//	//	}
//	//}
//
//	//// Check if the current layer uri contains the
//
//	//// We initialize a selection dialog and display it.
//	//QgsSublayersDialog chooseSublayersDialog(QgsSublayersDialog::Ogr, QStringLiteral("ogr"), this, Qt::WindowFlags(), parentLayer->dataProvider()->dataSourceUri());
//	//chooseSublayersDialog.setShowAddToGroupCheckbox(true);
//	//chooseSublayersDialog.populateLayerTable(list);
//
//	//if (!chooseSublayersDialog.exec())
//	//	return result;
//
//	//const bool addToGroup = chooseSublayersDialog.addToGroupCheckbox();
//
//	//QString name = parentLayer->name();
//
//	//auto uriParts = QgsProviderRegistry::instance()->decodeUri(
//	//	parentLayer->providerType(), parentLayer->dataProvider()->dataSourceUri());
//	//QString uri(uriParts.value(QStringLiteral("path")).toString());
//	//QStringList openOptions(uriParts.value(QStringLiteral("openOptions")).toStringList());
//
//	//// The uri must contain the actual uri of the vectorLayer from which we are
//	//// going to load the sublayers.
//	//QString fileName = QFileInfo(uri).baseName();
//	//const auto constSelection = chooseSublayersDialog.selection();
//	//const QString providerType = parentLayer->providerType();
//
//	//// We delete the parent layer now, to be sure in the GeoPackage case that
//	//// when several sublayers are selected, they will use the same GDAL dataset
//	//// This is critical to make project transactions work, as in
//	//// https://github.com/qgis/QGIS/issues/39431#issuecomment-713460189
//	//delete parentLayer;
//	//parentLayer = nullptr;
//
//	//for (const QgsSublayersDialog::LayerDefinition &def : constSelection)
//	//{
//	//	QVariantMap newUriParts;
//	//	newUriParts.insert(QStringLiteral("path"), uri);
//	//	QString layerGeometryType = def.type;
//	//	if (uniqueNames)
//	//	{
//	//		newUriParts.insert(QStringLiteral("layerName"), def.layerName);
//	//	}
//	//	else
//	//	{
//	//		// Only use layerId if there are ambiguities with names
//	//		newUriParts.insert(QStringLiteral("layerId"), QString::number(def.layerId));
//	//	}
//
//	//	if (!layerGeometryType.isEmpty())
//	//	{
//	//		newUriParts.insert(QStringLiteral("geometryType"), layerGeometryType);
//	//	}
//	//	if (!openOptions.isEmpty())
//	//	{
//	//		newUriParts.insert(QStringLiteral("openOptions"), openOptions);
//	//	}
//
//	//	QString composedURI = QgsProviderRegistry::instance()->encodeUri(
//	//		providerType, newUriParts);
//	//	QgsDebugMsgLevel("Creating new vector layer using " + composedURI, 2);
//
//	//	// if user has opted to add sublayers to a group, then we don't need to include the
//	//	// filename in the layer's name, because the group is already titled with the filename.
//	//	// But otherwise, we DO include the file name so that users can differentiate the source
//	//	// when multiple layers are loaded from a GPX file or similar (refs https://github.com/qgis/QGIS/issues/37551)
//	//	const QString name = addToGroup ? def.layerName : fileName + " " + def.layerName;
//
//	//	QgsVectorLayer::LayerOptions options{ QgsProject::instance()->transformContext() };
//	//	options.loadDefaultStyle = false;
//	//	QgsVectorLayer *layer = new QgsVectorLayer(composedURI, name, QStringLiteral("ogr"), options);
//	//	if (layer && layer->isValid())
//	//	{
//	//		result << layer;
//	//	}
//	//	else
//	//	{
//	//		QString msg = tr("%1 is not a valid or recognized data source").arg(composedURI);
//	//		visibleMessageBar()->pushMessage(tr("Invalid Data Source"), msg, Qgis::Critical, messageTimeout());
//	//		delete layer;
//	//	}
//	//}
//
//	//if (!result.isEmpty())
//	//{
//	//	QgsSettings settings;
//	//	bool newLayersVisible = settings.value(QStringLiteral("/qgis/new_layers_visible"), true).toBool();
//	//	QgsLayerTreeGroup *group = nullptr;
//	//	if (addToGroup)
//	//		group = QgsProject::instance()->layerTreeRoot()->insertGroup(0, name);
//
//	//	QgsProject::instance()->addMapLayers(result, !addToGroup);
//	//	for (QgsMapLayer *l : qgis::as_const(result))
//	//	{
//	//		bool ok;
//	//		l->loadDefaultStyle(ok);
//	//		l->loadDefaultMetadata(ok);
//	//		if (addToGroup)
//	//			group->addLayer(l);
//	//	}
//
//	//	// Respect if user don't want the new group of layers visible.
//	//	if (addToGroup && !newLayersVisible)
//	//		group->setItemVisibilityCheckedRecursive(newLayersVisible);
//	//}
//	return result;
//}
//
//bool MapRepApp::askUserForDatumTransform(const QgsCoordinateReferenceSystem &sourceCrs, const QgsCoordinateReferenceSystem &destinationCrs, const QgsMapLayer *layer)
//{
//	Q_ASSERT(qApp->thread() == QThread::currentThread());
//
//	QString title;
//	if (layer)
//	{
//		// try to make a user-friendly (short!) identifier for the layer
//		QString layerIdentifier;
//		if (!layer->name().isEmpty())
//		{
//			layerIdentifier = layer->name();
//		}
//		else
//		{
//			const QVariantMap parts = QgsProviderRegistry::instance()->decodeUri(layer->providerType(), layer->source());
//			if (parts.contains(QStringLiteral("path")))
//			{
//				const QFileInfo fi(parts.value(QStringLiteral("path")).toString());
//				layerIdentifier = fi.fileName();
//			}
//			else if (layer->dataProvider())
//			{
//				const QgsDataSourceUri uri(layer->source());
//				layerIdentifier = uri.table();
//			}
//		}
//		if (!layerIdentifier.isEmpty())
//			title = tr("Select Transformation for %1").arg(layerIdentifier);
//	}
//
//	return QgsDatumTransformDialog::run(sourceCrs, destinationCrs, this, mMapCanvas, title);
//}
//
//void MapRepApp::activateDeactivateLayerRelatedActions(QgsMapLayer *layer)
//{
//	//updateLabelToolButtons();
//
//	//mMenuPasteAs->setEnabled(clipboard() && !clipboard()->isEmpty());
//	//mActionPasteAsNewVector->setEnabled(clipboard() && !clipboard()->isEmpty());
//	//mActionPasteAsNewMemoryVector->setEnabled(clipboard() && !clipboard()->isEmpty());
//
//	//updateLayerModifiedActions();
//
//	//QgsAbstractMapToolHandler::Context context;
//	//for (QgsAbstractMapToolHandler *handler : qgis::as_const(mMapToolHandlers))
//	//{
//	//	handler->action()->setEnabled(handler->isCompatibleWithLayer(layer, context));
//	//	if (handler->mapTool() == mMapCanvas->mapTool())
//	//	{
//	//		if (!handler->action()->isEnabled())
//	//		{
//	//			mMapCanvas->unsetMapTool(handler->mapTool());
//	//			mActionPan->trigger();
//	//		}
//	//		else
//	//		{
//	//			handler->setLayerForTool(layer);
//	//		}
//	//	}
//	//}
//
//	//if (!layer)
//	//{
//	//	menuSelect->setEnabled(false);
//	//	mActionSelectFeatures->setEnabled(false);
//	//	mActionSelectPolygon->setEnabled(false);
//	//	mActionSelectFreehand->setEnabled(false);
//	//	mActionSelectRadius->setEnabled(false);
//	//	mActionIdentify->setEnabled(QgsSettings().enumValue(QStringLiteral("/Map/identifyMode"), QgsMapToolIdentify::ActiveLayer) != QgsMapToolIdentify::ActiveLayer);
//	//	mActionSelectByExpression->setEnabled(false);
//	//	mActionSelectByForm->setEnabled(false);
//	//	mActionLabeling->setEnabled(false);
//	//	mActionOpenTable->setEnabled(false);
//	//	mActionSelectAll->setEnabled(false);
//	//	mActionReselect->setEnabled(false);
//	//	mActionInvertSelection->setEnabled(false);
//	//	mActionOpenFieldCalc->setEnabled(false);
//	//	mActionToggleEditing->setEnabled(false);
//	//	mActionToggleEditing->setChecked(false);
//	//	mActionSaveLayerEdits->setEnabled(false);
//	//	mActionSaveLayerDefinition->setEnabled(false);
//	//	mActionLayerSaveAs->setEnabled(false);
//	//	mActionLayerProperties->setEnabled(false);
//	//	mActionLayerSubsetString->setEnabled(false);
//	//	mActionAddToOverview->setEnabled(false);
//	//	mActionFeatureAction->setEnabled(false);
//	//	mActionAddFeature->setEnabled(false);
//	//	mActionCircularStringCurvePoint->setEnabled(false);
//	//	mActionCircularStringRadius->setEnabled(false);
//	//	mMenuCircle->setEnabled(false);
//	//	mActionCircle2Points->setEnabled(false);
//	//	mActionCircle3Points->setEnabled(false);
//	//	mActionCircle3Tangents->setEnabled(false);
//	//	mActionCircle2TangentsPoint->setEnabled(false);
//	//	mActionCircleCenterPoint->setEnabled(false);
//	//	mMenuEllipse->setEnabled(false);
//	//	mActionEllipseCenter2Points->setEnabled(false);
//	//	mActionEllipseCenterPoint->setEnabled(false);
//	//	mActionEllipseExtent->setEnabled(false);
//	//	mActionEllipseFoci->setEnabled(false);
//	//	mMenuRectangle->setEnabled(false);
//	//	mActionRectangleCenterPoint->setEnabled(false);
//	//	mActionRectangleExtent->setEnabled(false);
//	//	mActionRectangle3PointsDistance->setEnabled(false);
//	//	mActionRectangle3PointsProjected->setEnabled(false);
//	//	mMenuRegularPolygon->setEnabled(false);
//	//	mActionRegularPolygon2Points->setEnabled(false);
//	//	mActionRegularPolygonCenterPoint->setEnabled(false);
//	//	mActionRegularPolygonCenterCorner->setEnabled(false);
//	//	mActionMoveFeature->setEnabled(false);
//	//	mActionMoveFeatureCopy->setEnabled(false);
//	//	mActionRotateFeature->setEnabled(false);
//	//	mActionOffsetCurve->setEnabled(false);
//	//	mActionVertexTool->setEnabled(false);
//	//	mActionVertexToolActiveLayer->setEnabled(false);
//	//	mActionDeleteSelected->setEnabled(false);
//	//	mActionCutFeatures->setEnabled(false);
//	//	mActionCopyFeatures->setEnabled(false);
//	//	mActionPasteFeatures->setEnabled(false);
//	//	mActionCopyStyle->setEnabled(false);
//	//	mActionPasteStyle->setEnabled(false);
//	//	mActionCopyLayer->setEnabled(false);
//	//	// pasting should be allowed if there is a layer in the clipboard
//	//	mActionPasteLayer->setEnabled(clipboard()->hasFormat(QStringLiteral(QGSCLIPBOARD_MAPLAYER_MIME)));
//	//	mActionReverseLine->setEnabled(false);
//	//	mActionTrimExtendFeature->setEnabled(false);
//
//	//	mUndoDock->widget()->setEnabled(false);
//	//	mActionUndo->setEnabled(false);
//	//	mActionRedo->setEnabled(false);
//	//	mActionSimplifyFeature->setEnabled(false);
//	//	mActionAddRing->setEnabled(false);
//	//	mActionFillRing->setEnabled(false);
//	//	mActionAddPart->setEnabled(false);
//	//	mActionDeleteRing->setEnabled(false);
//	//	mActionDeletePart->setEnabled(false);
//	//	mActionReshapeFeatures->setEnabled(false);
//	//	mActionSplitFeatures->setEnabled(false);
//	//	mActionSplitParts->setEnabled(false);
//	//	mActionMergeFeatures->setEnabled(false);
//	//	mActionMergeFeatureAttributes->setEnabled(false);
//	//	mActionMultiEditAttributes->setEnabled(false);
//	//	mActionRotatePointSymbols->setEnabled(false);
//	//	mActionOffsetPointSymbol->setEnabled(false);
//
//	//	mActionPinLabels->setEnabled(false);
//	//	mActionShowHideLabels->setEnabled(false);
//	//	mActionMoveLabel->setEnabled(false);
//	//	mActionRotateLabel->setEnabled(false);
//	//	mActionChangeLabelProperties->setEnabled(false);
//
//	//	mActionDiagramProperties->setEnabled(false);
//
//	//	mActionLocalHistogramStretch->setEnabled(false);
//	//	mActionFullHistogramStretch->setEnabled(false);
//	//	mActionLocalCumulativeCutStretch->setEnabled(false);
//	//	mActionFullCumulativeCutStretch->setEnabled(false);
//	//	mActionIncreaseBrightness->setEnabled(false);
//	//	mActionDecreaseBrightness->setEnabled(false);
//	//	mActionIncreaseContrast->setEnabled(false);
//	//	mActionDecreaseContrast->setEnabled(false);
//	//	mActionIncreaseGamma->setEnabled(false);
//	//	mActionDecreaseGamma->setEnabled(false);
//	//	mActionZoomActualSize->setEnabled(false);
//	//	mActionZoomToLayer->setEnabled(false);
//
//	//	enableDigitizeWithCurveAction(false);
//
//	//	return;
//	//}
//
//	//menuSelect->setEnabled(true);
//
//	//mActionLayerProperties->setEnabled(QgsProject::instance()->layerIsEmbedded(layer->id()).isEmpty());
//	//mActionAddToOverview->setEnabled(true);
//	//mActionZoomToLayer->setEnabled(true);
//
//	//mActionCopyStyle->setEnabled(true);
//	//mActionPasteStyle->setEnabled(clipboard()->hasFormat(QStringLiteral(QGSCLIPBOARD_STYLE_MIME)));
//	//mActionCopyLayer->setEnabled(true);
//
//	//// Vector layers
//	//switch (layer->type())
//	//{
//	//case QgsMapLayerType::VectorLayer:
//	//{
//	//	QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>(layer);
//	//	QgsVectorDataProvider *dprovider = vlayer->dataProvider();
//	//	QString addFeatureText;
//
//	//	bool isEditable = vlayer->isEditable();
//	//	bool layerHasSelection = vlayer->selectedFeatureCount() > 0;
//	//	bool layerHasActions = !vlayer->actions()->actions(QStringLiteral("Canvas")).isEmpty() || !QgsGui::mapLayerActionRegistry()->mapLayerActions(vlayer).isEmpty();
//	//	bool isSpatial = vlayer->isSpatial();
//
//	//	mActionLocalHistogramStretch->setEnabled(false);
//	//	mActionFullHistogramStretch->setEnabled(false);
//	//	mActionLocalCumulativeCutStretch->setEnabled(false);
//	//	mActionFullCumulativeCutStretch->setEnabled(false);
//	//	mActionIncreaseBrightness->setEnabled(false);
//	//	mActionDecreaseBrightness->setEnabled(false);
//	//	mActionIncreaseContrast->setEnabled(false);
//	//	mActionDecreaseContrast->setEnabled(false);
//	//	mActionIncreaseGamma->setEnabled(false);
//	//	mActionDecreaseGamma->setEnabled(false);
//	//	mActionZoomActualSize->setEnabled(false);
//	//	mActionZoomToLayer->setEnabled(isSpatial);
//	//	mActionZoomToSelected->setEnabled(isSpatial);
//	//	mActionLabeling->setEnabled(isSpatial);
//	//	mActionDiagramProperties->setEnabled(isSpatial);
//	//	mActionReverseLine->setEnabled(false);
//	//	mActionTrimExtendFeature->setEnabled(false);
//
//	//	mActionSelectFeatures->setEnabled(isSpatial);
//	//	mActionSelectPolygon->setEnabled(isSpatial);
//	//	mActionSelectFreehand->setEnabled(isSpatial);
//	//	mActionSelectRadius->setEnabled(isSpatial);
//	//	mActionIdentify->setEnabled(isSpatial);
//	//	mActionSelectByExpression->setEnabled(true);
//	//	mActionSelectByForm->setEnabled(true);
//	//	mActionOpenTable->setEnabled(true);
//	//	mActionSelectAll->setEnabled(true);
//	//	mActionReselect->setEnabled(true);
//	//	mActionInvertSelection->setEnabled(true);
//	//	mActionSaveLayerDefinition->setEnabled(true);
//	//	mActionLayerSaveAs->setEnabled(true);
//	//	mActionCopyFeatures->setEnabled(layerHasSelection);
//	//	mActionFeatureAction->setEnabled(layerHasActions);
//
//	//	if (!isEditable && mMapCanvas && mMapCanvas->mapTool()
//	//		&& (mMapCanvas->mapTool()->flags() & QgsMapTool::EditTool) && !mSaveRollbackInProgress)
//	//	{
//	//		mMapCanvas->setMapTool(mNonEditMapTool);
//	//	}
//
//	//	if (dprovider)
//	//	{
//	//		bool canChangeAttributes = dprovider->capabilities() & QgsVectorDataProvider::ChangeAttributeValues;
//	//		bool canDeleteFeatures = dprovider->capabilities() & QgsVectorDataProvider::DeleteFeatures;
//	//		bool canAddFeatures = dprovider->capabilities() & QgsVectorDataProvider::AddFeatures;
//	//		bool canSupportEditing = dprovider->capabilities() & QgsVectorDataProvider::EditingCapabilities;
//	//		bool canChangeGeometry = isSpatial && dprovider->capabilities() & QgsVectorDataProvider::ChangeGeometries;
//
//	//		mActionLayerSubsetString->setEnabled(!isEditable && dprovider->supportsSubsetString());
//
//	//		mActionToggleEditing->setEnabled(canSupportEditing && !vlayer->readOnly());
//	//		mActionToggleEditing->setChecked(canSupportEditing && isEditable);
//	//		mActionSaveLayerEdits->setEnabled(canSupportEditing && isEditable && vlayer->isModified());
//	//		mUndoDock->widget()->setEnabled(canSupportEditing && isEditable);
//	//		mActionUndo->setEnabled(canSupportEditing);
//	//		mActionRedo->setEnabled(canSupportEditing);
//
//	//		//start editing/stop editing
//	//		if (canSupportEditing)
//	//		{
//	//			updateUndoActions();
//	//		}
//
//	//		mActionPasteFeatures->setEnabled(isEditable && canAddFeatures && !clipboard()->isEmpty());
//
//	//		mActionAddFeature->setEnabled(isEditable && canAddFeatures);
//
//	//		bool enableCircularTools;
//	//		bool enableShapeTools;
//	//		enableCircularTools = isEditable && (canAddFeatures || canChangeGeometry)
//	//			&& (vlayer->geometryType() == QgsWkbTypes::LineGeometry || vlayer->geometryType() == QgsWkbTypes::PolygonGeometry);
//	//		enableShapeTools = enableCircularTools;
//	//		mActionCircularStringCurvePoint->setEnabled(enableCircularTools);
//	//		mActionCircularStringRadius->setEnabled(enableCircularTools);
//	//		mMenuCircle->setEnabled(enableShapeTools);
//	//		mActionCircle2Points->setEnabled(enableShapeTools);
//	//		mActionCircle3Points->setEnabled(enableShapeTools);
//	//		mActionCircle3Tangents->setEnabled(enableShapeTools);
//	//		mActionCircle2TangentsPoint->setEnabled(enableShapeTools);
//	//		mActionCircleCenterPoint->setEnabled(enableShapeTools);
//	//		mMenuEllipse->setEnabled(enableShapeTools);
//	//		mActionEllipseCenter2Points->setEnabled(enableShapeTools);
//	//		mActionEllipseCenterPoint->setEnabled(enableShapeTools);
//	//		mActionEllipseExtent->setEnabled(enableShapeTools);
//	//		mActionEllipseFoci->setEnabled(enableShapeTools);
//	//		mMenuRectangle->setEnabled(enableShapeTools);
//	//		mActionRectangleCenterPoint->setEnabled(enableShapeTools);
//	//		mActionRectangleExtent->setEnabled(enableShapeTools);
//	//		mActionRectangle3PointsDistance->setEnabled(enableShapeTools);
//	//		mActionRectangle3PointsProjected->setEnabled(enableShapeTools);
//	//		mMenuRegularPolygon->setEnabled(enableShapeTools);
//	//		mActionRegularPolygon2Points->setEnabled(enableShapeTools);
//	//		mActionRegularPolygonCenterPoint->setEnabled(enableShapeTools);
//	//		mActionRegularPolygonCenterCorner->setEnabled(enableShapeTools);
//
//	//		//does provider allow deleting of features?
//	//		mActionDeleteSelected->setEnabled(isEditable && canDeleteFeatures && layerHasSelection);
//	//		mActionCutFeatures->setEnabled(isEditable && canDeleteFeatures && layerHasSelection);
//
//	//		//merge tool needs editable layer and provider with the capability of adding and deleting features
//	//		if (isEditable && canChangeAttributes)
//	//		{
//	//			mActionMergeFeatures->setEnabled(layerHasSelection && canDeleteFeatures && canAddFeatures);
//	//			mActionMergeFeatureAttributes->setEnabled(layerHasSelection);
//	//			mActionMultiEditAttributes->setEnabled(layerHasSelection);
//	//		}
//	//		else
//	//		{
//	//			mActionMergeFeatures->setEnabled(false);
//	//			mActionMergeFeatureAttributes->setEnabled(false);
//	//			mActionMultiEditAttributes->setEnabled(false);
//	//		}
//
//	//		bool isMultiPart = QgsWkbTypes::isMultiType(vlayer->wkbType()) || !dprovider->doesStrictFeatureTypeCheck();
//
//	//		// moving enabled if geometry changes are supported
//	//		mActionAddPart->setEnabled(isEditable && canChangeGeometry);
//	//		mActionDeletePart->setEnabled(isEditable && canChangeGeometry);
//	//		mActionMoveFeature->setEnabled(isEditable && canChangeGeometry);
//	//		mActionMoveFeatureCopy->setEnabled(isEditable && canChangeGeometry);
//	//		mActionRotateFeature->setEnabled(isEditable && canChangeGeometry);
//	//		mActionVertexTool->setEnabled(isEditable && canChangeGeometry);
//	//		mActionVertexToolActiveLayer->setEnabled(isEditable && canChangeGeometry);
//
//	//		enableDigitizeWithCurveAction(isEditable && canChangeGeometry);
//
//	//		if (vlayer->geometryType() == QgsWkbTypes::PointGeometry)
//	//		{
//	//			mActionAddFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionCapturePoint.svg")));
//	//			addFeatureText = tr("Add Point Feature");
//	//			mActionMoveFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionMoveFeaturePoint.svg")));
//	//			mActionMoveFeatureCopy->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionMoveFeatureCopyPoint.svg")));
//
//	//			mActionAddRing->setEnabled(false);
//	//			mActionFillRing->setEnabled(false);
//	//			mActionReshapeFeatures->setEnabled(false);
//	//			mActionSplitFeatures->setEnabled(false);
//	//			mActionSplitParts->setEnabled(false);
//	//			mActionSimplifyFeature->setEnabled(false);
//	//			mActionDeleteRing->setEnabled(false);
//	//			mActionRotatePointSymbols->setEnabled(false);
//	//			mActionOffsetPointSymbol->setEnabled(false);
//	//			mActionOffsetCurve->setEnabled(false);
//
//	//			if (isEditable && canChangeAttributes)
//	//			{
//	//				if (QgsMapToolRotatePointSymbols::layerIsRotatable(vlayer))
//	//				{
//	//					mActionRotatePointSymbols->setEnabled(true);
//	//				}
//	//				if (QgsMapToolOffsetPointSymbol::layerIsOffsetable(vlayer))
//	//				{
//	//					mActionOffsetPointSymbol->setEnabled(true);
//	//				}
//	//			}
//	//		}
//	//		else if (vlayer->geometryType() == QgsWkbTypes::LineGeometry)
//	//		{
//	//			mActionAddFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionCaptureLine.svg")));
//	//			addFeatureText = tr("Add Line Feature");
//	//			mActionMoveFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionMoveFeatureLine.svg")));
//	//			mActionMoveFeatureCopy->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionMoveFeatureCopyLine.svg")));
//
//	//			mActionReshapeFeatures->setEnabled(isEditable && canChangeGeometry);
//	//			mActionSplitFeatures->setEnabled(isEditable && canAddFeatures);
//	//			mActionSplitParts->setEnabled(isEditable && canChangeGeometry && isMultiPart);
//	//			mActionSimplifyFeature->setEnabled(isEditable && canChangeGeometry);
//	//			mActionOffsetCurve->setEnabled(isEditable && canAddFeatures && canChangeAttributes);
//	//			mActionReverseLine->setEnabled(isEditable && canChangeGeometry);
//	//			mActionTrimExtendFeature->setEnabled(isEditable && canChangeGeometry);
//
//	//			mActionAddRing->setEnabled(false);
//	//			mActionFillRing->setEnabled(false);
//	//			mActionDeleteRing->setEnabled(false);
//	//		}
//	//		else if (vlayer->geometryType() == QgsWkbTypes::PolygonGeometry)
//	//		{
//	//			mActionAddFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionCapturePolygon.svg")));
//	//			addFeatureText = tr("Add Polygon Feature");
//	//			mActionMoveFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionMoveFeature.svg")));
//	//			mActionMoveFeatureCopy->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionMoveFeatureCopy.svg")));
//
//	//			mActionAddRing->setEnabled(isEditable && canChangeGeometry);
//	//			mActionFillRing->setEnabled(isEditable && canChangeGeometry);
//	//			mActionReshapeFeatures->setEnabled(isEditable && canChangeGeometry);
//	//			mActionSplitFeatures->setEnabled(isEditable && canAddFeatures);
//	//			mActionSplitParts->setEnabled(isEditable && canChangeGeometry && isMultiPart);
//	//			mActionSimplifyFeature->setEnabled(isEditable && canChangeGeometry);
//	//			mActionDeleteRing->setEnabled(isEditable && canChangeGeometry);
//	//			mActionOffsetCurve->setEnabled(isEditable && canAddFeatures && canChangeAttributes);
//	//			mActionTrimExtendFeature->setEnabled(isEditable && canChangeGeometry);
//	//		}
//	//		else if (vlayer->geometryType() == QgsWkbTypes::NullGeometry)
//	//		{
//	//			mActionAddFeature->setIcon(QgsApplication::getThemeIcon(QStringLiteral("/mActionNewTableRow.svg")));
//	//			addFeatureText = tr("Add Record");
//	//			mActionAddRing->setEnabled(false);
//	//			mActionFillRing->setEnabled(false);
//	//			mActionReshapeFeatures->setEnabled(false);
//	//			mActionSplitFeatures->setEnabled(false);
//	//			mActionSplitParts->setEnabled(false);
//	//			mActionSimplifyFeature->setEnabled(false);
//	//			mActionDeleteRing->setEnabled(false);
//	//			mActionOffsetCurve->setEnabled(false);
//	//		}
//
//	//		mActionOpenFieldCalc->setEnabled(true);
//	//		mActionAddFeature->setText(addFeatureText);
//	//		mActionAddFeature->setToolTip(addFeatureText);
//	//		QgsGui::shortcutsManager()->unregisterAction(mActionAddFeature);
//	//		if (!mActionAddFeature->text().isEmpty()) // The text will be empty on unknown geometry type -> in this case do not create a shortcut
//	//			QgsGui::shortcutsManager()->registerAction(mActionAddFeature, mActionAddFeature->shortcut().toString());
//	//	}
//	//	else
//	//	{
//	//		mUndoDock->widget()->setEnabled(false);
//	//		mActionUndo->setEnabled(false);
//	//		mActionRedo->setEnabled(false);
//	//		mActionLayerSubsetString->setEnabled(false);
//	//	}
//	//	break;
//	//}
//
//	//case QgsMapLayerType::RasterLayer:
//	//{
//	//	const QgsRasterLayer *rlayer = qobject_cast<const QgsRasterLayer *>(layer);
//	//	const QgsRasterDataProvider *dprovider = rlayer->dataProvider();
//
//	//	if (dprovider
//	//		&& dprovider->dataType(1) != Qgis::ARGB32
//	//		&& dprovider->dataType(1) != Qgis::ARGB32_Premultiplied)
//	//	{
//	//		if (dprovider->capabilities() & QgsRasterDataProvider::Size)
//	//		{
//	//			mActionFullHistogramStretch->setEnabled(true);
//	//		}
//	//		else
//	//		{
//	//			// it would hang up reading the data for WMS for example
//	//			mActionFullHistogramStretch->setEnabled(false);
//	//		}
//	//		mActionLocalHistogramStretch->setEnabled(true);
//	//	}
//	//	else
//	//	{
//	//		mActionLocalHistogramStretch->setEnabled(false);
//	//		mActionFullHistogramStretch->setEnabled(false);
//	//	}
//
//	//	mActionLocalCumulativeCutStretch->setEnabled(true);
//	//	mActionFullCumulativeCutStretch->setEnabled(true);
//	//	mActionIncreaseBrightness->setEnabled(true);
//	//	mActionDecreaseBrightness->setEnabled(true);
//	//	mActionIncreaseContrast->setEnabled(true);
//	//	mActionDecreaseContrast->setEnabled(true);
//	//	mActionIncreaseGamma->setEnabled(true);
//	//	mActionDecreaseGamma->setEnabled(true);
//
//	//	mActionLayerSubsetString->setEnabled(false);
//	//	mActionFeatureAction->setEnabled(false);
//	//	mActionSelectFeatures->setEnabled(false);
//	//	mActionSelectPolygon->setEnabled(false);
//	//	mActionSelectFreehand->setEnabled(false);
//	//	mActionSelectRadius->setEnabled(false);
//	//	mActionZoomActualSize->setEnabled(true);
//	//	mActionZoomToLayer->setEnabled(true);
//	//	mActionZoomToSelected->setEnabled(false);
//	//	mActionOpenTable->setEnabled(false);
//	//	mActionSelectAll->setEnabled(false);
//	//	mActionReselect->setEnabled(false);
//	//	mActionInvertSelection->setEnabled(false);
//	//	mActionSelectByExpression->setEnabled(false);
//	//	mActionSelectByForm->setEnabled(false);
//	//	mActionOpenFieldCalc->setEnabled(false);
//	//	mActionToggleEditing->setEnabled(false);
//	//	mActionToggleEditing->setChecked(false);
//	//	mActionSaveLayerEdits->setEnabled(false);
//	//	mUndoDock->widget()->setEnabled(false);
//	//	mActionUndo->setEnabled(false);
//	//	mActionRedo->setEnabled(false);
//	//	mActionSaveLayerDefinition->setEnabled(true);
//	//	mActionLayerSaveAs->setEnabled(true);
//	//	mActionAddFeature->setEnabled(false);
//	//	mActionCircularStringCurvePoint->setEnabled(false);
//	//	mActionCircularStringRadius->setEnabled(false);
//	//	mMenuCircle->setEnabled(false);
//	//	mActionCircle2Points->setEnabled(false);
//	//	mActionCircle3Points->setEnabled(false);
//	//	mActionCircle3Tangents->setEnabled(false);
//	//	mActionCircle2TangentsPoint->setEnabled(false);
//	//	mActionCircleCenterPoint->setEnabled(false);
//	//	mMenuEllipse->setEnabled(false);
//	//	mActionEllipseCenter2Points->setEnabled(false);
//	//	mActionEllipseCenterPoint->setEnabled(false);
//	//	mActionEllipseExtent->setEnabled(false);
//	//	mActionEllipseFoci->setEnabled(false);
//	//	mMenuRectangle->setEnabled(false);
//	//	mActionRectangleCenterPoint->setEnabled(false);
//	//	mActionRectangleExtent->setEnabled(false);
//	//	mActionRectangle3PointsDistance->setEnabled(false);
//	//	mActionRectangle3PointsProjected->setEnabled(false);
//	//	mMenuRegularPolygon->setEnabled(false);
//	//	mActionRegularPolygon2Points->setEnabled(false);
//	//	mActionRegularPolygonCenterPoint->setEnabled(false);
//	//	mActionRegularPolygonCenterCorner->setEnabled(false);
//	//	mActionReverseLine->setEnabled(false);
//	//	mActionTrimExtendFeature->setEnabled(false);
//	//	mActionDeleteSelected->setEnabled(false);
//	//	mActionAddRing->setEnabled(false);
//	//	mActionFillRing->setEnabled(false);
//	//	mActionAddPart->setEnabled(false);
//	//	mActionVertexTool->setEnabled(false);
//	//	mActionVertexToolActiveLayer->setEnabled(false);
//	//	mActionMoveFeature->setEnabled(false);
//	//	mActionMoveFeatureCopy->setEnabled(false);
//	//	mActionRotateFeature->setEnabled(false);
//	//	mActionOffsetCurve->setEnabled(false);
//	//	mActionCopyFeatures->setEnabled(false);
//	//	mActionCutFeatures->setEnabled(false);
//	//	mActionPasteFeatures->setEnabled(false);
//	//	mActionRotatePointSymbols->setEnabled(false);
//	//	mActionOffsetPointSymbol->setEnabled(false);
//	//	mActionDeletePart->setEnabled(false);
//	//	mActionDeleteRing->setEnabled(false);
//	//	mActionSimplifyFeature->setEnabled(false);
//	//	mActionReshapeFeatures->setEnabled(false);
//	//	mActionSplitFeatures->setEnabled(false);
//	//	mActionSplitParts->setEnabled(false);
//	//	mActionLabeling->setEnabled(false);
//	//	mActionDiagramProperties->setEnabled(false);
//
//	//	enableDigitizeWithCurveAction(false);
//
//	//	//NOTE: This check does not really add any protection, as it is called on load not on layer select/activate
//	//	//If you load a layer with a provider and idenitfy ability then load another without, the tool would be disabled for both
//
//	//	//Enable the Identify tool ( GDAL datasets draw without a provider )
//	//	//but turn off if data provider exists and has no Identify capabilities
//	//	mActionIdentify->setEnabled(true);
//
//	//	QgsSettings settings;
//	//	QgsMapToolIdentify::IdentifyMode identifyMode = settings.enumValue(QStringLiteral("Map/identifyMode"), QgsMapToolIdentify::ActiveLayer);
//	//	if (identifyMode == QgsMapToolIdentify::ActiveLayer)
//	//	{
//	//		if (dprovider)
//	//		{
//	//			// does provider allow the identify map tool?
//	//			if (dprovider->capabilities() & QgsRasterDataProvider::Identify)
//	//			{
//	//				mActionIdentify->setEnabled(true);
//	//			}
//	//			else
//	//			{
//	//				mActionIdentify->setEnabled(false);
//	//			}
//	//		}
//	//	}
//	//	break;
//	//}
//
//	//case QgsMapLayerType::MeshLayer:
//	//	mActionLocalHistogramStretch->setEnabled(false);
//	//	mActionFullHistogramStretch->setEnabled(false);
//	//	mActionLocalCumulativeCutStretch->setEnabled(false);
//	//	mActionFullCumulativeCutStretch->setEnabled(false);
//	//	mActionIncreaseBrightness->setEnabled(false);
//	//	mActionDecreaseBrightness->setEnabled(false);
//	//	mActionIncreaseContrast->setEnabled(false);
//	//	mActionDecreaseContrast->setEnabled(false);
//	//	mActionIncreaseGamma->setEnabled(false);
//	//	mActionDecreaseGamma->setEnabled(false);
//	//	mActionLayerSubsetString->setEnabled(false);
//	//	mActionFeatureAction->setEnabled(false);
//	//	mActionSelectFeatures->setEnabled(false);
//	//	mActionSelectPolygon->setEnabled(false);
//	//	mActionSelectFreehand->setEnabled(false);
//	//	mActionSelectRadius->setEnabled(false);
//	//	mActionZoomActualSize->setEnabled(false);
//	//	mActionZoomToLayer->setEnabled(true);
//	//	mActionZoomToSelected->setEnabled(false);
//	//	mActionOpenTable->setEnabled(false);
//	//	mActionSelectAll->setEnabled(false);
//	//	mActionReselect->setEnabled(false);
//	//	mActionInvertSelection->setEnabled(false);
//	//	mActionSelectByExpression->setEnabled(false);
//	//	mActionSelectByForm->setEnabled(false);
//	//	mActionOpenFieldCalc->setEnabled(false);
//	//	mActionToggleEditing->setEnabled(false);
//	//	mActionToggleEditing->setChecked(false);
//	//	mActionSaveLayerEdits->setEnabled(false);
//	//	mUndoDock->widget()->setEnabled(false);
//	//	mActionUndo->setEnabled(false);
//	//	mActionRedo->setEnabled(false);
//	//	mActionSaveLayerDefinition->setEnabled(true);
//	//	mActionLayerSaveAs->setEnabled(false);
//	//	mActionAddFeature->setEnabled(false);
//	//	mActionCircularStringCurvePoint->setEnabled(false);
//	//	mActionCircularStringRadius->setEnabled(false);
//	//	mActionDeleteSelected->setEnabled(false);
//	//	mActionAddRing->setEnabled(false);
//	//	mActionFillRing->setEnabled(false);
//	//	mActionAddPart->setEnabled(false);
//	//	mActionVertexTool->setEnabled(false);
//	//	mActionVertexToolActiveLayer->setEnabled(false);
//	//	mActionMoveFeature->setEnabled(false);
//	//	mActionMoveFeatureCopy->setEnabled(false);
//	//	mActionRotateFeature->setEnabled(false);
//	//	mActionOffsetCurve->setEnabled(false);
//	//	mActionCopyFeatures->setEnabled(false);
//	//	mActionCutFeatures->setEnabled(false);
//	//	mActionPasteFeatures->setEnabled(false);
//	//	mActionRotatePointSymbols->setEnabled(false);
//	//	mActionOffsetPointSymbol->setEnabled(false);
//	//	mActionDeletePart->setEnabled(false);
//	//	mActionDeleteRing->setEnabled(false);
//	//	mActionSimplifyFeature->setEnabled(false);
//	//	mActionReshapeFeatures->setEnabled(false);
//	//	mActionSplitFeatures->setEnabled(false);
//	//	mActionSplitParts->setEnabled(false);
//	//	mActionLabeling->setEnabled(false);
//	//	mActionDiagramProperties->setEnabled(false);
//	//	mActionIdentify->setEnabled(true);
//	//	enableDigitizeWithCurveAction(false);
//	//	break;
//
//	//case QgsMapLayerType::VectorTileLayer:
//	//	mActionLocalHistogramStretch->setEnabled(false);
//	//	mActionFullHistogramStretch->setEnabled(false);
//	//	mActionLocalCumulativeCutStretch->setEnabled(false);
//	//	mActionFullCumulativeCutStretch->setEnabled(false);
//	//	mActionIncreaseBrightness->setEnabled(false);
//	//	mActionDecreaseBrightness->setEnabled(false);
//	//	mActionIncreaseContrast->setEnabled(false);
//	//	mActionDecreaseContrast->setEnabled(false);
//	//	mActionIncreaseGamma->setEnabled(false);
//	//	mActionDecreaseGamma->setEnabled(false);
//	//	mActionLayerSubsetString->setEnabled(false);
//	//	mActionFeatureAction->setEnabled(false);
//	//	mActionSelectFeatures->setEnabled(false);
//	//	mActionSelectPolygon->setEnabled(false);
//	//	mActionSelectFreehand->setEnabled(false);
//	//	mActionSelectRadius->setEnabled(false);
//	//	mActionZoomActualSize->setEnabled(false);
//	//	mActionZoomToLayer->setEnabled(true);
//	//	mActionZoomToSelected->setEnabled(false);
//	//	mActionOpenTable->setEnabled(false);
//	//	mActionSelectAll->setEnabled(false);
//	//	mActionReselect->setEnabled(false);
//	//	mActionInvertSelection->setEnabled(false);
//	//	mActionSelectByExpression->setEnabled(false);
//	//	mActionSelectByForm->setEnabled(false);
//	//	mActionOpenFieldCalc->setEnabled(false);
//	//	mActionToggleEditing->setEnabled(false);
//	//	mActionToggleEditing->setChecked(false);
//	//	mActionSaveLayerEdits->setEnabled(false);
//	//	mUndoDock->widget()->setEnabled(false);
//	//	mActionUndo->setEnabled(false);
//	//	mActionRedo->setEnabled(false);
//	//	mActionSaveLayerDefinition->setEnabled(true);
//	//	mActionLayerSaveAs->setEnabled(false);
//	//	mActionAddFeature->setEnabled(false);
//	//	mActionCircularStringCurvePoint->setEnabled(false);
//	//	mActionCircularStringRadius->setEnabled(false);
//	//	mActionDeleteSelected->setEnabled(false);
//	//	mActionAddRing->setEnabled(false);
//	//	mActionFillRing->setEnabled(false);
//	//	mActionAddPart->setEnabled(false);
//	//	mActionVertexTool->setEnabled(false);
//	//	mActionVertexToolActiveLayer->setEnabled(false);
//	//	mActionMoveFeature->setEnabled(false);
//	//	mActionMoveFeatureCopy->setEnabled(false);
//	//	mActionRotateFeature->setEnabled(false);
//	//	mActionOffsetCurve->setEnabled(false);
//	//	mActionCopyFeatures->setEnabled(false);
//	//	mActionCutFeatures->setEnabled(false);
//	//	mActionPasteFeatures->setEnabled(false);
//	//	mActionRotatePointSymbols->setEnabled(false);
//	//	mActionOffsetPointSymbol->setEnabled(false);
//	//	mActionDeletePart->setEnabled(false);
//	//	mActionDeleteRing->setEnabled(false);
//	//	mActionSimplifyFeature->setEnabled(false);
//	//	mActionReshapeFeatures->setEnabled(false);
//	//	mActionSplitFeatures->setEnabled(false);
//	//	mActionSplitParts->setEnabled(false);
//	//	mActionLabeling->setEnabled(false);
//	//	mActionDiagramProperties->setEnabled(false);
//	//	mActionIdentify->setEnabled(true);
//	//	enableDigitizeWithCurveAction(false);
//	//	break;
//
//	//case QgsMapLayerType::PointCloudLayer:
//	//	mActionLocalHistogramStretch->setEnabled(false);
//	//	mActionFullHistogramStretch->setEnabled(false);
//	//	mActionLocalCumulativeCutStretch->setEnabled(false);
//	//	mActionFullCumulativeCutStretch->setEnabled(false);
//	//	mActionIncreaseBrightness->setEnabled(false);
//	//	mActionDecreaseBrightness->setEnabled(false);
//	//	mActionIncreaseContrast->setEnabled(false);
//	//	mActionDecreaseContrast->setEnabled(false);
//	//	mActionIncreaseGamma->setEnabled(false);
//	//	mActionDecreaseGamma->setEnabled(false);
//	//	mActionLayerSubsetString->setEnabled(false);
//	//	mActionFeatureAction->setEnabled(false);
//	//	mActionSelectFeatures->setEnabled(false);
//	//	mActionSelectPolygon->setEnabled(false);
//	//	mActionSelectFreehand->setEnabled(false);
//	//	mActionSelectRadius->setEnabled(false);
//	//	mActionZoomActualSize->setEnabled(false);
//	//	mActionZoomToLayer->setEnabled(true);
//	//	mActionZoomToSelected->setEnabled(false);
//	//	mActionOpenTable->setEnabled(false);
//	//	mActionSelectAll->setEnabled(false);
//	//	mActionReselect->setEnabled(false);
//	//	mActionInvertSelection->setEnabled(false);
//	//	mActionSelectByExpression->setEnabled(false);
//	//	mActionSelectByForm->setEnabled(false);
//	//	mActionOpenFieldCalc->setEnabled(false);
//	//	mActionToggleEditing->setEnabled(false);
//	//	mActionToggleEditing->setChecked(false);
//	//	mActionSaveLayerEdits->setEnabled(false);
//	//	mUndoDock->widget()->setEnabled(false);
//	//	mActionUndo->setEnabled(false);
//	//	mActionRedo->setEnabled(false);
//	//	mActionSaveLayerDefinition->setEnabled(true);
//	//	mActionLayerSaveAs->setEnabled(false);
//	//	mActionAddFeature->setEnabled(false);
//	//	mActionCircularStringCurvePoint->setEnabled(false);
//	//	mActionCircularStringRadius->setEnabled(false);
//	//	mActionDeleteSelected->setEnabled(false);
//	//	mActionAddRing->setEnabled(false);
//	//	mActionFillRing->setEnabled(false);
//	//	mActionAddPart->setEnabled(false);
//	//	mActionVertexTool->setEnabled(false);
//	//	mActionVertexToolActiveLayer->setEnabled(false);
//	//	mActionMoveFeature->setEnabled(false);
//	//	mActionMoveFeatureCopy->setEnabled(false);
//	//	mActionRotateFeature->setEnabled(false);
//	//	mActionOffsetCurve->setEnabled(false);
//	//	mActionCopyFeatures->setEnabled(false);
//	//	mActionCutFeatures->setEnabled(false);
//	//	mActionPasteFeatures->setEnabled(false);
//	//	mActionRotatePointSymbols->setEnabled(false);
//	//	mActionOffsetPointSymbol->setEnabled(false);
//	//	mActionDeletePart->setEnabled(false);
//	//	mActionDeleteRing->setEnabled(false);
//	//	mActionSimplifyFeature->setEnabled(false);
//	//	mActionReshapeFeatures->setEnabled(false);
//	//	mActionSplitFeatures->setEnabled(false);
//	//	mActionSplitParts->setEnabled(false);
//	//	mActionLabeling->setEnabled(false);
//	//	mActionDiagramProperties->setEnabled(false);
//	//	mActionIdentify->setEnabled(true);
//	//	enableDigitizeWithCurveAction(false);
//	//	break;
//
//	//case QgsMapLayerType::PluginLayer:
//	//case QgsMapLayerType::AnnotationLayer:
//	//	break;
//
//	//}
//
//	//refreshFeatureActions();
//}
//
//QgsMapLayer *MapRepApp::activeLayer()
//{
//	return mLayerTreeView ? mLayerTreeView->currentLayer() : nullptr;
//}
//
//QgsMeshLayer * MapRepApp::addMeshLayer(const QString &url, const QString &baseName, const QString &providerKey)
//{
//
//}
//
//QgsVectorTileLayer * MapRepApp::addVectorTileLayer(const QString &url, const QString &baseName)
//{
//
//}
//
//void MapRepApp::addDatabaseLayers(QStringList const &layerPathList, QString const &providerKey)
//{
//
//}
//
//void MapRepApp::addSelectedVectorLayer(const QString &uri, const QString &layerName, const QString &provider)
//{
//
//}
//
//void MapRepApp::replaceSelectedVectorLayer(const QString &oldId, const QString &uri, const QString &layerName, const QString &provider)
//{
//
//}
//
//void MapRepApp::showStatusMessage(const QString &message)
//{
//
//}
//
void MapRepApp::closeProject()
{

}

void MapRepApp::freezeCanvases(bool frozen /*= true*/)
{
	const auto canvases = mapCanvases();
	for (QgsMapCanvas *canvas : canvases)
	{
		canvas->freeze(frozen);
	}
}

QList<QgsMapCanvas *> MapRepApp::mapCanvases()
{
	// filter out browser canvases -- they are children of app, but a different
	// kind of beast, and here we only want the main canvas or dock canvases
	auto canvases = findChildren< QgsMapCanvas * >();
	canvases.erase(std::remove_if(canvases.begin(), canvases.end(),
		[](QgsMapCanvas * canvas)
	{
		return !canvas || canvas->property("browser_canvas").toBool();
	}), canvases.end());
	return canvases;
}

void MapRepApp::refreshMapCanvas(bool redrawAllLayers /*= false*/)
{
	const auto canvases = mapCanvases();
	for (QgsMapCanvas *canvas : canvases)
	{
		//stop any current rendering
		canvas->stopRendering();
		if (redrawAllLayers)
			canvas->refreshAllLayers();
		else
			canvas->refresh();
	}
}

//void MapRepApp::openProject(QAction *action)
//{
//	// possibly save any pending work before opening a different project
//	Q_ASSERT(action);
//	const QString project = action->data().toString().replace("&&", "&");
//
//	if (checkTasksDependOnProject())
//		return;
//
//	if (checkUnsavedLayerEdits() && checkMemoryLayers() && saveDirty())
//		addProject(project);
//}
//
//void MapRepApp::runScript(const QString &filePath)
//{
//#ifdef WITH_BINDINGS
//	if (!mPythonUtils || !mPythonUtils->isEnabled())
//		return;
//
//	QgsSettings settings;
//	bool showScriptWarning = settings.value(QStringLiteral("UI/showScriptWarning"), true).toBool();
//
//	QMessageBox msgbox;
//	if (showScriptWarning)
//	{
//		msgbox.setWindowTitle(tr("Security warning"));
//		msgbox.setText(tr("Executing a script from an untrusted source can harm your computer. Only continue if you trust the source of the script. Continue?"));
//		msgbox.setIcon(QMessageBox::Icon::Warning);
//		msgbox.addButton(QMessageBox::Yes);
//		msgbox.addButton(QMessageBox::No);
//		msgbox.setDefaultButton(QMessageBox::No);
//		QCheckBox *cb = new QCheckBox(tr("Don't show this again."));
//		msgbox.setCheckBox(cb);
//		msgbox.exec();
//		settings.setValue(QStringLiteral("UI/showScriptWarning"), !msgbox.checkBox()->isChecked());
//	}
//
//	if (!showScriptWarning || msgbox.result() == QMessageBox::Yes)
//	{
//		mPythonUtils->runString(QString("qgis.utils.run_script_from_file(\"%1\")").arg(filePath),
//			tr("Failed to run Python script:"), false);
//	}
//#else
//	Q_UNUSED(filePath)
//#endif
//}
//
//void MapRepApp::openProject(const QString &fileName)
//{
//	QgsCanvasRefreshBlocker refreshBlocker;
//	if (checkTasksDependOnProject())
//		return;
//
//	// possibly save any pending work before opening a different project
//	if (checkUnsavedLayerEdits() && checkMemoryLayers() && saveDirty())
//	{
//		// error handling and reporting is in addProject() function
//		addProject(fileName);
//	}
//}
//
//bool MapRepApp::openLayer(const QString &fileName, bool allowInteractive)
//{
//	bool ok = false;
//	const QFileInfo fileInfo(fileName);
//
//	// highest priority = delegate to provider registry to handle
//
//	const QList< QgsProviderRegistry::ProviderCandidateDetails > candidateProviders = QgsProviderRegistry::instance()->preferredProvidersForUri(fileName);
//	if (candidateProviders.size() == 1 && candidateProviders.at(0).layerTypes().size() == 1)
//	{
//		// one good candidate provider and possible layer type -- that makes things nice and easy!
//		switch (candidateProviders.at(0).layerTypes().at(0))
//		{
//		case QgsMapLayerType::VectorLayer:
//		case QgsMapLayerType::RasterLayer:
//		case QgsMapLayerType::MeshLayer:
//		case QgsMapLayerType::AnnotationLayer:
//		case QgsMapLayerType::PluginLayer:
//		case QgsMapLayerType::VectorTileLayer:
//			// not supported here yet!
//			break;
//		}
//	}
//
//	if (ok)
//		return true;
//
//	CPLPushErrorHandler(CPLQuietErrorHandler);
//	// try to load it as raster
//	if (QgsRasterLayer::isValidRasterFileName(fileName))
//	{
//		// open .adf as a directory
//		if (fileName.endsWith(QLatin1String(".adf"), Qt::CaseInsensitive))
//		{
//			QString dirName = fileInfo.path();
//			ok = addRasterLayer(dirName, QFileInfo(dirName).completeBaseName());
//		}
//		else
//			ok = addRasterLayer(fileName, fileInfo.completeBaseName());
//	}
//
//	// try as a vector
//	if (!ok || fileName.endsWith(QLatin1String(".gpkg"), Qt::CaseInsensitive))
//	{
//		if (allowInteractive)
//		{
//			ok = ok || addVectorLayersPrivate(QStringList(fileName), QString(), QStringLiteral("file"), false);
//		}
//		else
//		{
//			ok = ok || addVectorLayerPrivate(fileName, fileInfo.completeBaseName(), QStringLiteral("ogr"), false);
//		}
//	}
//
//
//	CPLPopErrorHandler();
//
//	//// Try to load as mesh layer after raster & vector
//	//if (!ok)
//	//{
//	//	ok = static_cast<bool>(addMeshLayerPrivate(fileName, fileInfo.completeBaseName(), QStringLiteral("mdal"), false));
//	//}
//
//	//if (!ok)
//	//{
//	//	// we have no idea what this file is...
//	//	QgsMessageLog::logMessage(tr("Unable to load %1").arg(fileName));
//
//	//	const QString msg = tr("%1 is not a valid or recognized data source.").arg(fileName);
//	//	visibleMessageBar()->pushMessage(tr("Invalid Data Source"), msg, Qgis::Critical, messageTimeout());
//	//}
//
//	return ok;
//}
//
//void MapRepApp::openLayerDefinition(const QString &path)
//{
//	QString errorMessage;
//	bool loaded = QgsLayerDefinition::loadLayerDefinition(path, QgsProject::instance(), QgsProject::instance()->layerTreeRoot(), errorMessage);
//	if (!loaded)
//	{
//		QgsDebugMsg(errorMessage);
//		visibleMessageBar()->pushMessage(tr("Error loading layer definition"), errorMessage, Qgis::Warning);
//	}
//}
//
//void MapRepApp::openTemplate(const QString &fileName)
//{
//	QFile templateFile;
//	templateFile.setFileName(fileName);
//
//	if (!templateFile.open(QIODevice::ReadOnly))
//	{
//		visibleMessageBar()->pushMessage(tr("Load template"), tr("Could not read template file"), Qgis::Warning);
//		return;
//	}
//
//	QDomDocument templateDoc;
//	if (!templateDoc.setContent(&templateFile, false))
//	{
//		visibleMessageBar()->pushMessage(tr("Load template"), tr("Could not load template file"), Qgis::Warning);
//		return;
//	}
//
//	QString title;
//	QDomElement layoutElem = templateDoc.documentElement();
//	if (!layoutElem.isNull())
//		title = layoutElem.attribute(QStringLiteral("name"));
//
//	if (!uniqueLayoutTitle(this, title, true, QgsMasterLayoutInterface::PrintLayout, title))
//	{
//		return;
//	}
//
//	//create new layout object
//	std::unique_ptr< QgsPrintLayout > layout = qgis::make_unique< QgsPrintLayout >(QgsProject::instance());
//	bool loadedOk = false;
//	layout->loadFromTemplate(templateDoc, QgsReadWriteContext(), true, &loadedOk);
//	if (loadedOk)
//	{
//		layout->setName(title);
//
//		openLayoutDesignerDialog(layout.get());
//		QgsProject::instance()->layoutManager()->addLayout(layout.release());
//	}
//	else
//	{
//		visibleMessageBar()->pushMessage(tr("Load template"), tr("Could not load template file"), Qgis::Warning);
//	}
//}
//
//void MapRepApp::openFile(const QString &fileName, const QString &fileTypeHint /*= QString()*/)
//{
//	// check to see if we are opening a project file
//	QFileInfo fi(fileName);
//	if (fileTypeHint == QLatin1String("project") || fi.suffix().compare(QLatin1String("qgs"), Qt::CaseInsensitive) == 0 || fi.suffix().compare(QLatin1String("qgz"), Qt::CaseInsensitive) == 0)
//	{
//		QgsDebugMsgLevel("Opening project " + fileName, 2);
//		openProject(fileName);
//	}
//	else if (fi.suffix().compare(QLatin1String("qlr"), Qt::CaseInsensitive) == 0)
//	{
//		openLayerDefinition(fileName);
//	}
//	else if (fi.suffix().compare(QLatin1String("qpt"), Qt::CaseInsensitive) == 0)
//	{
//		openTemplate(fileName);
//	}
//	else if (fi.suffix().compare(QLatin1String("py"), Qt::CaseInsensitive) == 0)
//	{
//		runScript(fileName);
//	}
//	else
//	{
//		QgsDebugMsgLevel("Adding " + fileName + " to the map canvas", 2);
//		openLayer(fileName, true);
//	}
//}
//
//void MapRepApp::layerTreeViewDoubleClicked(const QModelIndex &index)
//{
//
//}
//
//void MapRepApp::zoomFull()
//{
//
//}
//
//void MapRepApp::zoomToPrevious()
//{
//
//}
//
//void MapRepApp::zoomToNext()
//{
//
//}
//
//void MapRepApp::zoomToSelected()
//{
//
//}
//
//void MapRepApp::panToSelected()
//{
//
//}
//
//void MapRepApp::layerProperties()
//{
//
//}
//int MapRepApp::messageTimeout()
//{
//	QgsSettings settings;
//	return settings.value(QStringLiteral("qgis/messageTimeout"), 5).toInt();
//}
//
//bool MapRepApp::uniqueLayoutTitle(QWidget *parent, QString &title, bool acceptEmpty, QgsMasterLayoutInterface::Type type, const QString &currentTitle)
//{
//	if (!parent)
//	{
//		parent = this;
//	}
//	bool titleValid = false;
//	QString newTitle = QString(currentTitle);
//
//	QString typeString;
//	QString helpPage;
//	switch (type)
//	{
//	case QgsMasterLayoutInterface::PrintLayout:
//		typeString = tr("print layout");
//		helpPage = QStringLiteral("print_composer/index.html");
//		break;
//	case QgsMasterLayoutInterface::Report:
//		typeString = tr("report");
//		helpPage = QStringLiteral("print_composer/create_reports.html");
//		break;
//	}
//
//	QString chooseMsg = tr("Enter a unique %1 title").arg(typeString);
//	if (acceptEmpty)
//	{
//		chooseMsg += '\n' + tr("(a title will be automatically generated if left empty)");
//	}
//	QString titleMsg = chooseMsg;
//
//	QStringList layoutNames;
//	const QList< QgsMasterLayoutInterface * > layouts = QgsProject::instance()->layoutManager()->layouts();
//	layoutNames.reserve(layouts.size() + 1);
//	for (QgsMasterLayoutInterface *l : layouts)
//	{
//		layoutNames << l->name();
//	}
//
//	const QString windowTitle = tr("Create %1").arg(QgsGui::higFlags() & QgsGui::HigDialogTitleIsTitleCase ? QgsStringUtils::capitalize(typeString, QgsStringUtils::TitleCase)
//		: typeString);
//
//	while (!titleValid)
//	{
//
//		QgsNewNameDialog dlg(typeString, newTitle, QStringList(), layoutNames, QRegExp(), Qt::CaseSensitive, parent);
//		dlg.setWindowTitle(windowTitle);
//		dlg.setHintString(titleMsg);
//		dlg.setOverwriteEnabled(false);
//		dlg.setAllowEmptyName(true);
//		dlg.setConflictingNameWarning(tr("Title already exists!"));
//
//		dlg.buttonBox()->addButton(QDialogButtonBox::Help);
//		connect(dlg.buttonBox(), &QDialogButtonBox::helpRequested, this, [=]
//		{
//			QgsHelp::openHelp(helpPage);
//		});
//
//		if (dlg.exec() != QDialog::Accepted)
//		{
//			return false;
//		}
//
//		newTitle = dlg.name();
//		if (newTitle.isEmpty())
//		{
//			if (!acceptEmpty)
//			{
//				titleMsg = chooseMsg + "\n\n" + tr("Title can not be empty!");
//			}
//			else
//			{
//				titleValid = true;
//				newTitle = QgsProject::instance()->layoutManager()->generateUniqueTitle(type);
//			}
//		}
//		else if (layoutNames.indexOf(newTitle, 1) >= 0)
//		{
//			layoutNames[0] = QString(); // clear non-unique name
//			titleMsg = chooseMsg + "\n\n" + tr("Title already exists!");
//		}
//		else
//		{
//			titleValid = true;
//		}
//	}
//
//	title = newTitle;
//
//	return true;
//}
//
//QgsLayoutDesignerDialog *MapRepApp::openLayoutDesignerDialog(QgsMasterLayoutInterface *layout)
//{
//	// maybe a designer already open for this layout
//	const auto constMLayoutDesignerDialogs = mLayoutDesignerDialogs;
//	for (QgsLayoutDesignerDialog *designer : constMLayoutDesignerDialogs)
//	{
//		if (designer->masterLayout() == layout)
//		{
//			designer->show();
//			designer->activate();
//			designer->raise();
//			return designer;
//		}
//	}
//
//	//nope, so make a new one
//	//important - no parent set, otherwise Windows 10 sets the dialog as always on top of the QGIS window!!
//	QgsLayoutDesignerDialog *newDesigner = new QgsLayoutDesignerDialog(nullptr);
//	newDesigner->setMasterLayout(layout);
//	connect(newDesigner, &QgsLayoutDesignerDialog::aboutToClose, this, [this, newDesigner]
//	{
//		emit layoutDesignerWillBeClosed(newDesigner->iface());
//		mLayoutDesignerDialogs.remove(newDesigner);
//		emit layoutDesignerClosed();
//	});
//
//	//add it to the map of existing print designers
//	mLayoutDesignerDialogs.insert(newDesigner);
//
//	newDesigner->open();
//	emit layoutDesignerOpened(newDesigner->iface());
//
//	return newDesigner;
//}
//
//static QStringList splitSubLayerDef(const QString &subLayerDef)
//{
//	return subLayerDef.split(QgsDataProvider::sublayerSeparator());
//}
//
//static void setupVectorLayer(const QString &vectorLayerPath,
//	const QStringList &sublayers,
//	QgsVectorLayer *&layer,
//	const QString &providerKey,
//	QgsVectorLayer::LayerOptions options)
//{
//	//set friendly name for datasources with only one layer
//	QgsSettings settings;
//	QStringList elements = splitSubLayerDef(sublayers.at(0));
//	QString rawLayerName = elements.size() >= 2 ? elements.at(1) : QString();
//	QString subLayerNameFormatted = rawLayerName;
//	if (settings.value(QStringLiteral("qgis/formatLayerName"), false).toBool())
//	{
//		subLayerNameFormatted = QgsMapLayer::formatLayerName(subLayerNameFormatted);
//	}
//
//	if (elements.size() >= 4 && layer->name().compare(rawLayerName, Qt::CaseInsensitive) != 0
//		&& layer->name().compare(subLayerNameFormatted, Qt::CaseInsensitive) != 0)
//	{
//		layer->setName(QStringLiteral("%1 %2").arg(layer->name(), rawLayerName));
//	}
//
//	// Systematically add a layername= option to OGR datasets in case
//	// the current single layer dataset becomes layer a multi-layer one.
//	// Except for a few select extensions, known to be always single layer dataset.
//	QFileInfo fi(vectorLayerPath);
//	QString ext = fi.suffix().toLower();
//	if (providerKey == QLatin1String("ogr") &&
//		ext != QLatin1String("shp") &&
//		ext != QLatin1String("mif") &&
//		ext != QLatin1String("tab") &&
//		ext != QLatin1String("csv") &&
//		ext != QLatin1String("geojson") &&
//		!vectorLayerPath.contains(QStringLiteral("layerid=")) &&
//		!vectorLayerPath.contains(QStringLiteral("layername=")))
//	{
//		auto uriParts = QgsProviderRegistry::instance()->decodeUri(
//			layer->providerType(), layer->dataProvider()->dataSourceUri());
//		uriParts.insert(QStringLiteral("layerName"), rawLayerName);
//		QString composedURI = QgsProviderRegistry::instance()->encodeUri(
//			layer->providerType(), uriParts);
//
//		auto newLayer = qgis::make_unique<QgsVectorLayer>(composedURI, layer->name(), QStringLiteral("ogr"), options);
//		if (newLayer && newLayer->isValid())
//		{
//			delete layer;
//			layer = newLayer.release();
//		}
//	}
//}
