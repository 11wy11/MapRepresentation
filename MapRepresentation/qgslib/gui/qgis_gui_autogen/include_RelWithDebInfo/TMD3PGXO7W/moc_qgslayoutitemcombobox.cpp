/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutitemcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutitemcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutitemcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutItemComboBox_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutItemComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutItemComboBox_t qt_meta_stringdata_QgsLayoutItemComboBox = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayoutItemComboBox"
QT_MOC_LITERAL(1, 22, 11), // "itemChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(4, 50, 4), // "item"
QT_MOC_LITERAL(5, 55, 7), // "setItem"
QT_MOC_LITERAL(6, 63, 20), // "const QgsLayoutItem*"
QT_MOC_LITERAL(7, 84, 12), // "indexChanged"
QT_MOC_LITERAL(8, 97, 1), // "i"
QT_MOC_LITERAL(9, 99, 11) // "rowsChanged"

    },
    "QgsLayoutItemComboBox\0itemChanged\0\0"
    "QgsLayoutItem*\0item\0setItem\0"
    "const QgsLayoutItem*\0indexChanged\0i\0"
    "rowsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutItemComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x08 /* Private */,
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutItemComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutItemComboBox *_t = static_cast<QgsLayoutItemComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 1: _t->setItem((*reinterpret_cast< const QgsLayoutItem*(*)>(_a[1]))); break;
        case 2: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->rowsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayoutItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLayoutItemComboBox::*)(QgsLayoutItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutItemComboBox::itemChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutItemComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QgsLayoutItemComboBox.data,
      qt_meta_data_QgsLayoutItemComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutItemComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutItemComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutItemComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QgsLayoutItemComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QgsLayoutItemComboBox::itemChanged(QgsLayoutItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
