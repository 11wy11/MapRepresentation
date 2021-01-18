/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingvectortilewriterlayerswidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingvectortilewriterlayerswidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingvectortilewriterlayerswidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingVectorTileWriterLayersPanelWidget_t {
    QByteArrayData data[4];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingVectorTileWriterLayersPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingVectorTileWriterLayersPanelWidget_t qt_meta_stringdata_QgsProcessingVectorTileWriterLayersPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "QgsProcessingVectorTileWriter..."
QT_MOC_LITERAL(1, 47, 14), // "configureLayer"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 9) // "copyLayer"

    },
    "QgsProcessingVectorTileWriterLayersPanelWidget\0"
    "configureLayer\0\0copyLayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingVectorTileWriterLayersPanelWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsProcessingVectorTileWriterLayersPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingVectorTileWriterLayersPanelWidget *_t = static_cast<QgsProcessingVectorTileWriterLayersPanelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configureLayer(); break;
        case 1: _t->copyLayer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingVectorTileWriterLayersPanelWidget::staticMetaObject = {
    { &QgsProcessingMultipleSelectionPanelWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingVectorTileWriterLayersPanelWidget.data,
      qt_meta_data_QgsProcessingVectorTileWriterLayersPanelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingVectorTileWriterLayersPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingVectorTileWriterLayersPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingVectorTileWriterLayersPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsProcessingMultipleSelectionPanelWidget::qt_metacast(_clname);
}

int QgsProcessingVectorTileWriterLayersPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProcessingMultipleSelectionPanelWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidget_t {
    QByteArrayData data[4];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidget_t qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "QgsProcessingVectorTileWriter..."
QT_MOC_LITERAL(1, 42, 7), // "changed"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 10) // "showDialog"

    },
    "QgsProcessingVectorTileWriterLayersWidget\0"
    "changed\0\0showDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingVectorTileWriterLayersWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsProcessingVectorTileWriterLayersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingVectorTileWriterLayersWidget *_t = static_cast<QgsProcessingVectorTileWriterLayersWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->showDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsProcessingVectorTileWriterLayersWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingVectorTileWriterLayersWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingVectorTileWriterLayersWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidget.data,
      qt_meta_data_QgsProcessingVectorTileWriterLayersWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingVectorTileWriterLayersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingVectorTileWriterLayersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsProcessingVectorTileWriterLayersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsProcessingVectorTileWriterLayersWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidgetWrapper_t {
    QByteArrayData data[1];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidgetWrapper_t qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 48) // "QgsProcessingVectorTileWriter..."

    },
    "QgsProcessingVectorTileWriterLayersWidgetWrapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingVectorTileWriterLayersWidgetWrapper[] = {

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

void QgsProcessingVectorTileWriterLayersWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingVectorTileWriterLayersWidgetWrapper::staticMetaObject = {
    { &QgsAbstractProcessingParameterWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidgetWrapper.data,
      qt_meta_data_QgsProcessingVectorTileWriterLayersWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingVectorTileWriterLayersWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingVectorTileWriterLayersWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingVectorTileWriterLayersWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsProcessingParameterWidgetFactoryInterface"))
        return static_cast< QgsProcessingParameterWidgetFactoryInterface*>(this);
    return QgsAbstractProcessingParameterWidgetWrapper::qt_metacast(_clname);
}

int QgsProcessingVectorTileWriterLayersWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractProcessingParameterWidgetWrapper::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
