/****************************************************************************
** Meta object code from reading C++ file 'qgisinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgisinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgisinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgisInterface_t {
    QByteArrayData data[170];
    char stringdata0[3064];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgisInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgisInterface_t qt_meta_stringdata_QgisInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgisInterface"
QT_MOC_LITERAL(1, 14, 19), // "currentLayerChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 48, 5), // "layer"
QT_MOC_LITERAL(5, 54, 19), // "currentThemeChanged"
QT_MOC_LITERAL(6, 74, 5), // "theme"
QT_MOC_LITERAL(7, 80, 20), // "layoutDesignerOpened"
QT_MOC_LITERAL(8, 101, 27), // "QgsLayoutDesignerInterface*"
QT_MOC_LITERAL(9, 129, 8), // "designer"
QT_MOC_LITERAL(10, 138, 26), // "layoutDesignerWillBeClosed"
QT_MOC_LITERAL(11, 165, 20), // "layoutDesignerClosed"
QT_MOC_LITERAL(12, 186, 23), // "initializationCompleted"
QT_MOC_LITERAL(13, 210, 11), // "projectRead"
QT_MOC_LITERAL(14, 222, 17), // "newProjectCreated"
QT_MOC_LITERAL(15, 240, 12), // "layerSavedAs"
QT_MOC_LITERAL(16, 253, 1), // "l"
QT_MOC_LITERAL(17, 255, 4), // "path"
QT_MOC_LITERAL(18, 260, 8), // "zoomFull"
QT_MOC_LITERAL(19, 269, 14), // "zoomToPrevious"
QT_MOC_LITERAL(20, 284, 10), // "zoomToNext"
QT_MOC_LITERAL(21, 295, 17), // "zoomToActiveLayer"
QT_MOC_LITERAL(22, 313, 14), // "addVectorLayer"
QT_MOC_LITERAL(23, 328, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(24, 344, 15), // "vectorLayerPath"
QT_MOC_LITERAL(25, 360, 8), // "baseName"
QT_MOC_LITERAL(26, 369, 11), // "providerKey"
QT_MOC_LITERAL(27, 381, 14), // "addRasterLayer"
QT_MOC_LITERAL(28, 396, 15), // "QgsRasterLayer*"
QT_MOC_LITERAL(29, 412, 15), // "rasterLayerPath"
QT_MOC_LITERAL(30, 428, 3), // "url"
QT_MOC_LITERAL(31, 432, 9), // "layerName"
QT_MOC_LITERAL(32, 442, 12), // "addMeshLayer"
QT_MOC_LITERAL(33, 455, 13), // "QgsMeshLayer*"
QT_MOC_LITERAL(34, 469, 18), // "addVectorTileLayer"
QT_MOC_LITERAL(35, 488, 19), // "QgsVectorTileLayer*"
QT_MOC_LITERAL(36, 508, 18), // "addPointCloudLayer"
QT_MOC_LITERAL(37, 527, 19), // "QgsPointCloudLayer*"
QT_MOC_LITERAL(38, 547, 10), // "addProject"
QT_MOC_LITERAL(39, 558, 7), // "project"
QT_MOC_LITERAL(40, 566, 10), // "newProject"
QT_MOC_LITERAL(41, 577, 16), // "promptToSaveFlag"
QT_MOC_LITERAL(42, 594, 17), // "reloadConnections"
QT_MOC_LITERAL(43, 612, 14), // "setActiveLayer"
QT_MOC_LITERAL(44, 627, 24), // "copySelectionToClipboard"
QT_MOC_LITERAL(45, 652, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(46, 671, 14), // "addToolBarIcon"
QT_MOC_LITERAL(47, 686, 8), // "QAction*"
QT_MOC_LITERAL(48, 695, 7), // "qAction"
QT_MOC_LITERAL(49, 703, 16), // "addToolBarWidget"
QT_MOC_LITERAL(50, 720, 8), // "QWidget*"
QT_MOC_LITERAL(51, 729, 6), // "widget"
QT_MOC_LITERAL(52, 736, 17), // "removeToolBarIcon"
QT_MOC_LITERAL(53, 754, 22), // "addRasterToolBarWidget"
QT_MOC_LITERAL(54, 777, 20), // "addRasterToolBarIcon"
QT_MOC_LITERAL(55, 798, 23), // "removeRasterToolBarIcon"
QT_MOC_LITERAL(56, 822, 20), // "addVectorToolBarIcon"
QT_MOC_LITERAL(57, 843, 22), // "addVectorToolBarWidget"
QT_MOC_LITERAL(58, 866, 23), // "removeVectorToolBarIcon"
QT_MOC_LITERAL(59, 890, 22), // "addDatabaseToolBarIcon"
QT_MOC_LITERAL(60, 913, 24), // "addDatabaseToolBarWidget"
QT_MOC_LITERAL(61, 938, 25), // "removeDatabaseToolBarIcon"
QT_MOC_LITERAL(62, 964, 17), // "addWebToolBarIcon"
QT_MOC_LITERAL(63, 982, 19), // "addWebToolBarWidget"
QT_MOC_LITERAL(64, 1002, 20), // "removeWebToolBarIcon"
QT_MOC_LITERAL(65, 1023, 10), // "addToolBar"
QT_MOC_LITERAL(66, 1034, 9), // "QToolBar*"
QT_MOC_LITERAL(67, 1044, 4), // "name"
QT_MOC_LITERAL(68, 1049, 7), // "toolbar"
QT_MOC_LITERAL(69, 1057, 15), // "Qt::ToolBarArea"
QT_MOC_LITERAL(70, 1073, 4), // "area"
QT_MOC_LITERAL(71, 1078, 14), // "openMessageLog"
QT_MOC_LITERAL(72, 1093, 18), // "addUserInputWidget"
QT_MOC_LITERAL(73, 1112, 17), // "showLayoutManager"
QT_MOC_LITERAL(74, 1130, 18), // "openLayoutDesigner"
QT_MOC_LITERAL(75, 1149, 25), // "QgsMasterLayoutInterface*"
QT_MOC_LITERAL(76, 1175, 6), // "layout"
QT_MOC_LITERAL(77, 1182, 17), // "showOptionsDialog"
QT_MOC_LITERAL(78, 1200, 6), // "parent"
QT_MOC_LITERAL(79, 1207, 11), // "currentPage"
QT_MOC_LITERAL(80, 1219, 27), // "showProjectPropertiesDialog"
QT_MOC_LITERAL(81, 1247, 15), // "buildStyleSheet"
QT_MOC_LITERAL(82, 1263, 4), // "opts"
QT_MOC_LITERAL(83, 1268, 21), // "saveStyleSheetOptions"
QT_MOC_LITERAL(84, 1290, 15), // "addPluginToMenu"
QT_MOC_LITERAL(85, 1306, 6), // "action"
QT_MOC_LITERAL(86, 1313, 16), // "removePluginMenu"
QT_MOC_LITERAL(87, 1330, 20), // "insertAddLayerAction"
QT_MOC_LITERAL(88, 1351, 20), // "removeAddLayerAction"
QT_MOC_LITERAL(89, 1372, 23), // "addPluginToDatabaseMenu"
QT_MOC_LITERAL(90, 1396, 24), // "removePluginDatabaseMenu"
QT_MOC_LITERAL(91, 1421, 21), // "addPluginToRasterMenu"
QT_MOC_LITERAL(92, 1443, 22), // "removePluginRasterMenu"
QT_MOC_LITERAL(93, 1466, 21), // "addPluginToVectorMenu"
QT_MOC_LITERAL(94, 1488, 22), // "removePluginVectorMenu"
QT_MOC_LITERAL(95, 1511, 18), // "addPluginToWebMenu"
QT_MOC_LITERAL(96, 1530, 19), // "removePluginWebMenu"
QT_MOC_LITERAL(97, 1550, 13), // "addDockWidget"
QT_MOC_LITERAL(98, 1564, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(99, 1583, 12), // "QDockWidget*"
QT_MOC_LITERAL(100, 1596, 10), // "dockwidget"
QT_MOC_LITERAL(101, 1607, 21), // "addTabifiedDockWidget"
QT_MOC_LITERAL(102, 1629, 10), // "tabifyWith"
QT_MOC_LITERAL(103, 1640, 8), // "raiseTab"
QT_MOC_LITERAL(104, 1649, 16), // "removeDockWidget"
QT_MOC_LITERAL(105, 1666, 19), // "showLayerProperties"
QT_MOC_LITERAL(106, 1686, 18), // "showAttributeTable"
QT_MOC_LITERAL(107, 1705, 8), // "QDialog*"
QT_MOC_LITERAL(108, 1714, 16), // "filterExpression"
QT_MOC_LITERAL(109, 1731, 9), // "addWindow"
QT_MOC_LITERAL(110, 1741, 12), // "removeWindow"
QT_MOC_LITERAL(111, 1754, 24), // "registerMainWindowAction"
QT_MOC_LITERAL(112, 1779, 15), // "defaultShortcut"
QT_MOC_LITERAL(113, 1795, 26), // "unregisterMainWindowAction"
QT_MOC_LITERAL(114, 1822, 35), // "registerMapLayerConfigWidgetF..."
QT_MOC_LITERAL(115, 1858, 31), // "QgsMapLayerConfigWidgetFactory*"
QT_MOC_LITERAL(116, 1890, 7), // "factory"
QT_MOC_LITERAL(117, 1898, 37), // "unregisterMapLayerConfigWidge..."
QT_MOC_LITERAL(118, 1936, 28), // "registerOptionsWidgetFactory"
QT_MOC_LITERAL(119, 1965, 24), // "QgsOptionsWidgetFactory*"
QT_MOC_LITERAL(120, 1990, 30), // "unregisterOptionsWidgetFactory"
QT_MOC_LITERAL(121, 2021, 38), // "registerProjectPropertiesWidg..."
QT_MOC_LITERAL(122, 2060, 40), // "unregisterProjectPropertiesWi..."
QT_MOC_LITERAL(123, 2101, 28), // "registerDevToolWidgetFactory"
QT_MOC_LITERAL(124, 2130, 24), // "QgsDevToolWidgetFactory*"
QT_MOC_LITERAL(125, 2155, 30), // "unregisterDevToolWidgetFactory"
QT_MOC_LITERAL(126, 2186, 30), // "registerApplicationExitBlocker"
QT_MOC_LITERAL(127, 2217, 35), // "QgsApplicationExitBlockerInte..."
QT_MOC_LITERAL(128, 2253, 7), // "blocker"
QT_MOC_LITERAL(129, 2261, 32), // "unregisterApplicationExitBlocker"
QT_MOC_LITERAL(130, 2294, 22), // "registerMapToolHandler"
QT_MOC_LITERAL(131, 2317, 26), // "QgsAbstractMapToolHandler*"
QT_MOC_LITERAL(132, 2344, 7), // "handler"
QT_MOC_LITERAL(133, 2352, 24), // "unregisterMapToolHandler"
QT_MOC_LITERAL(134, 2377, 25), // "registerCustomDropHandler"
QT_MOC_LITERAL(135, 2403, 21), // "QgsCustomDropHandler*"
QT_MOC_LITERAL(136, 2425, 27), // "unregisterCustomDropHandler"
QT_MOC_LITERAL(137, 2453, 32), // "registerCustomProjectOpenHandler"
QT_MOC_LITERAL(138, 2486, 28), // "QgsCustomProjectOpenHandler*"
QT_MOC_LITERAL(139, 2515, 34), // "unregisterCustomProjectOpenHa..."
QT_MOC_LITERAL(140, 2550, 31), // "registerCustomLayoutDropHandler"
QT_MOC_LITERAL(141, 2582, 27), // "QgsLayoutCustomDropHandler*"
QT_MOC_LITERAL(142, 2610, 33), // "unregisterCustomLayoutDropHan..."
QT_MOC_LITERAL(143, 2644, 7), // "openURL"
QT_MOC_LITERAL(144, 2652, 19), // "useQgisDocDirectory"
QT_MOC_LITERAL(145, 2672, 15), // "openFeatureForm"
QT_MOC_LITERAL(146, 2688, 11), // "QgsFeature&"
QT_MOC_LITERAL(147, 2700, 1), // "f"
QT_MOC_LITERAL(148, 2702, 17), // "updateFeatureOnly"
QT_MOC_LITERAL(149, 2720, 9), // "showModal"
QT_MOC_LITERAL(150, 2730, 14), // "getFeatureForm"
QT_MOC_LITERAL(151, 2745, 19), // "QgsAttributeDialog*"
QT_MOC_LITERAL(152, 2765, 11), // "preloadForm"
QT_MOC_LITERAL(153, 2777, 6), // "uifile"
QT_MOC_LITERAL(154, 2784, 13), // "locatorSearch"
QT_MOC_LITERAL(155, 2798, 10), // "searchText"
QT_MOC_LITERAL(156, 2809, 21), // "registerLocatorFilter"
QT_MOC_LITERAL(157, 2831, 17), // "QgsLocatorFilter*"
QT_MOC_LITERAL(158, 2849, 6), // "filter"
QT_MOC_LITERAL(159, 2856, 23), // "deregisterLocatorFilter"
QT_MOC_LITERAL(160, 2880, 24), // "invalidateLocatorResults"
QT_MOC_LITERAL(161, 2905, 20), // "askForDatumTransform"
QT_MOC_LITERAL(162, 2926, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(163, 2955, 9), // "sourceCrs"
QT_MOC_LITERAL(164, 2965, 14), // "destinationCrs"
QT_MOC_LITERAL(165, 2980, 12), // "browserModel"
QT_MOC_LITERAL(166, 2993, 19), // "QgsBrowserGuiModel*"
QT_MOC_LITERAL(167, 3013, 21), // "setGpsPanelConnection"
QT_MOC_LITERAL(168, 3035, 17), // "QgsGpsConnection*"
QT_MOC_LITERAL(169, 3053, 10) // "connection"

    },
    "QgisInterface\0currentLayerChanged\0\0"
    "QgsMapLayer*\0layer\0currentThemeChanged\0"
    "theme\0layoutDesignerOpened\0"
    "QgsLayoutDesignerInterface*\0designer\0"
    "layoutDesignerWillBeClosed\0"
    "layoutDesignerClosed\0initializationCompleted\0"
    "projectRead\0newProjectCreated\0"
    "layerSavedAs\0l\0path\0zoomFull\0"
    "zoomToPrevious\0zoomToNext\0zoomToActiveLayer\0"
    "addVectorLayer\0QgsVectorLayer*\0"
    "vectorLayerPath\0baseName\0providerKey\0"
    "addRasterLayer\0QgsRasterLayer*\0"
    "rasterLayerPath\0url\0layerName\0"
    "addMeshLayer\0QgsMeshLayer*\0"
    "addVectorTileLayer\0QgsVectorTileLayer*\0"
    "addPointCloudLayer\0QgsPointCloudLayer*\0"
    "addProject\0project\0newProject\0"
    "promptToSaveFlag\0reloadConnections\0"
    "setActiveLayer\0copySelectionToClipboard\0"
    "pasteFromClipboard\0addToolBarIcon\0"
    "QAction*\0qAction\0addToolBarWidget\0"
    "QWidget*\0widget\0removeToolBarIcon\0"
    "addRasterToolBarWidget\0addRasterToolBarIcon\0"
    "removeRasterToolBarIcon\0addVectorToolBarIcon\0"
    "addVectorToolBarWidget\0removeVectorToolBarIcon\0"
    "addDatabaseToolBarIcon\0addDatabaseToolBarWidget\0"
    "removeDatabaseToolBarIcon\0addWebToolBarIcon\0"
    "addWebToolBarWidget\0removeWebToolBarIcon\0"
    "addToolBar\0QToolBar*\0name\0toolbar\0"
    "Qt::ToolBarArea\0area\0openMessageLog\0"
    "addUserInputWidget\0showLayoutManager\0"
    "openLayoutDesigner\0QgsMasterLayoutInterface*\0"
    "layout\0showOptionsDialog\0parent\0"
    "currentPage\0showProjectPropertiesDialog\0"
    "buildStyleSheet\0opts\0saveStyleSheetOptions\0"
    "addPluginToMenu\0action\0removePluginMenu\0"
    "insertAddLayerAction\0removeAddLayerAction\0"
    "addPluginToDatabaseMenu\0"
    "removePluginDatabaseMenu\0addPluginToRasterMenu\0"
    "removePluginRasterMenu\0addPluginToVectorMenu\0"
    "removePluginVectorMenu\0addPluginToWebMenu\0"
    "removePluginWebMenu\0addDockWidget\0"
    "Qt::DockWidgetArea\0QDockWidget*\0"
    "dockwidget\0addTabifiedDockWidget\0"
    "tabifyWith\0raiseTab\0removeDockWidget\0"
    "showLayerProperties\0showAttributeTable\0"
    "QDialog*\0filterExpression\0addWindow\0"
    "removeWindow\0registerMainWindowAction\0"
    "defaultShortcut\0unregisterMainWindowAction\0"
    "registerMapLayerConfigWidgetFactory\0"
    "QgsMapLayerConfigWidgetFactory*\0factory\0"
    "unregisterMapLayerConfigWidgetFactory\0"
    "registerOptionsWidgetFactory\0"
    "QgsOptionsWidgetFactory*\0"
    "unregisterOptionsWidgetFactory\0"
    "registerProjectPropertiesWidgetFactory\0"
    "unregisterProjectPropertiesWidgetFactory\0"
    "registerDevToolWidgetFactory\0"
    "QgsDevToolWidgetFactory*\0"
    "unregisterDevToolWidgetFactory\0"
    "registerApplicationExitBlocker\0"
    "QgsApplicationExitBlockerInterface*\0"
    "blocker\0unregisterApplicationExitBlocker\0"
    "registerMapToolHandler\0"
    "QgsAbstractMapToolHandler*\0handler\0"
    "unregisterMapToolHandler\0"
    "registerCustomDropHandler\0"
    "QgsCustomDropHandler*\0unregisterCustomDropHandler\0"
    "registerCustomProjectOpenHandler\0"
    "QgsCustomProjectOpenHandler*\0"
    "unregisterCustomProjectOpenHandler\0"
    "registerCustomLayoutDropHandler\0"
    "QgsLayoutCustomDropHandler*\0"
    "unregisterCustomLayoutDropHandler\0"
    "openURL\0useQgisDocDirectory\0openFeatureForm\0"
    "QgsFeature&\0f\0updateFeatureOnly\0"
    "showModal\0getFeatureForm\0QgsAttributeDialog*\0"
    "preloadForm\0uifile\0locatorSearch\0"
    "searchText\0registerLocatorFilter\0"
    "QgsLocatorFilter*\0filter\0"
    "deregisterLocatorFilter\0"
    "invalidateLocatorResults\0askForDatumTransform\0"
    "QgsCoordinateReferenceSystem\0sourceCrs\0"
    "destinationCrs\0browserModel\0"
    "QgsBrowserGuiModel*\0setGpsPanelConnection\0"
    "QgsGpsConnection*\0connection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgisInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     112,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  574,    2, 0x06 /* Public */,
       5,    1,  577,    2, 0x06 /* Public */,
       7,    1,  580,    2, 0x06 /* Public */,
      10,    1,  583,    2, 0x06 /* Public */,
      11,    0,  586,    2, 0x06 /* Public */,
      12,    0,  587,    2, 0x06 /* Public */,
      13,    0,  588,    2, 0x06 /* Public */,
      14,    0,  589,    2, 0x06 /* Public */,
      15,    2,  590,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  595,    2, 0x0a /* Public */,
      19,    0,  596,    2, 0x0a /* Public */,
      20,    0,  597,    2, 0x0a /* Public */,
      21,    0,  598,    2, 0x0a /* Public */,
      22,    3,  599,    2, 0x0a /* Public */,
      27,    2,  606,    2, 0x0a /* Public */,
      27,    1,  611,    2, 0x2a /* Public | MethodCloned */,
      27,    3,  614,    2, 0x0a /* Public */,
      32,    3,  621,    2, 0x0a /* Public */,
      34,    2,  628,    2, 0x0a /* Public */,
      36,    3,  633,    2, 0x0a /* Public */,
      38,    1,  640,    2, 0x0a /* Public */,
      40,    1,  643,    2, 0x0a /* Public */,
      40,    0,  646,    2, 0x2a /* Public | MethodCloned */,
      42,    0,  647,    2, 0x0a /* Public */,
      43,    1,  648,    2, 0x0a /* Public */,
      44,    1,  651,    2, 0x0a /* Public */,
      45,    1,  654,    2, 0x0a /* Public */,
      46,    1,  657,    2, 0x0a /* Public */,
      49,    1,  660,    2, 0x0a /* Public */,
      52,    1,  663,    2, 0x0a /* Public */,
      53,    1,  666,    2, 0x0a /* Public */,
      54,    1,  669,    2, 0x0a /* Public */,
      55,    1,  672,    2, 0x0a /* Public */,
      56,    1,  675,    2, 0x0a /* Public */,
      57,    1,  678,    2, 0x0a /* Public */,
      58,    1,  681,    2, 0x0a /* Public */,
      59,    1,  684,    2, 0x0a /* Public */,
      60,    1,  687,    2, 0x0a /* Public */,
      61,    1,  690,    2, 0x0a /* Public */,
      62,    1,  693,    2, 0x0a /* Public */,
      63,    1,  696,    2, 0x0a /* Public */,
      64,    1,  699,    2, 0x0a /* Public */,
      65,    1,  702,    2, 0x0a /* Public */,
      65,    2,  705,    2, 0x0a /* Public */,
      65,    1,  710,    2, 0x2a /* Public | MethodCloned */,
      71,    0,  713,    2, 0x0a /* Public */,
      72,    1,  714,    2, 0x0a /* Public */,
      73,    0,  717,    2, 0x0a /* Public */,
      74,    1,  718,    2, 0x0a /* Public */,
      77,    2,  721,    2, 0x0a /* Public */,
      77,    1,  726,    2, 0x2a /* Public | MethodCloned */,
      77,    0,  729,    2, 0x2a /* Public | MethodCloned */,
      80,    1,  730,    2, 0x0a /* Public */,
      80,    0,  733,    2, 0x2a /* Public | MethodCloned */,
      81,    1,  734,    2, 0x0a /* Public */,
      83,    1,  737,    2, 0x0a /* Public */,
      84,    2,  740,    2, 0x0a /* Public */,
      86,    2,  745,    2, 0x0a /* Public */,
      87,    1,  750,    2, 0x0a /* Public */,
      88,    1,  753,    2, 0x0a /* Public */,
      89,    2,  756,    2, 0x0a /* Public */,
      90,    2,  761,    2, 0x0a /* Public */,
      91,    2,  766,    2, 0x0a /* Public */,
      92,    2,  771,    2, 0x0a /* Public */,
      93,    2,  776,    2, 0x0a /* Public */,
      94,    2,  781,    2, 0x0a /* Public */,
      95,    2,  786,    2, 0x0a /* Public */,
      96,    2,  791,    2, 0x0a /* Public */,
      97,    2,  796,    2, 0x0a /* Public */,
     101,    4,  801,    2, 0x0a /* Public */,
     101,    3,  810,    2, 0x2a /* Public | MethodCloned */,
     101,    2,  817,    2, 0x2a /* Public | MethodCloned */,
     104,    1,  822,    2, 0x0a /* Public */,
     105,    1,  825,    2, 0x0a /* Public */,
     106,    2,  828,    2, 0x0a /* Public */,
     106,    1,  833,    2, 0x2a /* Public | MethodCloned */,
     109,    1,  836,    2, 0x0a /* Public */,
     110,    1,  839,    2, 0x0a /* Public */,
     111,    2,  842,    2, 0x0a /* Public */,
     113,    1,  847,    2, 0x0a /* Public */,
     114,    1,  850,    2, 0x0a /* Public */,
     117,    1,  853,    2, 0x0a /* Public */,
     118,    1,  856,    2, 0x0a /* Public */,
     120,    1,  859,    2, 0x0a /* Public */,
     121,    1,  862,    2, 0x0a /* Public */,
     122,    1,  865,    2, 0x0a /* Public */,
     123,    1,  868,    2, 0x0a /* Public */,
     125,    1,  871,    2, 0x0a /* Public */,
     126,    1,  874,    2, 0x0a /* Public */,
     129,    1,  877,    2, 0x0a /* Public */,
     130,    1,  880,    2, 0x0a /* Public */,
     133,    1,  883,    2, 0x0a /* Public */,
     134,    1,  886,    2, 0x0a /* Public */,
     136,    1,  889,    2, 0x0a /* Public */,
     137,    1,  892,    2, 0x0a /* Public */,
     139,    1,  895,    2, 0x0a /* Public */,
     140,    1,  898,    2, 0x0a /* Public */,
     142,    1,  901,    2, 0x0a /* Public */,
     143,    2,  904,    2, 0x0a /* Public */,
     143,    1,  909,    2, 0x2a /* Public | MethodCloned */,
     145,    4,  912,    2, 0x0a /* Public */,
     145,    3,  921,    2, 0x2a /* Public | MethodCloned */,
     145,    2,  928,    2, 0x2a /* Public | MethodCloned */,
     150,    2,  933,    2, 0x0a /* Public */,
     152,    1,  938,    2, 0x0a /* Public */,
     154,    1,  941,    2, 0x0a /* Public */,
     156,    1,  944,    2, 0x0a /* Public */,
     159,    1,  947,    2, 0x0a /* Public */,
     160,    0,  950,    2, 0x0a /* Public */,
     161,    2,  951,    2, 0x0a /* Public */,
     165,    0,  956,    2, 0x0a /* Public */,
     167,    1,  957,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString,   24,   25,   26,
    0x80000000 | 28, QMetaType::QString, QMetaType::QString,   29,   25,
    0x80000000 | 28, QMetaType::QString,   29,
    0x80000000 | 28, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   31,   26,
    0x80000000 | 33, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   25,   26,
    0x80000000 | 35, QMetaType::QString, QMetaType::QString,   30,   25,
    0x80000000 | 37, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   25,   26,
    QMetaType::Bool, QMetaType::QString,   39,
    QMetaType::Bool, QMetaType::Bool,   41,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Int, 0x80000000 | 47,   48,
    0x80000000 | 47, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 47,   48,
    0x80000000 | 47, 0x80000000 | 50,   51,
    QMetaType::Int, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Int, 0x80000000 | 47,   48,
    0x80000000 | 47, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Int, 0x80000000 | 47,   48,
    0x80000000 | 47, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Int, 0x80000000 | 47,   48,
    0x80000000 | 47, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 47,   48,
    0x80000000 | 66, QMetaType::QString,   67,
    QMetaType::Void, 0x80000000 | 66, 0x80000000 | 69,   68,   70,
    QMetaType::Void, 0x80000000 | 66,   68,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void,
    0x80000000 | 8, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 50, QMetaType::QString,   78,   79,
    QMetaType::Void, 0x80000000 | 50,   78,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   79,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,   82,
    QMetaType::Void, QMetaType::QVariantMap,   82,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, 0x80000000 | 47,   85,
    QMetaType::Void, 0x80000000 | 47,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   67,   85,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 99,   70,  100,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 99, QMetaType::QStringList, QMetaType::Bool,   70,  100,  102,  103,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 99, QMetaType::QStringList,   70,  100,  102,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 99,   70,  100,
    QMetaType::Void, 0x80000000 | 99,  100,
    QMetaType::Void, 0x80000000 | 3,   16,
    0x80000000 | 107, 0x80000000 | 23, QMetaType::QString,   16,  108,
    0x80000000 | 107, 0x80000000 | 23,   16,
    QMetaType::Void, 0x80000000 | 47,   85,
    QMetaType::Void, 0x80000000 | 47,   85,
    QMetaType::Bool, 0x80000000 | 47, QMetaType::QString,   85,  112,
    QMetaType::Bool, 0x80000000 | 47,   85,
    QMetaType::Void, 0x80000000 | 115,  116,
    QMetaType::Void, 0x80000000 | 115,  116,
    QMetaType::Void, 0x80000000 | 119,  116,
    QMetaType::Void, 0x80000000 | 119,  116,
    QMetaType::Void, 0x80000000 | 119,  116,
    QMetaType::Void, 0x80000000 | 119,  116,
    QMetaType::Void, 0x80000000 | 124,  116,
    QMetaType::Void, 0x80000000 | 124,  116,
    QMetaType::Void, 0x80000000 | 127,  128,
    QMetaType::Void, 0x80000000 | 127,  128,
    QMetaType::Void, 0x80000000 | 131,  132,
    QMetaType::Void, 0x80000000 | 131,  132,
    QMetaType::Void, 0x80000000 | 135,  132,
    QMetaType::Void, 0x80000000 | 135,  132,
    QMetaType::Void, 0x80000000 | 138,  132,
    QMetaType::Void, 0x80000000 | 138,  132,
    QMetaType::Void, 0x80000000 | 141,  132,
    QMetaType::Void, 0x80000000 | 141,  132,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   30,  144,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 146, QMetaType::Bool, QMetaType::Bool,   16,  147,  148,  149,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 146, QMetaType::Bool,   16,  147,  148,
    QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 146,   16,  147,
    0x80000000 | 151, 0x80000000 | 23, 0x80000000 | 146,   16,  147,
    QMetaType::Void, QMetaType::QString,  153,
    QMetaType::Void, QMetaType::QString,  155,
    QMetaType::Void, 0x80000000 | 157,  158,
    QMetaType::Void, 0x80000000 | 157,  158,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 162, 0x80000000 | 162,  163,  164,
    0x80000000 | 166,
    QMetaType::Void, 0x80000000 | 168,  169,

       0        // eod
};

void QgisInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgisInterface *_t = static_cast<QgisInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->currentThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->layoutDesignerOpened((*reinterpret_cast< QgsLayoutDesignerInterface*(*)>(_a[1]))); break;
        case 3: _t->layoutDesignerWillBeClosed((*reinterpret_cast< QgsLayoutDesignerInterface*(*)>(_a[1]))); break;
        case 4: _t->layoutDesignerClosed(); break;
        case 5: _t->initializationCompleted(); break;
        case 6: _t->projectRead(); break;
        case 7: _t->newProjectCreated(); break;
        case 8: _t->layerSavedAs((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->zoomFull(); break;
        case 10: _t->zoomToPrevious(); break;
        case 11: _t->zoomToNext(); break;
        case 12: _t->zoomToActiveLayer(); break;
        case 13: { QgsVectorLayer* _r = _t->addVectorLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsVectorLayer**>(_a[0]) = std::move(_r); }  break;
        case 14: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 15: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 16: { QgsRasterLayer* _r = _t->addRasterLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsRasterLayer**>(_a[0]) = std::move(_r); }  break;
        case 17: { QgsMeshLayer* _r = _t->addMeshLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsMeshLayer**>(_a[0]) = std::move(_r); }  break;
        case 18: { QgsVectorTileLayer* _r = _t->addVectorTileLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsVectorTileLayer**>(_a[0]) = std::move(_r); }  break;
        case 19: { QgsPointCloudLayer* _r = _t->addPointCloudLayer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QgsPointCloudLayer**>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->addProject((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->newProject((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->newProject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->reloadConnections(); break;
        case 24: { bool _r = _t->setActiveLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->copySelectionToClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 26: _t->pasteFromClipboard((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 27: { int _r = _t->addToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 28: { QAction* _r = _t->addToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 29: _t->removeToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 30: { QAction* _r = _t->addRasterToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 31: { int _r = _t->addRasterToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->removeRasterToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 33: { int _r = _t->addVectorToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: { QAction* _r = _t->addVectorToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 35: _t->removeVectorToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 36: { int _r = _t->addDatabaseToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 37: { QAction* _r = _t->addDatabaseToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 38: _t->removeDatabaseToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 39: { int _r = _t->addWebToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 40: { QAction* _r = _t->addWebToolBarWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 41: _t->removeWebToolBarIcon((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 42: { QToolBar* _r = _t->addToolBar((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QToolBar**>(_a[0]) = std::move(_r); }  break;
        case 43: _t->addToolBar((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< Qt::ToolBarArea(*)>(_a[2]))); break;
        case 44: _t->addToolBar((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 45: _t->openMessageLog(); break;
        case 46: _t->addUserInputWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 47: _t->showLayoutManager(); break;
        case 48: { QgsLayoutDesignerInterface* _r = _t->openLayoutDesigner((*reinterpret_cast< QgsMasterLayoutInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QgsLayoutDesignerInterface**>(_a[0]) = std::move(_r); }  break;
        case 49: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: _t->showOptionsDialog((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 51: _t->showOptionsDialog(); break;
        case 52: _t->showProjectPropertiesDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: _t->showProjectPropertiesDialog(); break;
        case 54: _t->buildStyleSheet((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 55: _t->saveStyleSheetOptions((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 56: _t->addPluginToMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 57: _t->removePluginMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 58: _t->insertAddLayerAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 59: _t->removeAddLayerAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 60: _t->addPluginToDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 61: _t->removePluginDatabaseMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 62: _t->addPluginToRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 63: _t->removePluginRasterMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 64: _t->addPluginToVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 65: _t->removePluginVectorMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 66: _t->addPluginToWebMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 67: _t->removePluginWebMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 68: _t->addDockWidget((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1])),(*reinterpret_cast< QDockWidget*(*)>(_a[2]))); break;
        case 69: _t->addTabifiedDockWidget((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1])),(*reinterpret_cast< QDockWidget*(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 70: _t->addTabifiedDockWidget((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1])),(*reinterpret_cast< QDockWidget*(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 71: _t->addTabifiedDockWidget((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1])),(*reinterpret_cast< QDockWidget*(*)>(_a[2]))); break;
        case 72: _t->removeDockWidget((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        case 73: _t->showLayerProperties((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 74: { QDialog* _r = _t->showAttributeTable((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 75: { QDialog* _r = _t->showAttributeTable((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDialog**>(_a[0]) = std::move(_r); }  break;
        case 76: _t->addWindow((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 77: _t->removeWindow((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 78: { bool _r = _t->registerMainWindowAction((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 79: { bool _r = _t->unregisterMainWindowAction((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->registerMapLayerConfigWidgetFactory((*reinterpret_cast< QgsMapLayerConfigWidgetFactory*(*)>(_a[1]))); break;
        case 81: _t->unregisterMapLayerConfigWidgetFactory((*reinterpret_cast< QgsMapLayerConfigWidgetFactory*(*)>(_a[1]))); break;
        case 82: _t->registerOptionsWidgetFactory((*reinterpret_cast< QgsOptionsWidgetFactory*(*)>(_a[1]))); break;
        case 83: _t->unregisterOptionsWidgetFactory((*reinterpret_cast< QgsOptionsWidgetFactory*(*)>(_a[1]))); break;
        case 84: _t->registerProjectPropertiesWidgetFactory((*reinterpret_cast< QgsOptionsWidgetFactory*(*)>(_a[1]))); break;
        case 85: _t->unregisterProjectPropertiesWidgetFactory((*reinterpret_cast< QgsOptionsWidgetFactory*(*)>(_a[1]))); break;
        case 86: _t->registerDevToolWidgetFactory((*reinterpret_cast< QgsDevToolWidgetFactory*(*)>(_a[1]))); break;
        case 87: _t->unregisterDevToolWidgetFactory((*reinterpret_cast< QgsDevToolWidgetFactory*(*)>(_a[1]))); break;
        case 88: _t->registerApplicationExitBlocker((*reinterpret_cast< QgsApplicationExitBlockerInterface*(*)>(_a[1]))); break;
        case 89: _t->unregisterApplicationExitBlocker((*reinterpret_cast< QgsApplicationExitBlockerInterface*(*)>(_a[1]))); break;
        case 90: _t->registerMapToolHandler((*reinterpret_cast< QgsAbstractMapToolHandler*(*)>(_a[1]))); break;
        case 91: _t->unregisterMapToolHandler((*reinterpret_cast< QgsAbstractMapToolHandler*(*)>(_a[1]))); break;
        case 92: _t->registerCustomDropHandler((*reinterpret_cast< QgsCustomDropHandler*(*)>(_a[1]))); break;
        case 93: _t->unregisterCustomDropHandler((*reinterpret_cast< QgsCustomDropHandler*(*)>(_a[1]))); break;
        case 94: _t->registerCustomProjectOpenHandler((*reinterpret_cast< QgsCustomProjectOpenHandler*(*)>(_a[1]))); break;
        case 95: _t->unregisterCustomProjectOpenHandler((*reinterpret_cast< QgsCustomProjectOpenHandler*(*)>(_a[1]))); break;
        case 96: _t->registerCustomLayoutDropHandler((*reinterpret_cast< QgsLayoutCustomDropHandler*(*)>(_a[1]))); break;
        case 97: _t->unregisterCustomLayoutDropHandler((*reinterpret_cast< QgsLayoutCustomDropHandler*(*)>(_a[1]))); break;
        case 98: _t->openURL((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 99: _t->openURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 100: { bool _r = _t->openFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 101: { bool _r = _t->openFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 102: { bool _r = _t->openFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 103: { QgsAttributeDialog* _r = _t->getFeatureForm((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QgsFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QgsAttributeDialog**>(_a[0]) = std::move(_r); }  break;
        case 104: _t->preloadForm((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 105: _t->locatorSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 106: _t->registerLocatorFilter((*reinterpret_cast< QgsLocatorFilter*(*)>(_a[1]))); break;
        case 107: _t->deregisterLocatorFilter((*reinterpret_cast< QgsLocatorFilter*(*)>(_a[1]))); break;
        case 108: _t->invalidateLocatorResults(); break;
        case 109: { bool _r = _t->askForDatumTransform((*reinterpret_cast< QgsCoordinateReferenceSystem(*)>(_a[1])),(*reinterpret_cast< QgsCoordinateReferenceSystem(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 110: { QgsBrowserGuiModel* _r = _t->browserModel();
            if (_a[0]) *reinterpret_cast< QgsBrowserGuiModel**>(_a[0]) = std::move(_r); }  break;
        case 111: _t->setGpsPanelConnection((*reinterpret_cast< QgsGpsConnection*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgisInterface::*)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::currentLayerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::currentThemeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)(QgsLayoutDesignerInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layoutDesignerOpened)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)(QgsLayoutDesignerInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layoutDesignerWillBeClosed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layoutDesignerClosed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::initializationCompleted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::projectRead)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::newProjectCreated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QgisInterface::*)(QgsMapLayer * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgisInterface::layerSavedAs)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgisInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgisInterface.data,
      qt_meta_data_QgisInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgisInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgisInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgisInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgisInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 112)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 112;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 112)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 112;
    }
    return _id;
}

// SIGNAL 0
void QgisInterface::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgisInterface::currentThemeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgisInterface::layoutDesignerOpened(QgsLayoutDesignerInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgisInterface::layoutDesignerWillBeClosed(QgsLayoutDesignerInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgisInterface::layoutDesignerClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgisInterface::initializationCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgisInterface::projectRead()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgisInterface::newProjectCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QgisInterface::layerSavedAs(QgsMapLayer * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
