/****************************************************************************
** Meta object code from reading C++ file 'qgsfeaturelistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/attributetable/qgsfeaturelistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeaturelistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeatureListView_t {
    QByteArrayData data[38];
    char stringdata0[542];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeatureListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeatureListView_t qt_meta_stringdata_QgsFeatureListView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsFeatureListView"
QT_MOC_LITERAL(1, 19, 27), // "currentEditSelectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "QgsFeature&"
QT_MOC_LITERAL(4, 60, 4), // "feat"
QT_MOC_LITERAL(5, 65, 35), // "currentEditSelectionProgressC..."
QT_MOC_LITERAL(6, 101, 8), // "progress"
QT_MOC_LITERAL(7, 110, 5), // "count"
QT_MOC_LITERAL(8, 116, 24), // "displayExpressionChanged"
QT_MOC_LITERAL(9, 141, 10), // "expression"
QT_MOC_LITERAL(10, 152, 26), // "aboutToChangeEditSelection"
QT_MOC_LITERAL(11, 179, 5), // "bool&"
QT_MOC_LITERAL(12, 185, 2), // "ok"
QT_MOC_LITERAL(13, 188, 19), // "willShowContextMenu"
QT_MOC_LITERAL(14, 208, 14), // "QgsActionMenu*"
QT_MOC_LITERAL(15, 223, 4), // "menu"
QT_MOC_LITERAL(16, 228, 11), // "QModelIndex"
QT_MOC_LITERAL(17, 240, 7), // "atIndex"
QT_MOC_LITERAL(18, 248, 16), // "setEditSelection"
QT_MOC_LITERAL(19, 265, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(20, 279, 4), // "fids"
QT_MOC_LITERAL(21, 284, 5), // "index"
QT_MOC_LITERAL(22, 290, 35), // "QItemSelectionModel::Selectio..."
QT_MOC_LITERAL(23, 326, 7), // "command"
QT_MOC_LITERAL(24, 334, 9), // "selectAll"
QT_MOC_LITERAL(25, 344, 16), // "repaintRequested"
QT_MOC_LITERAL(26, 361, 15), // "QModelIndexList"
QT_MOC_LITERAL(27, 377, 7), // "indexes"
QT_MOC_LITERAL(28, 385, 16), // "editFirstFeature"
QT_MOC_LITERAL(29, 402, 15), // "editNextFeature"
QT_MOC_LITERAL(30, 418, 19), // "editPreviousFeature"
QT_MOC_LITERAL(31, 438, 15), // "editLastFeature"
QT_MOC_LITERAL(32, 454, 20), // "editSelectionChanged"
QT_MOC_LITERAL(33, 475, 14), // "QItemSelection"
QT_MOC_LITERAL(34, 490, 10), // "deselected"
QT_MOC_LITERAL(35, 501, 8), // "selected"
QT_MOC_LITERAL(36, 510, 19), // "ensureEditSelection"
QT_MOC_LITERAL(37, 530, 11) // "inSelection"

    },
    "QgsFeatureListView\0currentEditSelectionChanged\0"
    "\0QgsFeature&\0feat\0currentEditSelectionProgressChanged\0"
    "progress\0count\0displayExpressionChanged\0"
    "expression\0aboutToChangeEditSelection\0"
    "bool&\0ok\0willShowContextMenu\0"
    "QgsActionMenu*\0menu\0QModelIndex\0atIndex\0"
    "setEditSelection\0QgsFeatureIds\0fids\0"
    "index\0QItemSelectionModel::SelectionFlags\0"
    "command\0selectAll\0repaintRequested\0"
    "QModelIndexList\0indexes\0editFirstFeature\0"
    "editNextFeature\0editPreviousFeature\0"
    "editLastFeature\0editSelectionChanged\0"
    "QItemSelection\0deselected\0selected\0"
    "ensureEditSelection\0inSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeatureListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    2,  102,    2, 0x06 /* Public */,
       8,    1,  107,    2, 0x06 /* Public */,
      10,    1,  110,    2, 0x06 /* Public */,
      13,    2,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  118,    2, 0x0a /* Public */,
      18,    2,  121,    2, 0x0a /* Public */,
      24,    0,  126,    2, 0x0a /* Public */,
      25,    1,  127,    2, 0x0a /* Public */,
      25,    0,  130,    2, 0x0a /* Public */,
      28,    0,  131,    2, 0x0a /* Public */,
      29,    0,  132,    2, 0x0a /* Public */,
      30,    0,  133,    2, 0x0a /* Public */,
      31,    0,  134,    2, 0x0a /* Public */,
      32,    2,  135,    2, 0x08 /* Private */,
      36,    1,  140,    2, 0x08 /* Private */,
      36,    0,  143,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 22,   21,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 33,   34,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,

       0        // eod
};

void QgsFeatureListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFeatureListView *_t = static_cast<QgsFeatureListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentEditSelectionChanged((*reinterpret_cast< QgsFeature(*)>(_a[1]))); break;
        case 1: _t->currentEditSelectionProgressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->displayExpressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->aboutToChangeEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->willShowContextMenu((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->setEditSelection((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 6: _t->setEditSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 7: _t->selectAll(); break;
        case 8: _t->repaintRequested((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 9: _t->repaintRequested(); break;
        case 10: _t->editFirstFeature(); break;
        case 11: _t->editNextFeature(); break;
        case 12: _t->editPreviousFeature(); break;
        case 13: _t->editLastFeature(); break;
        case 14: _t->editSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 15: _t->ensureEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->ensureEditSelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsActionMenu* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFeatureListView::*)(QgsFeature & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::currentEditSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::currentEditSelectionProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::displayExpressionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListView::*)(bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::aboutToChangeEditSelection)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListView::*)(QgsActionMenu * , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListView::willShowContextMenu)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFeatureListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QgsFeatureListView.data,
      qt_meta_data_QgsFeatureListView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFeatureListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFeatureListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFeatureListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int QgsFeatureListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
void QgsFeatureListView::currentEditSelectionChanged(QgsFeature & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsFeatureListView::currentEditSelectionProgressChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsFeatureListView::displayExpressionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsFeatureListView::aboutToChangeEditSelection(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsFeatureListView::willShowContextMenu(QgsActionMenu * _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
