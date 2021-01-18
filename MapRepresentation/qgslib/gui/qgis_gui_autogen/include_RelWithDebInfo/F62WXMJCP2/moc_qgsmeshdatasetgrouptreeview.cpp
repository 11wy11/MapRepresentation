/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshdatasetgrouptreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/mesh/qgsmeshdatasetgrouptreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshdatasetgrouptreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshDatasetGroupSaveMenu_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDatasetGroupSaveMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDatasetGroupSaveMenu_t qt_meta_stringdata_QgsMeshDatasetGroupSaveMenu = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsMeshDatasetGroupSaveMenu"
QT_MOC_LITERAL(1, 28, 17), // "datasetGroupSaved"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 3) // "uri"

    },
    "QgsMeshDatasetGroupSaveMenu\0"
    "datasetGroupSaved\0\0uri"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDatasetGroupSaveMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QgsMeshDatasetGroupSaveMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshDatasetGroupSaveMenu *_t = static_cast<QgsMeshDatasetGroupSaveMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->datasetGroupSaved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMeshDatasetGroupSaveMenu::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshDatasetGroupSaveMenu::datasetGroupSaved)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshDatasetGroupSaveMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMeshDatasetGroupSaveMenu.data,
      qt_meta_data_QgsMeshDatasetGroupSaveMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDatasetGroupSaveMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDatasetGroupSaveMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDatasetGroupSaveMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsMeshDatasetGroupSaveMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsMeshDatasetGroupSaveMenu::datasetGroupSaved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsMeshDatasetGroupTreeModel_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDatasetGroupTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDatasetGroupTreeModel_t qt_meta_stringdata_QgsMeshDatasetGroupTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsMeshDatasetGroupTreeModel"

    },
    "QgsMeshDatasetGroupTreeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDatasetGroupTreeModel[] = {

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

void QgsMeshDatasetGroupTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshDatasetGroupTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsMeshDatasetGroupTreeModel.data,
      qt_meta_data_QgsMeshDatasetGroupTreeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDatasetGroupTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDatasetGroupTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDatasetGroupTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsMeshDatasetGroupTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMeshDatasetGroupTreeItemDelagate_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDatasetGroupTreeItemDelagate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDatasetGroupTreeItemDelagate_t qt_meta_stringdata_QgsMeshDatasetGroupTreeItemDelagate = {
    {
QT_MOC_LITERAL(0, 0, 35) // "QgsMeshDatasetGroupTreeItemDe..."

    },
    "QgsMeshDatasetGroupTreeItemDelagate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDatasetGroupTreeItemDelagate[] = {

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

void QgsMeshDatasetGroupTreeItemDelagate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshDatasetGroupTreeItemDelagate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QgsMeshDatasetGroupTreeItemDelagate.data,
      qt_meta_data_QgsMeshDatasetGroupTreeItemDelagate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDatasetGroupTreeItemDelagate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDatasetGroupTreeItemDelagate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDatasetGroupTreeItemDelagate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QgsMeshDatasetGroupTreeItemDelagate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsMeshDatasetGroupTreeView_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshDatasetGroupTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshDatasetGroupTreeView_t qt_meta_stringdata_QgsMeshDatasetGroupTreeView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsMeshDatasetGroupTreeView"
QT_MOC_LITERAL(1, 28, 5), // "apply"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "selectAllGroups"
QT_MOC_LITERAL(4, 51, 17), // "deselectAllGroups"
QT_MOC_LITERAL(5, 69, 17), // "removeCurrentItem"
QT_MOC_LITERAL(6, 87, 19), // "onDatasetGroupSaved"
QT_MOC_LITERAL(7, 107, 3) // "uri"

    },
    "QgsMeshDatasetGroupTreeView\0apply\0\0"
    "selectAllGroups\0deselectAllGroups\0"
    "removeCurrentItem\0onDatasetGroupSaved\0"
    "uri"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshDatasetGroupTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void QgsMeshDatasetGroupTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshDatasetGroupTreeView *_t = static_cast<QgsMeshDatasetGroupTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->selectAllGroups(); break;
        case 2: _t->deselectAllGroups(); break;
        case 3: _t->removeCurrentItem(); break;
        case 4: _t->onDatasetGroupSaved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMeshDatasetGroupTreeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshDatasetGroupTreeView::apply)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshDatasetGroupTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsMeshDatasetGroupTreeView.data,
      qt_meta_data_QgsMeshDatasetGroupTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshDatasetGroupTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshDatasetGroupTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshDatasetGroupTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsMeshDatasetGroupTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void QgsMeshDatasetGroupTreeView::apply()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsMeshActiveDatasetGroupTreeView_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshActiveDatasetGroupTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshActiveDatasetGroupTreeView_t qt_meta_stringdata_QgsMeshActiveDatasetGroupTreeView = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsMeshActiveDatasetGroupTree..."
QT_MOC_LITERAL(1, 34, 24), // "activeScalarGroupChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 10), // "groupIndex"
QT_MOC_LITERAL(4, 71, 24), // "activeVectorGroupChanged"
QT_MOC_LITERAL(5, 96, 20), // "setActiveScalarGroup"
QT_MOC_LITERAL(6, 117, 5), // "group"
QT_MOC_LITERAL(7, 123, 20) // "setActiveVectorGroup"

    },
    "QgsMeshActiveDatasetGroupTreeView\0"
    "activeScalarGroupChanged\0\0groupIndex\0"
    "activeVectorGroupChanged\0setActiveScalarGroup\0"
    "group\0setActiveVectorGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshActiveDatasetGroupTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void QgsMeshActiveDatasetGroupTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshActiveDatasetGroupTreeView *_t = static_cast<QgsMeshActiveDatasetGroupTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setActiveScalarGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setActiveVectorGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMeshActiveDatasetGroupTreeView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshActiveDatasetGroupTreeView::activeScalarGroupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsMeshActiveDatasetGroupTreeView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshActiveDatasetGroupTreeView::activeVectorGroupChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshActiveDatasetGroupTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsMeshActiveDatasetGroupTreeView.data,
      qt_meta_data_QgsMeshActiveDatasetGroupTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshActiveDatasetGroupTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshActiveDatasetGroupTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshActiveDatasetGroupTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsMeshActiveDatasetGroupTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QgsMeshActiveDatasetGroupTreeView::activeScalarGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMeshActiveDatasetGroupTreeView::activeVectorGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
