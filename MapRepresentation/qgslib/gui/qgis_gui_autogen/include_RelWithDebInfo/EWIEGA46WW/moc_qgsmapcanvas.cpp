/****************************************************************************
** Meta object code from reading C++ file 'qgsmapcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmapcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapCanvas_t {
    QByteArrayData data[102];
    char stringdata0[1434];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapCanvas_t qt_meta_stringdata_QgsMapCanvas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsMapCanvas"
QT_MOC_LITERAL(1, 13, 13), // "xyCoordinates"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "QgsPointXY"
QT_MOC_LITERAL(4, 39, 1), // "p"
QT_MOC_LITERAL(5, 41, 12), // "scaleChanged"
QT_MOC_LITERAL(6, 54, 14), // "extentsChanged"
QT_MOC_LITERAL(7, 69, 15), // "rotationChanged"
QT_MOC_LITERAL(8, 85, 20), // "magnificationChanged"
QT_MOC_LITERAL(9, 106, 18), // "canvasColorChanged"
QT_MOC_LITERAL(10, 125, 14), // "renderComplete"
QT_MOC_LITERAL(11, 140, 9), // "QPainter*"
QT_MOC_LITERAL(12, 150, 18), // "mapCanvasRefreshed"
QT_MOC_LITERAL(13, 169, 14), // "renderStarting"
QT_MOC_LITERAL(14, 184, 13), // "layersChanged"
QT_MOC_LITERAL(15, 198, 10), // "keyPressed"
QT_MOC_LITERAL(16, 209, 10), // "QKeyEvent*"
QT_MOC_LITERAL(17, 220, 1), // "e"
QT_MOC_LITERAL(18, 222, 11), // "keyReleased"
QT_MOC_LITERAL(19, 234, 10), // "mapToolSet"
QT_MOC_LITERAL(20, 245, 11), // "QgsMapTool*"
QT_MOC_LITERAL(21, 257, 7), // "newTool"
QT_MOC_LITERAL(22, 265, 7), // "oldTool"
QT_MOC_LITERAL(23, 273, 16), // "selectionChanged"
QT_MOC_LITERAL(24, 290, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(25, 306, 5), // "layer"
QT_MOC_LITERAL(26, 312, 21), // "zoomLastStatusChanged"
QT_MOC_LITERAL(27, 334, 21), // "zoomNextStatusChanged"
QT_MOC_LITERAL(28, 356, 21), // "destinationCrsChanged"
QT_MOC_LITERAL(29, 378, 23), // "transformContextChanged"
QT_MOC_LITERAL(30, 402, 19), // "currentLayerChanged"
QT_MOC_LITERAL(31, 422, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(32, 435, 26), // "layerStyleOverridesChanged"
QT_MOC_LITERAL(33, 462, 12), // "themeChanged"
QT_MOC_LITERAL(34, 475, 5), // "theme"
QT_MOC_LITERAL(35, 481, 14), // "messageEmitted"
QT_MOC_LITERAL(36, 496, 5), // "title"
QT_MOC_LITERAL(37, 502, 7), // "message"
QT_MOC_LITERAL(38, 510, 18), // "Qgis::MessageLevel"
QT_MOC_LITERAL(39, 529, 19), // "renderErrorOccurred"
QT_MOC_LITERAL(40, 549, 5), // "error"
QT_MOC_LITERAL(41, 555, 25), // "panDistanceBearingChanged"
QT_MOC_LITERAL(42, 581, 8), // "distance"
QT_MOC_LITERAL(43, 590, 26), // "QgsUnitTypes::DistanceUnit"
QT_MOC_LITERAL(44, 617, 4), // "unit"
QT_MOC_LITERAL(45, 622, 7), // "bearing"
QT_MOC_LITERAL(46, 630, 25), // "tapAndHoldGestureOccurred"
QT_MOC_LITERAL(47, 656, 8), // "mapPoint"
QT_MOC_LITERAL(48, 665, 19), // "QTapAndHoldGesture*"
QT_MOC_LITERAL(49, 685, 7), // "gesture"
QT_MOC_LITERAL(50, 693, 20), // "temporalRangeChanged"
QT_MOC_LITERAL(51, 714, 22), // "contextMenuAboutToShow"
QT_MOC_LITERAL(52, 737, 6), // "QMenu*"
QT_MOC_LITERAL(53, 744, 4), // "menu"
QT_MOC_LITERAL(54, 749, 17), // "QgsMapMouseEvent*"
QT_MOC_LITERAL(55, 767, 5), // "event"
QT_MOC_LITERAL(56, 773, 7), // "refresh"
QT_MOC_LITERAL(57, 781, 16), // "refreshAllLayers"
QT_MOC_LITERAL(58, 798, 15), // "redrawAllLayers"
QT_MOC_LITERAL(59, 814, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(60, 835, 11), // "saveAsImage"
QT_MOC_LITERAL(61, 847, 8), // "fileName"
QT_MOC_LITERAL(62, 856, 8), // "QPixmap*"
QT_MOC_LITERAL(63, 865, 7), // "QPixmap"
QT_MOC_LITERAL(64, 873, 16), // "layerStateChange"
QT_MOC_LITERAL(65, 890, 13), // "setRenderFlag"
QT_MOC_LITERAL(66, 904, 4), // "flag"
QT_MOC_LITERAL(67, 909, 13), // "stopRendering"
QT_MOC_LITERAL(68, 923, 11), // "readProject"
QT_MOC_LITERAL(69, 935, 12), // "QDomDocument"
QT_MOC_LITERAL(70, 948, 12), // "writeProject"
QT_MOC_LITERAL(71, 961, 13), // "QDomDocument&"
QT_MOC_LITERAL(72, 975, 22), // "setMagnificationFactor"
QT_MOC_LITERAL(73, 998, 6), // "factor"
QT_MOC_LITERAL(74, 1005, 17), // "const QgsPointXY*"
QT_MOC_LITERAL(75, 1023, 6), // "center"
QT_MOC_LITERAL(76, 1030, 14), // "setScaleLocked"
QT_MOC_LITERAL(77, 1045, 8), // "isLocked"
QT_MOC_LITERAL(78, 1054, 6), // "zoomIn"
QT_MOC_LITERAL(79, 1061, 7), // "zoomOut"
QT_MOC_LITERAL(80, 1069, 14), // "zoomToSelected"
QT_MOC_LITERAL(81, 1084, 18), // "setZoomResolutions"
QT_MOC_LITERAL(82, 1103, 13), // "QList<double>"
QT_MOC_LITERAL(83, 1117, 11), // "resolutions"
QT_MOC_LITERAL(84, 1129, 15), // "zoomResolutions"
QT_MOC_LITERAL(85, 1145, 16), // "mapToolDestroyed"
QT_MOC_LITERAL(86, 1162, 19), // "rendererJobFinished"
QT_MOC_LITERAL(87, 1182, 18), // "previewJobFinished"
QT_MOC_LITERAL(88, 1201, 16), // "mapUpdateTimeout"
QT_MOC_LITERAL(89, 1218, 10), // "refreshMap"
QT_MOC_LITERAL(90, 1229, 15), // "mapThemeChanged"
QT_MOC_LITERAL(91, 1245, 15), // "mapThemeRenamed"
QT_MOC_LITERAL(92, 1261, 8), // "newTheme"
QT_MOC_LITERAL(93, 1270, 25), // "updateCanvasItemPositions"
QT_MOC_LITERAL(94, 1296, 21), // "layerRepaintRequested"
QT_MOC_LITERAL(95, 1318, 8), // "deferred"
QT_MOC_LITERAL(96, 1327, 20), // "autoRefreshTriggered"
QT_MOC_LITERAL(97, 1348, 22), // "updateAutoRefreshTimer"
QT_MOC_LITERAL(98, 1371, 20), // "projectThemesChanged"
QT_MOC_LITERAL(99, 1392, 15), // "startPreviewJob"
QT_MOC_LITERAL(100, 1408, 6), // "number"
QT_MOC_LITERAL(101, 1415, 18) // "previewJobsEnabled"

    },
    "QgsMapCanvas\0xyCoordinates\0\0QgsPointXY\0"
    "p\0scaleChanged\0extentsChanged\0"
    "rotationChanged\0magnificationChanged\0"
    "canvasColorChanged\0renderComplete\0"
    "QPainter*\0mapCanvasRefreshed\0"
    "renderStarting\0layersChanged\0keyPressed\0"
    "QKeyEvent*\0e\0keyReleased\0mapToolSet\0"
    "QgsMapTool*\0newTool\0oldTool\0"
    "selectionChanged\0QgsVectorLayer*\0layer\0"
    "zoomLastStatusChanged\0zoomNextStatusChanged\0"
    "destinationCrsChanged\0transformContextChanged\0"
    "currentLayerChanged\0QgsMapLayer*\0"
    "layerStyleOverridesChanged\0themeChanged\0"
    "theme\0messageEmitted\0title\0message\0"
    "Qgis::MessageLevel\0renderErrorOccurred\0"
    "error\0panDistanceBearingChanged\0"
    "distance\0QgsUnitTypes::DistanceUnit\0"
    "unit\0bearing\0tapAndHoldGestureOccurred\0"
    "mapPoint\0QTapAndHoldGesture*\0gesture\0"
    "temporalRangeChanged\0contextMenuAboutToShow\0"
    "QMenu*\0menu\0QgsMapMouseEvent*\0event\0"
    "refresh\0refreshAllLayers\0redrawAllLayers\0"
    "selectionChangedSlot\0saveAsImage\0"
    "fileName\0QPixmap*\0QPixmap\0layerStateChange\0"
    "setRenderFlag\0flag\0stopRendering\0"
    "readProject\0QDomDocument\0writeProject\0"
    "QDomDocument&\0setMagnificationFactor\0"
    "factor\0const QgsPointXY*\0center\0"
    "setScaleLocked\0isLocked\0zoomIn\0zoomOut\0"
    "zoomToSelected\0setZoomResolutions\0"
    "QList<double>\0resolutions\0zoomResolutions\0"
    "mapToolDestroyed\0rendererJobFinished\0"
    "previewJobFinished\0mapUpdateTimeout\0"
    "refreshMap\0mapThemeChanged\0mapThemeRenamed\0"
    "newTheme\0updateCanvasItemPositions\0"
    "layerRepaintRequested\0deferred\0"
    "autoRefreshTriggered\0updateAutoRefreshTimer\0"
    "projectThemesChanged\0startPreviewJob\0"
    "number\0previewJobsEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       2,  482, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  324,    2, 0x06 /* Public */,
       5,    1,  327,    2, 0x06 /* Public */,
       6,    0,  330,    2, 0x06 /* Public */,
       7,    1,  331,    2, 0x06 /* Public */,
       8,    1,  334,    2, 0x06 /* Public */,
       9,    0,  337,    2, 0x06 /* Public */,
      10,    1,  338,    2, 0x06 /* Public */,
      12,    0,  341,    2, 0x06 /* Public */,
      13,    0,  342,    2, 0x06 /* Public */,
      14,    0,  343,    2, 0x06 /* Public */,
      15,    1,  344,    2, 0x06 /* Public */,
      18,    1,  347,    2, 0x06 /* Public */,
      19,    2,  350,    2, 0x06 /* Public */,
      23,    1,  355,    2, 0x06 /* Public */,
      26,    1,  358,    2, 0x06 /* Public */,
      27,    1,  361,    2, 0x06 /* Public */,
      28,    0,  364,    2, 0x06 /* Public */,
      29,    0,  365,    2, 0x06 /* Public */,
      30,    1,  366,    2, 0x06 /* Public */,
      32,    0,  369,    2, 0x06 /* Public */,
      33,    1,  370,    2, 0x06 /* Public */,
      35,    3,  373,    2, 0x06 /* Public */,
      35,    2,  380,    2, 0x26 /* Public | MethodCloned */,
      39,    2,  385,    2, 0x06 /* Public */,
      41,    3,  390,    2, 0x06 /* Public */,
      46,    2,  397,    2, 0x06 /* Public */,
      50,    0,  402,    2, 0x06 /* Public */,
      51,    2,  403,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      56,    0,  408,    2, 0x0a /* Public */,
      57,    0,  409,    2, 0x0a /* Public */,
      58,    0,  410,    2, 0x0a /* Public */,
      59,    0,  411,    2, 0x0a /* Public */,
      60,    3,  412,    2, 0x0a /* Public */,
      60,    2,  419,    2, 0x2a /* Public | MethodCloned */,
      60,    1,  424,    2, 0x2a /* Public | MethodCloned */,
      64,    0,  427,    2, 0x0a /* Public */,
      65,    1,  428,    2, 0x0a /* Public */,
      67,    0,  431,    2, 0x0a /* Public */,
      68,    1,  432,    2, 0x0a /* Public */,
      70,    1,  435,    2, 0x0a /* Public */,
      72,    2,  438,    2, 0x0a /* Public */,
      72,    1,  443,    2, 0x2a /* Public | MethodCloned */,
      76,    1,  446,    2, 0x0a /* Public */,
      78,    0,  449,    2, 0x0a /* Public */,
      79,    0,  450,    2, 0x0a /* Public */,
      80,    1,  451,    2, 0x0a /* Public */,
      80,    0,  454,    2, 0x2a /* Public | MethodCloned */,
      81,    1,  455,    2, 0x0a /* Public */,
      84,    0,  458,    2, 0x0a /* Public */,
      85,    0,  459,    2, 0x08 /* Private */,
      86,    0,  460,    2, 0x08 /* Private */,
      87,    0,  461,    2, 0x08 /* Private */,
      88,    0,  462,    2, 0x08 /* Private */,
      89,    0,  463,    2, 0x08 /* Private */,
      90,    1,  464,    2, 0x08 /* Private */,
      91,    2,  467,    2, 0x08 /* Private */,
      93,    0,  472,    2, 0x09 /* Protected */,
      94,    1,  473,    2, 0x08 /* Private */,
      96,    0,  476,    2, 0x08 /* Private */,
      97,    0,  477,    2, 0x08 /* Private */,
      98,    0,  478,    2, 0x08 /* Private */,
      99,    1,  479,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 38,   36,   37,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   36,   37,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 31,   40,   25,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 43, QMetaType::Double,   42,   44,   45,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 48,   47,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52, 0x80000000 | 54,   53,   55,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 62, QMetaType::QString,   61,   63,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 62,   61,   63,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,    2,
    QMetaType::Void, 0x80000000 | 71,    2,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 74,   73,   75,
    QMetaType::Void, QMetaType::Double,   73,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   34,   92,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  100,

 // properties: name, type, flags
      34, QMetaType::QString, 0x00495103,
     101, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
      20,
       0,

       0        // eod
};

void QgsMapCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xyCoordinates((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->extentsChanged(); break;
        case 3: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->magnificationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->canvasColorChanged(); break;
        case 6: _t->renderComplete((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 7: _t->mapCanvasRefreshed(); break;
        case 8: _t->renderStarting(); break;
        case 9: _t->layersChanged(); break;
        case 10: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 11: _t->keyReleased((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 12: _t->mapToolSet((*reinterpret_cast< QgsMapTool*(*)>(_a[1])),(*reinterpret_cast< QgsMapTool*(*)>(_a[2]))); break;
        case 13: _t->selectionChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 14: _t->zoomLastStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->zoomNextStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->destinationCrsChanged(); break;
        case 17: _t->transformContextChanged(); break;
        case 18: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 19: _t->layerStyleOverridesChanged(); break;
        case 20: _t->themeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qgis::MessageLevel(*)>(_a[3]))); break;
        case 22: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->renderErrorOccurred((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsMapLayer*(*)>(_a[2]))); break;
        case 24: _t->panDistanceBearingChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QgsUnitTypes::DistanceUnit(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 25: _t->tapAndHoldGestureOccurred((*reinterpret_cast< const QgsPointXY(*)>(_a[1])),(*reinterpret_cast< QTapAndHoldGesture*(*)>(_a[2]))); break;
        case 26: _t->temporalRangeChanged(); break;
        case 27: _t->contextMenuAboutToShow((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QgsMapMouseEvent*(*)>(_a[2]))); break;
        case 28: _t->refresh(); break;
        case 29: _t->refreshAllLayers(); break;
        case 30: _t->redrawAllLayers(); break;
        case 31: _t->selectionChangedSlot(); break;
        case 32: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 33: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2]))); break;
        case 34: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->layerStateChange(); break;
        case 36: _t->setRenderFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->stopRendering(); break;
        case 38: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 39: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 40: _t->setMagnificationFactor((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QgsPointXY*(*)>(_a[2]))); break;
        case 41: _t->setMagnificationFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 42: _t->setScaleLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->zoomIn(); break;
        case 44: _t->zoomOut(); break;
        case 45: _t->zoomToSelected((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 46: _t->zoomToSelected(); break;
        case 47: _t->setZoomResolutions((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 48: _t->zoomResolutions(); break;
        case 49: _t->mapToolDestroyed(); break;
        case 50: _t->rendererJobFinished(); break;
        case 51: _t->previewJobFinished(); break;
        case 52: _t->mapUpdateTimeout(); break;
        case 53: _t->refreshMap(); break;
        case 54: _t->mapThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->mapThemeRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 56: _t->updateCanvasItemPositions(); break;
        case 57: _t->layerRepaintRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->autoRefreshTriggered(); break;
        case 59: _t->updateAutoRefreshTimer(); break;
        case 60: _t->projectThemesChanged(); break;
        case 61: _t->startPreviewJob((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPointXY >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTapAndHoldGesture* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPointXY >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMapCanvas::*)(const QgsPointXY & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::xyCoordinates)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::scaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::extentsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::rotationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::magnificationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::canvasColorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QPainter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::renderComplete)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::mapCanvasRefreshed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::renderStarting)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::layersChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::keyPressed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::keyReleased)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QgsMapTool * , QgsMapTool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::mapToolSet)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::selectionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::zoomLastStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::zoomNextStatusChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::destinationCrsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::transformContextChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::currentLayerChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::layerStyleOverridesChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::themeChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(const QString & , const QString & , Qgis::MessageLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::messageEmitted)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(const QString & , QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::renderErrorOccurred)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(double , QgsUnitTypes::DistanceUnit , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::panDistanceBearingChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(const QgsPointXY & , QTapAndHoldGesture * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::tapAndHoldGestureOccurred)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::temporalRangeChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (QgsMapCanvas::*)(QMenu * , QgsMapMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapCanvas::contextMenuAboutToShow)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->theme(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->previewJobsEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTheme(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPreviewJobsEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsMapCanvas::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsMapCanvas.data,
      qt_meta_data_QgsMapCanvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCanvas.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QgsMapCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsMapCanvas::xyCoordinates(const QgsPointXY & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapCanvas::scaleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapCanvas::extentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsMapCanvas::rotationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsMapCanvas::magnificationChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsMapCanvas::canvasColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsMapCanvas::renderComplete(QPainter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsMapCanvas::mapCanvasRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QgsMapCanvas::renderStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QgsMapCanvas::layersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QgsMapCanvas::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsMapCanvas::keyReleased(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsMapCanvas::mapToolSet(QgsMapTool * _t1, QgsMapTool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsMapCanvas::selectionChanged(QgsVectorLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsMapCanvas::zoomLastStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsMapCanvas::zoomNextStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsMapCanvas::destinationCrsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QgsMapCanvas::transformContextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void QgsMapCanvas::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QgsMapCanvas::layerStyleOverridesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QgsMapCanvas::themeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QgsMapCanvas::messageEmitted(const QString & _t1, const QString & _t2, Qgis::MessageLevel _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 23
void QgsMapCanvas::renderErrorOccurred(const QString & _t1, QgsMapLayer * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QgsMapCanvas::panDistanceBearingChanged(double _t1, QgsUnitTypes::DistanceUnit _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void QgsMapCanvas::tapAndHoldGestureOccurred(const QgsPointXY & _t1, QTapAndHoldGesture * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void QgsMapCanvas::temporalRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void QgsMapCanvas::contextMenuAboutToShow(QMenu * _t1, QgsMapMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
