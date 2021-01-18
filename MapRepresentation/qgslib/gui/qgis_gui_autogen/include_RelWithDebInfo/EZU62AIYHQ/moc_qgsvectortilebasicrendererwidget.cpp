/****************************************************************************
** Meta object code from reading C++ file 'qgsvectortilebasicrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vectortile/qgsvectortilebasicrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectortilebasicrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorTileBasicRendererWidget_t {
    QByteArrayData data[15];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileBasicRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileBasicRendererWidget_t qt_meta_stringdata_QgsVectorTileBasicRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsVectorTileBasicRendererWidget"
QT_MOC_LITERAL(1, 33, 5), // "apply"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "addStyle"
QT_MOC_LITERAL(4, 49, 25), // "QgsWkbTypes::GeometryType"
QT_MOC_LITERAL(5, 75, 8), // "geomType"
QT_MOC_LITERAL(6, 84, 9), // "editStyle"
QT_MOC_LITERAL(7, 94, 16), // "editStyleAtIndex"
QT_MOC_LITERAL(8, 111, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 123, 5), // "index"
QT_MOC_LITERAL(10, 129, 11), // "removeStyle"
QT_MOC_LITERAL(11, 141, 23), // "updateSymbolsFromWidget"
QT_MOC_LITERAL(12, 165, 21), // "cleanUpSymbolSelector"
QT_MOC_LITERAL(13, 187, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(14, 203, 9) // "container"

    },
    "QgsVectorTileBasicRendererWidget\0apply\0"
    "\0addStyle\0QgsWkbTypes::GeometryType\0"
    "geomType\0editStyle\0editStyleAtIndex\0"
    "QModelIndex\0index\0removeStyle\0"
    "updateSymbolsFromWidget\0cleanUpSymbolSelector\0"
    "QgsPanelWidget*\0container"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileBasicRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,
      11,    0,   58,    2, 0x08 /* Private */,
      12,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void QgsVectorTileBasicRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorTileBasicRendererWidget *_t = static_cast<QgsVectorTileBasicRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->addStyle((*reinterpret_cast< QgsWkbTypes::GeometryType(*)>(_a[1]))); break;
        case 2: _t->editStyle(); break;
        case 3: _t->editStyleAtIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->removeStyle(); break;
        case 5: _t->updateSymbolsFromWidget(); break;
        case 6: _t->cleanUpSymbolSelector((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileBasicRendererWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsVectorTileBasicRendererWidget.data,
      qt_meta_data_QgsVectorTileBasicRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileBasicRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileBasicRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileBasicRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsVectorTileBasicRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_QgsVectorTileBasicRendererListModel_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileBasicRendererListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileBasicRendererListModel_t qt_meta_stringdata_QgsVectorTileBasicRendererListModel = {
    {
QT_MOC_LITERAL(0, 0, 35) // "QgsVectorTileBasicRendererLis..."

    },
    "QgsVectorTileBasicRendererListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileBasicRendererListModel[] = {

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

void QgsVectorTileBasicRendererListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileBasicRendererListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QgsVectorTileBasicRendererListModel.data,
      qt_meta_data_QgsVectorTileBasicRendererListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileBasicRendererListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileBasicRendererListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileBasicRendererListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QgsVectorTileBasicRendererListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsVectorTileBasicRendererProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileBasicRendererProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileBasicRendererProxyModel_t qt_meta_stringdata_QgsVectorTileBasicRendererProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 36) // "QgsVectorTileBasicRendererPro..."

    },
    "QgsVectorTileBasicRendererProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileBasicRendererProxyModel[] = {

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

void QgsVectorTileBasicRendererProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileBasicRendererProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsVectorTileBasicRendererProxyModel.data,
      qt_meta_data_QgsVectorTileBasicRendererProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileBasicRendererProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileBasicRendererProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileBasicRendererProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsVectorTileBasicRendererProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
