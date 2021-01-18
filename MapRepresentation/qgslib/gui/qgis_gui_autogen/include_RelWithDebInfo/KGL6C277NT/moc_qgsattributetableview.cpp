/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetableview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/attributetable/qgsattributetableview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeTableView_t {
    QByteArrayData data[27];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableView_t qt_meta_stringdata_QgsAttributeTableView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsAttributeTableView"
QT_MOC_LITERAL(1, 22, 19), // "willShowContextMenu"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "QMenu*"
QT_MOC_LITERAL(4, 50, 4), // "menu"
QT_MOC_LITERAL(5, 55, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 67, 7), // "atIndex"
QT_MOC_LITERAL(7, 75, 13), // "columnResized"
QT_MOC_LITERAL(8, 89, 6), // "column"
QT_MOC_LITERAL(9, 96, 5), // "width"
QT_MOC_LITERAL(10, 102, 8), // "finished"
QT_MOC_LITERAL(11, 111, 16), // "repaintRequested"
QT_MOC_LITERAL(12, 128, 15), // "QModelIndexList"
QT_MOC_LITERAL(13, 144, 7), // "indexes"
QT_MOC_LITERAL(14, 152, 9), // "selectAll"
QT_MOC_LITERAL(15, 162, 9), // "selectRow"
QT_MOC_LITERAL(16, 172, 3), // "row"
QT_MOC_LITERAL(17, 176, 12), // "_q_selectRow"
QT_MOC_LITERAL(18, 189, 12), // "modelDeleted"
QT_MOC_LITERAL(19, 202, 27), // "showHorizontalSortIndicator"
QT_MOC_LITERAL(20, 230, 15), // "actionTriggered"
QT_MOC_LITERAL(21, 246, 17), // "columnSizeChanged"
QT_MOC_LITERAL(22, 264, 5), // "index"
QT_MOC_LITERAL(23, 270, 8), // "oldWidth"
QT_MOC_LITERAL(24, 279, 8), // "newWidth"
QT_MOC_LITERAL(25, 288, 25), // "onActionColumnItemPainted"
QT_MOC_LITERAL(26, 314, 21) // "recreateActionWidgets"

    },
    "QgsAttributeTableView\0willShowContextMenu\0"
    "\0QMenu*\0menu\0QModelIndex\0atIndex\0"
    "columnResized\0column\0width\0finished\0"
    "repaintRequested\0QModelIndexList\0"
    "indexes\0selectAll\0selectRow\0row\0"
    "_q_selectRow\0modelDeleted\0"
    "showHorizontalSortIndicator\0actionTriggered\0"
    "columnSizeChanged\0index\0oldWidth\0"
    "newWidth\0onActionColumnItemPainted\0"
    "recreateActionWidgets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       7,    2,   89,    2, 0x06 /* Public */,
      10,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   95,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      14,    0,   99,    2, 0x0a /* Public */,
      15,    1,  100,    2, 0x0a /* Public */,
      17,    1,  103,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,
      20,    0,  108,    2, 0x08 /* Private */,
      21,    3,  109,    2, 0x08 /* Private */,
      25,    1,  116,    2, 0x08 /* Private */,
      26,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 5,   22,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableView *_t = static_cast<QgsAttributeTableView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->willShowContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->columnResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->repaintRequested((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 4: _t->repaintRequested(); break;
        case 5: _t->selectAll(); break;
        case 6: _t->selectRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->_q_selectRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->modelDeleted(); break;
        case 9: _t->showHorizontalSortIndicator(); break;
        case 10: _t->actionTriggered(); break;
        case 11: _t->columnSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->onActionColumnItemPainted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->recreateActionWidgets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAttributeTableView::*)(QMenu * , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableView::willShowContextMenu)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsAttributeTableView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableView::columnResized)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsAttributeTableView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableView::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_QgsAttributeTableView.data,
      qt_meta_data_QgsAttributeTableView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int QgsAttributeTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsAttributeTableView::willShowContextMenu(QMenu * _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAttributeTableView::columnResized(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAttributeTableView::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
