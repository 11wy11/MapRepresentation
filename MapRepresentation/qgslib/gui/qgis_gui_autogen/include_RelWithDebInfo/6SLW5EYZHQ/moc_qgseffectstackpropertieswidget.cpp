/****************************************************************************
** Meta object code from reading C++ file 'qgseffectstackpropertieswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/effects/qgseffectstackpropertieswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgseffectstackpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsEffectStackPropertiesWidget_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsEffectStackPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsEffectStackPropertiesWidget_t qt_meta_stringdata_QgsEffectStackPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsEffectStackPropertiesWidget"
QT_MOC_LITERAL(1, 31, 14), // "moveEffectDown"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "moveEffectUp"
QT_MOC_LITERAL(4, 60, 9), // "addEffect"
QT_MOC_LITERAL(5, 70, 12), // "removeEffect"
QT_MOC_LITERAL(6, 83, 13), // "effectChanged"
QT_MOC_LITERAL(7, 97, 13), // "updatePreview"
QT_MOC_LITERAL(8, 111, 12), // "changeEffect"
QT_MOC_LITERAL(9, 124, 15), // "QgsPaintEffect*"
QT_MOC_LITERAL(10, 140, 9) // "newEffect"

    },
    "QgsEffectStackPropertiesWidget\0"
    "moveEffectDown\0\0moveEffectUp\0addEffect\0"
    "removeEffect\0effectChanged\0updatePreview\0"
    "changeEffect\0QgsPaintEffect*\0newEffect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsEffectStackPropertiesWidget[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QgsEffectStackPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsEffectStackPropertiesWidget *_t = static_cast<QgsEffectStackPropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveEffectDown(); break;
        case 1: _t->moveEffectUp(); break;
        case 2: _t->addEffect(); break;
        case 3: _t->removeEffect(); break;
        case 4: _t->effectChanged(); break;
        case 5: _t->updatePreview(); break;
        case 6: _t->changeEffect((*reinterpret_cast< QgsPaintEffect*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsEffectStackPropertiesWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsEffectStackPropertiesWidget.data,
      qt_meta_data_QgsEffectStackPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsEffectStackPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsEffectStackPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsEffectStackPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsEffectStackPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsEffectStackPropertiesDialog_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsEffectStackPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsEffectStackPropertiesDialog_t qt_meta_stringdata_QgsEffectStackPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsEffectStackPropertiesDialog"
QT_MOC_LITERAL(1, 31, 8), // "showHelp"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsEffectStackPropertiesDialog\0showHelp\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsEffectStackPropertiesDialog[] = {

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

void QgsEffectStackPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsEffectStackPropertiesDialog *_t = static_cast<QgsEffectStackPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsEffectStackPropertiesDialog::staticMetaObject = {
    { &QgsDialog::staticMetaObject, qt_meta_stringdata_QgsEffectStackPropertiesDialog.data,
      qt_meta_data_QgsEffectStackPropertiesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsEffectStackPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsEffectStackPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsEffectStackPropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return QgsDialog::qt_metacast(_clname);
}

int QgsEffectStackPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsEffectStackCompactWidget_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsEffectStackCompactWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsEffectStackCompactWidget_t qt_meta_stringdata_QgsEffectStackCompactWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsEffectStackCompactWidget"
QT_MOC_LITERAL(1, 28, 7), // "changed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "showDialog"
QT_MOC_LITERAL(4, 48, 13), // "enableToggled"
QT_MOC_LITERAL(5, 62, 7), // "checked"
QT_MOC_LITERAL(6, 70, 18), // "updateAcceptWidget"
QT_MOC_LITERAL(7, 89, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(8, 105, 5), // "panel"
QT_MOC_LITERAL(9, 111, 16) // "updateEffectLive"

    },
    "QgsEffectStackCompactWidget\0changed\0"
    "\0showDialog\0enableToggled\0checked\0"
    "updateAcceptWidget\0QgsPanelWidget*\0"
    "panel\0updateEffectLive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsEffectStackCompactWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void QgsEffectStackCompactWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsEffectStackCompactWidget *_t = static_cast<QgsEffectStackCompactWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->showDialog(); break;
        case 2: _t->enableToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateAcceptWidget((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 4: _t->updateEffectLive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsEffectStackCompactWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEffectStackCompactWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsEffectStackCompactWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsEffectStackCompactWidget.data,
      qt_meta_data_QgsEffectStackCompactWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsEffectStackCompactWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsEffectStackCompactWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsEffectStackCompactWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsEffectStackCompactWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QgsEffectStackCompactWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
