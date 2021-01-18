/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/attributetable/qgsattributetablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeTableModel_t {
    QByteArrayData data[27];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableModel_t qt_meta_stringdata_QgsAttributeTableModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsAttributeTableModel"
QT_MOC_LITERAL(1, 23, 12), // "modelChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "progress"
QT_MOC_LITERAL(4, 46, 1), // "i"
QT_MOC_LITERAL(5, 48, 5), // "bool&"
QT_MOC_LITERAL(6, 54, 6), // "cancel"
QT_MOC_LITERAL(7, 61, 8), // "finished"
QT_MOC_LITERAL(8, 70, 9), // "loadLayer"
QT_MOC_LITERAL(9, 80, 28), // "fieldConditionalStyleChanged"
QT_MOC_LITERAL(10, 109, 9), // "fieldName"
QT_MOC_LITERAL(11, 119, 13), // "updatedFields"
QT_MOC_LITERAL(12, 133, 16), // "editCommandEnded"
QT_MOC_LITERAL(13, 150, 16), // "attributeDeleted"
QT_MOC_LITERAL(14, 167, 3), // "idx"
QT_MOC_LITERAL(15, 171, 21), // "attributeValueChanged"
QT_MOC_LITERAL(16, 193, 12), // "QgsFeatureId"
QT_MOC_LITERAL(17, 206, 3), // "fid"
QT_MOC_LITERAL(18, 210, 5), // "value"
QT_MOC_LITERAL(19, 216, 15), // "featuresDeleted"
QT_MOC_LITERAL(20, 232, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(21, 246, 4), // "fids"
QT_MOC_LITERAL(22, 251, 12), // "featureAdded"
QT_MOC_LITERAL(23, 264, 12), // "layerDeleted"
QT_MOC_LITERAL(24, 277, 21), // "fieldFormatterRemoved"
QT_MOC_LITERAL(25, 299, 18), // "QgsFieldFormatter*"
QT_MOC_LITERAL(26, 318, 14) // "fieldFormatter"

    },
    "QgsAttributeTableModel\0modelChanged\0"
    "\0progress\0i\0bool&\0cancel\0finished\0"
    "loadLayer\0fieldConditionalStyleChanged\0"
    "fieldName\0updatedFields\0editCommandEnded\0"
    "attributeDeleted\0idx\0attributeValueChanged\0"
    "QgsFeatureId\0fid\0value\0featuresDeleted\0"
    "QgsFeatureIds\0fids\0featureAdded\0"
    "layerDeleted\0fieldFormatterRemoved\0"
    "QgsFieldFormatter*\0fieldFormatter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    2,   80,    2, 0x06 /* Public */,
       7,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   86,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      15,    3,   95,    2, 0x08 /* Private */,
      19,    1,  102,    2, 0x08 /* Private */,
      22,    1,  105,    2, 0x08 /* Private */,
      23,    0,  108,    2, 0x08 /* Private */,
      24,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int, QMetaType::QVariant,   17,   14,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,

       0        // eod
};

void QgsAttributeTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableModel *_t = static_cast<QgsAttributeTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->loadLayer(); break;
        case 4: _t->fieldConditionalStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updatedFields(); break;
        case 6: _t->editCommandEnded(); break;
        case 7: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->featuresDeleted((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 10: _t->featureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 11: _t->layerDeleted(); break;
        case 12: _t->fieldFormatterRemoved((*reinterpret_cast< QgsFieldFormatter*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAttributeTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableModel::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsAttributeTableModel::*)(int , bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableModel::progress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsAttributeTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeTableModel::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsAttributeTableModel.data,
      qt_meta_data_QgsAttributeTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsAttributeTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeTableModel::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsAttributeTableModel::progress(int _t1, bool & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAttributeTableModel::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
