/****************************************************************************
** Meta object code from reading C++ file 'qgspointcloudrgbrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/pointcloud/qgspointcloudrgbrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspointcloudrgbrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPointCloudRgbRendererWidget_t {
    QByteArrayData data[9];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPointCloudRgbRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPointCloudRgbRendererWidget_t qt_meta_stringdata_QgsPointCloudRgbRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsPointCloudRgbRendererWidget"
QT_MOC_LITERAL(1, 31, 27), // "mRedMinLineEdit_textChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 27), // "mRedMaxLineEdit_textChanged"
QT_MOC_LITERAL(4, 88, 29), // "mGreenMinLineEdit_textChanged"
QT_MOC_LITERAL(5, 118, 29), // "mGreenMaxLineEdit_textChanged"
QT_MOC_LITERAL(6, 148, 28), // "mBlueMinLineEdit_textChanged"
QT_MOC_LITERAL(7, 177, 28), // "mBlueMaxLineEdit_textChanged"
QT_MOC_LITERAL(8, 206, 17) // "emitWidgetChanged"

    },
    "QgsPointCloudRgbRendererWidget\0"
    "mRedMinLineEdit_textChanged\0\0"
    "mRedMaxLineEdit_textChanged\0"
    "mGreenMinLineEdit_textChanged\0"
    "mGreenMaxLineEdit_textChanged\0"
    "mBlueMinLineEdit_textChanged\0"
    "mBlueMaxLineEdit_textChanged\0"
    "emitWidgetChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPointCloudRgbRendererWidget[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void QgsPointCloudRgbRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPointCloudRgbRendererWidget *_t = static_cast<QgsPointCloudRgbRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mRedMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->mRedMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mGreenMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->mGreenMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->mBlueMinLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->mBlueMaxLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->emitWidgetChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsPointCloudRgbRendererWidget::staticMetaObject = {
    { &QgsPointCloudRendererWidget::staticMetaObject, qt_meta_stringdata_QgsPointCloudRgbRendererWidget.data,
      qt_meta_data_QgsPointCloudRgbRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPointCloudRgbRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPointCloudRgbRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointCloudRgbRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPointCloudRendererWidget::qt_metacast(_clname);
}

int QgsPointCloudRgbRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPointCloudRendererWidget::qt_metacall(_c, _id, _a);
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
