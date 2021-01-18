/****************************************************************************
** Meta object code from reading C++ file 'qgstaskmanagerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgstaskmanagerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstaskmanagerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTaskManagerWidget_t {
    QByteArrayData data[8];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTaskManagerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTaskManagerWidget_t qt_meta_stringdata_QgsTaskManagerWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsTaskManagerWidget"
QT_MOC_LITERAL(1, 21, 17), // "modelRowsInserted"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 52, 5), // "index"
QT_MOC_LITERAL(5, 58, 5), // "start"
QT_MOC_LITERAL(6, 64, 3), // "end"
QT_MOC_LITERAL(7, 68, 7) // "clicked"

    },
    "QgsTaskManagerWidget\0modelRowsInserted\0"
    "\0QModelIndex\0index\0start\0end\0clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTaskManagerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x08 /* Private */,
       7,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QgsTaskManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTaskManagerWidget *_t = static_cast<QgsTaskManagerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTaskManagerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsTaskManagerWidget.data,
      qt_meta_data_QgsTaskManagerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTaskManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTaskManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTaskManagerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsTaskManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QgsTaskManagerFloatingWidget_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTaskManagerFloatingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTaskManagerFloatingWidget_t qt_meta_stringdata_QgsTaskManagerFloatingWidget = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsTaskManagerFloatingWidget"

    },
    "QgsTaskManagerFloatingWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTaskManagerFloatingWidget[] = {

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

void QgsTaskManagerFloatingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsTaskManagerFloatingWidget::staticMetaObject = {
    { &QgsFloatingWidget::staticMetaObject, qt_meta_stringdata_QgsTaskManagerFloatingWidget.data,
      qt_meta_data_QgsTaskManagerFloatingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTaskManagerFloatingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTaskManagerFloatingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTaskManagerFloatingWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsFloatingWidget::qt_metacast(_clname);
}

int QgsTaskManagerFloatingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsFloatingWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsTaskManagerStatusBarWidget_t {
    QByteArrayData data[9];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTaskManagerStatusBarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTaskManagerStatusBarWidget_t qt_meta_stringdata_QgsTaskManagerStatusBarWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsTaskManagerStatusBarWidget"
QT_MOC_LITERAL(1, 30, 13), // "toggleDisplay"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "overallProgressChanged"
QT_MOC_LITERAL(4, 68, 8), // "progress"
QT_MOC_LITERAL(5, 77, 23), // "countActiveTasksChanged"
QT_MOC_LITERAL(6, 101, 5), // "count"
QT_MOC_LITERAL(7, 107, 11), // "allFinished"
QT_MOC_LITERAL(8, 119, 10) // "showButton"

    },
    "QgsTaskManagerStatusBarWidget\0"
    "toggleDisplay\0\0overallProgressChanged\0"
    "progress\0countActiveTasksChanged\0count\0"
    "allFinished\0showButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTaskManagerStatusBarWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsTaskManagerStatusBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTaskManagerStatusBarWidget *_t = static_cast<QgsTaskManagerStatusBarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleDisplay(); break;
        case 1: _t->overallProgressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->countActiveTasksChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->allFinished(); break;
        case 4: _t->showButton(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTaskManagerStatusBarWidget::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsTaskManagerStatusBarWidget.data,
      qt_meta_data_QgsTaskManagerStatusBarWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTaskManagerStatusBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTaskManagerStatusBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTaskManagerStatusBarWidget.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsTaskManagerStatusBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsTaskManagerModel_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTaskManagerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTaskManagerModel_t qt_meta_stringdata_QgsTaskManagerModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsTaskManagerModel"
QT_MOC_LITERAL(1, 20, 9), // "taskAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 2), // "id"
QT_MOC_LITERAL(4, 34, 11), // "taskDeleted"
QT_MOC_LITERAL(5, 46, 15), // "progressChanged"
QT_MOC_LITERAL(6, 62, 8), // "progress"
QT_MOC_LITERAL(7, 71, 13), // "statusChanged"
QT_MOC_LITERAL(8, 85, 6) // "status"

    },
    "QgsTaskManagerModel\0taskAdded\0\0id\0"
    "taskDeleted\0progressChanged\0progress\0"
    "statusChanged\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTaskManagerModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    2,   40,    2, 0x08 /* Private */,
       7,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::Long, QMetaType::Double,    3,    6,
    QMetaType::Void, QMetaType::Long, QMetaType::Int,    3,    8,

       0        // eod
};

void QgsTaskManagerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTaskManagerModel *_t = static_cast<QgsTaskManagerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->taskAdded((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 1: _t->taskDeleted((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 2: _t->progressChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->statusChanged((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTaskManagerModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsTaskManagerModel.data,
      qt_meta_data_QgsTaskManagerModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTaskManagerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTaskManagerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTaskManagerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsTaskManagerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsTaskStatusWidget_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTaskStatusWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTaskStatusWidget_t qt_meta_stringdata_QgsTaskStatusWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsTaskStatusWidget"
QT_MOC_LITERAL(1, 20, 13), // "cancelClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "setStatus"
QT_MOC_LITERAL(4, 45, 6) // "status"

    },
    "QgsTaskStatusWidget\0cancelClicked\0\0"
    "setStatus\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTaskStatusWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QgsTaskStatusWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTaskStatusWidget *_t = static_cast<QgsTaskStatusWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancelClicked(); break;
        case 1: _t->setStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsTaskStatusWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTaskStatusWidget::cancelClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTaskStatusWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsTaskStatusWidget.data,
      qt_meta_data_QgsTaskStatusWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTaskStatusWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTaskStatusWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTaskStatusWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsTaskStatusWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsTaskStatusWidget::cancelClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
