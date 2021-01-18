/****************************************************************************
** Meta object code from reading C++ file 'qgsfloatingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfloatingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfloatingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFloatingWidget_t {
    QByteArrayData data[23];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFloatingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFloatingWidget_t qt_meta_stringdata_QgsFloatingWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsFloatingWidget"
QT_MOC_LITERAL(1, 18, 19), // "anchorWidgetChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "QWidget*"
QT_MOC_LITERAL(4, 48, 6), // "widget"
QT_MOC_LITERAL(5, 55, 18), // "anchorPointChanged"
QT_MOC_LITERAL(6, 74, 30), // "QgsFloatingWidget::AnchorPoint"
QT_MOC_LITERAL(7, 105, 5), // "point"
QT_MOC_LITERAL(8, 111, 24), // "anchorWidgetPointChanged"
QT_MOC_LITERAL(9, 136, 20), // "onAnchorPointChanged"
QT_MOC_LITERAL(10, 157, 12), // "anchorWidget"
QT_MOC_LITERAL(11, 170, 11), // "anchorPoint"
QT_MOC_LITERAL(12, 182, 11), // "AnchorPoint"
QT_MOC_LITERAL(13, 194, 17), // "anchorWidgetPoint"
QT_MOC_LITERAL(14, 212, 7), // "TopLeft"
QT_MOC_LITERAL(15, 220, 9), // "TopMiddle"
QT_MOC_LITERAL(16, 230, 8), // "TopRight"
QT_MOC_LITERAL(17, 239, 10), // "MiddleLeft"
QT_MOC_LITERAL(18, 250, 6), // "Middle"
QT_MOC_LITERAL(19, 257, 11), // "MiddleRight"
QT_MOC_LITERAL(20, 269, 10), // "BottomLeft"
QT_MOC_LITERAL(21, 280, 12), // "BottomMiddle"
QT_MOC_LITERAL(22, 293, 11) // "BottomRight"

    },
    "QgsFloatingWidget\0anchorWidgetChanged\0"
    "\0QWidget*\0widget\0anchorPointChanged\0"
    "QgsFloatingWidget::AnchorPoint\0point\0"
    "anchorWidgetPointChanged\0onAnchorPointChanged\0"
    "anchorWidget\0anchorPoint\0AnchorPoint\0"
    "anchorWidgetPoint\0TopLeft\0TopMiddle\0"
    "TopRight\0MiddleLeft\0Middle\0MiddleRight\0"
    "BottomLeft\0BottomMiddle\0BottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFloatingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       8,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 3, 0x0049510b,
      11, 0x80000000 | 12, 0x0049510b,
      13, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      12, 0x0,    9,   60,

 // enum data: key, value
      14, uint(QgsFloatingWidget::TopLeft),
      15, uint(QgsFloatingWidget::TopMiddle),
      16, uint(QgsFloatingWidget::TopRight),
      17, uint(QgsFloatingWidget::MiddleLeft),
      18, uint(QgsFloatingWidget::Middle),
      19, uint(QgsFloatingWidget::MiddleRight),
      20, uint(QgsFloatingWidget::BottomLeft),
      21, uint(QgsFloatingWidget::BottomMiddle),
      22, uint(QgsFloatingWidget::BottomRight),

       0        // eod
};

void QgsFloatingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFloatingWidget *_t = static_cast<QgsFloatingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->anchorWidgetChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->anchorPointChanged((*reinterpret_cast< QgsFloatingWidget::AnchorPoint(*)>(_a[1]))); break;
        case 2: _t->anchorWidgetPointChanged((*reinterpret_cast< QgsFloatingWidget::AnchorPoint(*)>(_a[1]))); break;
        case 3: _t->onAnchorPointChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFloatingWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFloatingWidget::anchorWidgetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFloatingWidget::*)(QgsFloatingWidget::AnchorPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFloatingWidget::anchorPointChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsFloatingWidget::*)(QgsFloatingWidget::AnchorPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFloatingWidget::anchorWidgetPointChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFloatingWidget *_t = static_cast<QgsFloatingWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWidget**>(_v) = _t->anchorWidget(); break;
        case 1: *reinterpret_cast< AnchorPoint*>(_v) = _t->anchorPoint(); break;
        case 2: *reinterpret_cast< AnchorPoint*>(_v) = _t->anchorWidgetPoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFloatingWidget *_t = static_cast<QgsFloatingWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnchorWidget(*reinterpret_cast< QWidget**>(_v)); break;
        case 1: _t->setAnchorPoint(*reinterpret_cast< AnchorPoint*>(_v)); break;
        case 2: _t->setAnchorWidgetPoint(*reinterpret_cast< AnchorPoint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsFloatingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsFloatingWidget.data,
      qt_meta_data_QgsFloatingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFloatingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFloatingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFloatingWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsFloatingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFloatingWidget::anchorWidgetChanged(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsFloatingWidget::anchorPointChanged(QgsFloatingWidget::AnchorPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsFloatingWidget::anchorWidgetPointChanged(QgsFloatingWidget::AnchorPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QgsFloatingWidgetEventFilter_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFloatingWidgetEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFloatingWidgetEventFilter_t qt_meta_stringdata_QgsFloatingWidgetEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsFloatingWidgetEventFilter"
QT_MOC_LITERAL(1, 29, 18), // "anchorPointChanged"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "QgsFloatingWidgetEventFilter\0"
    "anchorPointChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFloatingWidgetEventFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsFloatingWidgetEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFloatingWidgetEventFilter *_t = static_cast<QgsFloatingWidgetEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->anchorPointChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFloatingWidgetEventFilter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFloatingWidgetEventFilter::anchorPointChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsFloatingWidgetEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsFloatingWidgetEventFilter.data,
      qt_meta_data_QgsFloatingWidgetEventFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFloatingWidgetEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFloatingWidgetEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFloatingWidgetEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsFloatingWidgetEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsFloatingWidgetEventFilter::anchorPointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
