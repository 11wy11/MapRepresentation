/****************************************************************************
** Meta object code from reading C++ file 'qgsidentifymenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsidentifymenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsidentifymenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomActionRegistry_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomActionRegistry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomActionRegistry_t qt_meta_stringdata_CustomActionRegistry = {
    {
QT_MOC_LITERAL(0, 0, 20) // "CustomActionRegistry"

    },
    "CustomActionRegistry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomActionRegistry[] = {

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

void CustomActionRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CustomActionRegistry::staticMetaObject = {
    { &QgsMapLayerActionRegistry::staticMetaObject, qt_meta_stringdata_CustomActionRegistry.data,
      qt_meta_data_CustomActionRegistry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomActionRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomActionRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomActionRegistry.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerActionRegistry::qt_metacast(_clname);
}

int CustomActionRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerActionRegistry::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsIdentifyMenu_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsIdentifyMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsIdentifyMenu_t qt_meta_stringdata_QgsIdentifyMenu = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsIdentifyMenu"
QT_MOC_LITERAL(1, 16, 15), // "handleMenuHover"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "deleteRubberBands"
QT_MOC_LITERAL(4, 51, 14), // "layerDestroyed"
QT_MOC_LITERAL(5, 66, 21) // "triggerMapLayerAction"

    },
    "QgsIdentifyMenu\0handleMenuHover\0\0"
    "deleteRubberBands\0layerDestroyed\0"
    "triggerMapLayerAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsIdentifyMenu[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsIdentifyMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsIdentifyMenu *_t = static_cast<QgsIdentifyMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMenuHover(); break;
        case 1: _t->deleteRubberBands(); break;
        case 2: _t->layerDestroyed(); break;
        case 3: _t->triggerMapLayerAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsIdentifyMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_QgsIdentifyMenu.data,
      qt_meta_data_QgsIdentifyMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsIdentifyMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsIdentifyMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsIdentifyMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int QgsIdentifyMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
