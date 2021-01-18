/****************************************************************************
** Meta object code from reading C++ file 'qgssymbolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgssymbolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssymbolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSymbolButton_t {
    QByteArrayData data[21];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolButton_t qt_meta_stringdata_QgsSymbolButton = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsSymbolButton"
QT_MOC_LITERAL(1, 16, 7), // "changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "setSymbol"
QT_MOC_LITERAL(4, 35, 10), // "QgsSymbol*"
QT_MOC_LITERAL(5, 46, 6), // "symbol"
QT_MOC_LITERAL(6, 53, 8), // "setColor"
QT_MOC_LITERAL(7, 62, 5), // "color"
QT_MOC_LITERAL(8, 68, 10), // "copySymbol"
QT_MOC_LITERAL(9, 79, 11), // "pasteSymbol"
QT_MOC_LITERAL(10, 91, 9), // "copyColor"
QT_MOC_LITERAL(11, 101, 10), // "pasteColor"
QT_MOC_LITERAL(12, 112, 18), // "showSettingsDialog"
QT_MOC_LITERAL(13, 131, 22), // "updateSymbolFromWidget"
QT_MOC_LITERAL(14, 154, 21), // "cleanUpSymbolSelector"
QT_MOC_LITERAL(15, 176, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(16, 192, 9), // "container"
QT_MOC_LITERAL(17, 202, 11), // "prepareMenu"
QT_MOC_LITERAL(18, 214, 14), // "addRecentColor"
QT_MOC_LITERAL(19, 229, 14), // "activatePicker"
QT_MOC_LITERAL(20, 244, 11) // "dialogTitle"

    },
    "QgsSymbolButton\0changed\0\0setSymbol\0"
    "QgsSymbol*\0symbol\0setColor\0color\0"
    "copySymbol\0pasteSymbol\0copyColor\0"
    "pasteColor\0showSettingsDialog\0"
    "updateSymbolFromWidget\0cleanUpSymbolSelector\0"
    "QgsPanelWidget*\0container\0prepareMenu\0"
    "addRecentColor\0activatePicker\0dialogTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,
      18,    1,   96,    2, 0x08 /* Private */,
      19,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::QString, 0x00095103,

       0        // eod
};

void QgsSymbolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolButton *_t = static_cast<QgsSymbolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setSymbol((*reinterpret_cast< QgsSymbol*(*)>(_a[1]))); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->copySymbol(); break;
        case 4: _t->pasteSymbol(); break;
        case 5: _t->copyColor(); break;
        case 6: _t->pasteColor(); break;
        case 7: _t->showSettingsDialog(); break;
        case 8: _t->updateSymbolFromWidget(); break;
        case 9: _t->cleanUpSymbolSelector((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 10: _t->prepareMenu(); break;
        case 11: _t->addRecentColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->activatePicker(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSymbolButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolButton::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsSymbolButton *_t = static_cast<QgsSymbolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->dialogTitle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsSymbolButton *_t = static_cast<QgsSymbolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDialogTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsSymbolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsSymbolButton.data,
      qt_meta_data_QgsSymbolButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsSymbolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void QgsSymbolButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
