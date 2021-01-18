/****************************************************************************
** Meta object code from reading C++ file 'qgsfieldmappingmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfieldmappingmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfieldmappingmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFieldMappingModel_t {
    QByteArrayData data[8];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldMappingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldMappingModel_t qt_meta_stringdata_QgsFieldMappingModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsFieldMappingModel"
QT_MOC_LITERAL(1, 21, 15), // "ColumnDataIndex"
QT_MOC_LITERAL(2, 37, 16), // "SourceExpression"
QT_MOC_LITERAL(3, 54, 15), // "DestinationName"
QT_MOC_LITERAL(4, 70, 15), // "DestinationType"
QT_MOC_LITERAL(5, 86, 17), // "DestinationLength"
QT_MOC_LITERAL(6, 104, 20), // "DestinationPrecision"
QT_MOC_LITERAL(7, 125, 22) // "DestinationConstraints"

    },
    "QgsFieldMappingModel\0ColumnDataIndex\0"
    "SourceExpression\0DestinationName\0"
    "DestinationType\0DestinationLength\0"
    "DestinationPrecision\0DestinationConstraints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldMappingModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x2,    6,   18,

 // enum data: key, value
       2, uint(QgsFieldMappingModel::ColumnDataIndex::SourceExpression),
       3, uint(QgsFieldMappingModel::ColumnDataIndex::DestinationName),
       4, uint(QgsFieldMappingModel::ColumnDataIndex::DestinationType),
       5, uint(QgsFieldMappingModel::ColumnDataIndex::DestinationLength),
       6, uint(QgsFieldMappingModel::ColumnDataIndex::DestinationPrecision),
       7, uint(QgsFieldMappingModel::ColumnDataIndex::DestinationConstraints),

       0        // eod
};

void QgsFieldMappingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsFieldMappingModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsFieldMappingModel.data,
      qt_meta_data_QgsFieldMappingModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFieldMappingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldMappingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldMappingModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsFieldMappingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
