/****************************************************************************
** Meta object code from reading C++ file 'qgsmeshvariablestrokewidthwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/mesh/qgsmeshvariablestrokewidthwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmeshvariablestrokewidthwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMeshVariableStrokeWidthButton_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshVariableStrokeWidthButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshVariableStrokeWidthButton_t qt_meta_stringdata_QgsMeshVariableStrokeWidthButton = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsMeshVariableStrokeWidthButton"
QT_MOC_LITERAL(1, 33, 13), // "widgetChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 10) // "openWidget"

    },
    "QgsMeshVariableStrokeWidthButton\0"
    "widgetChanged\0\0openWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshVariableStrokeWidthButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsMeshVariableStrokeWidthButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshVariableStrokeWidthButton *_t = static_cast<QgsMeshVariableStrokeWidthButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetChanged(); break;
        case 1: _t->openWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsMeshVariableStrokeWidthButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsMeshVariableStrokeWidthButton::widgetChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshVariableStrokeWidthButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QgsMeshVariableStrokeWidthButton.data,
      qt_meta_data_QgsMeshVariableStrokeWidthButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshVariableStrokeWidthButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshVariableStrokeWidthButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshVariableStrokeWidthButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int QgsMeshVariableStrokeWidthButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsMeshVariableStrokeWidthButton::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsMeshVariableStrokeWidthWidget_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMeshVariableStrokeWidthWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMeshVariableStrokeWidthWidget_t qt_meta_stringdata_QgsMeshVariableStrokeWidthWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsMeshVariableStrokeWidthWidget"
QT_MOC_LITERAL(1, 33, 13), // "defaultMinMax"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "QgsMeshVariableStrokeWidthWidget\0"
    "defaultMinMax\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMeshVariableStrokeWidthWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsMeshVariableStrokeWidthWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMeshVariableStrokeWidthWidget *_t = static_cast<QgsMeshVariableStrokeWidthWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultMinMax(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsMeshVariableStrokeWidthWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsMeshVariableStrokeWidthWidget.data,
      qt_meta_data_QgsMeshVariableStrokeWidthWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMeshVariableStrokeWidthWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMeshVariableStrokeWidthWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMeshVariableStrokeWidthWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::QgsMeshVariableStrokeWidthWidget"))
        return static_cast< Ui::QgsMeshVariableStrokeWidthWidget*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsMeshVariableStrokeWidthWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
