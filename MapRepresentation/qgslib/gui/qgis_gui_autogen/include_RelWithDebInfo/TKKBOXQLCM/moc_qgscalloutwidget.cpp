/****************************************************************************
** Meta object code from reading C++ file 'qgscalloutwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/callouts/qgscalloutwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscalloutwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCalloutWidget_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCalloutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCalloutWidget_t qt_meta_stringdata_QgsCalloutWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsCalloutWidget"
QT_MOC_LITERAL(1, 17, 7), // "changed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 25), // "updateDataDefinedProperty"
QT_MOC_LITERAL(4, 52, 20) // "createAuxiliaryField"

    },
    "QgsCalloutWidget\0changed\0\0"
    "updateDataDefinedProperty\0"
    "createAuxiliaryField"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCalloutWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsCalloutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCalloutWidget *_t = static_cast<QgsCalloutWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->updateDataDefinedProperty(); break;
        case 2: _t->createAuxiliaryField(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsCalloutWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCalloutWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCalloutWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsCalloutWidget.data,
      qt_meta_data_QgsCalloutWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCalloutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCalloutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCalloutWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsCalloutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsCalloutWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsSimpleLineCalloutWidget_t {
    QByteArrayData data[14];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimpleLineCalloutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimpleLineCalloutWidget_t qt_meta_stringdata_QgsSimpleLineCalloutWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsSimpleLineCalloutWidget"
QT_MOC_LITERAL(1, 27, 20), // "minimumLengthChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 30), // "minimumLengthUnitWidgetChanged"
QT_MOC_LITERAL(4, 80, 33), // "offsetFromAnchorUnitWidgetCha..."
QT_MOC_LITERAL(5, 114, 23), // "offsetFromAnchorChanged"
QT_MOC_LITERAL(6, 138, 32), // "offsetFromLabelUnitWidgetChanged"
QT_MOC_LITERAL(7, 171, 22), // "offsetFromLabelChanged"
QT_MOC_LITERAL(8, 194, 17), // "lineSymbolChanged"
QT_MOC_LITERAL(9, 212, 40), // "mAnchorPointComboBox_currentI..."
QT_MOC_LITERAL(10, 253, 5), // "index"
QT_MOC_LITERAL(11, 259, 45), // "mLabelAnchorPointComboBox_cur..."
QT_MOC_LITERAL(12, 305, 21), // "drawToAllPartsToggled"
QT_MOC_LITERAL(13, 327, 6) // "active"

    },
    "QgsSimpleLineCalloutWidget\0"
    "minimumLengthChanged\0\0"
    "minimumLengthUnitWidgetChanged\0"
    "offsetFromAnchorUnitWidgetChanged\0"
    "offsetFromAnchorChanged\0"
    "offsetFromLabelUnitWidgetChanged\0"
    "offsetFromLabelChanged\0lineSymbolChanged\0"
    "mAnchorPointComboBox_currentIndexChanged\0"
    "index\0mLabelAnchorPointComboBox_currentIndexChanged\0"
    "drawToAllPartsToggled\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimpleLineCalloutWidget[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void QgsSimpleLineCalloutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSimpleLineCalloutWidget *_t = static_cast<QgsSimpleLineCalloutWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minimumLengthChanged(); break;
        case 1: _t->minimumLengthUnitWidgetChanged(); break;
        case 2: _t->offsetFromAnchorUnitWidgetChanged(); break;
        case 3: _t->offsetFromAnchorChanged(); break;
        case 4: _t->offsetFromLabelUnitWidgetChanged(); break;
        case 5: _t->offsetFromLabelChanged(); break;
        case 6: _t->lineSymbolChanged(); break;
        case 7: _t->mAnchorPointComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mLabelAnchorPointComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->drawToAllPartsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSimpleLineCalloutWidget::staticMetaObject = {
    { &QgsCalloutWidget::staticMetaObject, qt_meta_stringdata_QgsSimpleLineCalloutWidget.data,
      qt_meta_data_QgsSimpleLineCalloutWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSimpleLineCalloutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimpleLineCalloutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimpleLineCalloutWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsCalloutWidget::qt_metacast(_clname);
}

int QgsSimpleLineCalloutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCalloutWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsManhattanLineCalloutWidget_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsManhattanLineCalloutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsManhattanLineCalloutWidget_t qt_meta_stringdata_QgsManhattanLineCalloutWidget = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QgsManhattanLineCalloutWidget"

    },
    "QgsManhattanLineCalloutWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsManhattanLineCalloutWidget[] = {

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

void QgsManhattanLineCalloutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsManhattanLineCalloutWidget::staticMetaObject = {
    { &QgsSimpleLineCalloutWidget::staticMetaObject, qt_meta_stringdata_QgsManhattanLineCalloutWidget.data,
      qt_meta_data_QgsManhattanLineCalloutWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsManhattanLineCalloutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsManhattanLineCalloutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsManhattanLineCalloutWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsSimpleLineCalloutWidget::qt_metacast(_clname);
}

int QgsManhattanLineCalloutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSimpleLineCalloutWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
