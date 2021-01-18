/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterhistogramwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgsrasterhistogramwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterhistogramwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRasterHistogramWidget_t {
    QByteArrayData data[17];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterHistogramWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterHistogramWidget_t qt_meta_stringdata_QgsRasterHistogramWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsRasterHistogramWidget"
QT_MOC_LITERAL(1, 25, 16), // "refreshHistogram"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "apply"
QT_MOC_LITERAL(4, 49, 26), // "mSaveAsImageButton_clicked"
QT_MOC_LITERAL(5, 76, 32), // "cboHistoBand_currentIndexChanged"
QT_MOC_LITERAL(6, 109, 13), // "applyHistoMin"
QT_MOC_LITERAL(7, 123, 13), // "applyHistoMax"
QT_MOC_LITERAL(8, 137, 19), // "btnHistoMin_toggled"
QT_MOC_LITERAL(9, 157, 19), // "btnHistoMax_toggled"
QT_MOC_LITERAL(10, 177, 19), // "histoPickerSelected"
QT_MOC_LITERAL(11, 197, 23), // "histoPickerSelectedQwt5"
QT_MOC_LITERAL(12, 221, 14), // "QwtDoublePoint"
QT_MOC_LITERAL(13, 236, 20), // "histoActionTriggered"
QT_MOC_LITERAL(14, 257, 8), // "QAction*"
QT_MOC_LITERAL(15, 266, 18), // "updateHistoMarkers"
QT_MOC_LITERAL(16, 285, 23) // "btnHistoCompute_clicked"

    },
    "QgsRasterHistogramWidget\0refreshHistogram\0"
    "\0apply\0mSaveAsImageButton_clicked\0"
    "cboHistoBand_currentIndexChanged\0"
    "applyHistoMin\0applyHistoMax\0"
    "btnHistoMin_toggled\0btnHistoMax_toggled\0"
    "histoPickerSelected\0histoPickerSelectedQwt5\0"
    "QwtDoublePoint\0histoActionTriggered\0"
    "QAction*\0updateHistoMarkers\0"
    "btnHistoCompute_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterHistogramWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsRasterHistogramWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRasterHistogramWidget *_t = static_cast<QgsRasterHistogramWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshHistogram(); break;
        case 1: _t->apply(); break;
        case 2: _t->mSaveAsImageButton_clicked(); break;
        case 3: _t->cboHistoBand_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->applyHistoMin(); break;
        case 5: _t->applyHistoMax(); break;
        case 6: _t->btnHistoMin_toggled(); break;
        case 7: _t->btnHistoMax_toggled(); break;
        case 8: _t->histoPickerSelected((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 9: _t->histoPickerSelectedQwt5((*reinterpret_cast< QwtDoublePoint(*)>(_a[1]))); break;
        case 10: _t->histoActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->updateHistoMarkers(); break;
        case 12: _t->btnHistoCompute_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRasterHistogramWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsRasterHistogramWidget.data,
      qt_meta_data_QgsRasterHistogramWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRasterHistogramWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterHistogramWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterHistogramWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsRasterHistogramWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
