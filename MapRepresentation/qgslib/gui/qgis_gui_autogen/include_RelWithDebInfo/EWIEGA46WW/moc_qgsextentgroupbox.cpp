/****************************************************************************
** Meta object code from reading C++ file 'qgsextentgroupbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsextentgroupbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsextentgroupbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExtentGroupBox_t {
    QByteArrayData data[22];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExtentGroupBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExtentGroupBox_t qt_meta_stringdata_QgsExtentGroupBox = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsExtentGroupBox"
QT_MOC_LITERAL(1, 18, 13), // "extentChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "QgsRectangle"
QT_MOC_LITERAL(4, 46, 1), // "r"
QT_MOC_LITERAL(5, 48, 27), // "setOutputExtentFromOriginal"
QT_MOC_LITERAL(6, 76, 26), // "setOutputExtentFromCurrent"
QT_MOC_LITERAL(7, 103, 23), // "setOutputExtentFromUser"
QT_MOC_LITERAL(8, 127, 6), // "extent"
QT_MOC_LITERAL(9, 134, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(10, 163, 3), // "crs"
QT_MOC_LITERAL(11, 167, 24), // "setOutputExtentFromLayer"
QT_MOC_LITERAL(12, 192, 18), // "const QgsMapLayer*"
QT_MOC_LITERAL(13, 211, 5), // "layer"
QT_MOC_LITERAL(14, 217, 31), // "setOutputExtentFromDrawOnCanvas"
QT_MOC_LITERAL(15, 249, 8), // "setRatio"
QT_MOC_LITERAL(16, 258, 5), // "ratio"
QT_MOC_LITERAL(17, 264, 15), // "groupBoxClicked"
QT_MOC_LITERAL(18, 280, 19), // "widgetExtentChanged"
QT_MOC_LITERAL(19, 300, 17), // "validationChanged"
QT_MOC_LITERAL(20, 318, 5), // "valid"
QT_MOC_LITERAL(21, 324, 9) // "titleBase"

    },
    "QgsExtentGroupBox\0extentChanged\0\0"
    "QgsRectangle\0r\0setOutputExtentFromOriginal\0"
    "setOutputExtentFromCurrent\0"
    "setOutputExtentFromUser\0extent\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "setOutputExtentFromLayer\0const QgsMapLayer*\0"
    "layer\0setOutputExtentFromDrawOnCanvas\0"
    "setRatio\0ratio\0groupBoxClicked\0"
    "widgetExtentChanged\0validationChanged\0"
    "valid\0titleBase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExtentGroupBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    2,   69,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x0a /* Public */,
      15,    1,   78,    2, 0x0a /* Public */,
      17,    0,   81,    2, 0x08 /* Private */,
      18,    0,   82,    2, 0x08 /* Private */,
      19,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00095103,

       0        // eod
};

void QgsExtentGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExtentGroupBox *_t = static_cast<QgsExtentGroupBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->extentChanged((*reinterpret_cast< const QgsRectangle(*)>(_a[1]))); break;
        case 1: _t->setOutputExtentFromOriginal(); break;
        case 2: _t->setOutputExtentFromCurrent(); break;
        case 3: _t->setOutputExtentFromUser((*reinterpret_cast< const QgsRectangle(*)>(_a[1])),(*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[2]))); break;
        case 4: _t->setOutputExtentFromLayer((*reinterpret_cast< const QgsMapLayer*(*)>(_a[1]))); break;
        case 5: _t->setOutputExtentFromDrawOnCanvas(); break;
        case 6: _t->setRatio((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 7: _t->groupBoxClicked(); break;
        case 8: _t->widgetExtentChanged(); break;
        case 9: _t->validationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsRectangle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExtentGroupBox::*)(const QgsRectangle & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExtentGroupBox::extentChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsExtentGroupBox *_t = static_cast<QgsExtentGroupBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->titleBase(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsExtentGroupBox *_t = static_cast<QgsExtentGroupBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitleBase(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsExtentGroupBox::staticMetaObject = {
    { &QgsCollapsibleGroupBox::staticMetaObject, qt_meta_stringdata_QgsExtentGroupBox.data,
      qt_meta_data_QgsExtentGroupBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExtentGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExtentGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExtentGroupBox.stringdata0))
        return static_cast<void*>(this);
    return QgsCollapsibleGroupBox::qt_metacast(_clname);
}

int QgsExtentGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCollapsibleGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsExtentGroupBox::extentChanged(const QgsRectangle & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
