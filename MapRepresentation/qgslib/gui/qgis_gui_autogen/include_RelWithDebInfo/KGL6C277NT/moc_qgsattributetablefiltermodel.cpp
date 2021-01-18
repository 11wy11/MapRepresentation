/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetablefiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/attributetable/qgsattributetablefiltermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetablefiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeTableFilterModel_t {
    QByteArrayData data[28];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableFilterModel_t qt_meta_stringdata_QgsAttributeTableFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsAttributeTableFilterModel"
QT_MOC_LITERAL(1, 29, 17), // "sortColumnChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "column"
QT_MOC_LITERAL(4, 55, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(5, 69, 5), // "order"
QT_MOC_LITERAL(6, 75, 16), // "featuresFiltered"
QT_MOC_LITERAL(7, 92, 15), // "visibleReloaded"
QT_MOC_LITERAL(8, 108, 14), // "extentsChanged"
QT_MOC_LITERAL(9, 123, 14), // "filterFeatures"
QT_MOC_LITERAL(10, 138, 16), // "selectionChanged"
QT_MOC_LITERAL(11, 155, 16), // "onColumnsChanged"
QT_MOC_LITERAL(12, 172, 13), // "reloadVisible"
QT_MOC_LITERAL(13, 186, 23), // "onAttributeValueChanged"
QT_MOC_LITERAL(14, 210, 12), // "QgsFeatureId"
QT_MOC_LITERAL(15, 223, 3), // "fid"
QT_MOC_LITERAL(16, 227, 3), // "idx"
QT_MOC_LITERAL(17, 231, 5), // "value"
QT_MOC_LITERAL(18, 237, 17), // "onGeometryChanged"
QT_MOC_LITERAL(19, 255, 10), // "FilterMode"
QT_MOC_LITERAL(20, 266, 7), // "ShowAll"
QT_MOC_LITERAL(21, 274, 12), // "ShowSelected"
QT_MOC_LITERAL(22, 287, 11), // "ShowVisible"
QT_MOC_LITERAL(23, 299, 16), // "ShowFilteredList"
QT_MOC_LITERAL(24, 316, 10), // "ShowEdited"
QT_MOC_LITERAL(25, 327, 10), // "ColumnType"
QT_MOC_LITERAL(26, 338, 15), // "ColumnTypeField"
QT_MOC_LITERAL(27, 354, 22) // "ColumnTypeActionButton"

    },
    "QgsAttributeTableFilterModel\0"
    "sortColumnChanged\0\0column\0Qt::SortOrder\0"
    "order\0featuresFiltered\0visibleReloaded\0"
    "extentsChanged\0filterFeatures\0"
    "selectionChanged\0onColumnsChanged\0"
    "reloadVisible\0onAttributeValueChanged\0"
    "QgsFeatureId\0fid\0idx\0value\0onGeometryChanged\0"
    "FilterMode\0ShowAll\0ShowSelected\0"
    "ShowVisible\0ShowFilteredList\0ShowEdited\0"
    "ColumnType\0ColumnTypeField\0"
    "ColumnTypeActionButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableFilterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,
       7,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    3,   76,    2, 0x08 /* Private */,
      18,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::QVariant,   15,   16,   17,
    QMetaType::Void,

 // enums: name, flags, count, data
      19, 0x0,    5,   92,
      25, 0x0,    2,  102,

 // enum data: key, value
      20, uint(QgsAttributeTableFilterModel::ShowAll),
      21, uint(QgsAttributeTableFilterModel::ShowSelected),
      22, uint(QgsAttributeTableFilterModel::ShowVisible),
      23, uint(QgsAttributeTableFilterModel::ShowFilteredList),
      24, uint(QgsAttributeTableFilterModel::ShowEdited),
      26, uint(QgsAttributeTableFilterModel::ColumnTypeField),
      27, uint(QgsAttributeTableFilterModel::ColumnTypeActionButton),

       0        // eod
};

void QgsAttributeTableFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableFilterModel *_t = static_cast<QgsAttributeTableFilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortColumnChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 1: _t->featuresFiltered(); break;
        case 2: _t->visibleReloaded(); break;
        case 3: _t->extentsChanged(); break;
        case 4: _t->filterFeatures(); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->onColumnsChanged(); break;
        case 7: _t->reloadVisible(); break;
        case 8: _t->onAttributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->onGeometryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAttributeTableFilterModel::*)(int , Qt::SortOrder );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableFilterModel::sortColumnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsAttributeTableFilterModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableFilterModel::featuresFiltered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsAttributeTableFilterModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableFilterModel::visibleReloaded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeTableFilterModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsAttributeTableFilterModel.data,
      qt_meta_data_QgsAttributeTableFilterModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableFilterModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsFeatureModel"))
        return static_cast< QgsFeatureModel*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsAttributeTableFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeTableFilterModel::sortColumnChanged(int _t1, Qt::SortOrder _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAttributeTableFilterModel::featuresFiltered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsAttributeTableFilterModel::visibleReloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
