/****************************************************************************
** Meta object code from reading C++ file 'qgsrenderermeshpropertieswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/mesh/qgsrenderermeshpropertieswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrenderermeshpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRendererMeshPropertiesWidget_t {
    QByteArrayData data[7];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRendererMeshPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRendererMeshPropertiesWidget_t qt_meta_stringdata_QgsRendererMeshPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsRendererMeshPropertiesWidget"
QT_MOC_LITERAL(1, 32, 5), // "apply"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "syncToLayer"
QT_MOC_LITERAL(4, 51, 26), // "onActiveScalarGroupChanged"
QT_MOC_LITERAL(5, 78, 10), // "groupIndex"
QT_MOC_LITERAL(6, 89, 26) // "onActiveVectorGroupChanged"

    },
    "QgsRendererMeshPropertiesWidget\0apply\0"
    "\0syncToLayer\0onActiveScalarGroupChanged\0"
    "groupIndex\0onActiveVectorGroupChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRendererMeshPropertiesWidget[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QgsRendererMeshPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRendererMeshPropertiesWidget *_t = static_cast<QgsRendererMeshPropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->syncToLayer(); break;
        case 2: _t->onActiveScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onActiveVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRendererMeshPropertiesWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsRendererMeshPropertiesWidget.data,
      qt_meta_data_QgsRendererMeshPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRendererMeshPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRendererMeshPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRendererMeshPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsRendererMeshPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
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
