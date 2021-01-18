/****************************************************************************
** Meta object code from reading C++ file 'qgssymbollayerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgssymbollayerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssymbollayerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSymbolLayerWidget_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolLayerWidget_t qt_meta_stringdata_QgsSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsSymbolLayerWidget"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "symbolChanged"
QT_MOC_LITERAL(4, 44, 25), // "updateDataDefinedProperty"
QT_MOC_LITERAL(5, 70, 20) // "createAuxiliaryField"

    },
    "QgsSymbolLayerWidget\0changed\0\0"
    "symbolChanged\0updateDataDefinedProperty\0"
    "createAuxiliaryField"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolLayerWidget *_t = static_cast<QgsSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->symbolChanged(); break;
        case 2: _t->updateDataDefinedProperty(); break;
        case 3: _t->createAuxiliaryField(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSymbolLayerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolLayerWidget::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsSymbolLayerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolLayerWidget::symbolChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsSymbolLayerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsSymbolLayerWidget.data,
      qt_meta_data_QgsSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsSymbolLayerWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsSymbolLayerWidget::symbolChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QgsSimpleLineSymbolLayerWidget_t {
    QByteArrayData data[17];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimpleLineSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimpleLineSymbolLayerWidget_t qt_meta_stringdata_QgsSimpleLineSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsSimpleLineSymbolLayerWidget"
QT_MOC_LITERAL(1, 31, 21), // "updateAssistantSymbol"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 15), // "penWidthChanged"
QT_MOC_LITERAL(4, 70, 12), // "colorChanged"
QT_MOC_LITERAL(5, 83, 5), // "color"
QT_MOC_LITERAL(6, 89, 15), // "penStyleChanged"
QT_MOC_LITERAL(7, 105, 13), // "offsetChanged"
QT_MOC_LITERAL(8, 119, 20), // "patternOffsetChanged"
QT_MOC_LITERAL(9, 140, 28), // "mCustomCheckBox_stateChanged"
QT_MOC_LITERAL(10, 169, 5), // "state"
QT_MOC_LITERAL(11, 175, 28), // "mChangePatternButton_clicked"
QT_MOC_LITERAL(12, 204, 27), // "mPenWidthUnitWidget_changed"
QT_MOC_LITERAL(13, 232, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(14, 258, 30), // "mDashPatternUnitWidget_changed"
QT_MOC_LITERAL(15, 289, 32), // "mDrawInsideCheckBox_stateChanged"
QT_MOC_LITERAL(16, 322, 24) // "patternOffsetUnitChanged"

    },
    "QgsSimpleLineSymbolLayerWidget\0"
    "updateAssistantSymbol\0\0penWidthChanged\0"
    "colorChanged\0color\0penStyleChanged\0"
    "offsetChanged\0patternOffsetChanged\0"
    "mCustomCheckBox_stateChanged\0state\0"
    "mChangePatternButton_clicked\0"
    "mPenWidthUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mDashPatternUnitWidget_changed\0"
    "mDrawInsideCheckBox_stateChanged\0"
    "patternOffsetUnitChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimpleLineSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void QgsSimpleLineSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSimpleLineSymbolLayerWidget *_t = static_cast<QgsSimpleLineSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAssistantSymbol(); break;
        case 1: _t->penWidthChanged(); break;
        case 2: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->penStyleChanged(); break;
        case 4: _t->offsetChanged(); break;
        case 5: _t->patternOffsetChanged(); break;
        case 6: _t->mCustomCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mChangePatternButton_clicked(); break;
        case 8: _t->mPenWidthUnitWidget_changed(); break;
        case 9: _t->mOffsetUnitWidget_changed(); break;
        case 10: _t->mDashPatternUnitWidget_changed(); break;
        case 11: _t->mDrawInsideCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->patternOffsetUnitChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSimpleLineSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsSimpleLineSymbolLayerWidget.data,
      qt_meta_data_QgsSimpleLineSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSimpleLineSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimpleLineSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimpleLineSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsSimpleLineSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_QgsSimpleMarkerSymbolLayerWidget_t {
    QByteArrayData data[20];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimpleMarkerSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimpleMarkerSymbolLayerWidget_t qt_meta_stringdata_QgsSimpleMarkerSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsSimpleMarkerSymbolLayerWidget"
QT_MOC_LITERAL(1, 33, 14), // "setColorStroke"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "color"
QT_MOC_LITERAL(4, 55, 12), // "setColorFill"
QT_MOC_LITERAL(5, 68, 7), // "setSize"
QT_MOC_LITERAL(6, 76, 8), // "setAngle"
QT_MOC_LITERAL(7, 85, 9), // "setOffset"
QT_MOC_LITERAL(8, 95, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(9, 119, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(10, 145, 30), // "mStrokeWidthUnitWidget_changed"
QT_MOC_LITERAL(11, 176, 40), // "mStrokeStyleComboBox_currentI..."
QT_MOC_LITERAL(12, 217, 5), // "index"
QT_MOC_LITERAL(13, 223, 32), // "mStrokeWidthSpinBox_valueChanged"
QT_MOC_LITERAL(14, 256, 1), // "d"
QT_MOC_LITERAL(15, 258, 45), // "mHorizontalAnchorComboBox_cur..."
QT_MOC_LITERAL(16, 304, 43), // "mVerticalAnchorComboBox_curre..."
QT_MOC_LITERAL(17, 348, 8), // "setShape"
QT_MOC_LITERAL(18, 357, 21), // "updateAssistantSymbol"
QT_MOC_LITERAL(19, 379, 19) // "penJoinStyleChanged"

    },
    "QgsSimpleMarkerSymbolLayerWidget\0"
    "setColorStroke\0\0color\0setColorFill\0"
    "setSize\0setAngle\0setOffset\0"
    "mSizeUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mStrokeWidthUnitWidget_changed\0"
    "mStrokeStyleComboBox_currentIndexChanged\0"
    "index\0mStrokeWidthSpinBox_valueChanged\0"
    "d\0mHorizontalAnchorComboBox_currentIndexChanged\0"
    "mVerticalAnchorComboBox_currentIndexChanged\0"
    "setShape\0updateAssistantSymbol\0"
    "penJoinStyleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimpleMarkerSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    1,   92,    2, 0x0a /* Public */,
       5,    0,   95,    2, 0x08 /* Private */,
       6,    0,   96,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      16,    1,  110,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSimpleMarkerSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSimpleMarkerSymbolLayerWidget *_t = static_cast<QgsSimpleMarkerSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColorStroke((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setColorFill((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setSize(); break;
        case 3: _t->setAngle(); break;
        case 4: _t->setOffset(); break;
        case 5: _t->mSizeUnitWidget_changed(); break;
        case 6: _t->mOffsetUnitWidget_changed(); break;
        case 7: _t->mStrokeWidthUnitWidget_changed(); break;
        case 8: _t->mStrokeStyleComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->mStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->mHorizontalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->mVerticalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setShape(); break;
        case 13: _t->updateAssistantSymbol(); break;
        case 14: _t->penJoinStyleChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSimpleMarkerSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsSimpleMarkerSymbolLayerWidget.data,
      qt_meta_data_QgsSimpleMarkerSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSimpleMarkerSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimpleMarkerSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimpleMarkerSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsSimpleMarkerSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_QgsSimpleFillSymbolLayerWidget_t {
    QByteArrayData data[11];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimpleFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimpleFillSymbolLayerWidget_t qt_meta_stringdata_QgsSimpleFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsSimpleFillSymbolLayerWidget"
QT_MOC_LITERAL(1, 31, 8), // "setColor"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "color"
QT_MOC_LITERAL(4, 47, 14), // "setStrokeColor"
QT_MOC_LITERAL(5, 62, 13), // "setBrushStyle"
QT_MOC_LITERAL(6, 76, 18), // "strokeWidthChanged"
QT_MOC_LITERAL(7, 95, 18), // "strokeStyleChanged"
QT_MOC_LITERAL(8, 114, 13), // "offsetChanged"
QT_MOC_LITERAL(9, 128, 30), // "mStrokeWidthUnitWidget_changed"
QT_MOC_LITERAL(10, 159, 25) // "mOffsetUnitWidget_changed"

    },
    "QgsSimpleFillSymbolLayerWidget\0setColor\0"
    "\0color\0setStrokeColor\0setBrushStyle\0"
    "strokeWidthChanged\0strokeStyleChanged\0"
    "offsetChanged\0mStrokeWidthUnitWidget_changed\0"
    "mOffsetUnitWidget_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimpleFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSimpleFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSimpleFillSymbolLayerWidget *_t = static_cast<QgsSimpleFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setStrokeColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setBrushStyle(); break;
        case 3: _t->strokeWidthChanged(); break;
        case 4: _t->strokeStyleChanged(); break;
        case 5: _t->offsetChanged(); break;
        case 6: _t->mStrokeWidthUnitWidget_changed(); break;
        case 7: _t->mOffsetUnitWidget_changed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSimpleFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsSimpleFillSymbolLayerWidget.data,
      qt_meta_data_QgsSimpleFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSimpleFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimpleFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimpleFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsSimpleFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_QgsFilledMarkerSymbolLayerWidget_t {
    QByteArrayData data[12];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFilledMarkerSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFilledMarkerSymbolLayerWidget_t qt_meta_stringdata_QgsFilledMarkerSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsFilledMarkerSymbolLayerWidget"
QT_MOC_LITERAL(1, 33, 21), // "updateAssistantSymbol"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 8), // "setShape"
QT_MOC_LITERAL(4, 65, 7), // "setSize"
QT_MOC_LITERAL(5, 73, 8), // "setAngle"
QT_MOC_LITERAL(6, 82, 9), // "setOffset"
QT_MOC_LITERAL(7, 92, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(8, 116, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(9, 142, 45), // "mHorizontalAnchorComboBox_cur..."
QT_MOC_LITERAL(10, 188, 5), // "index"
QT_MOC_LITERAL(11, 194, 43) // "mVerticalAnchorComboBox_curre..."

    },
    "QgsFilledMarkerSymbolLayerWidget\0"
    "updateAssistantSymbol\0\0setShape\0setSize\0"
    "setAngle\0setOffset\0mSizeUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mHorizontalAnchorComboBox_currentIndexChanged\0"
    "index\0mVerticalAnchorComboBox_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFilledMarkerSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void QgsFilledMarkerSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFilledMarkerSymbolLayerWidget *_t = static_cast<QgsFilledMarkerSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAssistantSymbol(); break;
        case 1: _t->setShape(); break;
        case 2: _t->setSize(); break;
        case 3: _t->setAngle(); break;
        case 4: _t->setOffset(); break;
        case 5: _t->mSizeUnitWidget_changed(); break;
        case 6: _t->mOffsetUnitWidget_changed(); break;
        case 7: _t->mHorizontalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mVerticalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFilledMarkerSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsFilledMarkerSymbolLayerWidget.data,
      qt_meta_data_QgsFilledMarkerSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFilledMarkerSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFilledMarkerSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFilledMarkerSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsFilledMarkerSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_QgsGradientFillSymbolLayerWidget_t {
    QByteArrayData data[16];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGradientFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGradientFillSymbolLayerWidget_t qt_meta_stringdata_QgsGradientFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsGradientFillSymbolLayerWidget"
QT_MOC_LITERAL(1, 33, 8), // "setColor"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "color"
QT_MOC_LITERAL(4, 49, 9), // "setColor2"
QT_MOC_LITERAL(5, 59, 14), // "applyColorRamp"
QT_MOC_LITERAL(6, 74, 15), // "setGradientType"
QT_MOC_LITERAL(7, 90, 5), // "index"
QT_MOC_LITERAL(8, 96, 17), // "setCoordinateMode"
QT_MOC_LITERAL(9, 114, 17), // "setGradientSpread"
QT_MOC_LITERAL(10, 132, 13), // "offsetChanged"
QT_MOC_LITERAL(11, 146, 21), // "referencePointChanged"
QT_MOC_LITERAL(12, 168, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(13, 194, 16), // "colorModeChanged"
QT_MOC_LITERAL(14, 211, 23), // "mSpinAngle_valueChanged"
QT_MOC_LITERAL(15, 235, 5) // "value"

    },
    "QgsGradientFillSymbolLayerWidget\0"
    "setColor\0\0color\0setColor2\0applyColorRamp\0"
    "setGradientType\0index\0setCoordinateMode\0"
    "setGradientSpread\0offsetChanged\0"
    "referencePointChanged\0mOffsetUnitWidget_changed\0"
    "colorModeChanged\0mSpinAngle_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGradientFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    1,   72,    2, 0x0a /* Public */,
       5,    0,   75,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       8,    1,   79,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,

       0        // eod
};

void QgsGradientFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGradientFillSymbolLayerWidget *_t = static_cast<QgsGradientFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setColor2((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->applyColorRamp(); break;
        case 3: _t->setGradientType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setCoordinateMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setGradientSpread((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->offsetChanged(); break;
        case 7: _t->referencePointChanged(); break;
        case 8: _t->mOffsetUnitWidget_changed(); break;
        case 9: _t->colorModeChanged(); break;
        case 10: _t->mSpinAngle_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsGradientFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsGradientFillSymbolLayerWidget.data,
      qt_meta_data_QgsGradientFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGradientFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGradientFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGradientFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsGradientFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_QgsShapeburstFillSymbolLayerWidget_t {
    QByteArrayData data[16];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsShapeburstFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsShapeburstFillSymbolLayerWidget_t qt_meta_stringdata_QgsShapeburstFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QgsShapeburstFillSymbolLayerW..."
QT_MOC_LITERAL(1, 35, 8), // "setColor"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "color"
QT_MOC_LITERAL(4, 51, 9), // "setColor2"
QT_MOC_LITERAL(5, 61, 16), // "colorModeChanged"
QT_MOC_LITERAL(6, 78, 28), // "mSpinBlurRadius_valueChanged"
QT_MOC_LITERAL(7, 107, 5), // "value"
QT_MOC_LITERAL(8, 113, 29), // "mSpinMaxDistance_valueChanged"
QT_MOC_LITERAL(9, 143, 27), // "mDistanceUnitWidget_changed"
QT_MOC_LITERAL(10, 171, 27), // "mRadioUseWholeShape_toggled"
QT_MOC_LITERAL(11, 199, 14), // "applyColorRamp"
QT_MOC_LITERAL(12, 214, 13), // "offsetChanged"
QT_MOC_LITERAL(13, 228, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(14, 254, 33), // "mIgnoreRingsCheckBox_stateCha..."
QT_MOC_LITERAL(15, 288, 5) // "state"

    },
    "QgsShapeburstFillSymbolLayerWidget\0"
    "setColor\0\0color\0setColor2\0colorModeChanged\0"
    "mSpinBlurRadius_valueChanged\0value\0"
    "mSpinMaxDistance_valueChanged\0"
    "mDistanceUnitWidget_changed\0"
    "mRadioUseWholeShape_toggled\0applyColorRamp\0"
    "offsetChanged\0mOffsetUnitWidget_changed\0"
    "mIgnoreRingsCheckBox_stateChanged\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsShapeburstFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    1,   72,    2, 0x0a /* Public */,
       5,    0,   75,    2, 0x08 /* Private */,
       6,    1,   76,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void QgsShapeburstFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsShapeburstFillSymbolLayerWidget *_t = static_cast<QgsShapeburstFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setColor2((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->colorModeChanged(); break;
        case 3: _t->mSpinBlurRadius_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mSpinMaxDistance_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mDistanceUnitWidget_changed(); break;
        case 6: _t->mRadioUseWholeShape_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->applyColorRamp(); break;
        case 8: _t->offsetChanged(); break;
        case 9: _t->mOffsetUnitWidget_changed(); break;
        case 10: _t->mIgnoreRingsCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsShapeburstFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsShapeburstFillSymbolLayerWidget.data,
      qt_meta_data_QgsShapeburstFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsShapeburstFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsShapeburstFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsShapeburstFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsShapeburstFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_QgsMarkerLineSymbolLayerWidget_t {
    QByteArrayData data[13];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMarkerLineSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMarkerLineSymbolLayerWidget_t qt_meta_stringdata_QgsMarkerLineSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsMarkerLineSymbolLayerWidget"
QT_MOC_LITERAL(1, 31, 11), // "setInterval"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "val"
QT_MOC_LITERAL(4, 48, 18), // "setOffsetAlongLine"
QT_MOC_LITERAL(5, 67, 9), // "setRotate"
QT_MOC_LITERAL(6, 77, 9), // "setOffset"
QT_MOC_LITERAL(7, 87, 12), // "setPlacement"
QT_MOC_LITERAL(8, 100, 27), // "mIntervalUnitWidget_changed"
QT_MOC_LITERAL(9, 128, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(10, 154, 34), // "mOffsetAlongLineUnitWidget_ch..."
QT_MOC_LITERAL(11, 189, 23), // "averageAngleUnitChanged"
QT_MOC_LITERAL(12, 213, 15) // "setAverageAngle"

    },
    "QgsMarkerLineSymbolLayerWidget\0"
    "setInterval\0\0val\0setOffsetAlongLine\0"
    "setRotate\0setOffset\0setPlacement\0"
    "mIntervalUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mOffsetAlongLineUnitWidget_changed\0"
    "averageAngleUnitChanged\0setAverageAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMarkerLineSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       5,    0,   70,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QgsMarkerLineSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMarkerLineSymbolLayerWidget *_t = static_cast<QgsMarkerLineSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setOffsetAlongLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setRotate(); break;
        case 3: _t->setOffset(); break;
        case 4: _t->setPlacement(); break;
        case 5: _t->mIntervalUnitWidget_changed(); break;
        case 6: _t->mOffsetUnitWidget_changed(); break;
        case 7: _t->mOffsetAlongLineUnitWidget_changed(); break;
        case 8: _t->averageAngleUnitChanged(); break;
        case 9: _t->setAverageAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMarkerLineSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsMarkerLineSymbolLayerWidget.data,
      qt_meta_data_QgsMarkerLineSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMarkerLineSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMarkerLineSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMarkerLineSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsMarkerLineSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_QgsHashedLineSymbolLayerWidget_t {
    QByteArrayData data[16];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHashedLineSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHashedLineSymbolLayerWidget_t qt_meta_stringdata_QgsHashedLineSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsHashedLineSymbolLayerWidget"
QT_MOC_LITERAL(1, 31, 11), // "setInterval"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "val"
QT_MOC_LITERAL(4, 48, 18), // "setOffsetAlongLine"
QT_MOC_LITERAL(5, 67, 13), // "setHashLength"
QT_MOC_LITERAL(6, 81, 12), // "setHashAngle"
QT_MOC_LITERAL(7, 94, 9), // "setRotate"
QT_MOC_LITERAL(8, 104, 9), // "setOffset"
QT_MOC_LITERAL(9, 114, 12), // "setPlacement"
QT_MOC_LITERAL(10, 127, 27), // "mIntervalUnitWidget_changed"
QT_MOC_LITERAL(11, 155, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(12, 181, 34), // "mOffsetAlongLineUnitWidget_ch..."
QT_MOC_LITERAL(13, 216, 27), // "hashLengthUnitWidgetChanged"
QT_MOC_LITERAL(14, 244, 23), // "averageAngleUnitChanged"
QT_MOC_LITERAL(15, 268, 15) // "setAverageAngle"

    },
    "QgsHashedLineSymbolLayerWidget\0"
    "setInterval\0\0val\0setOffsetAlongLine\0"
    "setHashLength\0setHashAngle\0setRotate\0"
    "setOffset\0setPlacement\0"
    "mIntervalUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mOffsetAlongLineUnitWidget_changed\0"
    "hashLengthUnitWidgetChanged\0"
    "averageAngleUnitChanged\0setAverageAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHashedLineSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QgsHashedLineSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHashedLineSymbolLayerWidget *_t = static_cast<QgsHashedLineSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setOffsetAlongLine((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setHashLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setHashAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setRotate(); break;
        case 5: _t->setOffset(); break;
        case 6: _t->setPlacement(); break;
        case 7: _t->mIntervalUnitWidget_changed(); break;
        case 8: _t->mOffsetUnitWidget_changed(); break;
        case 9: _t->mOffsetAlongLineUnitWidget_changed(); break;
        case 10: _t->hashLengthUnitWidgetChanged(); break;
        case 11: _t->averageAngleUnitChanged(); break;
        case 12: _t->setAverageAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsHashedLineSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsHashedLineSymbolLayerWidget.data,
      qt_meta_data_QgsHashedLineSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHashedLineSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHashedLineSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHashedLineSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsHashedLineSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_QgsSvgMarkerSymbolLayerWidget_t {
    QByteArrayData data[24];
    char stringdata0[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSvgMarkerSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSvgMarkerSymbolLayerWidget_t qt_meta_stringdata_QgsSvgMarkerSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsSvgMarkerSymbolLayerWidget"
QT_MOC_LITERAL(1, 30, 10), // "setSvgPath"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "name"
QT_MOC_LITERAL(4, 47, 16), // "svgSourceChanged"
QT_MOC_LITERAL(5, 64, 4), // "text"
QT_MOC_LITERAL(6, 69, 31), // "mChangeColorButton_colorChanged"
QT_MOC_LITERAL(7, 101, 5), // "color"
QT_MOC_LITERAL(8, 107, 37), // "mChangeStrokeColorButton_colo..."
QT_MOC_LITERAL(9, 145, 32), // "mStrokeWidthSpinBox_valueChanged"
QT_MOC_LITERAL(10, 178, 1), // "d"
QT_MOC_LITERAL(11, 180, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(12, 204, 30), // "mStrokeWidthUnitWidget_changed"
QT_MOC_LITERAL(13, 235, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(14, 261, 45), // "mHorizontalAnchorComboBox_cur..."
QT_MOC_LITERAL(15, 307, 5), // "index"
QT_MOC_LITERAL(16, 313, 43), // "mVerticalAnchorComboBox_curre..."
QT_MOC_LITERAL(17, 357, 8), // "setWidth"
QT_MOC_LITERAL(18, 366, 9), // "setHeight"
QT_MOC_LITERAL(19, 376, 22), // "lockAspectRatioChanged"
QT_MOC_LITERAL(20, 399, 6), // "locked"
QT_MOC_LITERAL(21, 406, 8), // "setAngle"
QT_MOC_LITERAL(22, 415, 9), // "setOffset"
QT_MOC_LITERAL(23, 425, 21) // "updateAssistantSymbol"

    },
    "QgsSvgMarkerSymbolLayerWidget\0setSvgPath\0"
    "\0name\0svgSourceChanged\0text\0"
    "mChangeColorButton_colorChanged\0color\0"
    "mChangeStrokeColorButton_colorChanged\0"
    "mStrokeWidthSpinBox_valueChanged\0d\0"
    "mSizeUnitWidget_changed\0"
    "mStrokeWidthUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mHorizontalAnchorComboBox_currentIndexChanged\0"
    "index\0mVerticalAnchorComboBox_currentIndexChanged\0"
    "setWidth\0setHeight\0lockAspectRatioChanged\0"
    "locked\0setAngle\0setOffset\0"
    "updateAssistantSymbol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSvgMarkerSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    1,   97,    2, 0x08 /* Private */,
       6,    1,  100,    2, 0x08 /* Private */,
       8,    1,  103,    2, 0x08 /* Private */,
       9,    1,  106,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    1,  112,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,
      19,    1,  120,    2, 0x08 /* Private */,
      21,    0,  123,    2, 0x08 /* Private */,
      22,    0,  124,    2, 0x08 /* Private */,
      23,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSvgMarkerSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSvgMarkerSymbolLayerWidget *_t = static_cast<QgsSvgMarkerSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSvgPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->svgSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mChangeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->mChangeStrokeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->mStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mSizeUnitWidget_changed(); break;
        case 6: _t->mStrokeWidthUnitWidget_changed(); break;
        case 7: _t->mOffsetUnitWidget_changed(); break;
        case 8: _t->mHorizontalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->mVerticalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setWidth(); break;
        case 11: _t->setHeight(); break;
        case 12: _t->lockAspectRatioChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setAngle(); break;
        case 14: _t->setOffset(); break;
        case 15: _t->updateAssistantSymbol(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSvgMarkerSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsSvgMarkerSymbolLayerWidget.data,
      qt_meta_data_QgsSvgMarkerSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSvgMarkerSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSvgMarkerSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSvgMarkerSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsSvgMarkerSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_QgsRasterMarkerSymbolLayerWidget_t {
    QByteArrayData data[18];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterMarkerSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterMarkerSymbolLayerWidget_t qt_meta_stringdata_QgsRasterMarkerSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsRasterMarkerSymbolLayerWidget"
QT_MOC_LITERAL(1, 33, 18), // "imageSourceChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "text"
QT_MOC_LITERAL(4, 58, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(5, 82, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(6, 108, 45), // "mHorizontalAnchorComboBox_cur..."
QT_MOC_LITERAL(7, 154, 5), // "index"
QT_MOC_LITERAL(8, 160, 43), // "mVerticalAnchorComboBox_curre..."
QT_MOC_LITERAL(9, 204, 8), // "setWidth"
QT_MOC_LITERAL(10, 213, 9), // "setHeight"
QT_MOC_LITERAL(11, 223, 18), // "setLockAspectRatio"
QT_MOC_LITERAL(12, 242, 6), // "locked"
QT_MOC_LITERAL(13, 249, 8), // "setAngle"
QT_MOC_LITERAL(14, 258, 9), // "setOffset"
QT_MOC_LITERAL(15, 268, 10), // "setOpacity"
QT_MOC_LITERAL(16, 279, 5), // "value"
QT_MOC_LITERAL(17, 285, 18) // "updatePreviewImage"

    },
    "QgsRasterMarkerSymbolLayerWidget\0"
    "imageSourceChanged\0\0text\0"
    "mSizeUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mHorizontalAnchorComboBox_currentIndexChanged\0"
    "index\0mVerticalAnchorComboBox_currentIndexChanged\0"
    "setWidth\0setHeight\0setLockAspectRatio\0"
    "locked\0setAngle\0setOffset\0setOpacity\0"
    "value\0updatePreviewImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterMarkerSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       8,    1,   82,    2, 0x08 /* Private */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void,

       0        // eod
};

void QgsRasterMarkerSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRasterMarkerSymbolLayerWidget *_t = static_cast<QgsRasterMarkerSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->mSizeUnitWidget_changed(); break;
        case 2: _t->mOffsetUnitWidget_changed(); break;
        case 3: _t->mHorizontalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mVerticalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setWidth(); break;
        case 6: _t->setHeight(); break;
        case 7: _t->setLockAspectRatio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setAngle(); break;
        case 9: _t->setOffset(); break;
        case 10: _t->setOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->updatePreviewImage(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRasterMarkerSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsRasterMarkerSymbolLayerWidget.data,
      qt_meta_data_QgsRasterMarkerSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRasterMarkerSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterMarkerSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterMarkerSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsRasterMarkerSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_QgsRasterFillSymbolLayerWidget_t {
    QByteArrayData data[14];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterFillSymbolLayerWidget_t qt_meta_stringdata_QgsRasterFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsRasterFillSymbolLayerWidget"
QT_MOC_LITERAL(1, 31, 18), // "imageSourceChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "text"
QT_MOC_LITERAL(4, 56, 17), // "setCoordinateMode"
QT_MOC_LITERAL(5, 74, 5), // "index"
QT_MOC_LITERAL(6, 80, 14), // "opacityChanged"
QT_MOC_LITERAL(7, 95, 5), // "value"
QT_MOC_LITERAL(8, 101, 13), // "offsetChanged"
QT_MOC_LITERAL(9, 115, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(10, 141, 29), // "mRotationSpinBox_valueChanged"
QT_MOC_LITERAL(11, 171, 1), // "d"
QT_MOC_LITERAL(12, 173, 24), // "mWidthUnitWidget_changed"
QT_MOC_LITERAL(13, 198, 26) // "mWidthSpinBox_valueChanged"

    },
    "QgsRasterFillSymbolLayerWidget\0"
    "imageSourceChanged\0\0text\0setCoordinateMode\0"
    "index\0opacityChanged\0value\0offsetChanged\0"
    "mOffsetUnitWidget_changed\0"
    "mRotationSpinBox_valueChanged\0d\0"
    "mWidthUnitWidget_changed\0"
    "mWidthSpinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   11,

       0        // eod
};

void QgsRasterFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRasterFillSymbolLayerWidget *_t = static_cast<QgsRasterFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCoordinateMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->offsetChanged(); break;
        case 4: _t->mOffsetUnitWidget_changed(); break;
        case 5: _t->mRotationSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->mWidthUnitWidget_changed(); break;
        case 7: _t->mWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRasterFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsRasterFillSymbolLayerWidget.data,
      qt_meta_data_QgsRasterFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRasterFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsRasterFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_QgsSVGFillSymbolLayerWidget_t {
    QByteArrayData data[15];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSVGFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSVGFillSymbolLayerWidget_t qt_meta_stringdata_QgsSVGFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsSVGFillSymbolLayerWidget"
QT_MOC_LITERAL(1, 28, 33), // "mTextureWidthSpinBox_valueCha..."
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 1), // "d"
QT_MOC_LITERAL(4, 65, 16), // "svgSourceChanged"
QT_MOC_LITERAL(5, 82, 4), // "text"
QT_MOC_LITERAL(6, 87, 7), // "setFile"
QT_MOC_LITERAL(7, 95, 4), // "name"
QT_MOC_LITERAL(8, 100, 29), // "mRotationSpinBox_valueChanged"
QT_MOC_LITERAL(9, 130, 31), // "mChangeColorButton_colorChanged"
QT_MOC_LITERAL(10, 162, 5), // "color"
QT_MOC_LITERAL(11, 168, 37), // "mChangeStrokeColorButton_colo..."
QT_MOC_LITERAL(12, 206, 32), // "mStrokeWidthSpinBox_valueChanged"
QT_MOC_LITERAL(13, 239, 31), // "mTextureWidthUnitWidget_changed"
QT_MOC_LITERAL(14, 271, 33) // "mSvgStrokeWidthUnitWidget_cha..."

    },
    "QgsSVGFillSymbolLayerWidget\0"
    "mTextureWidthSpinBox_valueChanged\0\0d\0"
    "svgSourceChanged\0text\0setFile\0name\0"
    "mRotationSpinBox_valueChanged\0"
    "mChangeColorButton_colorChanged\0color\0"
    "mChangeStrokeColorButton_colorChanged\0"
    "mStrokeWidthSpinBox_valueChanged\0"
    "mTextureWidthUnitWidget_changed\0"
    "mSvgStrokeWidthUnitWidget_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSVGFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSVGFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSVGFillSymbolLayerWidget *_t = static_cast<QgsSVGFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mTextureWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->svgSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mRotationSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mChangeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->mChangeStrokeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->mStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->mTextureWidthUnitWidget_changed(); break;
        case 8: _t->mSvgStrokeWidthUnitWidget_changed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSVGFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsSVGFillSymbolLayerWidget.data,
      qt_meta_data_QgsSVGFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSVGFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSVGFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSVGFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsSVGFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLinePatternFillSymbolLayerWidget_t {
    QByteArrayData data[8];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLinePatternFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLinePatternFillSymbolLayerWidget_t qt_meta_stringdata_QgsLinePatternFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QgsLinePatternFillSymbolLayer..."
QT_MOC_LITERAL(1, 36, 26), // "mAngleSpinBox_valueChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 1), // "d"
QT_MOC_LITERAL(4, 66, 29), // "mDistanceSpinBox_valueChanged"
QT_MOC_LITERAL(5, 96, 27), // "mOffsetSpinBox_valueChanged"
QT_MOC_LITERAL(6, 124, 27), // "mDistanceUnitWidget_changed"
QT_MOC_LITERAL(7, 152, 25) // "mOffsetUnitWidget_changed"

    },
    "QgsLinePatternFillSymbolLayerWidget\0"
    "mAngleSpinBox_valueChanged\0\0d\0"
    "mDistanceSpinBox_valueChanged\0"
    "mOffsetSpinBox_valueChanged\0"
    "mDistanceUnitWidget_changed\0"
    "mOffsetUnitWidget_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLinePatternFillSymbolLayerWidget[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLinePatternFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLinePatternFillSymbolLayerWidget *_t = static_cast<QgsLinePatternFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mAngleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->mDistanceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mOffsetSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->mDistanceUnitWidget_changed(); break;
        case 4: _t->mOffsetUnitWidget_changed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLinePatternFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsLinePatternFillSymbolLayerWidget.data,
      qt_meta_data_QgsLinePatternFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLinePatternFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLinePatternFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLinePatternFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsLinePatternFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsPointPatternFillSymbolLayerWidget_t {
    QByteArrayData data[15];
    char stringdata0[504];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPointPatternFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPointPatternFillSymbolLayerWidget_t qt_meta_stringdata_QgsPointPatternFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsPointPatternFillSymbolLaye..."
QT_MOC_LITERAL(1, 37, 39), // "mHorizontalDistanceSpinBox_va..."
QT_MOC_LITERAL(2, 77, 0), // ""
QT_MOC_LITERAL(3, 78, 1), // "d"
QT_MOC_LITERAL(4, 80, 37), // "mVerticalDistanceSpinBox_valu..."
QT_MOC_LITERAL(5, 118, 43), // "mHorizontalDisplacementSpinBo..."
QT_MOC_LITERAL(6, 162, 41), // "mVerticalDisplacementSpinBox_..."
QT_MOC_LITERAL(7, 204, 37), // "mHorizontalOffsetSpinBox_valu..."
QT_MOC_LITERAL(8, 242, 35), // "mVerticalOffsetSpinBox_valueC..."
QT_MOC_LITERAL(9, 278, 37), // "mHorizontalDistanceUnitWidget..."
QT_MOC_LITERAL(10, 316, 35), // "mVerticalDistanceUnitWidget_c..."
QT_MOC_LITERAL(11, 352, 41), // "mHorizontalDisplacementUnitWi..."
QT_MOC_LITERAL(12, 394, 39), // "mVerticalDisplacementUnitWidg..."
QT_MOC_LITERAL(13, 434, 35), // "mHorizontalOffsetUnitWidget_c..."
QT_MOC_LITERAL(14, 470, 33) // "mVerticalOffsetUnitWidget_cha..."

    },
    "QgsPointPatternFillSymbolLayerWidget\0"
    "mHorizontalDistanceSpinBox_valueChanged\0"
    "\0d\0mVerticalDistanceSpinBox_valueChanged\0"
    "mHorizontalDisplacementSpinBox_valueChanged\0"
    "mVerticalDisplacementSpinBox_valueChanged\0"
    "mHorizontalOffsetSpinBox_valueChanged\0"
    "mVerticalOffsetSpinBox_valueChanged\0"
    "mHorizontalDistanceUnitWidget_changed\0"
    "mVerticalDistanceUnitWidget_changed\0"
    "mHorizontalDisplacementUnitWidget_changed\0"
    "mVerticalDisplacementUnitWidget_changed\0"
    "mHorizontalOffsetUnitWidget_changed\0"
    "mVerticalOffsetUnitWidget_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPointPatternFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       5,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       7,    1,   86,    2, 0x08 /* Private */,
       8,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPointPatternFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPointPatternFillSymbolLayerWidget *_t = static_cast<QgsPointPatternFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mHorizontalDistanceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->mVerticalDistanceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mHorizontalDisplacementSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->mVerticalDisplacementSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mHorizontalOffsetSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mVerticalOffsetSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->mHorizontalDistanceUnitWidget_changed(); break;
        case 7: _t->mVerticalDistanceUnitWidget_changed(); break;
        case 8: _t->mHorizontalDisplacementUnitWidget_changed(); break;
        case 9: _t->mVerticalDisplacementUnitWidget_changed(); break;
        case 10: _t->mHorizontalOffsetUnitWidget_changed(); break;
        case 11: _t->mVerticalOffsetUnitWidget_changed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsPointPatternFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsPointPatternFillSymbolLayerWidget.data,
      qt_meta_data_QgsPointPatternFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPointPatternFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPointPatternFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointPatternFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsPointPatternFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_QgsRandomMarkerFillSymbolLayerWidget_t {
    QByteArrayData data[8];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRandomMarkerFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRandomMarkerFillSymbolLayerWidget_t qt_meta_stringdata_QgsRandomMarkerFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsRandomMarkerFillSymbolLaye..."
QT_MOC_LITERAL(1, 37, 18), // "countMethodChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 12), // "countChanged"
QT_MOC_LITERAL(4, 70, 1), // "d"
QT_MOC_LITERAL(5, 72, 18), // "densityAreaChanged"
QT_MOC_LITERAL(6, 91, 22), // "densityAreaUnitChanged"
QT_MOC_LITERAL(7, 114, 11) // "seedChanged"

    },
    "QgsRandomMarkerFillSymbolLayerWidget\0"
    "countMethodChanged\0\0countChanged\0d\0"
    "densityAreaChanged\0densityAreaUnitChanged\0"
    "seedChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRandomMarkerFillSymbolLayerWidget[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QgsRandomMarkerFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRandomMarkerFillSymbolLayerWidget *_t = static_cast<QgsRandomMarkerFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->densityAreaChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->densityAreaUnitChanged(); break;
        case 4: _t->seedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRandomMarkerFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsRandomMarkerFillSymbolLayerWidget.data,
      qt_meta_data_QgsRandomMarkerFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRandomMarkerFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRandomMarkerFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRandomMarkerFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsRandomMarkerFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsFontMarkerSymbolLayerWidget_t {
    QByteArrayData data[30];
    char stringdata0[500];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFontMarkerSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFontMarkerSymbolLayerWidget_t qt_meta_stringdata_QgsFontMarkerSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsFontMarkerSymbolLayerWidget"
QT_MOC_LITERAL(1, 31, 13), // "setFontFamily"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "font"
QT_MOC_LITERAL(4, 51, 8), // "setColor"
QT_MOC_LITERAL(5, 60, 5), // "color"
QT_MOC_LITERAL(6, 66, 14), // "setColorStroke"
QT_MOC_LITERAL(7, 81, 7), // "setSize"
QT_MOC_LITERAL(8, 89, 4), // "size"
QT_MOC_LITERAL(9, 94, 8), // "setAngle"
QT_MOC_LITERAL(10, 103, 5), // "angle"
QT_MOC_LITERAL(11, 109, 12), // "setCharacter"
QT_MOC_LITERAL(12, 122, 3), // "chr"
QT_MOC_LITERAL(13, 126, 20), // "setCharacterFromText"
QT_MOC_LITERAL(14, 147, 4), // "text"
QT_MOC_LITERAL(15, 152, 12), // "setFontStyle"
QT_MOC_LITERAL(16, 165, 5), // "style"
QT_MOC_LITERAL(17, 171, 9), // "setOffset"
QT_MOC_LITERAL(18, 181, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(19, 205, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(20, 231, 30), // "mStrokeWidthUnitWidget_changed"
QT_MOC_LITERAL(21, 262, 32), // "mStrokeWidthSpinBox_valueChanged"
QT_MOC_LITERAL(22, 295, 1), // "d"
QT_MOC_LITERAL(23, 297, 25), // "populateFontStyleComboBox"
QT_MOC_LITERAL(24, 323, 38), // "mFontStyleComboBox_currentInd..."
QT_MOC_LITERAL(25, 362, 5), // "index"
QT_MOC_LITERAL(26, 368, 45), // "mHorizontalAnchorComboBox_cur..."
QT_MOC_LITERAL(27, 414, 43), // "mVerticalAnchorComboBox_curre..."
QT_MOC_LITERAL(28, 458, 19), // "penJoinStyleChanged"
QT_MOC_LITERAL(29, 478, 21) // "updateAssistantSymbol"

    },
    "QgsFontMarkerSymbolLayerWidget\0"
    "setFontFamily\0\0font\0setColor\0color\0"
    "setColorStroke\0setSize\0size\0setAngle\0"
    "angle\0setCharacter\0chr\0setCharacterFromText\0"
    "text\0setFontStyle\0style\0setOffset\0"
    "mSizeUnitWidget_changed\0"
    "mOffsetUnitWidget_changed\0"
    "mStrokeWidthUnitWidget_changed\0"
    "mStrokeWidthSpinBox_valueChanged\0d\0"
    "populateFontStyleComboBox\0"
    "mFontStyleComboBox_currentIndexChanged\0"
    "index\0mHorizontalAnchorComboBox_currentIndexChanged\0"
    "mVerticalAnchorComboBox_currentIndexChanged\0"
    "penJoinStyleChanged\0updateAssistantSymbol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFontMarkerSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a /* Public */,
       4,    1,  112,    2, 0x0a /* Public */,
       6,    1,  115,    2, 0x0a /* Public */,
       7,    1,  118,    2, 0x0a /* Public */,
       9,    1,  121,    2, 0x0a /* Public */,
      11,    1,  124,    2, 0x0a /* Public */,
      13,    1,  127,    2, 0x0a /* Public */,
      15,    1,  130,    2, 0x08 /* Private */,
      17,    0,  133,    2, 0x08 /* Private */,
      18,    0,  134,    2, 0x08 /* Private */,
      19,    0,  135,    2, 0x08 /* Private */,
      20,    0,  136,    2, 0x08 /* Private */,
      21,    1,  137,    2, 0x08 /* Private */,
      23,    0,  140,    2, 0x08 /* Private */,
      24,    1,  141,    2, 0x08 /* Private */,
      26,    1,  144,    2, 0x08 /* Private */,
      27,    1,  147,    2, 0x08 /* Private */,
      28,    0,  150,    2, 0x08 /* Private */,
      29,    0,  151,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::QChar,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsFontMarkerSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFontMarkerSymbolLayerWidget *_t = static_cast<QgsFontMarkerSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFontFamily((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setColorStroke((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setCharacter((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 6: _t->setCharacterFromText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setFontStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setOffset(); break;
        case 9: _t->mSizeUnitWidget_changed(); break;
        case 10: _t->mOffsetUnitWidget_changed(); break;
        case 11: _t->mStrokeWidthUnitWidget_changed(); break;
        case 12: _t->mStrokeWidthSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->populateFontStyleComboBox(); break;
        case 14: _t->mFontStyleComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->mHorizontalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->mVerticalAnchorComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->penJoinStyleChanged(); break;
        case 18: _t->updateAssistantSymbol(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFontMarkerSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsFontMarkerSymbolLayerWidget.data,
      qt_meta_data_QgsFontMarkerSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFontMarkerSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFontMarkerSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFontMarkerSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsFontMarkerSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
struct qt_meta_stringdata_QgsCentroidFillSymbolLayerWidget_t {
    QByteArrayData data[7];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCentroidFillSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCentroidFillSymbolLayerWidget_t qt_meta_stringdata_QgsCentroidFillSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsCentroidFillSymbolLayerWidget"
QT_MOC_LITERAL(1, 33, 32), // "mDrawInsideCheckBox_stateChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 5), // "state"
QT_MOC_LITERAL(4, 73, 34), // "mDrawAllPartsCheckBox_stateCh..."
QT_MOC_LITERAL(5, 108, 32), // "mClipPointsCheckBox_stateChanged"
QT_MOC_LITERAL(6, 141, 43) // "mClipOnCurrentPartOnlyCheckBo..."

    },
    "QgsCentroidFillSymbolLayerWidget\0"
    "mDrawInsideCheckBox_stateChanged\0\0"
    "state\0mDrawAllPartsCheckBox_stateChanged\0"
    "mClipPointsCheckBox_stateChanged\0"
    "mClipOnCurrentPartOnlyCheckBox_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCentroidFillSymbolLayerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QgsCentroidFillSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCentroidFillSymbolLayerWidget *_t = static_cast<QgsCentroidFillSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mDrawInsideCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mDrawAllPartsCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mClipPointsCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mClipOnCurrentPartOnlyCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsCentroidFillSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsCentroidFillSymbolLayerWidget.data,
      qt_meta_data_QgsCentroidFillSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCentroidFillSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCentroidFillSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCentroidFillSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsCentroidFillSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QgsGeometryGeneratorSymbolLayerWidget_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryGeneratorSymbolLayerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryGeneratorSymbolLayerWidget_t qt_meta_stringdata_QgsGeometryGeneratorSymbolLayerWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QgsGeometryGeneratorSymbolLay..."
QT_MOC_LITERAL(1, 38, 16), // "updateExpression"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 6), // "string"
QT_MOC_LITERAL(4, 63, 16) // "updateSymbolType"

    },
    "QgsGeometryGeneratorSymbolLayerWidget\0"
    "updateExpression\0\0string\0updateSymbolType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryGeneratorSymbolLayerWidget[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QgsGeometryGeneratorSymbolLayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryGeneratorSymbolLayerWidget *_t = static_cast<QgsGeometryGeneratorSymbolLayerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateSymbolType(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsGeometryGeneratorSymbolLayerWidget::staticMetaObject = {
    { &QgsSymbolLayerWidget::staticMetaObject, qt_meta_stringdata_QgsGeometryGeneratorSymbolLayerWidget.data,
      qt_meta_data_QgsGeometryGeneratorSymbolLayerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGeometryGeneratorSymbolLayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryGeneratorSymbolLayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryGeneratorSymbolLayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSymbolLayerWidget::qt_metacast(_clname);
}

int QgsGeometryGeneratorSymbolLayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSymbolLayerWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
