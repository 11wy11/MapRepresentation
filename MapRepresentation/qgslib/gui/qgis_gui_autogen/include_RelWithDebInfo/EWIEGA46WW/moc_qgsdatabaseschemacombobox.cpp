/****************************************************************************
** Meta object code from reading C++ file 'qgsdatabaseschemacombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsdatabaseschemacombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdatabaseschemacombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDatabaseSchemaComboBox_t {
    QByteArrayData data[12];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDatabaseSchemaComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDatabaseSchemaComboBox_t qt_meta_stringdata_QgsDatabaseSchemaComboBox = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsDatabaseSchemaComboBox"
QT_MOC_LITERAL(1, 26, 13), // "schemaChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "schema"
QT_MOC_LITERAL(4, 48, 9), // "setSchema"
QT_MOC_LITERAL(5, 58, 17), // "setConnectionName"
QT_MOC_LITERAL(6, 76, 10), // "connection"
QT_MOC_LITERAL(7, 87, 8), // "provider"
QT_MOC_LITERAL(8, 96, 14), // "refreshSchemas"
QT_MOC_LITERAL(9, 111, 12), // "indexChanged"
QT_MOC_LITERAL(10, 124, 1), // "i"
QT_MOC_LITERAL(11, 126, 11) // "rowsChanged"

    },
    "QgsDatabaseSchemaComboBox\0schemaChanged\0"
    "\0schema\0setSchema\0setConnectionName\0"
    "connection\0provider\0refreshSchemas\0"
    "indexChanged\0i\0rowsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDatabaseSchemaComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       5,    2,   55,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void QgsDatabaseSchemaComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDatabaseSchemaComboBox *_t = static_cast<QgsDatabaseSchemaComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->schemaChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSchema((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setConnectionName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setConnectionName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->refreshSchemas(); break;
        case 5: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->rowsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsDatabaseSchemaComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDatabaseSchemaComboBox::schemaChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsDatabaseSchemaComboBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsDatabaseSchemaComboBox.data,
      qt_meta_data_QgsDatabaseSchemaComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDatabaseSchemaComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDatabaseSchemaComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDatabaseSchemaComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsDatabaseSchemaComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsDatabaseSchemaComboBox::schemaChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
