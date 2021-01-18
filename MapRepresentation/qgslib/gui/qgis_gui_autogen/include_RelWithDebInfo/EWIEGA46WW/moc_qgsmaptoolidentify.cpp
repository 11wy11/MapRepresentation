/****************************************************************************
** Meta object code from reading C++ file 'qgsmaptoolidentify.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmaptoolidentify.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaptoolidentify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapToolIdentify_t {
    QByteArrayData data[21];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapToolIdentify_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapToolIdentify_t qt_meta_stringdata_QgsMapToolIdentify = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsMapToolIdentify"
QT_MOC_LITERAL(1, 19, 16), // "identifyProgress"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "identifyMessage"
QT_MOC_LITERAL(4, 53, 20), // "changedRasterResults"
QT_MOC_LITERAL(5, 74, 42), // "QList<QgsMapToolIdentify::Ide..."
QT_MOC_LITERAL(6, 117, 13), // "formatChanged"
QT_MOC_LITERAL(7, 131, 15), // "QgsRasterLayer*"
QT_MOC_LITERAL(8, 147, 5), // "layer"
QT_MOC_LITERAL(9, 153, 12), // "IdentifyMode"
QT_MOC_LITERAL(10, 166, 17), // "DefaultQgsSetting"
QT_MOC_LITERAL(11, 184, 11), // "ActiveLayer"
QT_MOC_LITERAL(12, 196, 18), // "TopDownStopAtFirst"
QT_MOC_LITERAL(13, 215, 10), // "TopDownAll"
QT_MOC_LITERAL(14, 226, 14), // "LayerSelection"
QT_MOC_LITERAL(15, 241, 9), // "LayerType"
QT_MOC_LITERAL(16, 251, 11), // "VectorLayer"
QT_MOC_LITERAL(17, 263, 11), // "RasterLayer"
QT_MOC_LITERAL(18, 275, 9), // "MeshLayer"
QT_MOC_LITERAL(19, 285, 15), // "VectorTileLayer"
QT_MOC_LITERAL(20, 301, 9) // "AllLayers"

    },
    "QgsMapToolIdentify\0identifyProgress\0"
    "\0identifyMessage\0changedRasterResults\0"
    "QList<QgsMapToolIdentify::IdentifyResult>&\0"
    "formatChanged\0QgsRasterLayer*\0layer\0"
    "IdentifyMode\0DefaultQgsSetting\0"
    "ActiveLayer\0TopDownStopAtFirst\0"
    "TopDownAll\0LayerSelection\0LayerType\0"
    "VectorLayer\0RasterLayer\0MeshLayer\0"
    "VectorTileLayer\0AllLayers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapToolIdentify[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       3,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

 // enums: name, flags, count, data
       9, 0x0,    5,   56,
      15, 0x1,    5,   66,

 // enum data: key, value
      10, uint(QgsMapToolIdentify::DefaultQgsSetting),
      11, uint(QgsMapToolIdentify::ActiveLayer),
      12, uint(QgsMapToolIdentify::TopDownStopAtFirst),
      13, uint(QgsMapToolIdentify::TopDownAll),
      14, uint(QgsMapToolIdentify::LayerSelection),
      16, uint(QgsMapToolIdentify::VectorLayer),
      17, uint(QgsMapToolIdentify::RasterLayer),
      18, uint(QgsMapToolIdentify::MeshLayer),
      19, uint(QgsMapToolIdentify::VectorTileLayer),
      20, uint(QgsMapToolIdentify::AllLayers),

       0        // eod
};

void QgsMapToolIdentify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapToolIdentify *_t = static_cast<QgsMapToolIdentify *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->identifyProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->identifyMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changedRasterResults((*reinterpret_cast< QList<QgsMapToolIdentify::IdentifyResult>(*)>(_a[1]))); break;
        case 3: _t->formatChanged((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMapToolIdentify::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapToolIdentify::identifyProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsMapToolIdentify::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapToolIdentify::identifyMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsMapToolIdentify::*)(QList<QgsMapToolIdentify::IdentifyResult> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMapToolIdentify::changedRasterResults)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMapToolIdentify::staticMetaObject = {
    { &QgsMapTool::staticMetaObject, qt_meta_stringdata_QgsMapToolIdentify.data,
      qt_meta_data_QgsMapToolIdentify,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapToolIdentify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapToolIdentify::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapToolIdentify.stringdata0))
        return static_cast<void*>(this);
    return QgsMapTool::qt_metacast(_clname);
}

int QgsMapToolIdentify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapTool::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsMapToolIdentify::identifyProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapToolIdentify::identifyMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapToolIdentify::changedRasterResults(QList<QgsMapToolIdentify::IdentifyResult> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
