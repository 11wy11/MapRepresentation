/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutlegendwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutlegendwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutlegendwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutLegendWidget_t {
    QByteArrayData data[76];
    char stringdata0[1807];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutLegendWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutLegendWidget_t qt_meta_stringdata_QgsLayoutLegendWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayoutLegendWidget"
QT_MOC_LITERAL(1, 22, 24), // "resetLayerNodeToDefaults"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 29), // "setCurrentNodeStyleFromAction"
QT_MOC_LITERAL(4, 78, 29), // "mWrapCharLineEdit_textChanged"
QT_MOC_LITERAL(5, 108, 4), // "text"
QT_MOC_LITERAL(6, 113, 26), // "mTitleLineEdit_textChanged"
QT_MOC_LITERAL(7, 140, 32), // "mColumnCountSpinBox_valueChanged"
QT_MOC_LITERAL(8, 173, 1), // "c"
QT_MOC_LITERAL(9, 175, 27), // "mSplitLayerCheckBox_toggled"
QT_MOC_LITERAL(10, 203, 7), // "checked"
QT_MOC_LITERAL(11, 211, 33), // "mEqualColumnWidthCheckBox_tog..."
QT_MOC_LITERAL(12, 245, 32), // "mSymbolWidthSpinBox_valueChanged"
QT_MOC_LITERAL(13, 278, 1), // "d"
QT_MOC_LITERAL(14, 280, 33), // "mSymbolHeightSpinBox_valueCha..."
QT_MOC_LITERAL(15, 314, 34), // "mMaxSymbolSizeSpinBox_valueCh..."
QT_MOC_LITERAL(16, 349, 34), // "mMinSymbolSizeSpinBox_valueCh..."
QT_MOC_LITERAL(17, 384, 35), // "mWmsLegendWidthSpinBox_valueC..."
QT_MOC_LITERAL(18, 420, 36), // "mWmsLegendHeightSpinBox_value..."
QT_MOC_LITERAL(19, 457, 37), // "mTitleSpaceBottomSpinBox_valu..."
QT_MOC_LITERAL(20, 495, 31), // "mGroupSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(21, 527, 31), // "mLayerSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(22, 559, 32), // "mSymbolSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(23, 592, 35), // "mIconLabelSpaceSpinBox_valueC..."
QT_MOC_LITERAL(24, 628, 29), // "mFontColorButton_colorChanged"
QT_MOC_LITERAL(25, 658, 12), // "newFontColor"
QT_MOC_LITERAL(26, 671, 29), // "mBoxSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(27, 701, 32), // "mColumnSpaceSpinBox_valueChanged"
QT_MOC_LITERAL(28, 734, 32), // "mLineSpacingSpinBox_valueChanged"
QT_MOC_LITERAL(29, 767, 32), // "mCheckBoxAutoUpdate_stateChanged"
QT_MOC_LITERAL(30, 800, 5), // "state"
QT_MOC_LITERAL(31, 806, 13), // "userTriggered"
QT_MOC_LITERAL(32, 820, 18), // "composerMapChanged"
QT_MOC_LITERAL(33, 839, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(34, 854, 4), // "item"
QT_MOC_LITERAL(35, 859, 31), // "mCheckboxResizeContents_toggled"
QT_MOC_LITERAL(36, 891, 29), // "mRasterStrokeGroupBox_toggled"
QT_MOC_LITERAL(37, 921, 38), // "mRasterStrokeWidthSpinBox_val..."
QT_MOC_LITERAL(38, 960, 37), // "mRasterStrokeColorButton_colo..."
QT_MOC_LITERAL(39, 998, 8), // "newColor"
QT_MOC_LITERAL(40, 1007, 27), // "mMoveDownToolButton_clicked"
QT_MOC_LITERAL(41, 1035, 25), // "mMoveUpToolButton_clicked"
QT_MOC_LITERAL(42, 1061, 25), // "mRemoveToolButton_clicked"
QT_MOC_LITERAL(43, 1087, 22), // "mAddToolButton_clicked"
QT_MOC_LITERAL(44, 1110, 23), // "mEditPushButton_clicked"
QT_MOC_LITERAL(45, 1134, 24), // "mCountToolButton_clicked"
QT_MOC_LITERAL(46, 1159, 31), // "mExpressionFilterButton_toggled"
QT_MOC_LITERAL(47, 1191, 28), // "mFilterByMapCheckBox_toggled"
QT_MOC_LITERAL(48, 1220, 28), // "mUpdateAllPushButton_clicked"
QT_MOC_LITERAL(49, 1249, 27), // "mAddGroupToolButton_clicked"
QT_MOC_LITERAL(50, 1277, 30), // "mLayerExpressionButton_clicked"
QT_MOC_LITERAL(51, 1308, 36), // "mFilterLegendByAtlasCheckBox_..."
QT_MOC_LITERAL(52, 1345, 15), // "selectedChanged"
QT_MOC_LITERAL(53, 1361, 11), // "QModelIndex"
QT_MOC_LITERAL(54, 1373, 7), // "current"
QT_MOC_LITERAL(55, 1381, 8), // "previous"
QT_MOC_LITERAL(56, 1390, 20), // "setLegendMapViewData"
QT_MOC_LITERAL(57, 1411, 14), // "setGuiElements"
QT_MOC_LITERAL(58, 1426, 31), // "updateFilterLegendByAtlasButton"
QT_MOC_LITERAL(59, 1458, 27), // "mItemTreeView_doubleClicked"
QT_MOC_LITERAL(60, 1486, 5), // "index"
QT_MOC_LITERAL(61, 1492, 16), // "titleFontChanged"
QT_MOC_LITERAL(62, 1509, 16), // "groupFontChanged"
QT_MOC_LITERAL(63, 1526, 16), // "layerFontChanged"
QT_MOC_LITERAL(64, 1543, 15), // "itemFontChanged"
QT_MOC_LITERAL(65, 1559, 21), // "titleAlignmentChanged"
QT_MOC_LITERAL(66, 1581, 21), // "groupAlignmentChanged"
QT_MOC_LITERAL(67, 1603, 24), // "subgroupAlignmentChanged"
QT_MOC_LITERAL(68, 1628, 20), // "itemAlignmentChanged"
QT_MOC_LITERAL(69, 1649, 18), // "arrangementChanged"
QT_MOC_LITERAL(70, 1668, 32), // "spaceBelowSubGroupHeadingChanged"
QT_MOC_LITERAL(71, 1701, 5), // "space"
QT_MOC_LITERAL(72, 1707, 29), // "spaceBelowGroupHeadingChanged"
QT_MOC_LITERAL(73, 1737, 21), // "spaceGroupSideChanged"
QT_MOC_LITERAL(74, 1759, 24), // "spaceSubGroupSideChanged"
QT_MOC_LITERAL(75, 1784, 22) // "spaceSymbolSideChanged"

    },
    "QgsLayoutLegendWidget\0resetLayerNodeToDefaults\0"
    "\0setCurrentNodeStyleFromAction\0"
    "mWrapCharLineEdit_textChanged\0text\0"
    "mTitleLineEdit_textChanged\0"
    "mColumnCountSpinBox_valueChanged\0c\0"
    "mSplitLayerCheckBox_toggled\0checked\0"
    "mEqualColumnWidthCheckBox_toggled\0"
    "mSymbolWidthSpinBox_valueChanged\0d\0"
    "mSymbolHeightSpinBox_valueChanged\0"
    "mMaxSymbolSizeSpinBox_valueChanged\0"
    "mMinSymbolSizeSpinBox_valueChanged\0"
    "mWmsLegendWidthSpinBox_valueChanged\0"
    "mWmsLegendHeightSpinBox_valueChanged\0"
    "mTitleSpaceBottomSpinBox_valueChanged\0"
    "mGroupSpaceSpinBox_valueChanged\0"
    "mLayerSpaceSpinBox_valueChanged\0"
    "mSymbolSpaceSpinBox_valueChanged\0"
    "mIconLabelSpaceSpinBox_valueChanged\0"
    "mFontColorButton_colorChanged\0"
    "newFontColor\0mBoxSpaceSpinBox_valueChanged\0"
    "mColumnSpaceSpinBox_valueChanged\0"
    "mLineSpacingSpinBox_valueChanged\0"
    "mCheckBoxAutoUpdate_stateChanged\0state\0"
    "userTriggered\0composerMapChanged\0"
    "QgsLayoutItem*\0item\0mCheckboxResizeContents_toggled\0"
    "mRasterStrokeGroupBox_toggled\0"
    "mRasterStrokeWidthSpinBox_valueChanged\0"
    "mRasterStrokeColorButton_colorChanged\0"
    "newColor\0mMoveDownToolButton_clicked\0"
    "mMoveUpToolButton_clicked\0"
    "mRemoveToolButton_clicked\0"
    "mAddToolButton_clicked\0mEditPushButton_clicked\0"
    "mCountToolButton_clicked\0"
    "mExpressionFilterButton_toggled\0"
    "mFilterByMapCheckBox_toggled\0"
    "mUpdateAllPushButton_clicked\0"
    "mAddGroupToolButton_clicked\0"
    "mLayerExpressionButton_clicked\0"
    "mFilterLegendByAtlasCheckBox_toggled\0"
    "selectedChanged\0QModelIndex\0current\0"
    "previous\0setLegendMapViewData\0"
    "setGuiElements\0updateFilterLegendByAtlasButton\0"
    "mItemTreeView_doubleClicked\0index\0"
    "titleFontChanged\0groupFontChanged\0"
    "layerFontChanged\0itemFontChanged\0"
    "titleAlignmentChanged\0groupAlignmentChanged\0"
    "subgroupAlignmentChanged\0itemAlignmentChanged\0"
    "arrangementChanged\0spaceBelowSubGroupHeadingChanged\0"
    "space\0spaceBelowGroupHeadingChanged\0"
    "spaceGroupSideChanged\0spaceSubGroupSideChanged\0"
    "spaceSymbolSideChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutLegendWidget[] = {

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
       1,    0,  314,    2, 0x0a /* Public */,
       3,    0,  315,    2, 0x0a /* Public */,
       4,    1,  316,    2, 0x08 /* Private */,
       6,    1,  319,    2, 0x08 /* Private */,
       7,    1,  322,    2, 0x08 /* Private */,
       9,    1,  325,    2, 0x08 /* Private */,
      11,    1,  328,    2, 0x08 /* Private */,
      12,    1,  331,    2, 0x08 /* Private */,
      14,    1,  334,    2, 0x08 /* Private */,
      15,    1,  337,    2, 0x08 /* Private */,
      16,    1,  340,    2, 0x08 /* Private */,
      17,    1,  343,    2, 0x08 /* Private */,
      18,    1,  346,    2, 0x08 /* Private */,
      19,    1,  349,    2, 0x08 /* Private */,
      20,    1,  352,    2, 0x08 /* Private */,
      21,    1,  355,    2, 0x08 /* Private */,
      22,    1,  358,    2, 0x08 /* Private */,
      23,    1,  361,    2, 0x08 /* Private */,
      24,    1,  364,    2, 0x08 /* Private */,
      26,    1,  367,    2, 0x08 /* Private */,
      27,    1,  370,    2, 0x08 /* Private */,
      28,    1,  373,    2, 0x08 /* Private */,
      29,    2,  376,    2, 0x08 /* Private */,
      29,    1,  381,    2, 0x28 /* Private | MethodCloned */,
      32,    1,  384,    2, 0x08 /* Private */,
      35,    1,  387,    2, 0x08 /* Private */,
      36,    1,  390,    2, 0x08 /* Private */,
      37,    1,  393,    2, 0x08 /* Private */,
      38,    1,  396,    2, 0x08 /* Private */,
      40,    0,  399,    2, 0x08 /* Private */,
      41,    0,  400,    2, 0x08 /* Private */,
      42,    0,  401,    2, 0x08 /* Private */,
      43,    0,  402,    2, 0x08 /* Private */,
      44,    0,  403,    2, 0x08 /* Private */,
      45,    1,  404,    2, 0x08 /* Private */,
      46,    1,  407,    2, 0x08 /* Private */,
      47,    1,  410,    2, 0x08 /* Private */,
      48,    0,  413,    2, 0x08 /* Private */,
      49,    0,  414,    2, 0x08 /* Private */,
      50,    0,  415,    2, 0x08 /* Private */,
      51,    1,  416,    2, 0x08 /* Private */,
      52,    2,  419,    2, 0x08 /* Private */,
      56,    0,  424,    2, 0x08 /* Private */,
      57,    0,  425,    2, 0x08 /* Private */,
      58,    0,  426,    2, 0x08 /* Private */,
      59,    1,  427,    2, 0x08 /* Private */,
      61,    0,  430,    2, 0x08 /* Private */,
      62,    0,  431,    2, 0x08 /* Private */,
      63,    0,  432,    2, 0x08 /* Private */,
      64,    0,  433,    2, 0x08 /* Private */,
      65,    0,  434,    2, 0x08 /* Private */,
      66,    0,  435,    2, 0x08 /* Private */,
      67,    0,  436,    2, 0x08 /* Private */,
      68,    0,  437,    2, 0x08 /* Private */,
      69,    0,  438,    2, 0x08 /* Private */,
      70,    1,  439,    2, 0x08 /* Private */,
      72,    1,  442,    2, 0x08 /* Private */,
      73,    1,  445,    2, 0x08 /* Private */,
      74,    1,  448,    2, 0x08 /* Private */,
      75,    1,  451,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::QColor,   25,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   30,   31,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::QColor,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 53, 0x80000000 | 53,   54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   71,
    QMetaType::Void, QMetaType::Double,   71,
    QMetaType::Void, QMetaType::Double,   71,
    QMetaType::Void, QMetaType::Double,   71,
    QMetaType::Void, QMetaType::Double,   71,

       0        // eod
};

void QgsLayoutLegendWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutLegendWidget *_t = static_cast<QgsLayoutLegendWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetLayerNodeToDefaults(); break;
        case 1: _t->setCurrentNodeStyleFromAction(); break;
        case 2: _t->mWrapCharLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mTitleLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->mColumnCountSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mSplitLayerCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mEqualColumnWidthCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->mSymbolWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->mSymbolHeightSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->mMaxSymbolSizeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->mMinSymbolSizeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->mWmsLegendWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->mWmsLegendHeightSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->mTitleSpaceBottomSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->mGroupSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->mLayerSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->mSymbolSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->mIconLabelSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->mFontColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 19: _t->mBoxSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->mColumnSpaceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->mLineSpacingSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->mCheckBoxAutoUpdate_stateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->mCheckBoxAutoUpdate_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->composerMapChanged((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 25: _t->mCheckboxResizeContents_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->mRasterStrokeGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->mRasterStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->mRasterStrokeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 29: _t->mMoveDownToolButton_clicked(); break;
        case 30: _t->mMoveUpToolButton_clicked(); break;
        case 31: _t->mRemoveToolButton_clicked(); break;
        case 32: _t->mAddToolButton_clicked(); break;
        case 33: _t->mEditPushButton_clicked(); break;
        case 34: _t->mCountToolButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->mExpressionFilterButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->mFilterByMapCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->mUpdateAllPushButton_clicked(); break;
        case 38: _t->mAddGroupToolButton_clicked(); break;
        case 39: _t->mLayerExpressionButton_clicked(); break;
        case 40: _t->mFilterLegendByAtlasCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->selectedChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 42: _t->setLegendMapViewData(); break;
        case 43: _t->setGuiElements(); break;
        case 44: _t->updateFilterLegendByAtlasButton(); break;
        case 45: _t->mItemTreeView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 46: _t->titleFontChanged(); break;
        case 47: _t->groupFontChanged(); break;
        case 48: _t->layerFontChanged(); break;
        case 49: _t->itemFontChanged(); break;
        case 50: _t->titleAlignmentChanged(); break;
        case 51: _t->groupAlignmentChanged(); break;
        case 52: _t->subgroupAlignmentChanged(); break;
        case 53: _t->itemAlignmentChanged(); break;
        case 54: _t->arrangementChanged(); break;
        case 55: _t->spaceBelowSubGroupHeadingChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 56: _t->spaceBelowGroupHeadingChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 57: _t->spaceGroupSideChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 58: _t->spaceSubGroupSideChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 59: _t->spaceSymbolSideChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayoutItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutLegendWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutLegendWidget.data,
      qt_meta_data_QgsLayoutLegendWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutLegendWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutLegendWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutLegendWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutLegendWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QgsLayoutLegendNodeWidget_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutLegendNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutLegendNodeWidget_t qt_meta_stringdata_QgsLayoutLegendNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsLayoutLegendNodeWidget"
QT_MOC_LITERAL(1, 26, 12), // "labelChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "patchChanged"
QT_MOC_LITERAL(4, 53, 16), // "insertExpression"
QT_MOC_LITERAL(5, 70, 11), // "sizeChanged"
QT_MOC_LITERAL(6, 82, 19), // "customSymbolChanged"
QT_MOC_LITERAL(7, 102, 18), // "columnBreakToggled"
QT_MOC_LITERAL(8, 121, 7), // "checked"
QT_MOC_LITERAL(9, 129, 18) // "columnSplitChanged"

    },
    "QgsLayoutLegendNodeWidget\0labelChanged\0"
    "\0patchChanged\0insertExpression\0"
    "sizeChanged\0customSymbolChanged\0"
    "columnBreakToggled\0checked\0"
    "columnSplitChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutLegendNodeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutLegendNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutLegendNodeWidget *_t = static_cast<QgsLayoutLegendNodeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelChanged(); break;
        case 1: _t->patchChanged(); break;
        case 2: _t->insertExpression(); break;
        case 3: _t->sizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->customSymbolChanged(); break;
        case 5: _t->columnBreakToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->columnSplitChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutLegendNodeWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutLegendNodeWidget.data,
      qt_meta_data_QgsLayoutLegendNodeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutLegendNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutLegendNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutLegendNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLayoutLegendNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
