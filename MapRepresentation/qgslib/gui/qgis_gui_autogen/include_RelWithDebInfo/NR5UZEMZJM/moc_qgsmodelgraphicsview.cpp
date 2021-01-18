/****************************************************************************
** Meta object code from reading C++ file 'qgsmodelgraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/models/qgsmodelgraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmodelgraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsModelGraphicsView_t {
    QByteArrayData data[21];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelGraphicsView_t qt_meta_stringdata_QgsModelGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsModelGraphicsView"
QT_MOC_LITERAL(1, 21, 16), // "algorithmDropped"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "algorithmId"
QT_MOC_LITERAL(4, 51, 3), // "pos"
QT_MOC_LITERAL(5, 55, 12), // "inputDropped"
QT_MOC_LITERAL(6, 68, 7), // "inputId"
QT_MOC_LITERAL(7, 76, 7), // "toolSet"
QT_MOC_LITERAL(8, 84, 17), // "QgsModelViewTool*"
QT_MOC_LITERAL(9, 102, 4), // "tool"
QT_MOC_LITERAL(10, 107, 11), // "itemFocused"
QT_MOC_LITERAL(11, 119, 29), // "QgsModelComponentGraphicItem*"
QT_MOC_LITERAL(12, 149, 4), // "item"
QT_MOC_LITERAL(13, 154, 13), // "willBeDeleted"
QT_MOC_LITERAL(14, 168, 19), // "macroCommandStarted"
QT_MOC_LITERAL(15, 188, 4), // "text"
QT_MOC_LITERAL(16, 193, 17), // "macroCommandEnded"
QT_MOC_LITERAL(17, 211, 12), // "beginCommand"
QT_MOC_LITERAL(18, 224, 10), // "endCommand"
QT_MOC_LITERAL(19, 235, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(20, 255, 12) // "snapSelected"

    },
    "QgsModelGraphicsView\0algorithmDropped\0"
    "\0algorithmId\0pos\0inputDropped\0inputId\0"
    "toolSet\0QgsModelViewTool*\0tool\0"
    "itemFocused\0QgsModelComponentGraphicItem*\0"
    "item\0willBeDeleted\0macroCommandStarted\0"
    "text\0macroCommandEnded\0beginCommand\0"
    "endCommand\0deleteSelectedItems\0"
    "snapSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    2,   74,    2, 0x06 /* Public */,
       7,    1,   79,    2, 0x06 /* Public */,
      10,    1,   82,    2, 0x06 /* Public */,
      13,    0,   85,    2, 0x06 /* Public */,
      14,    1,   86,    2, 0x06 /* Public */,
      16,    0,   89,    2, 0x06 /* Public */,
      17,    1,   90,    2, 0x06 /* Public */,
      18,    0,   93,    2, 0x06 /* Public */,
      19,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,    6,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsModelGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelGraphicsView *_t = static_cast<QgsModelGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->algorithmDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 1: _t->inputDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 2: _t->toolSet((*reinterpret_cast< QgsModelViewTool*(*)>(_a[1]))); break;
        case 3: _t->itemFocused((*reinterpret_cast< QgsModelComponentGraphicItem*(*)>(_a[1]))); break;
        case 4: _t->willBeDeleted(); break;
        case 5: _t->macroCommandStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->macroCommandEnded(); break;
        case 7: _t->beginCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->endCommand(); break;
        case 9: _t->deleteSelectedItems(); break;
        case 10: _t->snapSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsModelGraphicsView::*)(const QString & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::algorithmDropped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)(const QString & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::inputDropped)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)(QgsModelViewTool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::toolSet)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)(QgsModelComponentGraphicItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::itemFocused)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::willBeDeleted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::macroCommandStarted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::macroCommandEnded)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::beginCommand)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::endCommand)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsView::deleteSelectedItems)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsModelGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsModelGraphicsView.data,
      qt_meta_data_QgsModelGraphicsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelGraphicsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QgsModelGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsModelGraphicsView::algorithmDropped(const QString & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsModelGraphicsView::inputDropped(const QString & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsModelGraphicsView::toolSet(QgsModelViewTool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsModelGraphicsView::itemFocused(QgsModelComponentGraphicItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsModelGraphicsView::willBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgsModelGraphicsView::macroCommandStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsModelGraphicsView::macroCommandEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsModelGraphicsView::beginCommand(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsModelGraphicsView::endCommand()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QgsModelGraphicsView::deleteSelectedItems()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
