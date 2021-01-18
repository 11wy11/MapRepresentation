/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptooladvanceddigitizing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmaptooladvanceddigitizing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptooladvanceddigitizing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapToolAdvancedDigitizing_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolAdvancedDigitizing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolAdvancedDigitizing_t qt_meta_stringdata_QgsMapToolAdvancedDigitizing = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsMapToolAdvancedDigitizing"
QT_MOC_LITERAL(1, 29, 15), // "cadPointChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "QgsPointXY"
QT_MOC_LITERAL(4, 57, 5), // "point"
QT_MOC_LITERAL(5, 63, 21) // "onCurrentLayerChanged"

    },
    "QgsMapToolAdvancedDigitizing\0"
    "cadPointChanged\0\0QgsPointXY\0point\0"
    "onCurrentLayerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolAdvancedDigitizing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QgsMapToolAdvancedDigitizing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolAdvancedDigitizing *_t = static_cast<QgsMapToolAdvancedDigitizing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cadPointChanged((*reinterpret_cast< const QgsPointXY(*)>(_a[1]))); break;
        case 1: _t->onCurrentLayerChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMapToolAdvancedDigitizing::staticMetaObject = {
    { &QgsMapToolEdit::staticMetaObject, qt_meta_stringdata_QgsMapToolAdvancedDigitizing.data,
      qt_meta_data_QgsMapToolAdvancedDigitizing,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolAdvancedDigitizing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolAdvancedDigitizing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolAdvancedDigitizing.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolEdit::qt_metacast(_clname);
}

int QgsMapToolAdvancedDigitizing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
