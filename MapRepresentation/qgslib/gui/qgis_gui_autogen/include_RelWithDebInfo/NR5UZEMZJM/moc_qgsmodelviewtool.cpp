/****************************************************************************
** Meta object code from reading C++ file 'qgsmodelviewtool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/models/qgsmodelviewtool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmodelviewtool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsModelViewTool_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelViewTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelViewTool_t qt_meta_stringdata_QgsModelViewTool = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsModelViewTool"
QT_MOC_LITERAL(1, 17, 9), // "activated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "deactivated"
QT_MOC_LITERAL(4, 40, 11), // "itemFocused"
QT_MOC_LITERAL(5, 52, 29), // "QgsModelComponentGraphicItem*"
QT_MOC_LITERAL(6, 82, 4) // "item"

    },
    "QgsModelViewTool\0activated\0\0deactivated\0"
    "itemFocused\0QgsModelComponentGraphicItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelViewTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QgsModelViewTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelViewTool *_t = static_cast<QgsModelViewTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->deactivated(); break;
        case 2: _t->itemFocused((*reinterpret_cast< QgsModelComponentGraphicItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsModelViewTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelViewTool::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsModelViewTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelViewTool::deactivated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsModelViewTool::*)(QgsModelComponentGraphicItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelViewTool::itemFocused)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsModelViewTool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsModelViewTool.data,
      qt_meta_data_QgsModelViewTool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelViewTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelViewTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelViewTool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsModelViewTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QgsModelViewTool::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsModelViewTool::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsModelViewTool::itemFocused(QgsModelComponentGraphicItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
