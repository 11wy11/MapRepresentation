/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterminmaxwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgsrasterminmaxwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterminmaxwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRasterMinMaxWidget_t {
    QByteArrayData data[17];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterMinMaxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterMinMaxWidget_t qt_meta_stringdata_QgsRasterMinMaxWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsRasterMinMaxWidget"
QT_MOC_LITERAL(1, 22, 13), // "widgetChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "load"
QT_MOC_LITERAL(4, 42, 6), // "bandNo"
QT_MOC_LITERAL(5, 49, 3), // "min"
QT_MOC_LITERAL(6, 53, 3), // "max"
QT_MOC_LITERAL(7, 57, 31), // "mUserDefinedRadioButton_toggled"
QT_MOC_LITERAL(8, 89, 26), // "mMinMaxRadioButton_toggled"
QT_MOC_LITERAL(9, 116, 1), // "b"
QT_MOC_LITERAL(10, 118, 26), // "mStdDevRadioButton_toggled"
QT_MOC_LITERAL(11, 145, 33), // "mCumulativeCutRadioButton_tog..."
QT_MOC_LITERAL(12, 179, 42), // "mStatisticsExtentCombo_curren..."
QT_MOC_LITERAL(13, 222, 45), // "mCumulativeCutLowerDoubleSpin..."
QT_MOC_LITERAL(14, 268, 45), // "mCumulativeCutUpperDoubleSpin..."
QT_MOC_LITERAL(15, 314, 27), // "mStdDevSpinBox_valueChanged"
QT_MOC_LITERAL(16, 342, 31) // "cboAccuracy_currentIndexChanged"

    },
    "QgsRasterMinMaxWidget\0widgetChanged\0"
    "\0load\0bandNo\0min\0max\0"
    "mUserDefinedRadioButton_toggled\0"
    "mMinMaxRadioButton_toggled\0b\0"
    "mStdDevRadioButton_toggled\0"
    "mCumulativeCutRadioButton_toggled\0"
    "mStatisticsExtentCombo_currentIndexChanged\0"
    "mCumulativeCutLowerDoubleSpinBox_valueChanged\0"
    "mCumulativeCutUpperDoubleSpinBox_valueChanged\0"
    "mStdDevSpinBox_valueChanged\0"
    "cboAccuracy_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterMinMaxWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    3,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      14,    1,   95,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      16,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void QgsRasterMinMaxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRasterMinMaxWidget *_t = static_cast<QgsRasterMinMaxWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetChanged(); break;
        case 1: _t->load((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->mUserDefinedRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->mMinMaxRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mStdDevRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->mCumulativeCutRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mStatisticsExtentCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mCumulativeCutLowerDoubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->mCumulativeCutUpperDoubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->mStdDevSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->cboAccuracy_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsRasterMinMaxWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRasterMinMaxWidget::widgetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsRasterMinMaxWidget::*)(int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRasterMinMaxWidget::load)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRasterMinMaxWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsRasterMinMaxWidget.data,
      qt_meta_data_QgsRasterMinMaxWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRasterMinMaxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterMinMaxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterMinMaxWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsRasterMinMaxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsRasterMinMaxWidget::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsRasterMinMaxWidget::load(int _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
