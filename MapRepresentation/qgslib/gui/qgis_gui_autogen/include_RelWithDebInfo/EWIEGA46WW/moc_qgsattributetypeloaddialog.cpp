/****************************************************************************
** Meta object code from reading C++ file 'qgsattributetypeloaddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsattributetypeloaddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributetypeloaddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeTypeLoadDialog_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTypeLoadDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTypeLoadDialog_t qt_meta_stringdata_QgsAttributeTypeLoadDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsAttributeTypeLoadDialog"
QT_MOC_LITERAL(1, 27, 14), // "fillComboBoxes"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "layerIndex"
QT_MOC_LITERAL(4, 54, 13), // "createPreview"
QT_MOC_LITERAL(5, 68, 10), // "fieldIndex"
QT_MOC_LITERAL(6, 79, 4), // "full"
QT_MOC_LITERAL(7, 84, 19) // "previewButtonPushed"

    },
    "QgsAttributeTypeLoadDialog\0fillComboBoxes\0"
    "\0layerIndex\0createPreview\0fieldIndex\0"
    "full\0previewButtonPushed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTypeLoadDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    2,   37,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x28 /* Private | MethodCloned */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeTypeLoadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTypeLoadDialog *_t = static_cast<QgsAttributeTypeLoadDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fillComboBoxes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->createPreview((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->createPreview((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->previewButtonPushed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeTypeLoadDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAttributeTypeLoadDialog.data,
      qt_meta_data_QgsAttributeTypeLoadDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTypeLoadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTypeLoadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTypeLoadDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAttributeTypeLoadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
