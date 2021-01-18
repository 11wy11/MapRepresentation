/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayercombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmaplayercombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayercombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapLayerComboBox_t {
    QByteArrayData data[14];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerComboBox_t qt_meta_stringdata_QgsMapLayerComboBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsMapLayerComboBox"
QT_MOC_LITERAL(1, 20, 12), // "layerChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 47, 5), // "layer"
QT_MOC_LITERAL(5, 53, 8), // "setLayer"
QT_MOC_LITERAL(6, 62, 12), // "indexChanged"
QT_MOC_LITERAL(7, 75, 1), // "i"
QT_MOC_LITERAL(8, 77, 11), // "rowsChanged"
QT_MOC_LITERAL(9, 89, 7), // "filters"
QT_MOC_LITERAL(10, 97, 30), // "QgsMapLayerProxyModel::Filters"
QT_MOC_LITERAL(11, 128, 15), // "allowEmptyLayer"
QT_MOC_LITERAL(12, 144, 7), // "showCrs"
QT_MOC_LITERAL(13, 152, 17) // "excludedProviders"

    },
    "QgsMapLayerComboBox\0layerChanged\0\0"
    "QgsMapLayer*\0layer\0setLayer\0indexChanged\0"
    "i\0rowsChanged\0filters\0"
    "QgsMapLayerProxyModel::Filters\0"
    "allowEmptyLayer\0showCrs\0excludedProviders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x09 /* Protected */,
       8,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void QgsMapLayerComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerComboBox *_t = static_cast<QgsMapLayerComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->setLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->rowsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMapLayerComboBox::*)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapLayerComboBox::layerChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsMapLayerComboBox *_t = static_cast<QgsMapLayerComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsMapLayerProxyModel::Filters*>(_v) = _t->filters(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->allowEmptyLayer(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showCrs(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->excludedProviders(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsMapLayerComboBox *_t = static_cast<QgsMapLayerComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFilters(*reinterpret_cast< QgsMapLayerProxyModel::Filters*>(_v)); break;
        case 1: _t->setAllowEmptyLayer(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowCrs(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setExcludedProviders(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsMapLayerComboBox[] = {
        &QgsMapLayerProxyModel::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsMapLayerComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QgsMapLayerComboBox.data,
      qt_meta_data_QgsMapLayerComboBox,  qt_static_metacall, qt_meta_extradata_QgsMapLayerComboBox, nullptr}
};


const QMetaObject *QgsMapLayerComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QgsMapLayerComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsMapLayerComboBox::layerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
