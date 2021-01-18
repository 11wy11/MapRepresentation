/****************************************************************************
** Meta object code from reading C++ file 'qgsrendererrasterpropertieswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgsrendererrasterpropertieswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrendererrasterpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRendererRasterPropertiesWidget_t {
    QByteArrayData data[16];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRendererRasterPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRendererRasterPropertiesWidget_t qt_meta_stringdata_QgsRendererRasterPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsRendererRasterPropertiesWi..."
QT_MOC_LITERAL(1, 34, 15), // "rendererChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "apply"
QT_MOC_LITERAL(4, 57, 11), // "syncToLayer"
QT_MOC_LITERAL(5, 69, 15), // "QgsRasterLayer*"
QT_MOC_LITERAL(6, 85, 5), // "layer"
QT_MOC_LITERAL(7, 91, 31), // "mResetColorRenderingBtn_clicked"
QT_MOC_LITERAL(8, 123, 24), // "toggleSaturationControls"
QT_MOC_LITERAL(9, 148, 13), // "grayscaleMode"
QT_MOC_LITERAL(10, 162, 22), // "toggleColorizeControls"
QT_MOC_LITERAL(11, 185, 15), // "colorizeEnabled"
QT_MOC_LITERAL(12, 201, 24), // "refreshAfterStyleChanged"
QT_MOC_LITERAL(13, 226, 18), // "updateGammaSpinBox"
QT_MOC_LITERAL(14, 245, 5), // "value"
QT_MOC_LITERAL(15, 251, 17) // "updateGammaSlider"

    },
    "QgsRendererRasterPropertiesWidget\0"
    "rendererChanged\0\0apply\0syncToLayer\0"
    "QgsRasterLayer*\0layer\0"
    "mResetColorRenderingBtn_clicked\0"
    "toggleSaturationControls\0grayscaleMode\0"
    "toggleColorizeControls\0colorizeEnabled\0"
    "refreshAfterStyleChanged\0updateGammaSpinBox\0"
    "value\0updateGammaSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRendererRasterPropertiesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    1,   72,    2, 0x08 /* Private */,
      15,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Double,   14,

       0        // eod
};

void QgsRendererRasterPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRendererRasterPropertiesWidget *_t = static_cast<QgsRendererRasterPropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rendererChanged(); break;
        case 1: _t->apply(); break;
        case 2: _t->syncToLayer((*reinterpret_cast< QgsRasterLayer*(*)>(_a[1]))); break;
        case 3: _t->mResetColorRenderingBtn_clicked(); break;
        case 4: _t->toggleSaturationControls((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleColorizeControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->refreshAfterStyleChanged(); break;
        case 7: _t->updateGammaSpinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateGammaSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRendererRasterPropertiesWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsRendererRasterPropertiesWidget.data,
      qt_meta_data_QgsRendererRasterPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRendererRasterPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRendererRasterPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRendererRasterPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsRendererRasterPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
