/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingtininputlayerswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingtininputlayerswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingtininputlayerswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingTinInputLayersWidget_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingTinInputLayersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingTinInputLayersWidget_t qt_meta_stringdata_QgsProcessingTinInputLayersWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsProcessingTinInputLayersWi..."
QT_MOC_LITERAL(1, 34, 7), // "changed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "onLayerChanged"
QT_MOC_LITERAL(4, 58, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(5, 71, 5), // "layer"
QT_MOC_LITERAL(6, 77, 19), // "onCurrentLayerAdded"
QT_MOC_LITERAL(7, 97, 14) // "onLayersRemove"

    },
    "QgsProcessingTinInputLayersWidget\0"
    "changed\0\0onLayerChanged\0QgsMapLayer*\0"
    "layer\0onCurrentLayerAdded\0onLayersRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingTinInputLayersWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsProcessingTinInputLayersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingTinInputLayersWidget *_t = static_cast<QgsProcessingTinInputLayersWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->onLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: _t->onCurrentLayerAdded(); break;
        case 3: _t->onLayersRemove(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsProcessingTinInputLayersWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingTinInputLayersWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingTinInputLayersWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingTinInputLayersWidget.data,
      qt_meta_data_QgsProcessingTinInputLayersWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingTinInputLayersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingTinInputLayersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingTinInputLayersWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsProcessingTinInputLayersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsProcessingTinInputLayersWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsProcessingTinInputLayersWidgetWrapper_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingTinInputLayersWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingTinInputLayersWidgetWrapper_t qt_meta_stringdata_QgsProcessingTinInputLayersWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 40) // "QgsProcessingTinInputLayersWi..."

    },
    "QgsProcessingTinInputLayersWidgetWrapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingTinInputLayersWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsProcessingTinInputLayersWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingTinInputLayersWidgetWrapper::staticMetaObject = {
    { &QgsAbstractProcessingParameterWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsProcessingTinInputLayersWidgetWrapper.data,
      qt_meta_data_QgsProcessingTinInputLayersWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingTinInputLayersWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingTinInputLayersWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingTinInputLayersWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsProcessingParameterWidgetFactoryInterface"))
        return static_cast< QgsProcessingParameterWidgetFactoryInterface*>(this);
    return QgsAbstractProcessingParameterWidgetWrapper::qt_metacast(_clname);
}

int QgsProcessingTinInputLayersWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractProcessingParameterWidgetWrapper::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
