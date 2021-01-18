/****************************************************************************
** Meta object code from reading C++ file 'qgsvectortilebasiclabelingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vectortile/qgsvectortilebasiclabelingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectortilebasiclabelingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorTileBasicLabelingWidget_t {
    QByteArrayData data[12];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileBasicLabelingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileBasicLabelingWidget_t qt_meta_stringdata_QgsVectorTileBasicLabelingWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsVectorTileBasicLabelingWidget"
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
QT_MOC_LITERAL(11, 141, 24) // "updateLabelingFromWidget"

    },
    "QgsVectorTileBasicLabelingWidget\0apply\0"
    "\0addStyle\0QgsWkbTypes::GeometryType\0"
    "geomType\0editStyle\0editStyleAtIndex\0"
    "QModelIndex\0index\0removeStyle\0"
    "updateLabelingFromWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileBasicLabelingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
      10,    0,   52,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsVectorTileBasicLabelingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorTileBasicLabelingWidget *_t = static_cast<QgsVectorTileBasicLabelingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->addStyle((*reinterpret_cast< QgsWkbTypes::GeometryType(*)>(_a[1]))); break;
        case 2: _t->editStyle(); break;
        case 3: _t->editStyleAtIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->removeStyle(); break;
        case 5: _t->updateLabelingFromWidget(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileBasicLabelingWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsVectorTileBasicLabelingWidget.data,
      qt_meta_data_QgsVectorTileBasicLabelingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileBasicLabelingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileBasicLabelingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileBasicLabelingWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsVectorTileBasicLabelingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsLabelingPanelWidget_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLabelingPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLabelingPanelWidget_t qt_meta_stringdata_QgsLabelingPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsLabelingPanelWidget"

    },
    "QgsLabelingPanelWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLabelingPanelWidget[] = {

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

void QgsLabelingPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLabelingPanelWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLabelingPanelWidget.data,
      qt_meta_data_QgsLabelingPanelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLabelingPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLabelingPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLabelingPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLabelingPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsVectorTileBasicLabelingListModel_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileBasicLabelingListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileBasicLabelingListModel_t qt_meta_stringdata_QgsVectorTileBasicLabelingListModel = {
    {
QT_MOC_LITERAL(0, 0, 35) // "QgsVectorTileBasicLabelingLis..."

    },
    "QgsVectorTileBasicLabelingListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileBasicLabelingListModel[] = {

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

void QgsVectorTileBasicLabelingListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileBasicLabelingListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QgsVectorTileBasicLabelingListModel.data,
      qt_meta_data_QgsVectorTileBasicLabelingListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileBasicLabelingListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileBasicLabelingListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileBasicLabelingListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QgsVectorTileBasicLabelingListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsVectorTileBasicLabelingProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileBasicLabelingProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileBasicLabelingProxyModel_t qt_meta_stringdata_QgsVectorTileBasicLabelingProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 36) // "QgsVectorTileBasicLabelingPro..."

    },
    "QgsVectorTileBasicLabelingProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileBasicLabelingProxyModel[] = {

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

void QgsVectorTileBasicLabelingProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileBasicLabelingProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsVectorTileBasicLabelingProxyModel.data,
      qt_meta_data_QgsVectorTileBasicLabelingProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileBasicLabelingProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileBasicLabelingProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileBasicLabelingProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsVectorTileBasicLabelingProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
