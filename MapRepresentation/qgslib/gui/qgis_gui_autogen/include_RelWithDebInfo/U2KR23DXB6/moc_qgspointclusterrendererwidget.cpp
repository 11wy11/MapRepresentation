/****************************************************************************
** Meta object code from reading C++ file 'qgspointclusterrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgspointclusterrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspointclusterrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPointClusterRendererWidget_t {
    QByteArrayData data[10];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPointClusterRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPointClusterRendererWidget_t qt_meta_stringdata_QgsPointClusterRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsPointClusterRendererWidget"
QT_MOC_LITERAL(1, 30, 37), // "mRendererComboBox_currentInde..."
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 5), // "index"
QT_MOC_LITERAL(4, 75, 29), // "mDistanceSpinBox_valueChanged"
QT_MOC_LITERAL(5, 105, 1), // "d"
QT_MOC_LITERAL(6, 107, 27), // "mDistanceUnitWidget_changed"
QT_MOC_LITERAL(7, 135, 31), // "mRendererSettingsButton_clicked"
QT_MOC_LITERAL(8, 167, 19), // "centerSymbolChanged"
QT_MOC_LITERAL(9, 187, 24) // "updateRendererFromWidget"

    },
    "QgsPointClusterRendererWidget\0"
    "mRendererComboBox_currentIndexChanged\0"
    "\0index\0mDistanceSpinBox_valueChanged\0"
    "d\0mDistanceUnitWidget_changed\0"
    "mRendererSettingsButton_clicked\0"
    "centerSymbolChanged\0updateRendererFromWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPointClusterRendererWidget[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsPointClusterRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPointClusterRendererWidget *_t = static_cast<QgsPointClusterRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mRendererComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mDistanceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mDistanceUnitWidget_changed(); break;
        case 3: _t->mRendererSettingsButton_clicked(); break;
        case 4: _t->centerSymbolChanged(); break;
        case 5: _t->updateRendererFromWidget(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsPointClusterRendererWidget::staticMetaObject = {
    { &QgsRendererWidget::staticMetaObject, qt_meta_stringdata_QgsPointClusterRendererWidget.data,
      qt_meta_data_QgsPointClusterRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPointClusterRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPointClusterRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointClusterRendererWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    return QgsRendererWidget::qt_metacast(_clname);
}

int QgsPointClusterRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRendererWidget::qt_metacall(_c, _id, _a);
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
