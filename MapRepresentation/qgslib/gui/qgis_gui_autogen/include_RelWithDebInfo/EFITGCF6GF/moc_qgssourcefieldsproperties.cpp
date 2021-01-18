/****************************************************************************
** Meta object code from reading C++ file 'qgssourcefieldsproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vector/qgssourcefieldsproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssourcefieldsproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSourceFieldsProperties_t {
    QByteArrayData data[15];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSourceFieldsProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSourceFieldsProperties_t qt_meta_stringdata_QgsSourceFieldsProperties = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsSourceFieldsProperties"
QT_MOC_LITERAL(1, 26, 13), // "toggleEditing"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "updateExpression"
QT_MOC_LITERAL(4, 58, 14), // "editingToggled"
QT_MOC_LITERAL(5, 73, 19), // "addAttributeClicked"
QT_MOC_LITERAL(6, 93, 22), // "deleteAttributeClicked"
QT_MOC_LITERAL(7, 116, 21), // "calculateFieldClicked"
QT_MOC_LITERAL(8, 138, 14), // "attributeAdded"
QT_MOC_LITERAL(9, 153, 3), // "idx"
QT_MOC_LITERAL(10, 157, 16), // "attributeDeleted"
QT_MOC_LITERAL(11, 174, 25), // "attributesListCellChanged"
QT_MOC_LITERAL(12, 200, 3), // "row"
QT_MOC_LITERAL(13, 204, 6), // "column"
QT_MOC_LITERAL(14, 211, 25) // "attributesListCellPressed"

    },
    "QgsSourceFieldsProperties\0toggleEditing\0"
    "\0updateExpression\0editingToggled\0"
    "addAttributeClicked\0deleteAttributeClicked\0"
    "calculateFieldClicked\0attributeAdded\0"
    "idx\0attributeDeleted\0attributesListCellChanged\0"
    "row\0column\0attributesListCellPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSourceFieldsProperties[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    2,   76,    2, 0x08 /* Private */,
      14,    2,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,

       0        // eod
};

void QgsSourceFieldsProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSourceFieldsProperties *_t = static_cast<QgsSourceFieldsProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleEditing(); break;
        case 1: _t->updateExpression(); break;
        case 2: _t->editingToggled(); break;
        case 3: _t->addAttributeClicked(); break;
        case 4: _t->deleteAttributeClicked(); break;
        case 5: _t->calculateFieldClicked(); break;
        case 6: _t->attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->attributesListCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->attributesListCellPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSourceFieldsProperties::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSourceFieldsProperties::toggleEditing)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSourceFieldsProperties::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsSourceFieldsProperties.data,
      qt_meta_data_QgsSourceFieldsProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSourceFieldsProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSourceFieldsProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSourceFieldsProperties.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsSourceFieldsProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QgsSourceFieldsProperties::toggleEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
