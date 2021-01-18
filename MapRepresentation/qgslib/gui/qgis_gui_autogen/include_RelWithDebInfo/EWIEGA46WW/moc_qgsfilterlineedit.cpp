/****************************************************************************
** Meta object code from reading C++ file 'qgsfilterlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfilterlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfilterlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFilterLineEdit_t {
    QByteArrayData data[23];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFilterLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFilterLineEdit_t qt_meta_stringdata_QgsFilterLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsFilterLineEdit"
QT_MOC_LITERAL(1, 18, 7), // "cleared"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "valueChanged"
QT_MOC_LITERAL(4, 40, 5), // "value"
QT_MOC_LITERAL(5, 46, 18), // "showSpinnerChanged"
QT_MOC_LITERAL(6, 65, 20), // "selectOnFocusChanged"
QT_MOC_LITERAL(7, 86, 10), // "clearValue"
QT_MOC_LITERAL(8, 97, 10), // "storeState"
QT_MOC_LITERAL(9, 108, 12), // "restoreState"
QT_MOC_LITERAL(10, 121, 13), // "onTextChanged"
QT_MOC_LITERAL(11, 135, 4), // "text"
QT_MOC_LITERAL(12, 140, 17), // "updateBusySpinner"
QT_MOC_LITERAL(13, 158, 15), // "updateClearIcon"
QT_MOC_LITERAL(14, 174, 9), // "clearMode"
QT_MOC_LITERAL(15, 184, 9), // "ClearMode"
QT_MOC_LITERAL(16, 194, 9), // "nullValue"
QT_MOC_LITERAL(17, 204, 12), // "defaultValue"
QT_MOC_LITERAL(18, 217, 15), // "showClearButton"
QT_MOC_LITERAL(19, 233, 14), // "showSearchIcon"
QT_MOC_LITERAL(20, 248, 11), // "showSpinner"
QT_MOC_LITERAL(21, 260, 11), // "ClearToNull"
QT_MOC_LITERAL(22, 272, 14) // "ClearToDefault"

    },
    "QgsFilterLineEdit\0cleared\0\0valueChanged\0"
    "value\0showSpinnerChanged\0selectOnFocusChanged\0"
    "clearValue\0storeState\0restoreState\0"
    "onTextChanged\0text\0updateBusySpinner\0"
    "updateClearIcon\0clearMode\0ClearMode\0"
    "nullValue\0defaultValue\0showClearButton\0"
    "showSearchIcon\0showSpinner\0ClearToNull\0"
    "ClearToDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFilterLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       7,   78, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00495103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       0,
       0,
       2,

 // enums: name, flags, count, data
      15, 0x0,    2,  110,

 // enum data: key, value
      21, uint(QgsFilterLineEdit::ClearToNull),
      22, uint(QgsFilterLineEdit::ClearToDefault),

       0        // eod
};

void QgsFilterLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFilterLineEdit *_t = static_cast<QgsFilterLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleared(); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showSpinnerChanged(); break;
        case 3: _t->selectOnFocusChanged(); break;
        case 4: _t->clearValue(); break;
        case 5: _t->storeState(); break;
        case 6: _t->restoreState(); break;
        case 7: _t->onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateBusySpinner(); break;
        case 9: _t->updateClearIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFilterLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFilterLineEdit::cleared)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFilterLineEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFilterLineEdit::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsFilterLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFilterLineEdit::showSpinnerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsFilterLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFilterLineEdit::selectOnFocusChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFilterLineEdit *_t = static_cast<QgsFilterLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ClearMode*>(_v) = _t->clearMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->nullValue(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->defaultValue(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showClearButton(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showSearchIcon(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showSpinner(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFilterLineEdit *_t = static_cast<QgsFilterLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClearMode(*reinterpret_cast< ClearMode*>(_v)); break;
        case 1: _t->setNullValue(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDefaultValue(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setShowClearButton(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowSearchIcon(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setShowSpinner(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsFilterLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_QgsFilterLineEdit.data,
      qt_meta_data_QgsFilterLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFilterLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFilterLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFilterLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int QgsFilterLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFilterLineEdit::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsFilterLineEdit::valueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsFilterLineEdit::showSpinnerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsFilterLineEdit::selectOnFocusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QgsSpinBoxLineEdit_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSpinBoxLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSpinBoxLineEdit_t qt_meta_stringdata_QgsSpinBoxLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsSpinBoxLineEdit"
QT_MOC_LITERAL(1, 19, 10), // "clearValue"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "QgsSpinBoxLineEdit\0clearValue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSpinBoxLineEdit[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsSpinBoxLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSpinBoxLineEdit *_t = static_cast<QgsSpinBoxLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearValue(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsSpinBoxLineEdit::staticMetaObject = {
    { &QgsFilterLineEdit::staticMetaObject, qt_meta_stringdata_QgsSpinBoxLineEdit.data,
      qt_meta_data_QgsSpinBoxLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSpinBoxLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSpinBoxLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSpinBoxLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsFilterLineEdit::qt_metacast(_clname);
}

int QgsSpinBoxLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsFilterLineEdit::qt_metacall(_c, _id, _a);
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
