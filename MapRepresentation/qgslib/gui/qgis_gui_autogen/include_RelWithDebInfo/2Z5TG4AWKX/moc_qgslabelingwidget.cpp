/****************************************************************************
** Meta object code from reading C++ file 'qgslabelingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/labeling/qgslabelingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslabelingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLabelingWidget_t {
    QByteArrayData data[13];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLabelingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLabelingWidget_t qt_meta_stringdata_QgsLabelingWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsLabelingWidget"
QT_MOC_LITERAL(1, 18, 21), // "auxiliaryFieldCreated"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "setLayer"
QT_MOC_LITERAL(4, 50, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(5, 63, 5), // "layer"
QT_MOC_LITERAL(6, 69, 20), // "writeSettingsToLayer"
QT_MOC_LITERAL(7, 90, 5), // "apply"
QT_MOC_LITERAL(8, 96, 12), // "adaptToLayer"
QT_MOC_LITERAL(9, 109, 13), // "resetSettings"
QT_MOC_LITERAL(10, 123, 16), // "labelModeChanged"
QT_MOC_LITERAL(11, 140, 5), // "index"
QT_MOC_LITERAL(12, 146, 22) // "showEngineConfigDialog"

    },
    "QgsLabelingWidget\0auxiliaryFieldCreated\0"
    "\0setLayer\0QgsMapLayer*\0layer\0"
    "writeSettingsToLayer\0apply\0adaptToLayer\0"
    "resetSettings\0labelModeChanged\0index\0"
    "showEngineConfigDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLabelingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void QgsLabelingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLabelingWidget *_t = static_cast<QgsLabelingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->auxiliaryFieldCreated(); break;
        case 1: _t->setLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: _t->writeSettingsToLayer(); break;
        case 3: _t->apply(); break;
        case 4: _t->adaptToLayer(); break;
        case 5: _t->resetSettings(); break;
        case 6: _t->labelModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->showEngineConfigDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLabelingWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLabelingWidget::auxiliaryFieldCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLabelingWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsLabelingWidget.data,
      qt_meta_data_QgsLabelingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLabelingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLabelingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLabelingWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsLabelingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsLabelingWidget::auxiliaryFieldCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE