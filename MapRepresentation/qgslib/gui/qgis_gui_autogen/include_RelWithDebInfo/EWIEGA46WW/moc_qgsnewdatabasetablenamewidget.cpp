/****************************************************************************
** Meta object code from reading C++ file 'qgsnewdatabasetablenamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsnewdatabasetablenamewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnewdatabasetablenamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsNewDatabaseTableNameWidget_t {
    QByteArrayData data[13];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNewDatabaseTableNameWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNewDatabaseTableNameWidget_t qt_meta_stringdata_QgsNewDatabaseTableNameWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsNewDatabaseTableNameWidget"
QT_MOC_LITERAL(1, 30, 17), // "validationChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 7), // "isValid"
QT_MOC_LITERAL(4, 57, 17), // "schemaNameChanged"
QT_MOC_LITERAL(5, 75, 10), // "schemaName"
QT_MOC_LITERAL(6, 86, 16), // "tableNameChanged"
QT_MOC_LITERAL(7, 103, 9), // "tableName"
QT_MOC_LITERAL(8, 113, 18), // "providerKeyChanged"
QT_MOC_LITERAL(9, 132, 11), // "providerKey"
QT_MOC_LITERAL(10, 144, 10), // "uriChanged"
QT_MOC_LITERAL(11, 155, 3), // "uri"
QT_MOC_LITERAL(12, 159, 8) // "accepted"

    },
    "QgsNewDatabaseTableNameWidget\0"
    "validationChanged\0\0isValid\0schemaNameChanged\0"
    "schemaName\0tableNameChanged\0tableName\0"
    "providerKeyChanged\0providerKey\0"
    "uriChanged\0uri\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNewDatabaseTableNameWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      10,    1,   56,    2, 0x06 /* Public */,
      12,    0,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void QgsNewDatabaseTableNameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsNewDatabaseTableNameWidget *_t = static_cast<QgsNewDatabaseTableNameWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->schemaNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->tableNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->providerKeyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->uriChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->accepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsNewDatabaseTableNameWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNewDatabaseTableNameWidget::validationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsNewDatabaseTableNameWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNewDatabaseTableNameWidget::schemaNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsNewDatabaseTableNameWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNewDatabaseTableNameWidget::tableNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsNewDatabaseTableNameWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNewDatabaseTableNameWidget::providerKeyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsNewDatabaseTableNameWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNewDatabaseTableNameWidget::uriChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsNewDatabaseTableNameWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNewDatabaseTableNameWidget::accepted)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsNewDatabaseTableNameWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsNewDatabaseTableNameWidget.data,
      qt_meta_data_QgsNewDatabaseTableNameWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNewDatabaseTableNameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNewDatabaseTableNameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNewDatabaseTableNameWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsNewDatabaseTableNameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
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
void QgsNewDatabaseTableNameWidget::validationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsNewDatabaseTableNameWidget::schemaNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsNewDatabaseTableNameWidget::tableNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsNewDatabaseTableNameWidget::providerKeyChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsNewDatabaseTableNameWidget::uriChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsNewDatabaseTableNameWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_QgsNewDatabaseTableNameDialog_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNewDatabaseTableNameDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNewDatabaseTableNameDialog_t qt_meta_stringdata_QgsNewDatabaseTableNameDialog = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QgsNewDatabaseTableNameDialog"

    },
    "QgsNewDatabaseTableNameDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNewDatabaseTableNameDialog[] = {

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

void QgsNewDatabaseTableNameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsNewDatabaseTableNameDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsNewDatabaseTableNameDialog.data,
      qt_meta_data_QgsNewDatabaseTableNameDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNewDatabaseTableNameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNewDatabaseTableNameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNewDatabaseTableNameDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsNewDatabaseTableNameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
