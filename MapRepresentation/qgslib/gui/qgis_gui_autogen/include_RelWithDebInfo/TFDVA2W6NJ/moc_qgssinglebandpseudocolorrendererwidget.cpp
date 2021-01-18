/****************************************************************************
** Meta object code from reading C++ file 'qgssinglebandpseudocolorrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/raster/qgssinglebandpseudocolorrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssinglebandpseudocolorrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSingleBandPseudoColorRendererWidget_t {
    QByteArrayData data[13];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSingleBandPseudoColorRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSingleBandPseudoColorRendererWidget_t qt_meta_stringdata_QgsSingleBandPseudoColorRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QgsSingleBandPseudoColorRende..."
QT_MOC_LITERAL(1, 39, 10), // "loadMinMax"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "bandNo"
QT_MOC_LITERAL(4, 58, 3), // "min"
QT_MOC_LITERAL(5, 62, 3), // "max"
QT_MOC_LITERAL(6, 66, 18), // "loadMinMaxFromTree"
QT_MOC_LITERAL(7, 85, 11), // "bandChanged"
QT_MOC_LITERAL(8, 97, 24), // "mMinLineEdit_textChanged"
QT_MOC_LITERAL(9, 122, 24), // "mMaxLineEdit_textChanged"
QT_MOC_LITERAL(10, 147, 23), // "mMinLineEdit_textEdited"
QT_MOC_LITERAL(11, 171, 4), // "text"
QT_MOC_LITERAL(12, 176, 23) // "mMaxLineEdit_textEdited"

    },
    "QgsSingleBandPseudoColorRendererWidget\0"
    "loadMinMax\0\0bandNo\0min\0max\0"
    "loadMinMaxFromTree\0bandChanged\0"
    "mMinLineEdit_textChanged\0"
    "mMaxLineEdit_textChanged\0"
    "mMinLineEdit_textEdited\0text\0"
    "mMaxLineEdit_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSingleBandPseudoColorRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x0a /* Public */,
       6,    2,   56,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void QgsSingleBandPseudoColorRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSingleBandPseudoColorRendererWidget *_t = static_cast<QgsSingleBandPseudoColorRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadMinMax((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->loadMinMaxFromTree((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->bandChanged(); break;
        case 3: _t->mMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->mMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->mMinLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->mMaxLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSingleBandPseudoColorRendererWidget::staticMetaObject = {
    { &QgsRasterRendererWidget::staticMetaObject, qt_meta_stringdata_QgsSingleBandPseudoColorRendererWidget.data,
      qt_meta_data_QgsSingleBandPseudoColorRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSingleBandPseudoColorRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSingleBandPseudoColorRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSingleBandPseudoColorRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRasterRendererWidget::qt_metacast(_clname);
}

int QgsSingleBandPseudoColorRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
