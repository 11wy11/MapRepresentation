/****************************************************************************
** Meta object code from reading C++ file 'qgsdatasourceselectdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsdatasourceselectdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdatasourceselectdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDataSourceSelectWidget_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataSourceSelectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataSourceSelectWidget_t qt_meta_stringdata_QgsDataSourceSelectWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsDataSourceSelectWidget"
QT_MOC_LITERAL(1, 26, 17), // "validationChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "isValid"
QT_MOC_LITERAL(4, 53, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 70, 13), // "itemTriggered"
QT_MOC_LITERAL(6, 84, 21), // "QgsMimeDataUtils::Uri"
QT_MOC_LITERAL(7, 106, 3), // "uri"
QT_MOC_LITERAL(8, 110, 15), // "onLayerSelected"
QT_MOC_LITERAL(9, 126, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 138, 5), // "index"
QT_MOC_LITERAL(11, 144, 17) // "itemDoubleClicked"

    },
    "QgsDataSourceSelectWidget\0validationChanged\0"
    "\0isValid\0selectionChanged\0itemTriggered\0"
    "QgsMimeDataUtils::Uri\0uri\0onLayerSelected\0"
    "QModelIndex\0index\0itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataSourceSelectWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   46,    2, 0x08 /* Private */,
      11,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QgsDataSourceSelectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDataSourceSelectWidget *_t = static_cast<QgsDataSourceSelectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->itemTriggered((*reinterpret_cast< const QgsMimeDataUtils::Uri(*)>(_a[1]))); break;
        case 3: _t->onLayerSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsDataSourceSelectWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDataSourceSelectWidget::validationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsDataSourceSelectWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDataSourceSelectWidget::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsDataSourceSelectWidget::*)(const QgsMimeDataUtils::Uri & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDataSourceSelectWidget::itemTriggered)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsDataSourceSelectWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsDataSourceSelectWidget.data,
      qt_meta_data_QgsDataSourceSelectWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataSourceSelectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataSourceSelectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataSourceSelectWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsDataSourceSelectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QgsDataSourceSelectWidget::validationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsDataSourceSelectWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsDataSourceSelectWidget::itemTriggered(const QgsMimeDataUtils::Uri & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QgsDataSourceSelectDialog_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataSourceSelectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataSourceSelectDialog_t qt_meta_stringdata_QgsDataSourceSelectDialog = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsDataSourceSelectDialog"

    },
    "QgsDataSourceSelectDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataSourceSelectDialog[] = {

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

void QgsDataSourceSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsDataSourceSelectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsDataSourceSelectDialog.data,
      qt_meta_data_QgsDataSourceSelectDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDataSourceSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataSourceSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataSourceSelectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsDataSourceSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
