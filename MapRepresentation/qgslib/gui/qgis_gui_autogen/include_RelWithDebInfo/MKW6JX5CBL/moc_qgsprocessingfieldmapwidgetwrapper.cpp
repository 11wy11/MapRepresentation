/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingfieldmapwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingfieldmapwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingfieldmapwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingFieldMapPanelWidget_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingFieldMapPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingFieldMapPanelWidget_t qt_meta_stringdata_QgsProcessingFieldMapPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsProcessingFieldMapPanelWidget"
QT_MOC_LITERAL(1, 33, 7), // "changed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "loadFieldsFromLayer"
QT_MOC_LITERAL(4, 62, 8), // "addField"
QT_MOC_LITERAL(5, 71, 15) // "loadLayerFields"

    },
    "QgsProcessingFieldMapPanelWidget\0"
    "changed\0\0loadFieldsFromLayer\0addField\0"
    "loadLayerFields"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingFieldMapPanelWidget[] = {

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
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsProcessingFieldMapPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingFieldMapPanelWidget *_t = static_cast<QgsProcessingFieldMapPanelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->loadFieldsFromLayer(); break;
        case 2: _t->addField(); break;
        case 3: _t->loadLayerFields(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsProcessingFieldMapPanelWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingFieldMapPanelWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingFieldMapPanelWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingFieldMapPanelWidget.data,
      qt_meta_data_QgsProcessingFieldMapPanelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingFieldMapPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingFieldMapPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingFieldMapPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsProcessingFieldMapPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
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
void QgsProcessingFieldMapPanelWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsProcessingFieldMapParameterDefinitionWidget_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingFieldMapParameterDefinitionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingFieldMapParameterDefinitionWidget_t qt_meta_stringdata_QgsProcessingFieldMapParameterDefinitionWidget = {
    {
QT_MOC_LITERAL(0, 0, 46) // "QgsProcessingFieldMapParamete..."

    },
    "QgsProcessingFieldMapParameterDefinitionWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingFieldMapParameterDefinitionWidget[] = {

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

void QgsProcessingFieldMapParameterDefinitionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingFieldMapParameterDefinitionWidget::staticMetaObject = {
    { &QgsProcessingAbstractParameterDefinitionWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingFieldMapParameterDefinitionWidget.data,
      qt_meta_data_QgsProcessingFieldMapParameterDefinitionWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingFieldMapParameterDefinitionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingFieldMapParameterDefinitionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingFieldMapParameterDefinitionWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsProcessingAbstractParameterDefinitionWidget::qt_metacast(_clname);
}

int QgsProcessingFieldMapParameterDefinitionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProcessingAbstractParameterDefinitionWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsProcessingFieldMapWidgetWrapper_t {
    QByteArrayData data[5];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingFieldMapWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingFieldMapWidgetWrapper_t qt_meta_stringdata_QgsProcessingFieldMapWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QgsProcessingFieldMapWidgetWr..."
QT_MOC_LITERAL(1, 35, 26), // "setParentLayerWrapperValue"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 50), // "const QgsAbstractProcessingPa..."
QT_MOC_LITERAL(4, 114, 13) // "parentWrapper"

    },
    "QgsProcessingFieldMapWidgetWrapper\0"
    "setParentLayerWrapperValue\0\0"
    "const QgsAbstractProcessingParameterWidgetWrapper*\0"
    "parentWrapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingFieldMapWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QgsProcessingFieldMapWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingFieldMapWidgetWrapper *_t = static_cast<QgsProcessingFieldMapWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setParentLayerWrapperValue((*reinterpret_cast< const QgsAbstractProcessingParameterWidgetWrapper*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingFieldMapWidgetWrapper::staticMetaObject = {
    { &QgsAbstractProcessingParameterWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsProcessingFieldMapWidgetWrapper.data,
      qt_meta_data_QgsProcessingFieldMapWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingFieldMapWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingFieldMapWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingFieldMapWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsProcessingParameterWidgetFactoryInterface"))
        return static_cast< QgsProcessingParameterWidgetFactoryInterface*>(this);
    return QgsAbstractProcessingParameterWidgetWrapper::qt_metacast(_clname);
}

int QgsProcessingFieldMapWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractProcessingParameterWidgetWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
