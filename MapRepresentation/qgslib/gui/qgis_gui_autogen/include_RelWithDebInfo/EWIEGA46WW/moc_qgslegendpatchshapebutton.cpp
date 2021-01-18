/****************************************************************************
** Meta object code from reading C++ file 'qgslegendpatchshapebutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgslegendpatchshapebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslegendpatchshapebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLegendPatchShapeButton_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLegendPatchShapeButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLegendPatchShapeButton_t qt_meta_stringdata_QgsLegendPatchShapeButton = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsLegendPatchShapeButton"
QT_MOC_LITERAL(1, 26, 7), // "changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "setShape"
QT_MOC_LITERAL(4, 44, 19), // "QgsLegendPatchShape"
QT_MOC_LITERAL(5, 64, 5), // "shape"
QT_MOC_LITERAL(6, 70, 12), // "setToDefault"
QT_MOC_LITERAL(7, 83, 18), // "showSettingsDialog"
QT_MOC_LITERAL(8, 102, 11), // "prepareMenu"
QT_MOC_LITERAL(9, 114, 18), // "loadPatchFromStyle"
QT_MOC_LITERAL(10, 133, 4) // "name"

    },
    "QgsLegendPatchShapeButton\0changed\0\0"
    "setShape\0QgsLegendPatchShape\0shape\0"
    "setToDefault\0showSettingsDialog\0"
    "prepareMenu\0loadPatchFromStyle\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLegendPatchShapeButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void QgsLegendPatchShapeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLegendPatchShapeButton *_t = static_cast<QgsLegendPatchShapeButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setShape((*reinterpret_cast< const QgsLegendPatchShape(*)>(_a[1]))); break;
        case 2: _t->setToDefault(); break;
        case 3: _t->showSettingsDialog(); break;
        case 4: _t->prepareMenu(); break;
        case 5: _t->loadPatchFromStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLegendPatchShapeButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLegendPatchShapeButton::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLegendPatchShapeButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsLegendPatchShapeButton.data,
      qt_meta_data_QgsLegendPatchShapeButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLegendPatchShapeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLegendPatchShapeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendPatchShapeButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsLegendPatchShapeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsLegendPatchShapeButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
