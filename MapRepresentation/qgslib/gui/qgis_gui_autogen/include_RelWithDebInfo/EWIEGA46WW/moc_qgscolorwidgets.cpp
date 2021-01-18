/****************************************************************************
** Meta object code from reading C++ file 'qgscolorwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgscolorwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscolorwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsColorWidget_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorWidget_t qt_meta_stringdata_QgsColorWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsColorWidget"
QT_MOC_LITERAL(1, 15, 12), // "colorChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "color"
QT_MOC_LITERAL(4, 35, 7), // "hovered"
QT_MOC_LITERAL(5, 43, 8), // "setColor"
QT_MOC_LITERAL(6, 52, 11), // "emitSignals"
QT_MOC_LITERAL(7, 64, 12), // "setComponent"
QT_MOC_LITERAL(8, 77, 30), // "QgsColorWidget::ColorComponent"
QT_MOC_LITERAL(9, 108, 9), // "component"
QT_MOC_LITERAL(10, 118, 17), // "setComponentValue"
QT_MOC_LITERAL(11, 136, 5) // "value"

    },
    "QgsColorWidget\0colorChanged\0\0color\0"
    "hovered\0setColor\0emitSignals\0setComponent\0"
    "QgsColorWidget::ColorComponent\0component\0"
    "setComponentValue\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   48,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::Bool,    3,    6,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void QgsColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorWidget *_t = static_cast<QgsColorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->hovered(); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->setComponent((*reinterpret_cast< QgsColorWidget::ColorComponent(*)>(_a[1]))); break;
        case 5: _t->setComponentValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsColorWidget::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsColorWidget::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsColorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsColorWidget::hovered)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsColorWidget.data,
      qt_meta_data_QgsColorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsColorWidget::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsColorWidget::hovered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QgsColorWidgetAction_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorWidgetAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorWidgetAction_t qt_meta_stringdata_QgsColorWidgetAction = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsColorWidgetAction"
QT_MOC_LITERAL(1, 21, 12), // "colorChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "color"
QT_MOC_LITERAL(4, 41, 7), // "onHover"
QT_MOC_LITERAL(5, 49, 8) // "setColor"

    },
    "QgsColorWidgetAction\0colorChanged\0\0"
    "color\0onHover\0setColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorWidgetAction[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void QgsColorWidgetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorWidgetAction *_t = static_cast<QgsColorWidgetAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->onHover(); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsColorWidgetAction::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsColorWidgetAction::colorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorWidgetAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_QgsColorWidgetAction.data,
      qt_meta_data_QgsColorWidgetAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorWidgetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorWidgetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorWidgetAction.stringdata0))
        return static_cast<void*>(this);
    return QWidgetAction::qt_metacast(_clname);
}

int QgsColorWidgetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
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
void QgsColorWidgetAction::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsColorWheel_t {
    QByteArrayData data[5];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorWheel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorWheel_t qt_meta_stringdata_QgsColorWheel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsColorWheel"
QT_MOC_LITERAL(1, 14, 8), // "setColor"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "color"
QT_MOC_LITERAL(4, 30, 11) // "emitSignals"

    },
    "QgsColorWheel\0setColor\0\0color\0emitSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorWheel[] = {

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
       1,    2,   24,    2, 0x0a /* Public */,
       1,    1,   29,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void QgsColorWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorWheel *_t = static_cast<QgsColorWheel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorWheel::staticMetaObject = {
    { &QgsColorWidget::staticMetaObject, qt_meta_stringdata_QgsColorWheel.data,
      qt_meta_data_QgsColorWheel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorWheel.stringdata0))
        return static_cast<void*>(this);
    return QgsColorWidget::qt_metacast(_clname);
}

int QgsColorWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsColorWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsColorBox_t {
    QByteArrayData data[5];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorBox_t qt_meta_stringdata_QgsColorBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsColorBox"
QT_MOC_LITERAL(1, 12, 8), // "setColor"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "color"
QT_MOC_LITERAL(4, 28, 11) // "emitSignals"

    },
    "QgsColorBox\0setColor\0\0color\0emitSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorBox[] = {

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
       1,    2,   24,    2, 0x0a /* Public */,
       1,    1,   29,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void QgsColorBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorBox *_t = static_cast<QgsColorBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorBox::staticMetaObject = {
    { &QgsColorWidget::staticMetaObject, qt_meta_stringdata_QgsColorBox.data,
      qt_meta_data_QgsColorBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorBox.stringdata0))
        return static_cast<void*>(this);
    return QgsColorWidget::qt_metacast(_clname);
}

int QgsColorBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsColorWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsColorRampWidget_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorRampWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorRampWidget_t qt_meta_stringdata_QgsColorRampWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsColorRampWidget"
QT_MOC_LITERAL(1, 19, 12), // "valueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5) // "value"

    },
    "QgsColorRampWidget\0valueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorRampWidget[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QgsColorRampWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorRampWidget *_t = static_cast<QgsColorRampWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsColorRampWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsColorRampWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorRampWidget::staticMetaObject = {
    { &QgsColorWidget::staticMetaObject, qt_meta_stringdata_QgsColorRampWidget.data,
      qt_meta_data_QgsColorRampWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorRampWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorRampWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorRampWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsColorWidget::qt_metacast(_clname);
}

int QgsColorRampWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsColorWidget::qt_metacall(_c, _id, _a);
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
void QgsColorRampWidget::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsColorSliderWidget_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorSliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorSliderWidget_t qt_meta_stringdata_QgsColorSliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsColorSliderWidget"
QT_MOC_LITERAL(1, 21, 16), // "rampColorChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "color"
QT_MOC_LITERAL(4, 45, 11), // "spinChanged"
QT_MOC_LITERAL(5, 57, 5), // "value"
QT_MOC_LITERAL(6, 63, 11) // "rampChanged"

    },
    "QgsColorSliderWidget\0rampColorChanged\0"
    "\0color\0spinChanged\0value\0rampChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorSliderWidget[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QgsColorSliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorSliderWidget *_t = static_cast<QgsColorSliderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rampColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->spinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->rampChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorSliderWidget::staticMetaObject = {
    { &QgsColorWidget::staticMetaObject, qt_meta_stringdata_QgsColorSliderWidget.data,
      qt_meta_data_QgsColorSliderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorSliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorSliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorSliderWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsColorWidget::qt_metacast(_clname);
}

int QgsColorSliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsColorWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsColorTextWidget_t {
    QByteArrayData data[9];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorTextWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorTextWidget_t qt_meta_stringdata_QgsColorTextWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsColorTextWidget"
QT_MOC_LITERAL(1, 19, 11), // "textChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "showMenu"
QT_MOC_LITERAL(4, 41, 15), // "ColorTextFormat"
QT_MOC_LITERAL(5, 57, 6), // "HexRgb"
QT_MOC_LITERAL(6, 64, 7), // "HexRgbA"
QT_MOC_LITERAL(7, 72, 3), // "Rgb"
QT_MOC_LITERAL(8, 76, 4) // "Rgba"

    },
    "QgsColorTextWidget\0textChanged\0\0"
    "showMenu\0ColorTextFormat\0HexRgb\0HexRgbA\0"
    "Rgb\0Rgba"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorTextWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       4, 0x0,    4,   30,

 // enum data: key, value
       5, uint(QgsColorTextWidget::HexRgb),
       6, uint(QgsColorTextWidget::HexRgbA),
       7, uint(QgsColorTextWidget::Rgb),
       8, uint(QgsColorTextWidget::Rgba),

       0        // eod
};

void QgsColorTextWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorTextWidget *_t = static_cast<QgsColorTextWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->showMenu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsColorTextWidget::staticMetaObject = {
    { &QgsColorWidget::staticMetaObject, qt_meta_stringdata_QgsColorTextWidget.data,
      qt_meta_data_QgsColorTextWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorTextWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorTextWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorTextWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsColorWidget::qt_metacast(_clname);
}

int QgsColorTextWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsColorWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsColorPreviewWidget_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorPreviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorPreviewWidget_t qt_meta_stringdata_QgsColorPreviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsColorPreviewWidget"
QT_MOC_LITERAL(1, 22, 9), // "setColor2"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5) // "color"

    },
    "QgsColorPreviewWidget\0setColor2\0\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorPreviewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void QgsColorPreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorPreviewWidget *_t = static_cast<QgsColorPreviewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColor2((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorPreviewWidget::staticMetaObject = {
    { &QgsColorWidget::staticMetaObject, qt_meta_stringdata_QgsColorPreviewWidget.data,
      qt_meta_data_QgsColorPreviewWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorPreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorPreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorPreviewWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsColorWidget::qt_metacast(_clname);
}

int QgsColorPreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsColorWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
