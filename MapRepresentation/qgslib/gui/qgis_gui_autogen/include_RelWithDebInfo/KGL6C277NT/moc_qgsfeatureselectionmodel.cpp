/****************************************************************************
** Meta object code from reading C++ file 'qgsfeatureselectionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/attributetable/qgsfeatureselectionmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeatureselectionmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeatureSelectionModel_t {
    QByteArrayData data[21];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeatureSelectionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeatureSelectionModel_t qt_meta_stringdata_QgsFeatureSelectionModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsFeatureSelectionModel"
QT_MOC_LITERAL(1, 25, 14), // "requestRepaint"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "QModelIndexList"
QT_MOC_LITERAL(4, 57, 7), // "indexes"
QT_MOC_LITERAL(5, 65, 6), // "select"
QT_MOC_LITERAL(6, 72, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 84, 5), // "index"
QT_MOC_LITERAL(8, 90, 35), // "QItemSelectionModel::Selectio..."
QT_MOC_LITERAL(9, 126, 7), // "command"
QT_MOC_LITERAL(10, 134, 14), // "QItemSelection"
QT_MOC_LITERAL(11, 149, 9), // "selection"
QT_MOC_LITERAL(12, 159, 14), // "selectFeatures"
QT_MOC_LITERAL(13, 174, 26), // "setFeatureSelectionManager"
QT_MOC_LITERAL(14, 201, 28), // "QgsIFeatureSelectionManager*"
QT_MOC_LITERAL(15, 230, 23), // "featureSelectionManager"
QT_MOC_LITERAL(16, 254, 21), // "layerSelectionChanged"
QT_MOC_LITERAL(17, 276, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(18, 290, 8), // "selected"
QT_MOC_LITERAL(19, 299, 10), // "deselected"
QT_MOC_LITERAL(20, 310, 14) // "clearAndSelect"

    },
    "QgsFeatureSelectionModel\0requestRepaint\0"
    "\0QModelIndexList\0indexes\0select\0"
    "QModelIndex\0index\0QItemSelectionModel::SelectionFlags\0"
    "command\0QItemSelection\0selection\0"
    "selectFeatures\0setFeatureSelectionManager\0"
    "QgsIFeatureSelectionManager*\0"
    "featureSelectionManager\0layerSelectionChanged\0"
    "QgsFeatureIds\0selected\0deselected\0"
    "clearAndSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeatureSelectionModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       1,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   53,    2, 0x0a /* Public */,
       5,    2,   58,    2, 0x0a /* Public */,
      12,    2,   63,    2, 0x0a /* Public */,
      13,    1,   68,    2, 0x0a /* Public */,
      16,    3,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 8,   11,    9,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 8,   11,    9,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, QMetaType::Bool,   18,   19,   20,

       0        // eod
};

void QgsFeatureSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFeatureSelectionModel *_t = static_cast<QgsFeatureSelectionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestRepaint((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 1: _t->requestRepaint(); break;
        case 2: _t->select((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 3: _t->select((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 4: _t->selectFeatures((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 5: _t->setFeatureSelectionManager((*reinterpret_cast< QgsIFeatureSelectionManager*(*)>(_a[1]))); break;
        case 6: _t->layerSelectionChanged((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFeatureSelectionModel::*)(const QModelIndexList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureSelectionModel::requestRepaint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFeatureSelectionModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureSelectionModel::requestRepaint)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFeatureSelectionModel::staticMetaObject = {
    { &QItemSelectionModel::staticMetaObject, qt_meta_stringdata_QgsFeatureSelectionModel.data,
      qt_meta_data_QgsFeatureSelectionModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFeatureSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFeatureSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFeatureSelectionModel.stringdata0))
        return static_cast<void*>(this);
    return QItemSelectionModel::qt_metacast(_clname);
}

int QgsFeatureSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsFeatureSelectionModel::requestRepaint(const QModelIndexList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsFeatureSelectionModel::requestRepaint()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
