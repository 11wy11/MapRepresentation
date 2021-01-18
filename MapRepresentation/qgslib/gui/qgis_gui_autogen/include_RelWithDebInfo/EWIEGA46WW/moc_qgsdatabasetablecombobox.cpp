/****************************************************************************
** Meta object code from reading C++ file 'qgsdatabasetablecombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsdatabasetablecombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdatabasetablecombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDatabaseTableComboBox_t {
    QByteArrayData data[14];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDatabaseTableComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDatabaseTableComboBox_t qt_meta_stringdata_QgsDatabaseTableComboBox = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsDatabaseTableComboBox"
QT_MOC_LITERAL(1, 25, 12), // "tableChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "table"
QT_MOC_LITERAL(4, 45, 6), // "schema"
QT_MOC_LITERAL(5, 52, 8), // "setTable"
QT_MOC_LITERAL(6, 61, 17), // "setConnectionName"
QT_MOC_LITERAL(7, 79, 10), // "connection"
QT_MOC_LITERAL(8, 90, 8), // "provider"
QT_MOC_LITERAL(9, 99, 9), // "setSchema"
QT_MOC_LITERAL(10, 109, 13), // "refreshTables"
QT_MOC_LITERAL(11, 123, 12), // "indexChanged"
QT_MOC_LITERAL(12, 136, 1), // "i"
QT_MOC_LITERAL(13, 138, 11) // "rowsChanged"

    },
    "QgsDatabaseTableComboBox\0tableChanged\0"
    "\0table\0schema\0setTable\0setConnectionName\0"
    "connection\0provider\0setSchema\0"
    "refreshTables\0indexChanged\0i\0rowsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDatabaseTableComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       1,    1,   69,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   72,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x2a /* Public | MethodCloned */,
       6,    2,   80,    2, 0x0a /* Public */,
       6,    1,   85,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   88,    2, 0x0a /* Public */,
      10,    0,   91,    2, 0x0a /* Public */,
      11,    1,   92,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void QgsDatabaseTableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDatabaseTableComboBox *_t = static_cast<QgsDatabaseTableComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tableChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->tableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setTable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setConnectionName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->setConnectionName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setSchema((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->refreshTables(); break;
        case 8: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->rowsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsDatabaseTableComboBox::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDatabaseTableComboBox::tableChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsDatabaseTableComboBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsDatabaseTableComboBox.data,
      qt_meta_data_QgsDatabaseTableComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDatabaseTableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDatabaseTableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDatabaseTableComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsDatabaseTableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsDatabaseTableComboBox::tableChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
