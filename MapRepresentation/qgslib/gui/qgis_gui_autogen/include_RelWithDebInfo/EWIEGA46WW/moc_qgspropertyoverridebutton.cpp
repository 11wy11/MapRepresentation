/****************************************************************************
** Meta object code from reading C++ file 'qgspropertyoverridebutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgspropertyoverridebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspropertyoverridebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPropertyOverrideButton_t {
    QByteArrayData data[16];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPropertyOverrideButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPropertyOverrideButton_t qt_meta_stringdata_QgsPropertyOverrideButton = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsPropertyOverrideButton"
QT_MOC_LITERAL(1, 26, 7), // "changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "activated"
QT_MOC_LITERAL(4, 45, 8), // "isActive"
QT_MOC_LITERAL(5, 54, 20), // "createAuxiliaryField"
QT_MOC_LITERAL(6, 75, 9), // "setActive"
QT_MOC_LITERAL(7, 85, 6), // "active"
QT_MOC_LITERAL(8, 92, 15), // "aboutToShowMenu"
QT_MOC_LITERAL(9, 108, 19), // "menuActionTriggered"
QT_MOC_LITERAL(10, 128, 8), // "QAction*"
QT_MOC_LITERAL(11, 137, 6), // "action"
QT_MOC_LITERAL(12, 144, 8), // "showHelp"
QT_MOC_LITERAL(13, 153, 20), // "updateSiblingWidgets"
QT_MOC_LITERAL(14, 174, 5), // "state"
QT_MOC_LITERAL(15, 180, 9) // "usageInfo"

    },
    "QgsPropertyOverrideButton\0changed\0\0"
    "activated\0isActive\0createAuxiliaryField\0"
    "setActive\0active\0aboutToShowMenu\0"
    "menuActionTriggered\0QAction*\0action\0"
    "showHelp\0updateSiblingWidgets\0state\0"
    "usageInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPropertyOverrideButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095103,
       7, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QgsPropertyOverrideButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPropertyOverrideButton *_t = static_cast<QgsPropertyOverrideButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->activated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->createAuxiliaryField(); break;
        case 3: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->aboutToShowMenu(); break;
        case 5: _t->menuActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->showHelp(); break;
        case 7: _t->updateSiblingWidgets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsPropertyOverrideButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPropertyOverrideButton::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsPropertyOverrideButton::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPropertyOverrideButton::activated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsPropertyOverrideButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPropertyOverrideButton::createAuxiliaryField)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsPropertyOverrideButton *_t = static_cast<QgsPropertyOverrideButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->usageInfo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsPropertyOverrideButton *_t = static_cast<QgsPropertyOverrideButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUsageInfo(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsPropertyOverrideButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsPropertyOverrideButton.data,
      qt_meta_data_QgsPropertyOverrideButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPropertyOverrideButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPropertyOverrideButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPropertyOverrideButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsPropertyOverrideButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
void QgsPropertyOverrideButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsPropertyOverrideButton::activated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsPropertyOverrideButton::createAuxiliaryField()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
