/****************************************************************************
** Meta object code from reading C++ file 'qgsscalevisibilitydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsscalevisibilitydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsscalevisibilitydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsScaleVisibilityDialog_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsScaleVisibilityDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsScaleVisibilityDialog_t qt_meta_stringdata_QgsScaleVisibilityDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsScaleVisibilityDialog"
QT_MOC_LITERAL(1, 25, 17), // "setScaleVisiblity"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 18), // "hasScaleVisibility"
QT_MOC_LITERAL(4, 63, 15), // "setMinimumScale"
QT_MOC_LITERAL(5, 79, 5), // "scale"
QT_MOC_LITERAL(6, 85, 15), // "setMaximumScale"
QT_MOC_LITERAL(7, 101, 12), // "minimumScale"
QT_MOC_LITERAL(8, 114, 12) // "maximumScale"

    },
    "QgsScaleVisibilityDialog\0setScaleVisiblity\0"
    "\0hasScaleVisibility\0setMinimumScale\0"
    "scale\0setMaximumScale\0minimumScale\0"
    "maximumScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsScaleVisibilityDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00095003,
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,

       0        // eod
};

void QgsScaleVisibilityDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsScaleVisibilityDialog *_t = static_cast<QgsScaleVisibilityDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setScaleVisiblity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setMinimumScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setMaximumScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsScaleVisibilityDialog *_t = static_cast<QgsScaleVisibilityDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasScaleVisibility(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->minimumScale(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maximumScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsScaleVisibilityDialog *_t = static_cast<QgsScaleVisibilityDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScaleVisiblity(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setMinimumScale(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaximumScale(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsScaleVisibilityDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsScaleVisibilityDialog.data,
      qt_meta_data_QgsScaleVisibilityDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsScaleVisibilityDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsScaleVisibilityDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsScaleVisibilityDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsScaleVisibilityDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
