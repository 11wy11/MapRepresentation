/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layertree/qgslayertreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeProxyModel_t qt_meta_stringdata_QgsLayerTreeProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsLayerTreeProxyModel"

    },
    "QgsLayerTreeProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeProxyModel[] = {

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

void QgsLayerTreeProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLayerTreeProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsLayerTreeProxyModel.data,
      qt_meta_data_QgsLayerTreeProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsLayerTreeProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayerTreeView_t {
    QByteArrayData data[39];
    char stringdata0[509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeView_t qt_meta_stringdata_QgsLayerTreeView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLayerTreeView"
QT_MOC_LITERAL(1, 17, 19), // "currentLayerChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(4, 51, 5), // "layer"
QT_MOC_LITERAL(5, 57, 21), // "refreshLayerSymbology"
QT_MOC_LITERAL(6, 79, 7), // "layerId"
QT_MOC_LITERAL(7, 87, 14), // "expandAllNodes"
QT_MOC_LITERAL(8, 102, 16), // "collapseAllNodes"
QT_MOC_LITERAL(9, 119, 17), // "setLayerMarkWidth"
QT_MOC_LITERAL(10, 137, 5), // "width"
QT_MOC_LITERAL(11, 143, 13), // "setMessageBar"
QT_MOC_LITERAL(12, 157, 14), // "QgsMessageBar*"
QT_MOC_LITERAL(13, 172, 10), // "messageBar"
QT_MOC_LITERAL(14, 183, 20), // "setShowPrivateLayers"
QT_MOC_LITERAL(15, 204, 11), // "showPrivate"
QT_MOC_LITERAL(16, 216, 17), // "showPrivateLayers"
QT_MOC_LITERAL(17, 234, 17), // "modelRowsInserted"
QT_MOC_LITERAL(18, 252, 11), // "QModelIndex"
QT_MOC_LITERAL(19, 264, 5), // "index"
QT_MOC_LITERAL(20, 270, 5), // "start"
QT_MOC_LITERAL(21, 276, 3), // "end"
QT_MOC_LITERAL(22, 280, 16), // "modelRowsRemoved"
QT_MOC_LITERAL(23, 297, 25), // "updateExpandedStateToNode"
QT_MOC_LITERAL(24, 323, 16), // "onCurrentChanged"
QT_MOC_LITERAL(25, 340, 17), // "onExpandedChanged"
QT_MOC_LITERAL(26, 358, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(27, 376, 4), // "node"
QT_MOC_LITERAL(28, 381, 8), // "expanded"
QT_MOC_LITERAL(29, 390, 12), // "onModelReset"
QT_MOC_LITERAL(30, 403, 23), // "onCustomPropertyChanged"
QT_MOC_LITERAL(31, 427, 3), // "key"
QT_MOC_LITERAL(32, 431, 18), // "onHorizontalScroll"
QT_MOC_LITERAL(33, 450, 5), // "value"
QT_MOC_LITERAL(34, 456, 13), // "onDataChanged"
QT_MOC_LITERAL(35, 470, 7), // "topLeft"
QT_MOC_LITERAL(36, 478, 11), // "bottomRight"
QT_MOC_LITERAL(37, 490, 12), // "QVector<int>"
QT_MOC_LITERAL(38, 503, 5) // "roles"

    },
    "QgsLayerTreeView\0currentLayerChanged\0"
    "\0QgsMapLayer*\0layer\0refreshLayerSymbology\0"
    "layerId\0expandAllNodes\0collapseAllNodes\0"
    "setLayerMarkWidth\0width\0setMessageBar\0"
    "QgsMessageBar*\0messageBar\0"
    "setShowPrivateLayers\0showPrivate\0"
    "showPrivateLayers\0modelRowsInserted\0"
    "QModelIndex\0index\0start\0end\0"
    "modelRowsRemoved\0updateExpandedStateToNode\0"
    "onCurrentChanged\0onExpandedChanged\0"
    "QgsLayerTreeNode*\0node\0expanded\0"
    "onModelReset\0onCustomPropertyChanged\0"
    "key\0onHorizontalScroll\0value\0onDataChanged\0"
    "topLeft\0bottomRight\0QVector<int>\0roles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  102,    2, 0x0a /* Public */,
       7,    0,  105,    2, 0x0a /* Public */,
       8,    0,  106,    2, 0x0a /* Public */,
       9,    1,  107,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x0a /* Public */,
      14,    1,  113,    2, 0x0a /* Public */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    3,  117,    2, 0x09 /* Protected */,
      22,    0,  124,    2, 0x09 /* Protected */,
      23,    1,  125,    2, 0x09 /* Protected */,
      24,    0,  128,    2, 0x09 /* Protected */,
      25,    2,  129,    2, 0x09 /* Protected */,
      29,    0,  134,    2, 0x09 /* Protected */,
      30,    2,  135,    2, 0x08 /* Private */,
      32,    1,  140,    2, 0x08 /* Private */,
      34,    3,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int, QMetaType::Int,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Bool,   27,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, QMetaType::QString,   27,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, 0x80000000 | 37,   35,   36,   38,

       0        // eod
};

void QgsLayerTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeView *_t = static_cast<QgsLayerTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->refreshLayerSymbology((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->expandAllNodes(); break;
        case 3: _t->collapseAllNodes(); break;
        case 4: _t->setLayerMarkWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setMessageBar((*reinterpret_cast< QgsMessageBar*(*)>(_a[1]))); break;
        case 6: _t->setShowPrivateLayers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->showPrivateLayers();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->modelRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->modelRowsRemoved(); break;
        case 10: _t->updateExpandedStateToNode((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->onCurrentChanged(); break;
        case 12: _t->onExpandedChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->onModelReset(); break;
        case 14: _t->onCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->onHorizontalScroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLayerTreeView::*)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeView::currentLayerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayerTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsLayerTreeView.data,
      qt_meta_data_QgsLayerTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsLayerTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeView::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
