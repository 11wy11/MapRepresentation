/****************************************************************************
** Meta object code from reading C++ file 'qgsexpressiontreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsexpressiontreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexpressiontreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExpressionItemSearchProxy_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionItemSearchProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionItemSearchProxy_t qt_meta_stringdata_QgsExpressionItemSearchProxy = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QgsExpressionItemSearchProxy"

    },
    "QgsExpressionItemSearchProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionItemSearchProxy[] = {

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

void QgsExpressionItemSearchProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsExpressionItemSearchProxy::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsExpressionItemSearchProxy.data,
      qt_meta_data_QgsExpressionItemSearchProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionItemSearchProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionItemSearchProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionItemSearchProxy.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsExpressionItemSearchProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsExpressionTreeView_t {
    QByteArrayData data[14];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionTreeView_t qt_meta_stringdata_QgsExpressionTreeView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsExpressionTreeView"
QT_MOC_LITERAL(1, 22, 27), // "expressionItemDoubleClicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 4), // "text"
QT_MOC_LITERAL(4, 56, 28), // "currentExpressionItemChanged"
QT_MOC_LITERAL(5, 85, 18), // "QgsExpressionItem*"
QT_MOC_LITERAL(6, 104, 4), // "item"
QT_MOC_LITERAL(7, 109, 13), // "setSearchText"
QT_MOC_LITERAL(8, 123, 15), // "onDoubleClicked"
QT_MOC_LITERAL(9, 139, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 151, 5), // "index"
QT_MOC_LITERAL(11, 157, 15), // "showContextMenu"
QT_MOC_LITERAL(12, 173, 2), // "pt"
QT_MOC_LITERAL(13, 176, 18) // "currentItemChanged"

    },
    "QgsExpressionTreeView\0expressionItemDoubleClicked\0"
    "\0text\0currentExpressionItemChanged\0"
    "QgsExpressionItem*\0item\0setSearchText\0"
    "onDoubleClicked\0QModelIndex\0index\0"
    "showContextMenu\0pt\0currentItemChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x08 /* Private */,
      11,    1,   56,    2, 0x08 /* Private */,
      13,    2,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   10,    2,

       0        // eod
};

void QgsExpressionTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExpressionTreeView *_t = static_cast<QgsExpressionTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionItemDoubleClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->currentExpressionItemChanged((*reinterpret_cast< QgsExpressionItem*(*)>(_a[1]))); break;
        case 2: _t->setSearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->currentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExpressionTreeView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionTreeView::expressionItemDoubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsExpressionTreeView::*)(QgsExpressionItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionTreeView::currentExpressionItemChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsExpressionTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsExpressionTreeView.data,
      qt_meta_data_QgsExpressionTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsExpressionTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsExpressionTreeView::expressionItemDoubleClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsExpressionTreeView::currentExpressionItemChanged(QgsExpressionItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
