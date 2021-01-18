/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreemapcanvasbridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layertree/qgslayertreemapcanvasbridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreemapcanvasbridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayerTreeMapCanvasBridge_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeMapCanvasBridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeMapCanvasBridge_t qt_meta_stringdata_QgsLayerTreeMapCanvasBridge = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsLayerTreeMapCanvasBridge"
QT_MOC_LITERAL(1, 28, 19), // "canvasLayersChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(4, 69, 6), // "layers"
QT_MOC_LITERAL(5, 76, 21), // "nodeVisibilityChanged"
QT_MOC_LITERAL(6, 98, 25), // "nodeCustomPropertyChanged"
QT_MOC_LITERAL(7, 124, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(8, 142, 4), // "node"
QT_MOC_LITERAL(9, 147, 3), // "key"
QT_MOC_LITERAL(10, 151, 11), // "layersAdded"
QT_MOC_LITERAL(11, 163, 15) // "setCanvasLayers"

    },
    "QgsLayerTreeMapCanvasBridge\0"
    "canvasLayersChanged\0\0QList<QgsMapLayer*>\0"
    "layers\0nodeVisibilityChanged\0"
    "nodeCustomPropertyChanged\0QgsLayerTreeNode*\0"
    "node\0key\0layersAdded\0setCanvasLayers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeMapCanvasBridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,
      10,    1,   48,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void QgsLayerTreeMapCanvasBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeMapCanvasBridge *_t = static_cast<QgsLayerTreeMapCanvasBridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canvasLayersChanged((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 1: _t->nodeVisibilityChanged(); break;
        case 2: _t->nodeCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->layersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 4: _t->setCanvasLayers(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLayerTreeMapCanvasBridge::*)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayerTreeMapCanvasBridge::canvasLayersChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayerTreeMapCanvasBridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeMapCanvasBridge.data,
      qt_meta_data_QgsLayerTreeMapCanvasBridge,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayerTreeMapCanvasBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeMapCanvasBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeMapCanvasBridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeMapCanvasBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeMapCanvasBridge::canvasLayersChanged(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
