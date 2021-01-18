/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshrendereractivedatasetwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/mesh/qgsmeshrendereractivedatasetwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshrendereractivedatasetwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget_t {
    QByteArrayData data[11];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget_t qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QgsMeshRendererActiveDatasetW..."
QT_MOC_LITERAL(1, 35, 24), // "activeScalarGroupChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 10), // "groupIndex"
QT_MOC_LITERAL(4, 72, 24), // "activeVectorGroupChanged"
QT_MOC_LITERAL(5, 97, 13), // "widgetChanged"
QT_MOC_LITERAL(6, 111, 26), // "onActiveScalarGroupChanged"
QT_MOC_LITERAL(7, 138, 26), // "onActiveVectorGroupChanged"
QT_MOC_LITERAL(8, 165, 8), // "metadata"
QT_MOC_LITERAL(9, 174, 19), // "QgsMeshDatasetIndex"
QT_MOC_LITERAL(10, 194, 12) // "datasetIndex"

    },
    "QgsMeshRendererActiveDatasetWidget\0"
    "activeScalarGroupChanged\0\0groupIndex\0"
    "activeVectorGroupChanged\0widgetChanged\0"
    "onActiveScalarGroupChanged\0"
    "onActiveVectorGroupChanged\0metadata\0"
    "QgsMeshDatasetIndex\0datasetIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshRendererActiveDatasetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::QString, 0x80000000 | 9,   10,

       0        // eod
};

void QgsMeshRendererActiveDatasetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshRendererActiveDatasetWidget *_t = static_cast<QgsMeshRendererActiveDatasetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->widgetChanged(); break;
        case 3: _t->onActiveScalarGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onActiveVectorGroupChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { QString _r = _t->metadata((*reinterpret_cast< QgsMeshDatasetIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMeshRendererActiveDatasetWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererActiveDatasetWidget::activeScalarGroupChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsMeshRendererActiveDatasetWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererActiveDatasetWidget::activeVectorGroupChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsMeshRendererActiveDatasetWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererActiveDatasetWidget::widgetChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshRendererActiveDatasetWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget.data,
      qt_meta_data_QgsMeshRendererActiveDatasetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshRendererActiveDatasetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshRendererActiveDatasetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshRendererActiveDatasetWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsMeshRendererActiveDatasetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsMeshRendererActiveDatasetWidget::activeScalarGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMeshRendererActiveDatasetWidget::activeVectorGroupChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMeshRendererActiveDatasetWidget::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
