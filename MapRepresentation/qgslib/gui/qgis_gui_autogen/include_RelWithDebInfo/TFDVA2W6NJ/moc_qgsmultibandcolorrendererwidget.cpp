/****************************************************************************
** Meta object code from reading C++ file 'qgsmultibandcolorrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgsmultibandcolorrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmultibandcolorrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMultiBandColorRendererWidget_t {
    QByteArrayData data[13];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMultiBandColorRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMultiBandColorRendererWidget_t qt_meta_stringdata_QgsMultiBandColorRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsMultiBandColorRendererWidget"
QT_MOC_LITERAL(1, 32, 10), // "loadMinMax"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "bandNo"
QT_MOC_LITERAL(4, 51, 3), // "min"
QT_MOC_LITERAL(5, 55, 3), // "max"
QT_MOC_LITERAL(6, 59, 13), // "onBandChanged"
QT_MOC_LITERAL(7, 73, 27), // "mRedMinLineEdit_textChanged"
QT_MOC_LITERAL(8, 101, 27), // "mRedMaxLineEdit_textChanged"
QT_MOC_LITERAL(9, 129, 29), // "mGreenMinLineEdit_textChanged"
QT_MOC_LITERAL(10, 159, 29), // "mGreenMaxLineEdit_textChanged"
QT_MOC_LITERAL(11, 189, 28), // "mBlueMinLineEdit_textChanged"
QT_MOC_LITERAL(12, 218, 28) // "mBlueMaxLineEdit_textChanged"

    },
    "QgsMultiBandColorRendererWidget\0"
    "loadMinMax\0\0bandNo\0min\0max\0onBandChanged\0"
    "mRedMinLineEdit_textChanged\0"
    "mRedMaxLineEdit_textChanged\0"
    "mGreenMinLineEdit_textChanged\0"
    "mGreenMaxLineEdit_textChanged\0"
    "mBlueMinLineEdit_textChanged\0"
    "mBlueMaxLineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMultiBandColorRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QgsMultiBandColorRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMultiBandColorRendererWidget *_t = static_cast<QgsMultiBandColorRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadMinMax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->onBandChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mRedMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mRedMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->mGreenMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->mGreenMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->mBlueMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->mBlueMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMultiBandColorRendererWidget::staticMetaObject = {
    { &QgsRasterRendererWidget::staticMetaObject, qt_meta_stringdata_QgsMultiBandColorRendererWidget.data,
      qt_meta_data_QgsMultiBandColorRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMultiBandColorRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMultiBandColorRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMultiBandColorRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterRendererWidget::qt_metacast(_clname);
}

int QgsMultiBandColorRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterRendererWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
