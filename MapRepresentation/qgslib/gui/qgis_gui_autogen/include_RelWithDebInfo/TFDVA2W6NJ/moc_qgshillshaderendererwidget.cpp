/****************************************************************************
** Meta object code from reading C++ file 'qgshillshaderendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgshillshaderendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgshillshaderendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsHillshadeRendererWidget_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHillshadeRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHillshadeRendererWidget_t qt_meta_stringdata_QgsHillshadeRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsHillshadeRendererWidget"
QT_MOC_LITERAL(1, 27, 11), // "setAltitude"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "altitude"
QT_MOC_LITERAL(4, 49, 10), // "setAzimuth"
QT_MOC_LITERAL(5, 60, 7), // "azimuth"
QT_MOC_LITERAL(6, 68, 10), // "setZFactor"
QT_MOC_LITERAL(7, 79, 7), // "zfactor"
QT_MOC_LITERAL(8, 87, 19), // "setMultiDirectional"
QT_MOC_LITERAL(9, 107, 18), // "isMultiDirectional"
QT_MOC_LITERAL(10, 126, 21), // "mLightAzimuth_updated"
QT_MOC_LITERAL(11, 148, 5), // "value"
QT_MOC_LITERAL(12, 154, 25) // "mLightAzimuthDial_updated"

    },
    "QgsHillshadeRendererWidget\0setAltitude\0"
    "\0altitude\0setAzimuth\0azimuth\0setZFactor\0"
    "zfactor\0setMultiDirectional\0"
    "isMultiDirectional\0mLightAzimuth_updated\0"
    "value\0mLightAzimuthDial_updated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHillshadeRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x08 /* Private */,
      12,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void QgsHillshadeRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHillshadeRendererWidget *_t = static_cast<QgsHillshadeRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAltitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setAzimuth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setZFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMultiDirectional((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mLightAzimuth_updated((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mLightAzimuthDial_updated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsHillshadeRendererWidget::staticMetaObject = {
    { &QgsRasterRendererWidget::staticMetaObject, qt_meta_stringdata_QgsHillshadeRendererWidget.data,
      qt_meta_data_QgsHillshadeRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHillshadeRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHillshadeRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHillshadeRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterRendererWidget::qt_metacast(_clname);
}

int QgsHillshadeRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
