/****************************************************************************
** Meta object code from reading C++ file 'qgspalettedrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgspalettedrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspalettedrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPalettedRendererClassGatherer_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPalettedRendererClassGatherer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPalettedRendererClassGatherer_t qt_meta_stringdata_QgsPalettedRendererClassGatherer = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsPalettedRendererClassGatherer"
QT_MOC_LITERAL(1, 33, 16), // "collectedClasses"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 8), // "canceled"
QT_MOC_LITERAL(4, 60, 15), // "progressChanged"
QT_MOC_LITERAL(5, 76, 8) // "progress"

    },
    "QgsPalettedRendererClassGatherer\0"
    "collectedClasses\0\0canceled\0progressChanged\0"
    "progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPalettedRendererClassGatherer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void QgsPalettedRendererClassGatherer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPalettedRendererClassGatherer *_t = static_cast<QgsPalettedRendererClassGatherer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collectedClasses(); break;
        case 1: _t->canceled(); break;
        case 2: _t->progressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsPalettedRendererClassGatherer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPalettedRendererClassGatherer::collectedClasses)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsPalettedRendererClassGatherer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPalettedRendererClassGatherer::canceled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsPalettedRendererClassGatherer::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPalettedRendererClassGatherer::progressChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsPalettedRendererClassGatherer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QgsPalettedRendererClassGatherer.data,
      qt_meta_data_QgsPalettedRendererClassGatherer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPalettedRendererClassGatherer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPalettedRendererClassGatherer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPalettedRendererClassGatherer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QgsPalettedRendererClassGatherer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QgsPalettedRendererClassGatherer::collectedClasses()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsPalettedRendererClassGatherer::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsPalettedRendererClassGatherer::progressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QgsPalettedRendererModel_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPalettedRendererModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPalettedRendererModel_t qt_meta_stringdata_QgsPalettedRendererModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsPalettedRendererModel"
QT_MOC_LITERAL(1, 25, 14), // "classesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9) // "deleteAll"

    },
    "QgsPalettedRendererModel\0classesChanged\0"
    "\0deleteAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPalettedRendererModel[] = {

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
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsPalettedRendererModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPalettedRendererModel *_t = static_cast<QgsPalettedRendererModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->classesChanged(); break;
        case 1: _t->deleteAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsPalettedRendererModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPalettedRendererModel::classesChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsPalettedRendererModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsPalettedRendererModel.data,
      qt_meta_data_QgsPalettedRendererModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPalettedRendererModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPalettedRendererModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPalettedRendererModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsPalettedRendererModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void QgsPalettedRendererModel::classesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsPalettedRendererProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPalettedRendererProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPalettedRendererProxyModel_t qt_meta_stringdata_QgsPalettedRendererProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QgsPalettedRendererProxyModel"

    },
    "QgsPalettedRendererProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPalettedRendererProxyModel[] = {

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

void QgsPalettedRendererProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsPalettedRendererProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsPalettedRendererProxyModel.data,
      qt_meta_data_QgsPalettedRendererProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPalettedRendererProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPalettedRendererProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPalettedRendererProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsPalettedRendererProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsPalettedRendererWidget_t {
    QByteArrayData data[19];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPalettedRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPalettedRendererWidget_t qt_meta_stringdata_QgsPalettedRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsPalettedRendererWidget"
QT_MOC_LITERAL(1, 26, 11), // "deleteEntry"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "addEntry"
QT_MOC_LITERAL(4, 48, 11), // "changeColor"
QT_MOC_LITERAL(5, 60, 13), // "changeOpacity"
QT_MOC_LITERAL(6, 74, 11), // "changeLabel"
QT_MOC_LITERAL(7, 86, 14), // "applyColorRamp"
QT_MOC_LITERAL(8, 101, 14), // "loadColorTable"
QT_MOC_LITERAL(9, 116, 14), // "saveColorTable"
QT_MOC_LITERAL(10, 131, 8), // "classify"
QT_MOC_LITERAL(11, 140, 13), // "loadFromLayer"
QT_MOC_LITERAL(12, 154, 11), // "bandChanged"
QT_MOC_LITERAL(13, 166, 4), // "band"
QT_MOC_LITERAL(14, 171, 15), // "gatheredClasses"
QT_MOC_LITERAL(15, 187, 22), // "gathererThreadFinished"
QT_MOC_LITERAL(16, 210, 18), // "layerWillBeRemoved"
QT_MOC_LITERAL(17, 229, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(18, 242, 5) // "layer"

    },
    "QgsPalettedRendererWidget\0deleteEntry\0"
    "\0addEntry\0changeColor\0changeOpacity\0"
    "changeLabel\0applyColorRamp\0loadColorTable\0"
    "saveColorTable\0classify\0loadFromLayer\0"
    "bandChanged\0band\0gatheredClasses\0"
    "gathererThreadFinished\0layerWillBeRemoved\0"
    "QgsMapLayer*\0layer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPalettedRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void QgsPalettedRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPalettedRendererWidget *_t = static_cast<QgsPalettedRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteEntry(); break;
        case 1: _t->addEntry(); break;
        case 2: _t->changeColor(); break;
        case 3: _t->changeOpacity(); break;
        case 4: _t->changeLabel(); break;
        case 5: _t->applyColorRamp(); break;
        case 6: _t->loadColorTable(); break;
        case 7: _t->saveColorTable(); break;
        case 8: _t->classify(); break;
        case 9: _t->loadFromLayer(); break;
        case 10: _t->bandChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->gatheredClasses(); break;
        case 12: _t->gathererThreadFinished(); break;
        case 13: _t->layerWillBeRemoved((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsPalettedRendererWidget::staticMetaObject = {
    { &QgsRasterRendererWidget::staticMetaObject, qt_meta_stringdata_QgsPalettedRendererWidget.data,
      qt_meta_data_QgsPalettedRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPalettedRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPalettedRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPalettedRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterRendererWidget::qt_metacast(_clname);
}

int QgsPalettedRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
