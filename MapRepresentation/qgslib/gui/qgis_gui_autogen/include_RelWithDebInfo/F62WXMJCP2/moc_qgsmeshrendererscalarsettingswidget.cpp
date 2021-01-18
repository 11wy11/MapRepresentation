/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshrendererscalarsettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/mesh/qgsmeshrendererscalarsettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshrendererscalarsettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshRendererScalarSettingsWidget_t {
    QByteArrayData data[7];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshRendererScalarSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshRendererScalarSettingsWidget_t qt_meta_stringdata_QgsMeshRendererScalarSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QgsMeshRendererScalarSettings..."
QT_MOC_LITERAL(1, 36, 13), // "widgetChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "minMaxChanged"
QT_MOC_LITERAL(4, 65, 12), // "minMaxEdited"
QT_MOC_LITERAL(5, 78, 30), // "recalculateMinMaxButtonClicked"
QT_MOC_LITERAL(6, 109, 30) // "onEdgeStrokeWidthMethodChanged"

    },
    "QgsMeshRendererScalarSettingsWidget\0"
    "widgetChanged\0\0minMaxChanged\0minMaxEdited\0"
    "recalculateMinMaxButtonClicked\0"
    "onEdgeStrokeWidthMethodChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshRendererScalarSettingsWidget[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMeshRendererScalarSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshRendererScalarSettingsWidget *_t = static_cast<QgsMeshRendererScalarSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetChanged(); break;
        case 1: _t->minMaxChanged(); break;
        case 2: _t->minMaxEdited(); break;
        case 3: _t->recalculateMinMaxButtonClicked(); break;
        case 4: _t->onEdgeStrokeWidthMethodChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMeshRendererScalarSettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshRendererScalarSettingsWidget::widgetChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshRendererScalarSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsMeshRendererScalarSettingsWidget.data,
      qt_meta_data_QgsMeshRendererScalarSettingsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshRendererScalarSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshRendererScalarSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshRendererScalarSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsMeshRendererScalarSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QgsMeshRendererScalarSettingsWidget::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
