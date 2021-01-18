/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutView_t {
    QByteArrayData data[46];
    char stringdata0[638];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutView_t qt_meta_stringdata_QgsLayoutView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsLayoutView"
QT_MOC_LITERAL(1, 14, 9), // "layoutSet"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "QgsLayout*"
QT_MOC_LITERAL(4, 36, 6), // "layout"
QT_MOC_LITERAL(5, 43, 7), // "toolSet"
QT_MOC_LITERAL(6, 51, 18), // "QgsLayoutViewTool*"
QT_MOC_LITERAL(7, 70, 4), // "tool"
QT_MOC_LITERAL(8, 75, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(9, 92, 16), // "cursorPosChanged"
QT_MOC_LITERAL(10, 109, 11), // "layoutPoint"
QT_MOC_LITERAL(11, 121, 11), // "pageChanged"
QT_MOC_LITERAL(12, 133, 4), // "page"
QT_MOC_LITERAL(13, 138, 13), // "statusMessage"
QT_MOC_LITERAL(14, 152, 7), // "message"
QT_MOC_LITERAL(15, 160, 11), // "itemFocused"
QT_MOC_LITERAL(16, 172, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(17, 187, 4), // "item"
QT_MOC_LITERAL(18, 192, 13), // "willBeDeleted"
QT_MOC_LITERAL(19, 206, 8), // "zoomFull"
QT_MOC_LITERAL(20, 215, 9), // "zoomWidth"
QT_MOC_LITERAL(21, 225, 6), // "zoomIn"
QT_MOC_LITERAL(22, 232, 7), // "zoomOut"
QT_MOC_LITERAL(23, 240, 10), // "zoomActual"
QT_MOC_LITERAL(24, 251, 20), // "emitZoomLevelChanged"
QT_MOC_LITERAL(25, 272, 9), // "selectAll"
QT_MOC_LITERAL(26, 282, 11), // "deselectAll"
QT_MOC_LITERAL(27, 294, 15), // "invertSelection"
QT_MOC_LITERAL(28, 310, 19), // "selectNextItemAbove"
QT_MOC_LITERAL(29, 330, 19), // "selectNextItemBelow"
QT_MOC_LITERAL(30, 350, 18), // "raiseSelectedItems"
QT_MOC_LITERAL(31, 369, 18), // "lowerSelectedItems"
QT_MOC_LITERAL(32, 388, 22), // "moveSelectedItemsToTop"
QT_MOC_LITERAL(33, 411, 25), // "moveSelectedItemsToBottom"
QT_MOC_LITERAL(34, 437, 17), // "lockSelectedItems"
QT_MOC_LITERAL(35, 455, 14), // "unlockAllItems"
QT_MOC_LITERAL(36, 470, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(37, 490, 11), // "deleteItems"
QT_MOC_LITERAL(38, 502, 21), // "QList<QgsLayoutItem*>"
QT_MOC_LITERAL(39, 524, 5), // "items"
QT_MOC_LITERAL(40, 530, 18), // "groupSelectedItems"
QT_MOC_LITERAL(41, 549, 20), // "ungroupSelectedItems"
QT_MOC_LITERAL(42, 570, 11), // "viewChanged"
QT_MOC_LITERAL(43, 582, 17), // "pushStatusMessage"
QT_MOC_LITERAL(44, 600, 23), // "invalidateCachedRenders"
QT_MOC_LITERAL(45, 624, 13) // "currentLayout"

    },
    "QgsLayoutView\0layoutSet\0\0QgsLayout*\0"
    "layout\0toolSet\0QgsLayoutViewTool*\0"
    "tool\0zoomLevelChanged\0cursorPosChanged\0"
    "layoutPoint\0pageChanged\0page\0statusMessage\0"
    "message\0itemFocused\0QgsLayoutItem*\0"
    "item\0willBeDeleted\0zoomFull\0zoomWidth\0"
    "zoomIn\0zoomOut\0zoomActual\0"
    "emitZoomLevelChanged\0selectAll\0"
    "deselectAll\0invertSelection\0"
    "selectNextItemAbove\0selectNextItemBelow\0"
    "raiseSelectedItems\0lowerSelectedItems\0"
    "moveSelectedItemsToTop\0moveSelectedItemsToBottom\0"
    "lockSelectedItems\0unlockAllItems\0"
    "deleteSelectedItems\0deleteItems\0"
    "QList<QgsLayoutItem*>\0items\0"
    "groupSelectedItems\0ungroupSelectedItems\0"
    "viewChanged\0pushStatusMessage\0"
    "invalidateCachedRenders\0currentLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       2,  222, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       5,    1,  177,    2, 0x06 /* Public */,
       8,    0,  180,    2, 0x06 /* Public */,
       9,    1,  181,    2, 0x06 /* Public */,
      11,    1,  184,    2, 0x06 /* Public */,
      13,    1,  187,    2, 0x06 /* Public */,
      15,    1,  190,    2, 0x06 /* Public */,
      18,    0,  193,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  194,    2, 0x0a /* Public */,
      20,    0,  195,    2, 0x0a /* Public */,
      21,    0,  196,    2, 0x0a /* Public */,
      22,    0,  197,    2, 0x0a /* Public */,
      23,    0,  198,    2, 0x0a /* Public */,
      24,    0,  199,    2, 0x0a /* Public */,
      25,    0,  200,    2, 0x0a /* Public */,
      26,    0,  201,    2, 0x0a /* Public */,
      27,    0,  202,    2, 0x0a /* Public */,
      28,    0,  203,    2, 0x0a /* Public */,
      29,    0,  204,    2, 0x0a /* Public */,
      30,    0,  205,    2, 0x0a /* Public */,
      31,    0,  206,    2, 0x0a /* Public */,
      32,    0,  207,    2, 0x0a /* Public */,
      33,    0,  208,    2, 0x0a /* Public */,
      34,    0,  209,    2, 0x0a /* Public */,
      35,    0,  210,    2, 0x0a /* Public */,
      36,    0,  211,    2, 0x0a /* Public */,
      37,    1,  212,    2, 0x0a /* Public */,
      40,    0,  215,    2, 0x0a /* Public */,
      41,    0,  216,    2, 0x0a /* Public */,
      42,    0,  217,    2, 0x0a /* Public */,
      43,    1,  218,    2, 0x0a /* Public */,
      44,    0,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

 // properties: name, type, flags
      45, 0x80000000 | 3, 0x0049510b,
       7, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QgsLayoutView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutView *_t = static_cast<QgsLayoutView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutSet((*reinterpret_cast< QgsLayout*(*)>(_a[1]))); break;
        case 1: _t->toolSet((*reinterpret_cast< QgsLayoutViewTool*(*)>(_a[1]))); break;
        case 2: _t->zoomLevelChanged(); break;
        case 3: _t->cursorPosChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->pageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->itemFocused((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 7: _t->willBeDeleted(); break;
        case 8: _t->zoomFull(); break;
        case 9: _t->zoomWidth(); break;
        case 10: _t->zoomIn(); break;
        case 11: _t->zoomOut(); break;
        case 12: _t->zoomActual(); break;
        case 13: _t->emitZoomLevelChanged(); break;
        case 14: _t->selectAll(); break;
        case 15: _t->deselectAll(); break;
        case 16: _t->invertSelection(); break;
        case 17: _t->selectNextItemAbove(); break;
        case 18: _t->selectNextItemBelow(); break;
        case 19: _t->raiseSelectedItems(); break;
        case 20: _t->lowerSelectedItems(); break;
        case 21: _t->moveSelectedItemsToTop(); break;
        case 22: _t->moveSelectedItemsToBottom(); break;
        case 23: _t->lockSelectedItems(); break;
        case 24: _t->unlockAllItems(); break;
        case 25: _t->deleteSelectedItems(); break;
        case 26: _t->deleteItems((*reinterpret_cast< const QList<QgsLayoutItem*>(*)>(_a[1]))); break;
        case 27: _t->groupSelectedItems(); break;
        case 28: _t->ungroupSelectedItems(); break;
        case 29: _t->viewChanged(); break;
        case 30: _t->pushStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->invalidateCachedRenders(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayoutItem* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsLayoutItem*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLayoutView::*)(QgsLayout * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::layoutSet)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)(QgsLayoutViewTool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::toolSet)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::zoomLevelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::cursorPosChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::pageChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::statusMessage)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)(QgsLayoutItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::itemFocused)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QgsLayoutView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutView::willBeDeleted)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsLayoutView *_t = static_cast<QgsLayoutView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsLayout**>(_v) = _t->currentLayout(); break;
        case 1: *reinterpret_cast< QgsLayoutViewTool**>(_v) = _t->tool(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsLayoutView *_t = static_cast<QgsLayoutView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentLayout(*reinterpret_cast< QgsLayout**>(_v)); break;
        case 1: _t->setTool(*reinterpret_cast< QgsLayoutViewTool**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsLayoutView.data,
      qt_meta_data_QgsLayoutView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QgsLayoutView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
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
void QgsLayoutView::layoutSet(QgsLayout * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsLayoutView::toolSet(QgsLayoutViewTool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsLayoutView::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsLayoutView::cursorPosChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsLayoutView::pageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsLayoutView::statusMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsLayoutView::itemFocused(QgsLayoutItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsLayoutView::willBeDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
