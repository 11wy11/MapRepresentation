/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitemwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutitemwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitemwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutConfigObject_t {
    QByteArrayData data[4];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutConfigObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutConfigObject_t qt_meta_stringdata_QgsLayoutConfigObject = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayoutConfigObject"
QT_MOC_LITERAL(1, 22, 25), // "updateDataDefinedProperty"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 24) // "updateDataDefinedButtons"

    },
    "QgsLayoutConfigObject\0updateDataDefinedProperty\0"
    "\0updateDataDefinedButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutConfigObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutConfigObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutConfigObject *_t = static_cast<QgsLayoutConfigObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDataDefinedProperty(); break;
        case 1: _t->updateDataDefinedButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutConfigObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayoutConfigObject.data,
      qt_meta_data_QgsLayoutConfigObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutConfigObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutConfigObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutConfigObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayoutConfigObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLayoutItemBaseWidget_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemBaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemBaseWidget_t qt_meta_stringdata_QgsLayoutItemBaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QgsLayoutItemBaseWidget"

    },
    "QgsLayoutItemBaseWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemBaseWidget[] = {

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

void QgsLayoutItemBaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutItemBaseWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutItemBaseWidget.data,
      qt_meta_data_QgsLayoutItemBaseWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemBaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemBaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemBaseWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLayoutItemBaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayoutItemPropertiesWidget_t {
    QByteArrayData data[46];
    char stringdata0[1105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemPropertiesWidget_t qt_meta_stringdata_QgsLayoutItemPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsLayoutItemPropertiesWidget"
QT_MOC_LITERAL(1, 30, 28), // "initializeDataDefinedButtons"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 26), // "populateDataDefinedButtons"
QT_MOC_LITERAL(4, 87, 30), // "mFrameColorButton_colorChanged"
QT_MOC_LITERAL(5, 118, 13), // "newFrameColor"
QT_MOC_LITERAL(6, 132, 35), // "mBackgroundColorButton_colorC..."
QT_MOC_LITERAL(7, 168, 18), // "newBackgroundColor"
QT_MOC_LITERAL(8, 187, 32), // "mStrokeWidthSpinBox_valueChanged"
QT_MOC_LITERAL(9, 220, 1), // "d"
QT_MOC_LITERAL(10, 222, 17), // "strokeUnitChanged"
QT_MOC_LITERAL(11, 240, 24), // "QgsUnitTypes::LayoutUnit"
QT_MOC_LITERAL(12, 265, 4), // "unit"
QT_MOC_LITERAL(13, 270, 22), // "mFrameGroupBox_toggled"
QT_MOC_LITERAL(14, 293, 5), // "state"
QT_MOC_LITERAL(15, 299, 40), // "mFrameJoinStyleCombo_currentI..."
QT_MOC_LITERAL(16, 340, 5), // "index"
QT_MOC_LITERAL(17, 346, 27), // "mBackgroundGroupBox_toggled"
QT_MOC_LITERAL(18, 374, 31), // "mItemIdLineEdit_editingFinished"
QT_MOC_LITERAL(19, 406, 25), // "mPageSpinBox_valueChanged"
QT_MOC_LITERAL(20, 432, 22), // "mXPosSpin_valueChanged"
QT_MOC_LITERAL(21, 455, 22), // "mYPosSpin_valueChanged"
QT_MOC_LITERAL(22, 478, 20), // "positionUnitsChanged"
QT_MOC_LITERAL(23, 499, 23), // "mWidthSpin_valueChanged"
QT_MOC_LITERAL(24, 523, 24), // "mHeightSpin_valueChanged"
QT_MOC_LITERAL(25, 548, 16), // "sizeUnitsChanged"
QT_MOC_LITERAL(26, 565, 31), // "mUpperLeftCheckBox_stateChanged"
QT_MOC_LITERAL(27, 597, 33), // "mUpperMiddleCheckBox_stateCha..."
QT_MOC_LITERAL(28, 631, 32), // "mUpperRightCheckBox_stateChanged"
QT_MOC_LITERAL(29, 664, 32), // "mMiddleLeftCheckBox_stateChanged"
QT_MOC_LITERAL(30, 697, 28), // "mMiddleCheckBox_stateChanged"
QT_MOC_LITERAL(31, 726, 33), // "mMiddleRightCheckBox_stateCha..."
QT_MOC_LITERAL(32, 760, 31), // "mLowerLeftCheckBox_stateChanged"
QT_MOC_LITERAL(33, 792, 33), // "mLowerMiddleCheckBox_stateCha..."
QT_MOC_LITERAL(34, 826, 32), // "mLowerRightCheckBox_stateChanged"
QT_MOC_LITERAL(35, 859, 35), // "mBlendModeCombo_currentIndexC..."
QT_MOC_LITERAL(36, 895, 14), // "opacityChanged"
QT_MOC_LITERAL(37, 910, 5), // "value"
QT_MOC_LITERAL(38, 916, 33), // "mItemRotationSpinBox_valueCha..."
QT_MOC_LITERAL(39, 950, 3), // "val"
QT_MOC_LITERAL(40, 954, 34), // "mExcludeFromPrintsCheckBox_to..."
QT_MOC_LITERAL(41, 989, 7), // "checked"
QT_MOC_LITERAL(42, 997, 23), // "setValuesForGuiElements"
QT_MOC_LITERAL(43, 1021, 31), // "setValuesForGuiPositionElements"
QT_MOC_LITERAL(44, 1053, 34), // "setValuesForGuiNonPositionEle..."
QT_MOC_LITERAL(45, 1088, 16) // "variablesChanged"

    },
    "QgsLayoutItemPropertiesWidget\0"
    "initializeDataDefinedButtons\0\0"
    "populateDataDefinedButtons\0"
    "mFrameColorButton_colorChanged\0"
    "newFrameColor\0mBackgroundColorButton_colorChanged\0"
    "newBackgroundColor\0mStrokeWidthSpinBox_valueChanged\0"
    "d\0strokeUnitChanged\0QgsUnitTypes::LayoutUnit\0"
    "unit\0mFrameGroupBox_toggled\0state\0"
    "mFrameJoinStyleCombo_currentIndexChanged\0"
    "index\0mBackgroundGroupBox_toggled\0"
    "mItemIdLineEdit_editingFinished\0"
    "mPageSpinBox_valueChanged\0"
    "mXPosSpin_valueChanged\0mYPosSpin_valueChanged\0"
    "positionUnitsChanged\0mWidthSpin_valueChanged\0"
    "mHeightSpin_valueChanged\0sizeUnitsChanged\0"
    "mUpperLeftCheckBox_stateChanged\0"
    "mUpperMiddleCheckBox_stateChanged\0"
    "mUpperRightCheckBox_stateChanged\0"
    "mMiddleLeftCheckBox_stateChanged\0"
    "mMiddleCheckBox_stateChanged\0"
    "mMiddleRightCheckBox_stateChanged\0"
    "mLowerLeftCheckBox_stateChanged\0"
    "mLowerMiddleCheckBox_stateChanged\0"
    "mLowerRightCheckBox_stateChanged\0"
    "mBlendModeCombo_currentIndexChanged\0"
    "opacityChanged\0value\0"
    "mItemRotationSpinBox_valueChanged\0val\0"
    "mExcludeFromPrintsCheckBox_toggled\0"
    "checked\0setValuesForGuiElements\0"
    "setValuesForGuiPositionElements\0"
    "setValuesForGuiNonPositionElements\0"
    "variablesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemPropertiesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  184,    2, 0x09 /* Protected */,
       3,    0,  185,    2, 0x09 /* Protected */,
       4,    1,  186,    2, 0x08 /* Private */,
       6,    1,  189,    2, 0x08 /* Private */,
       8,    1,  192,    2, 0x08 /* Private */,
      10,    1,  195,    2, 0x08 /* Private */,
      13,    1,  198,    2, 0x08 /* Private */,
      15,    1,  201,    2, 0x08 /* Private */,
      17,    1,  204,    2, 0x08 /* Private */,
      18,    0,  207,    2, 0x08 /* Private */,
      19,    1,  208,    2, 0x08 /* Private */,
      20,    1,  211,    2, 0x08 /* Private */,
      21,    1,  214,    2, 0x08 /* Private */,
      22,    1,  217,    2, 0x08 /* Private */,
      23,    1,  220,    2, 0x08 /* Private */,
      24,    1,  223,    2, 0x08 /* Private */,
      25,    1,  226,    2, 0x08 /* Private */,
      26,    1,  229,    2, 0x08 /* Private */,
      27,    1,  232,    2, 0x08 /* Private */,
      28,    1,  235,    2, 0x08 /* Private */,
      29,    1,  238,    2, 0x08 /* Private */,
      30,    1,  241,    2, 0x08 /* Private */,
      31,    1,  244,    2, 0x08 /* Private */,
      32,    1,  247,    2, 0x08 /* Private */,
      33,    1,  250,    2, 0x08 /* Private */,
      34,    1,  253,    2, 0x08 /* Private */,
      35,    1,  256,    2, 0x08 /* Private */,
      36,    1,  259,    2, 0x08 /* Private */,
      38,    1,  262,    2, 0x08 /* Private */,
      40,    1,  265,    2, 0x08 /* Private */,
      42,    0,  268,    2, 0x08 /* Private */,
      43,    0,  269,    2, 0x08 /* Private */,
      44,    0,  270,    2, 0x08 /* Private */,
      45,    0,  271,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Double,   37,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutItemPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItemPropertiesWidget *_t = static_cast<QgsLayoutItemPropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initializeDataDefinedButtons(); break;
        case 1: _t->populateDataDefinedButtons(); break;
        case 2: _t->mFrameColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->mBackgroundColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->mStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->strokeUnitChanged((*reinterpret_cast< QgsUnitTypes::LayoutUnit(*)>(_a[1]))); break;
        case 6: _t->mFrameGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->mFrameJoinStyleCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mBackgroundGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->mItemIdLineEdit_editingFinished(); break;
        case 10: _t->mPageSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->mXPosSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->mYPosSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->positionUnitsChanged((*reinterpret_cast< QgsUnitTypes::LayoutUnit(*)>(_a[1]))); break;
        case 14: _t->mWidthSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->mHeightSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->sizeUnitsChanged((*reinterpret_cast< QgsUnitTypes::LayoutUnit(*)>(_a[1]))); break;
        case 17: _t->mUpperLeftCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->mUpperMiddleCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->mUpperRightCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->mMiddleLeftCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->mMiddleCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->mMiddleRightCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->mLowerLeftCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->mLowerMiddleCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->mLowerRightCheckBox_stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->mBlendModeCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->mItemRotationSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->mExcludeFromPrintsCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setValuesForGuiElements(); break;
        case 31: _t->setValuesForGuiPositionElements(); break;
        case 32: _t->setValuesForGuiNonPositionElements(); break;
        case 33: _t->variablesChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutItemPropertiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutItemPropertiesWidget.data,
      qt_meta_data_QgsLayoutItemPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsLayoutItemPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
