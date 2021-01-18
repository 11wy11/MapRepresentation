/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutmapwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutmapwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutmapwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutMapWidget_t {
    QByteArrayData data[83];
    char stringdata0[1883];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutMapWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutMapWidget_t qt_meta_stringdata_QgsLayoutMapWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsLayoutMapWidget"
QT_MOC_LITERAL(1, 19, 30), // "mScaleLineEdit_editingFinished"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 20), // "setToMapCanvasExtent"
QT_MOC_LITERAL(4, 72, 19), // "setToMapCanvasScale"
QT_MOC_LITERAL(5, 92, 18), // "viewExtentInCanvas"
QT_MOC_LITERAL(6, 111, 17), // "viewScaleInCanvas"
QT_MOC_LITERAL(7, 129, 13), // "updatePreview"
QT_MOC_LITERAL(8, 143, 44), // "mFollowVisibilityPresetCheckB..."
QT_MOC_LITERAL(9, 188, 5), // "state"
QT_MOC_LITERAL(10, 194, 35), // "mKeepLayerListCheckBox_stateC..."
QT_MOC_LITERAL(11, 230, 37), // "mKeepLayerStylesCheckBox_stat..."
QT_MOC_LITERAL(12, 268, 37), // "mDrawCanvasItemsCheckBox_stat..."
QT_MOC_LITERAL(13, 306, 18), // "overviewMapChanged"
QT_MOC_LITERAL(14, 325, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(15, 340, 4), // "item"
QT_MOC_LITERAL(16, 345, 46), // "mOverviewBlendModeComboBox_cu..."
QT_MOC_LITERAL(17, 392, 5), // "index"
QT_MOC_LITERAL(18, 398, 31), // "mOverviewInvertCheckbox_toggled"
QT_MOC_LITERAL(19, 430, 31), // "mOverviewCenterCheckbox_toggled"
QT_MOC_LITERAL(20, 462, 23), // "overviewStackingChanged"
QT_MOC_LITERAL(21, 486, 5), // "value"
QT_MOC_LITERAL(22, 492, 28), // "overviewStackingLayerChanged"
QT_MOC_LITERAL(23, 521, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(24, 534, 5), // "layer"
QT_MOC_LITERAL(25, 540, 29), // "mXMinLineEdit_editingFinished"
QT_MOC_LITERAL(26, 570, 29), // "mXMaxLineEdit_editingFinished"
QT_MOC_LITERAL(27, 600, 29), // "mYMinLineEdit_editingFinished"
QT_MOC_LITERAL(28, 630, 29), // "mYMaxLineEdit_editingFinished"
QT_MOC_LITERAL(29, 660, 25), // "mAtlasMarginRadio_toggled"
QT_MOC_LITERAL(30, 686, 7), // "checked"
QT_MOC_LITERAL(31, 694, 22), // "mAtlasCheckBox_toggled"
QT_MOC_LITERAL(32, 717, 32), // "mAtlasMarginSpinBox_valueChanged"
QT_MOC_LITERAL(33, 750, 29), // "mAtlasFixedScaleRadio_toggled"
QT_MOC_LITERAL(34, 780, 34), // "mAtlasPredefinedScaleRadio_to..."
QT_MOC_LITERAL(35, 815, 26), // "mAddGridPushButton_clicked"
QT_MOC_LITERAL(36, 842, 29), // "mRemoveGridPushButton_clicked"
QT_MOC_LITERAL(37, 872, 21), // "mGridUpButton_clicked"
QT_MOC_LITERAL(38, 894, 23), // "mGridDownButton_clicked"
QT_MOC_LITERAL(39, 918, 11), // "currentGrid"
QT_MOC_LITERAL(40, 930, 21), // "QgsLayoutItemMapGrid*"
QT_MOC_LITERAL(41, 952, 34), // "mGridListWidget_currentItemCh..."
QT_MOC_LITERAL(42, 987, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(43, 1004, 7), // "current"
QT_MOC_LITERAL(44, 1012, 8), // "previous"
QT_MOC_LITERAL(45, 1021, 27), // "mGridListWidget_itemChanged"
QT_MOC_LITERAL(46, 1049, 29), // "mGridPropertiesButton_clicked"
QT_MOC_LITERAL(47, 1079, 30), // "mAddOverviewPushButton_clicked"
QT_MOC_LITERAL(48, 1110, 33), // "mRemoveOverviewPushButton_cli..."
QT_MOC_LITERAL(49, 1144, 25), // "mOverviewUpButton_clicked"
QT_MOC_LITERAL(50, 1170, 27), // "mOverviewDownButton_clicked"
QT_MOC_LITERAL(51, 1198, 15), // "currentOverview"
QT_MOC_LITERAL(52, 1214, 25), // "QgsLayoutItemMapOverview*"
QT_MOC_LITERAL(53, 1240, 25), // "mOverviewCheckBox_toggled"
QT_MOC_LITERAL(54, 1266, 38), // "mOverviewListWidget_currentIt..."
QT_MOC_LITERAL(55, 1305, 31), // "mOverviewListWidget_itemChanged"
QT_MOC_LITERAL(56, 1337, 23), // "setOverviewItemsEnabled"
QT_MOC_LITERAL(57, 1361, 7), // "enabled"
QT_MOC_LITERAL(58, 1369, 16), // "setOverviewItems"
QT_MOC_LITERAL(59, 1386, 8), // "overview"
QT_MOC_LITERAL(60, 1395, 25), // "blockOverviewItemsSignals"
QT_MOC_LITERAL(61, 1421, 5), // "block"
QT_MOC_LITERAL(62, 1427, 25), // "mTemporalCheckBox_toggled"
QT_MOC_LITERAL(63, 1453, 20), // "updateTemporalExtent"
QT_MOC_LITERAL(64, 1474, 26), // "populateDataDefinedButtons"
QT_MOC_LITERAL(65, 1501, 17), // "updateGuiElements"
QT_MOC_LITERAL(66, 1519, 17), // "atlasLayerChanged"
QT_MOC_LITERAL(67, 1537, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(68, 1553, 23), // "compositionAtlasToggled"
QT_MOC_LITERAL(69, 1577, 12), // "atlasEnabled"
QT_MOC_LITERAL(70, 1590, 42), // "aboutToShowKeepLayersVisibili..."
QT_MOC_LITERAL(71, 1633, 30), // "followVisibilityPresetSelected"
QT_MOC_LITERAL(72, 1664, 12), // "currentIndex"
QT_MOC_LITERAL(73, 1677, 34), // "keepLayersVisibilityPresetSel..."
QT_MOC_LITERAL(74, 1712, 18), // "onMapThemesChanged"
QT_MOC_LITERAL(75, 1731, 13), // "mapCrsChanged"
QT_MOC_LITERAL(76, 1745, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(77, 1774, 3), // "crs"
QT_MOC_LITERAL(78, 1778, 21), // "overviewSymbolChanged"
QT_MOC_LITERAL(79, 1800, 17), // "showLabelSettings"
QT_MOC_LITERAL(80, 1818, 16), // "showClipSettings"
QT_MOC_LITERAL(81, 1835, 23), // "switchToMoveContentTool"
QT_MOC_LITERAL(82, 1859, 23) // "aboutToShowBookmarkMenu"

    },
    "QgsLayoutMapWidget\0mScaleLineEdit_editingFinished\0"
    "\0setToMapCanvasExtent\0setToMapCanvasScale\0"
    "viewExtentInCanvas\0viewScaleInCanvas\0"
    "updatePreview\0"
    "mFollowVisibilityPresetCheckBox_stateChanged\0"
    "state\0mKeepLayerListCheckBox_stateChanged\0"
    "mKeepLayerStylesCheckBox_stateChanged\0"
    "mDrawCanvasItemsCheckBox_stateChanged\0"
    "overviewMapChanged\0QgsLayoutItem*\0"
    "item\0mOverviewBlendModeComboBox_currentIndexChanged\0"
    "index\0mOverviewInvertCheckbox_toggled\0"
    "mOverviewCenterCheckbox_toggled\0"
    "overviewStackingChanged\0value\0"
    "overviewStackingLayerChanged\0QgsMapLayer*\0"
    "layer\0mXMinLineEdit_editingFinished\0"
    "mXMaxLineEdit_editingFinished\0"
    "mYMinLineEdit_editingFinished\0"
    "mYMaxLineEdit_editingFinished\0"
    "mAtlasMarginRadio_toggled\0checked\0"
    "mAtlasCheckBox_toggled\0"
    "mAtlasMarginSpinBox_valueChanged\0"
    "mAtlasFixedScaleRadio_toggled\0"
    "mAtlasPredefinedScaleRadio_toggled\0"
    "mAddGridPushButton_clicked\0"
    "mRemoveGridPushButton_clicked\0"
    "mGridUpButton_clicked\0mGridDownButton_clicked\0"
    "currentGrid\0QgsLayoutItemMapGrid*\0"
    "mGridListWidget_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "mGridListWidget_itemChanged\0"
    "mGridPropertiesButton_clicked\0"
    "mAddOverviewPushButton_clicked\0"
    "mRemoveOverviewPushButton_clicked\0"
    "mOverviewUpButton_clicked\0"
    "mOverviewDownButton_clicked\0currentOverview\0"
    "QgsLayoutItemMapOverview*\0"
    "mOverviewCheckBox_toggled\0"
    "mOverviewListWidget_currentItemChanged\0"
    "mOverviewListWidget_itemChanged\0"
    "setOverviewItemsEnabled\0enabled\0"
    "setOverviewItems\0overview\0"
    "blockOverviewItemsSignals\0block\0"
    "mTemporalCheckBox_toggled\0"
    "updateTemporalExtent\0populateDataDefinedButtons\0"
    "updateGuiElements\0atlasLayerChanged\0"
    "QgsVectorLayer*\0compositionAtlasToggled\0"
    "atlasEnabled\0aboutToShowKeepLayersVisibilityPresetsMenu\0"
    "followVisibilityPresetSelected\0"
    "currentIndex\0keepLayersVisibilityPresetSelected\0"
    "onMapThemesChanged\0mapCrsChanged\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "overviewSymbolChanged\0showLabelSettings\0"
    "showClipSettings\0switchToMoveContentTool\0"
    "aboutToShowBookmarkMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutMapWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  314,    2, 0x08 /* Private */,
       3,    0,  315,    2, 0x08 /* Private */,
       4,    0,  316,    2, 0x08 /* Private */,
       5,    0,  317,    2, 0x08 /* Private */,
       6,    0,  318,    2, 0x08 /* Private */,
       7,    0,  319,    2, 0x08 /* Private */,
       8,    1,  320,    2, 0x08 /* Private */,
      10,    1,  323,    2, 0x08 /* Private */,
      11,    1,  326,    2, 0x08 /* Private */,
      12,    1,  329,    2, 0x08 /* Private */,
      13,    1,  332,    2, 0x08 /* Private */,
      16,    1,  335,    2, 0x08 /* Private */,
      18,    1,  338,    2, 0x08 /* Private */,
      19,    1,  341,    2, 0x08 /* Private */,
      20,    1,  344,    2, 0x08 /* Private */,
      22,    1,  347,    2, 0x08 /* Private */,
      25,    0,  350,    2, 0x08 /* Private */,
      26,    0,  351,    2, 0x08 /* Private */,
      27,    0,  352,    2, 0x08 /* Private */,
      28,    0,  353,    2, 0x08 /* Private */,
      29,    1,  354,    2, 0x08 /* Private */,
      31,    1,  357,    2, 0x08 /* Private */,
      32,    1,  360,    2, 0x08 /* Private */,
      33,    1,  363,    2, 0x08 /* Private */,
      34,    1,  366,    2, 0x08 /* Private */,
      35,    0,  369,    2, 0x08 /* Private */,
      36,    0,  370,    2, 0x08 /* Private */,
      37,    0,  371,    2, 0x08 /* Private */,
      38,    0,  372,    2, 0x08 /* Private */,
      39,    0,  373,    2, 0x08 /* Private */,
      41,    2,  374,    2, 0x08 /* Private */,
      45,    1,  379,    2, 0x08 /* Private */,
      46,    0,  382,    2, 0x08 /* Private */,
      47,    0,  383,    2, 0x08 /* Private */,
      48,    0,  384,    2, 0x08 /* Private */,
      49,    0,  385,    2, 0x08 /* Private */,
      50,    0,  386,    2, 0x08 /* Private */,
      51,    0,  387,    2, 0x08 /* Private */,
      53,    1,  388,    2, 0x08 /* Private */,
      54,    2,  391,    2, 0x08 /* Private */,
      55,    1,  396,    2, 0x08 /* Private */,
      56,    1,  399,    2, 0x08 /* Private */,
      58,    1,  402,    2, 0x08 /* Private */,
      60,    1,  405,    2, 0x08 /* Private */,
      62,    1,  408,    2, 0x08 /* Private */,
      63,    0,  411,    2, 0x08 /* Private */,
      64,    0,  412,    2, 0x09 /* Protected */,
      65,    0,  413,    2, 0x08 /* Private */,
      66,    1,  414,    2, 0x08 /* Private */,
      68,    1,  417,    2, 0x08 /* Private */,
      70,    0,  420,    2, 0x08 /* Private */,
      71,    1,  421,    2, 0x08 /* Private */,
      73,    0,  424,    2, 0x08 /* Private */,
      74,    0,  425,    2, 0x08 /* Private */,
      75,    1,  426,    2, 0x08 /* Private */,
      78,    0,  429,    2, 0x08 /* Private */,
      79,    0,  430,    2, 0x08 /* Private */,
      80,    0,  431,    2, 0x08 /* Private */,
      81,    0,  432,    2, 0x08 /* Private */,
      82,    0,  433,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 40,
    QMetaType::Void, 0x80000000 | 42, 0x80000000 | 42,   43,   44,
    QMetaType::Void, 0x80000000 | 42,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 52,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 42, 0x80000000 | 42,   43,   44,
    QMetaType::Void, 0x80000000 | 42,   15,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Void, 0x80000000 | 52,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 67,   24,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutMapWidget *_t = static_cast<QgsLayoutMapWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mScaleLineEdit_editingFinished(); break;
        case 1: _t->setToMapCanvasExtent(); break;
        case 2: _t->setToMapCanvasScale(); break;
        case 3: _t->viewExtentInCanvas(); break;
        case 4: _t->viewScaleInCanvas(); break;
        case 5: _t->updatePreview(); break;
        case 6: _t->mFollowVisibilityPresetCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mKeepLayerListCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mKeepLayerStylesCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->mDrawCanvasItemsCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->overviewMapChanged((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 11: _t->mOverviewBlendModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->mOverviewInvertCheckbox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->mOverviewCenterCheckbox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->overviewStackingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->overviewStackingLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 16: _t->mXMinLineEdit_editingFinished(); break;
        case 17: _t->mXMaxLineEdit_editingFinished(); break;
        case 18: _t->mYMinLineEdit_editingFinished(); break;
        case 19: _t->mYMaxLineEdit_editingFinished(); break;
        case 20: _t->mAtlasMarginRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->mAtlasCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->mAtlasMarginSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->mAtlasFixedScaleRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->mAtlasPredefinedScaleRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->mAddGridPushButton_clicked(); break;
        case 26: _t->mRemoveGridPushButton_clicked(); break;
        case 27: _t->mGridUpButton_clicked(); break;
        case 28: _t->mGridDownButton_clicked(); break;
        case 29: { QgsLayoutItemMapGrid* _r = _t->currentGrid();
            if (_a[0]) *reinterpret_cast< QgsLayoutItemMapGrid**>(_a[0]) = std::move(_r); }  break;
        case 30: _t->mGridListWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 31: _t->mGridListWidget_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 32: _t->mGridPropertiesButton_clicked(); break;
        case 33: _t->mAddOverviewPushButton_clicked(); break;
        case 34: _t->mRemoveOverviewPushButton_clicked(); break;
        case 35: _t->mOverviewUpButton_clicked(); break;
        case 36: _t->mOverviewDownButton_clicked(); break;
        case 37: { QgsLayoutItemMapOverview* _r = _t->currentOverview();
            if (_a[0]) *reinterpret_cast< QgsLayoutItemMapOverview**>(_a[0]) = std::move(_r); }  break;
        case 38: _t->mOverviewCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->mOverviewListWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 40: _t->mOverviewListWidget_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 41: _t->setOverviewItemsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->setOverviewItems((*reinterpret_cast< QgsLayoutItemMapOverview*(*)>(_a[1]))); break;
        case 43: _t->blockOverviewItemsSignals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->mTemporalCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->updateTemporalExtent(); break;
        case 46: _t->populateDataDefinedButtons(); break;
        case 47: _t->updateGuiElements(); break;
        case 48: _t->atlasLayerChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 49: _t->compositionAtlasToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->aboutToShowKeepLayersVisibilityPresetsMenu(); break;
        case 51: _t->followVisibilityPresetSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->keepLayersVisibilityPresetSelected(); break;
        case 53: _t->onMapThemesChanged(); break;
        case 54: _t->mapCrsChanged((*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 55: _t->overviewSymbolChanged(); break;
        case 56: _t->showLabelSettings(); break;
        case 57: _t->showClipSettings(); break;
        case 58: _t->switchToMoveContentTool(); break;
        case 59: _t->aboutToShowBookmarkMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayoutItem* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutMapWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutMapWidget.data,
      qt_meta_data_QgsLayoutMapWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutMapWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLayoutMapItemBlocksLabelsModel_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutMapItemBlocksLabelsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutMapItemBlocksLabelsModel_t qt_meta_stringdata_QgsLayoutMapItemBlocksLabelsModel = {
    {
QT_MOC_LITERAL(0, 0, 33) // "QgsLayoutMapItemBlocksLabelsM..."

    },
    "QgsLayoutMapItemBlocksLabelsModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutMapItemBlocksLabelsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsLayoutMapItemBlocksLabelsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutMapItemBlocksLabelsModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsLayoutMapItemBlocksLabelsModel.data,
      qt_meta_data_QgsLayoutMapItemBlocksLabelsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutMapItemBlocksLabelsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutMapItemBlocksLabelsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutMapItemBlocksLabelsModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsLayoutMapItemBlocksLabelsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayoutMapLabelingWidget_t {
    QByteArrayData data[9];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutMapLabelingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutMapLabelingWidget_t qt_meta_stringdata_QgsLayoutMapLabelingWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsLayoutMapLabelingWidget"
QT_MOC_LITERAL(1, 27, 17), // "updateGuiElements"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 18), // "labelMarginChanged"
QT_MOC_LITERAL(4, 65, 3), // "val"
QT_MOC_LITERAL(5, 69, 23), // "labelMarginUnitsChanged"
QT_MOC_LITERAL(6, 93, 19), // "showPartialsToggled"
QT_MOC_LITERAL(7, 113, 7), // "checked"
QT_MOC_LITERAL(8, 121, 19) // "showUnplacedToggled"

    },
    "QgsLayoutMapLabelingWidget\0updateGuiElements\0"
    "\0labelMarginChanged\0val\0labelMarginUnitsChanged\0"
    "showPartialsToggled\0checked\0"
    "showUnplacedToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutMapLabelingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QgsLayoutMapLabelingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutMapLabelingWidget *_t = static_cast<QgsLayoutMapLabelingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGuiElements(); break;
        case 1: _t->labelMarginChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->labelMarginUnitsChanged(); break;
        case 3: _t->showPartialsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showUnplacedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutMapLabelingWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutMapLabelingWidget.data,
      qt_meta_data_QgsLayoutMapLabelingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutMapLabelingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutMapLabelingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutMapLabelingWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutMapLabelingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLayoutMapClippingWidget_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutMapClippingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutMapClippingWidget_t qt_meta_stringdata_QgsLayoutMapClippingWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsLayoutMapClippingWidget"
QT_MOC_LITERAL(1, 27, 17), // "updateGuiElements"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 17), // "atlasLayerChanged"
QT_MOC_LITERAL(4, 64, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(5, 80, 5), // "layer"
QT_MOC_LITERAL(6, 86, 12), // "atlasToggled"
QT_MOC_LITERAL(7, 99, 12) // "atlasEnabled"

    },
    "QgsLayoutMapClippingWidget\0updateGuiElements\0"
    "\0atlasLayerChanged\0QgsVectorLayer*\0"
    "layer\0atlasToggled\0atlasEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutMapClippingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QgsLayoutMapClippingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutMapClippingWidget *_t = static_cast<QgsLayoutMapClippingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGuiElements(); break;
        case 1: _t->atlasLayerChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 2: _t->atlasToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutMapClippingWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutMapClippingWidget.data,
      qt_meta_data_QgsLayoutMapClippingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutMapClippingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutMapClippingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutMapClippingWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutMapClippingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
