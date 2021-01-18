/****************************************************************************
** Meta object code from reading C++ file 'qgssinglebandgrayrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgssinglebandgrayrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssinglebandgrayrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSingleBandGrayRendererWidget_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSingleBandGrayRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSingleBandGrayRendererWidget_t qt_meta_stringdata_QgsSingleBandGrayRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsSingleBandGrayRendererWidget"
QT_MOC_LITERAL(1, 32, 10), // "loadMinMax"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "bandNo"
QT_MOC_LITERAL(4, 51, 3), // "min"
QT_MOC_LITERAL(5, 55, 3), // "max"
QT_MOC_LITERAL(6, 59, 11), // "bandChanged"
QT_MOC_LITERAL(7, 71, 24), // "mMinLineEdit_textChanged"
QT_MOC_LITERAL(8, 96, 24) // "mMaxLineEdit_textChanged"

    },
    "QgsSingleBandGrayRendererWidget\0"
    "loadMinMax\0\0bandNo\0min\0max\0bandChanged\0"
    "mMinLineEdit_textChanged\0"
    "mMaxLineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSingleBandGrayRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x08 /* Private */,
       7,    1,   42,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QgsSingleBandGrayRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSingleBandGrayRendererWidget *_t = static_cast<QgsSingleBandGrayRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadMinMax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->bandChanged(); break;
        case 2: _t->mMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSingleBandGrayRendererWidget::staticMetaObject = {
    { &QgsRasterRendererWidget::staticMetaObject, qt_meta_stringdata_QgsSingleBandGrayRendererWidget.data,
      qt_meta_data_QgsSingleBandGrayRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSingleBandGrayRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSingleBandGrayRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSingleBandGrayRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterRendererWidget::qt_metacast(_clname);
}

int QgsSingleBandGrayRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterRendererWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
