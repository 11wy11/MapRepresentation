/****************************************************************************
** Meta object code from reading C++ file 'qgsmodelcomponentgraphicitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/models/qgsmodelcomponentgraphicitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmodelcomponentgraphicitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsModelComponentGraphicItem_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelComponentGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelComponentGraphicItem_t qt_meta_stringdata_QgsModelComponentGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsModelComponentGraphicItem"
QT_MOC_LITERAL(1, 29, 19), // "requestModelRepaint"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 13), // "aboutToChange"
QT_MOC_LITERAL(4, 64, 4), // "text"
QT_MOC_LITERAL(5, 69, 2), // "id"
QT_MOC_LITERAL(6, 72, 7), // "changed"
QT_MOC_LITERAL(7, 80, 13), // "repaintArrows"
QT_MOC_LITERAL(8, 94, 16), // "updateArrowPaths"
QT_MOC_LITERAL(9, 111, 19), // "sizePositionChanged"
QT_MOC_LITERAL(10, 131, 13) // "editComponent"

    },
    "QgsModelComponentGraphicItem\0"
    "requestModelRepaint\0\0aboutToChange\0"
    "text\0id\0changed\0repaintArrows\0"
    "updateArrowPaths\0sizePositionChanged\0"
    "editComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelComponentGraphicItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x26 /* Public | MethodCloned */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsModelComponentGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelComponentGraphicItem *_t = static_cast<QgsModelComponentGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestModelRepaint(); break;
        case 1: _t->aboutToChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->aboutToChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->changed(); break;
        case 4: _t->repaintArrows(); break;
        case 5: _t->updateArrowPaths(); break;
        case 6: _t->sizePositionChanged(); break;
        case 7: _t->editComponent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsModelComponentGraphicItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelComponentGraphicItem::requestModelRepaint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsModelComponentGraphicItem::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelComponentGraphicItem::aboutToChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsModelComponentGraphicItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelComponentGraphicItem::changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsModelComponentGraphicItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelComponentGraphicItem::repaintArrows)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsModelComponentGraphicItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelComponentGraphicItem::updateArrowPaths)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsModelComponentGraphicItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelComponentGraphicItem::sizePositionChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsModelComponentGraphicItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QgsModelComponentGraphicItem.data,
      qt_meta_data_QgsModelComponentGraphicItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelComponentGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelComponentGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelComponentGraphicItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int QgsModelComponentGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsModelComponentGraphicItem::requestModelRepaint()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsModelComponentGraphicItem::aboutToChange(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QgsModelComponentGraphicItem::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsModelComponentGraphicItem::repaintArrows()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgsModelComponentGraphicItem::updateArrowPaths()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsModelComponentGraphicItem::sizePositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_QgsModelParameterGraphicItem_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelParameterGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelParameterGraphicItem_t qt_meta_stringdata_QgsModelParameterGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsModelParameterGraphicItem"
QT_MOC_LITERAL(1, 29, 15), // "deleteComponent"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "QgsModelParameterGraphicItem\0"
    "deleteComponent\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelParameterGraphicItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsModelParameterGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelParameterGraphicItem *_t = static_cast<QgsModelParameterGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteComponent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsModelParameterGraphicItem::staticMetaObject = {
    { &QgsModelComponentGraphicItem::staticMetaObject, qt_meta_stringdata_QgsModelParameterGraphicItem.data,
      qt_meta_data_QgsModelParameterGraphicItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelParameterGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelParameterGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelParameterGraphicItem.stringdata0))
        return static_cast<void*>(this);
    return QgsModelComponentGraphicItem::qt_metacast(_clname);
}

int QgsModelParameterGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsModelComponentGraphicItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsModelChildAlgorithmGraphicItem_t {
    QByteArrayData data[5];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelChildAlgorithmGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelChildAlgorithmGraphicItem_t qt_meta_stringdata_QgsModelChildAlgorithmGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsModelChildAlgorithmGraphic..."
QT_MOC_LITERAL(1, 34, 15), // "deleteComponent"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 19), // "deactivateAlgorithm"
QT_MOC_LITERAL(4, 71, 17) // "activateAlgorithm"

    },
    "QgsModelChildAlgorithmGraphicItem\0"
    "deleteComponent\0\0deactivateAlgorithm\0"
    "activateAlgorithm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelChildAlgorithmGraphicItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsModelChildAlgorithmGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelChildAlgorithmGraphicItem *_t = static_cast<QgsModelChildAlgorithmGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteComponent(); break;
        case 1: _t->deactivateAlgorithm(); break;
        case 2: _t->activateAlgorithm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsModelChildAlgorithmGraphicItem::staticMetaObject = {
    { &QgsModelComponentGraphicItem::staticMetaObject, qt_meta_stringdata_QgsModelChildAlgorithmGraphicItem.data,
      qt_meta_data_QgsModelChildAlgorithmGraphicItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelChildAlgorithmGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelChildAlgorithmGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelChildAlgorithmGraphicItem.stringdata0))
        return static_cast<void*>(this);
    return QgsModelComponentGraphicItem::qt_metacast(_clname);
}

int QgsModelChildAlgorithmGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsModelComponentGraphicItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsModelOutputGraphicItem_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelOutputGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelOutputGraphicItem_t qt_meta_stringdata_QgsModelOutputGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsModelOutputGraphicItem"
QT_MOC_LITERAL(1, 26, 15), // "deleteComponent"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "QgsModelOutputGraphicItem\0deleteComponent\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelOutputGraphicItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsModelOutputGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelOutputGraphicItem *_t = static_cast<QgsModelOutputGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteComponent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsModelOutputGraphicItem::staticMetaObject = {
    { &QgsModelComponentGraphicItem::staticMetaObject, qt_meta_stringdata_QgsModelOutputGraphicItem.data,
      qt_meta_data_QgsModelOutputGraphicItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelOutputGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelOutputGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelOutputGraphicItem.stringdata0))
        return static_cast<void*>(this);
    return QgsModelComponentGraphicItem::qt_metacast(_clname);
}

int QgsModelOutputGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsModelComponentGraphicItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsModelCommentGraphicItem_t {
    QByteArrayData data[4];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelCommentGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelCommentGraphicItem_t qt_meta_stringdata_QgsModelCommentGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsModelCommentGraphicItem"
QT_MOC_LITERAL(1, 27, 15), // "deleteComponent"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13) // "editComponent"

    },
    "QgsModelCommentGraphicItem\0deleteComponent\0"
    "\0editComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelCommentGraphicItem[] = {

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
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsModelCommentGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelCommentGraphicItem *_t = static_cast<QgsModelCommentGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteComponent(); break;
        case 1: _t->editComponent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsModelCommentGraphicItem::staticMetaObject = {
    { &QgsModelComponentGraphicItem::staticMetaObject, qt_meta_stringdata_QgsModelCommentGraphicItem.data,
      qt_meta_data_QgsModelCommentGraphicItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelCommentGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelCommentGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelCommentGraphicItem.stringdata0))
        return static_cast<void*>(this);
    return QgsModelComponentGraphicItem::qt_metacast(_clname);
}

int QgsModelCommentGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsModelComponentGraphicItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsModelGroupBoxGraphicItem_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelGroupBoxGraphicItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelGroupBoxGraphicItem_t qt_meta_stringdata_QgsModelGroupBoxGraphicItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsModelGroupBoxGraphicItem"
QT_MOC_LITERAL(1, 28, 15), // "deleteComponent"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13) // "editComponent"

    },
    "QgsModelGroupBoxGraphicItem\0deleteComponent\0"
    "\0editComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelGroupBoxGraphicItem[] = {

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
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsModelGroupBoxGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelGroupBoxGraphicItem *_t = static_cast<QgsModelGroupBoxGraphicItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteComponent(); break;
        case 1: _t->editComponent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsModelGroupBoxGraphicItem::staticMetaObject = {
    { &QgsModelComponentGraphicItem::staticMetaObject, qt_meta_stringdata_QgsModelGroupBoxGraphicItem.data,
      qt_meta_data_QgsModelGroupBoxGraphicItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelGroupBoxGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelGroupBoxGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelGroupBoxGraphicItem.stringdata0))
        return static_cast<void*>(this);
    return QgsModelComponentGraphicItem::qt_metacast(_clname);
}

int QgsModelGroupBoxGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsModelComponentGraphicItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
