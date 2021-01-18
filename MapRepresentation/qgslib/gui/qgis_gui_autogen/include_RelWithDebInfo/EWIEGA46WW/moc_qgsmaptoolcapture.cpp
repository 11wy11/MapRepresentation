/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolcapture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmaptoolcapture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolcapture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapToolCapture_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolCapture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolCapture_t qt_meta_stringdata_QgsMapToolCapture = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsMapToolCapture"
QT_MOC_LITERAL(1, 18, 28), // "setCircularDigitizingEnabled"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "enable"
QT_MOC_LITERAL(4, 55, 8), // "addError"
QT_MOC_LITERAL(5, 64, 18), // "QgsGeometry::Error"
QT_MOC_LITERAL(6, 83, 5), // "error"
QT_MOC_LITERAL(7, 89, 19), // "currentLayerChanged"
QT_MOC_LITERAL(8, 109, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(9, 122, 5), // "layer"
QT_MOC_LITERAL(10, 128, 20), // "updateExtraSnapLayer"
QT_MOC_LITERAL(11, 149, 13) // "stopCapturing"

    },
    "QgsMapToolCapture\0setCircularDigitizingEnabled\0"
    "\0enable\0addError\0QgsGeometry::Error\0"
    "error\0currentLayerChanged\0QgsMapLayer*\0"
    "layer\0updateExtraSnapLayer\0stopCapturing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolCapture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
      10,    0,   48,    2, 0x08 /* Private */,
      11,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapToolCapture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolCapture *_t = static_cast<QgsMapToolCapture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCircularDigitizingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->addError((*reinterpret_cast< const QgsGeometry::Error(*)>(_a[1]))); break;
        case 2: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 3: _t->updateExtraSnapLayer(); break;
        case 4: _t->stopCapturing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMapToolCapture::staticMetaObject = {
    { &QgsMapToolAdvancedDigitizing::staticMetaObject, qt_meta_stringdata_QgsMapToolCapture.data,
      qt_meta_data_QgsMapToolCapture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolCapture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolCapture.stringdata0))
        return static_cast<void*>(this);
    return QgsMapToolAdvancedDigitizing::qt_metacast(_clname);
}

int QgsMapToolCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapToolAdvancedDigitizing::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
