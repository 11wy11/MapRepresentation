/****************************************************************************
** Meta object code from reading C++ file 'qgspointcloudattributecombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgspointcloudattributecombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspointcloudattributecombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPointCloudAttributeComboBox_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPointCloudAttributeComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPointCloudAttributeComboBox_t qt_meta_stringdata_QgsPointCloudAttributeComboBox = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsPointCloudAttributeComboBox"
QT_MOC_LITERAL(1, 31, 16), // "attributeChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "name"
QT_MOC_LITERAL(4, 54, 8), // "setLayer"
QT_MOC_LITERAL(5, 63, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(6, 76, 5), // "layer"
QT_MOC_LITERAL(7, 82, 12), // "setAttribute"
QT_MOC_LITERAL(8, 95, 12), // "indexChanged"
QT_MOC_LITERAL(9, 108, 1), // "i"
QT_MOC_LITERAL(10, 110, 7), // "filters"
QT_MOC_LITERAL(11, 118, 41), // "QgsPointCloudAttributeProxyMo..."
QT_MOC_LITERAL(12, 160, 23) // "allowEmptyAttributeName"

    },
    "QgsPointCloudAttributeComboBox\0"
    "attributeChanged\0\0name\0setLayer\0"
    "QgsMapLayer*\0layer\0setAttribute\0"
    "indexChanged\0i\0filters\0"
    "QgsPointCloudAttributeProxyModel::Filters\0"
    "allowEmptyAttributeName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPointCloudAttributeComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QgsPointCloudAttributeComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPointCloudAttributeComboBox *_t = static_cast<QgsPointCloudAttributeComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attributeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: _t->setAttribute((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsPointCloudAttributeComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPointCloudAttributeComboBox::attributeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsPointCloudAttributeComboBox *_t = static_cast<QgsPointCloudAttributeComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsPointCloudAttributeProxyModel::Filters*>(_v) = _t->filters(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->allowEmptyAttributeName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsPointCloudAttributeComboBox *_t = static_cast<QgsPointCloudAttributeComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilters(*reinterpret_cast< QgsPointCloudAttributeProxyModel::Filters*>(_v)); break;
        case 1: _t->setAllowEmptyAttributeName(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsPointCloudAttributeComboBox[] = {
        &QgsPointCloudAttributeProxyModel::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsPointCloudAttributeComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QgsPointCloudAttributeComboBox.data,
      qt_meta_data_QgsPointCloudAttributeComboBox,  qt_static_metacall, qt_meta_extradata_QgsPointCloudAttributeComboBox, nullptr}
};


const QMetaObject *QgsPointCloudAttributeComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPointCloudAttributeComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointCloudAttributeComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QgsPointCloudAttributeComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QgsPointCloudAttributeComboBox::attributeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
