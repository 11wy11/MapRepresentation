/****************************************************************************
** Meta object code from reading C++ file 'qgslegendpatchshapewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgslegendpatchshapewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslegendpatchshapewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLegendPatchShapeWidget_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLegendPatchShapeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLegendPatchShapeWidget_t qt_meta_stringdata_QgsLegendPatchShapeWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsLegendPatchShapeWidget"
QT_MOC_LITERAL(1, 26, 7), // "changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "setShapeFromStyle"
QT_MOC_LITERAL(4, 53, 4), // "name"
QT_MOC_LITERAL(5, 58, 21), // "QgsStyle::StyleEntity"
QT_MOC_LITERAL(6, 80, 4), // "type"
QT_MOC_LITERAL(7, 85, 9) // "saveShape"

    },
    "QgsLegendPatchShapeWidget\0changed\0\0"
    "setShapeFromStyle\0name\0QgsStyle::StyleEntity\0"
    "type\0saveShape"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLegendPatchShapeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void QgsLegendPatchShapeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLegendPatchShapeWidget *_t = static_cast<QgsLegendPatchShapeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setShapeFromStyle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsStyle::StyleEntity(*)>(_a[2]))); break;
        case 2: _t->saveShape(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLegendPatchShapeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLegendPatchShapeWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLegendPatchShapeWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLegendPatchShapeWidget.data,
      qt_meta_data_QgsLegendPatchShapeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLegendPatchShapeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLegendPatchShapeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendPatchShapeWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLegendPatchShapeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QgsLegendPatchShapeWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsLegendPatchShapeDialog_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLegendPatchShapeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLegendPatchShapeDialog_t qt_meta_stringdata_QgsLegendPatchShapeDialog = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsLegendPatchShapeDialog"

    },
    "QgsLegendPatchShapeDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLegendPatchShapeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsLegendPatchShapeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLegendPatchShapeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLegendPatchShapeDialog.data,
      qt_meta_data_QgsLegendPatchShapeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLegendPatchShapeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLegendPatchShapeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendPatchShapeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsLegendPatchShapeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
