/****************************************************************************
** Meta object code from reading C++ file 'qgsextentwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsextentwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsextentwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExtentWidget_t {
    QByteArrayData data[24];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExtentWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExtentWidget_t qt_meta_stringdata_QgsExtentWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsExtentWidget"
QT_MOC_LITERAL(1, 16, 13), // "extentChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "QgsRectangle"
QT_MOC_LITERAL(4, 44, 1), // "r"
QT_MOC_LITERAL(5, 46, 17), // "validationChanged"
QT_MOC_LITERAL(6, 64, 5), // "valid"
QT_MOC_LITERAL(7, 70, 22), // "toggleDialogVisibility"
QT_MOC_LITERAL(8, 93, 7), // "visible"
QT_MOC_LITERAL(9, 101, 27), // "setOutputExtentFromOriginal"
QT_MOC_LITERAL(10, 129, 26), // "setOutputExtentFromCurrent"
QT_MOC_LITERAL(11, 156, 23), // "setOutputExtentFromUser"
QT_MOC_LITERAL(12, 180, 6), // "extent"
QT_MOC_LITERAL(13, 187, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(14, 216, 3), // "crs"
QT_MOC_LITERAL(15, 220, 24), // "setOutputExtentFromLayer"
QT_MOC_LITERAL(16, 245, 18), // "const QgsMapLayer*"
QT_MOC_LITERAL(17, 264, 5), // "layer"
QT_MOC_LITERAL(18, 270, 31), // "setOutputExtentFromDrawOnCanvas"
QT_MOC_LITERAL(19, 302, 8), // "setRatio"
QT_MOC_LITERAL(20, 311, 5), // "ratio"
QT_MOC_LITERAL(21, 317, 5), // "clear"
QT_MOC_LITERAL(22, 323, 20), // "layerMenuAboutToShow"
QT_MOC_LITERAL(23, 344, 11) // "extentDrawn"

    },
    "QgsExtentWidget\0extentChanged\0\0"
    "QgsRectangle\0r\0validationChanged\0valid\0"
    "toggleDialogVisibility\0visible\0"
    "setOutputExtentFromOriginal\0"
    "setOutputExtentFromCurrent\0"
    "setOutputExtentFromUser\0extent\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "setOutputExtentFromLayer\0const QgsMapLayer*\0"
    "layer\0setOutputExtentFromDrawOnCanvas\0"
    "setRatio\0ratio\0clear\0layerMenuAboutToShow\0"
    "extentDrawn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExtentWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   83,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x0a /* Public */,
      11,    2,   85,    2, 0x0a /* Public */,
      15,    1,   90,    2, 0x0a /* Public */,
      18,    0,   93,    2, 0x0a /* Public */,
      19,    1,   94,    2, 0x0a /* Public */,
      21,    0,   97,    2, 0x0a /* Public */,
      22,    0,   98,    2, 0x08 /* Private */,
      23,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   12,

       0        // eod
};

void QgsExtentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExtentWidget *_t = static_cast<QgsExtentWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->extentChanged((*reinterpret_cast< const QgsRectangle(*)>(_a[1]))); break;
        case 1: _t->validationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->toggleDialogVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setOutputExtentFromOriginal(); break;
        case 4: _t->setOutputExtentFromCurrent(); break;
        case 5: _t->setOutputExtentFromUser((*reinterpret_cast< const QgsRectangle(*)>(_a[1])),(*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[2]))); break;
        case 6: _t->setOutputExtentFromLayer((*reinterpret_cast< const QgsMapLayer*(*)>(_a[1]))); break;
        case 7: _t->setOutputExtentFromDrawOnCanvas(); break;
        case 8: _t->setRatio((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 9: _t->clear(); break;
        case 10: _t->layerMenuAboutToShow(); break;
        case 11: _t->extentDrawn((*reinterpret_cast< const QgsRectangle(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsRectangle >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsRectangle >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsRectangle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExtentWidget::*)(const QgsRectangle & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExtentWidget::extentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsExtentWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExtentWidget::validationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsExtentWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExtentWidget::toggleDialogVisibility)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsExtentWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsExtentWidget.data,
      qt_meta_data_QgsExtentWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExtentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExtentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExtentWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsExtentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsExtentWidget::extentChanged(const QgsRectangle & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsExtentWidget::validationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsExtentWidget::toggleDialogVisibility(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
