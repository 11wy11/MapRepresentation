/****************************************************************************
** Meta object code from reading C++ file 'qgscurveeditorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgscurveeditorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscurveeditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsHistogramValuesGatherer_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsHistogramValuesGatherer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsHistogramValuesGatherer_t qt_meta_stringdata_QgsHistogramValuesGatherer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsHistogramValuesGatherer"
QT_MOC_LITERAL(1, 27, 19), // "calculatedHistogram"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "QgsHistogramValuesGatherer\0"
    "calculatedHistogram\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsHistogramValuesGatherer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsHistogramValuesGatherer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsHistogramValuesGatherer *_t = static_cast<QgsHistogramValuesGatherer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculatedHistogram(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsHistogramValuesGatherer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsHistogramValuesGatherer::calculatedHistogram)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsHistogramValuesGatherer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QgsHistogramValuesGatherer.data,
      qt_meta_data_QgsHistogramValuesGatherer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsHistogramValuesGatherer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsHistogramValuesGatherer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsHistogramValuesGatherer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QgsHistogramValuesGatherer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsHistogramValuesGatherer::calculatedHistogram()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsCurveEditorWidget_t {
    QByteArrayData data[11];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCurveEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCurveEditorWidget_t qt_meta_stringdata_QgsCurveEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsCurveEditorWidget"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "setMinHistogramValueRange"
QT_MOC_LITERAL(4, 56, 13), // "minValueRange"
QT_MOC_LITERAL(5, 70, 25), // "setMaxHistogramValueRange"
QT_MOC_LITERAL(6, 96, 13), // "maxValueRange"
QT_MOC_LITERAL(7, 110, 14), // "plotMousePress"
QT_MOC_LITERAL(8, 125, 5), // "point"
QT_MOC_LITERAL(9, 131, 16), // "plotMouseRelease"
QT_MOC_LITERAL(10, 148, 13) // "plotMouseMove"

    },
    "QgsCurveEditorWidget\0changed\0\0"
    "setMinHistogramValueRange\0minValueRange\0"
    "setMaxHistogramValueRange\0maxValueRange\0"
    "plotMousePress\0point\0plotMouseRelease\0"
    "plotMouseMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCurveEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QPointF,    8,
    QMetaType::Void, QMetaType::QPointF,    8,
    QMetaType::Void, QMetaType::QPointF,    8,

       0        // eod
};

void QgsCurveEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCurveEditorWidget *_t = static_cast<QgsCurveEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setMinHistogramValueRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setMaxHistogramValueRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->plotMousePress((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->plotMouseRelease((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->plotMouseMove((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsCurveEditorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCurveEditorWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsCurveEditorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsCurveEditorWidget.data,
      qt_meta_data_QgsCurveEditorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCurveEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCurveEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCurveEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsCurveEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsCurveEditorWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsCurveEditorPlotEventFilter_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCurveEditorPlotEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCurveEditorPlotEventFilter_t qt_meta_stringdata_QgsCurveEditorPlotEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsCurveEditorPlotEventFilter"
QT_MOC_LITERAL(1, 30, 10), // "mousePress"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "mouseRelease"
QT_MOC_LITERAL(4, 55, 9) // "mouseMove"

    },
    "QgsCurveEditorPlotEventFilter\0mousePress\0"
    "\0mouseRelease\0mouseMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCurveEditorPlotEventFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,
       4,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::QPointF,    2,

       0        // eod
};

void QgsCurveEditorPlotEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCurveEditorPlotEventFilter *_t = static_cast<QgsCurveEditorPlotEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePress((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->mouseRelease((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsCurveEditorPlotEventFilter::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCurveEditorPlotEventFilter::mousePress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsCurveEditorPlotEventFilter::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCurveEditorPlotEventFilter::mouseRelease)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsCurveEditorPlotEventFilter::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCurveEditorPlotEventFilter::mouseMove)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsCurveEditorPlotEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCurveEditorPlotEventFilter.data,
      qt_meta_data_QgsCurveEditorPlotEventFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCurveEditorPlotEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCurveEditorPlotEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCurveEditorPlotEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QgsCurveEditorPlotEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QgsCurveEditorPlotEventFilter::mousePress(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsCurveEditorPlotEventFilter::mouseRelease(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsCurveEditorPlotEventFilter::mouseMove(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
