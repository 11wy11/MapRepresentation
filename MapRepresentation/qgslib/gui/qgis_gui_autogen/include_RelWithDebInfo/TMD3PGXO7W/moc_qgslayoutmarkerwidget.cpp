/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutmarkerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutmarkerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutmarkerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutMarkerWidget_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutMarkerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutMarkerWidget_t qt_meta_stringdata_QgsLayoutMarkerWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsLayoutMarkerWidget"
QT_MOC_LITERAL(1, 22, 13), // "symbolChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 30), // "rotationFromMapCheckBoxChanged"
QT_MOC_LITERAL(4, 68, 5), // "state"
QT_MOC_LITERAL(5, 74, 10), // "mapChanged"
QT_MOC_LITERAL(6, 85, 14), // "QgsLayoutItem*"
QT_MOC_LITERAL(7, 100, 4), // "item"
QT_MOC_LITERAL(8, 105, 25), // "northOffsetSpinBoxChanged"
QT_MOC_LITERAL(9, 131, 1), // "d"
QT_MOC_LITERAL(10, 133, 24), // "northTypeComboBoxChanged"
QT_MOC_LITERAL(11, 158, 5), // "index"
QT_MOC_LITERAL(12, 164, 19) // "setGuiElementValues"

    },
    "QgsLayoutMarkerWidget\0symbolChanged\0"
    "\0rotationFromMapCheckBoxChanged\0state\0"
    "mapChanged\0QgsLayoutItem*\0item\0"
    "northOffsetSpinBoxChanged\0d\0"
    "northTypeComboBoxChanged\0index\0"
    "setGuiElementValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutMarkerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,
      12,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutMarkerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutMarkerWidget *_t = static_cast<QgsLayoutMarkerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->symbolChanged(); break;
        case 1: _t->rotationFromMapCheckBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mapChanged((*reinterpret_cast< QgsLayoutItem*(*)>(_a[1]))); break;
        case 3: _t->northOffsetSpinBoxChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->northTypeComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setGuiElementValues(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayoutItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutMarkerWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutMarkerWidget.data,
      qt_meta_data_QgsLayoutMarkerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutMarkerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutMarkerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutMarkerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutMarkerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
