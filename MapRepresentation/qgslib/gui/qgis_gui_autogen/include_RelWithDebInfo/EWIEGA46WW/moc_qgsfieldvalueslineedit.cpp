/****************************************************************************
** Meta object code from reading C++ file 'qgsfieldvalueslineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfieldvalueslineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfieldvalueslineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFieldValuesLineEditValuesGatherer_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldValuesLineEditValuesGatherer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldValuesLineEditValuesGatherer_t qt_meta_stringdata_QgsFieldValuesLineEditValuesGatherer = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsFieldValuesLineEditValuesG..."
QT_MOC_LITERAL(1, 37, 15), // "collectedValues"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 6) // "values"

    },
    "QgsFieldValuesLineEditValuesGatherer\0"
    "collectedValues\0\0values"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldValuesLineEditValuesGatherer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

       0        // eod
};

void QgsFieldValuesLineEditValuesGatherer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFieldValuesLineEditValuesGatherer *_t = static_cast<QgsFieldValuesLineEditValuesGatherer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collectedValues((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFieldValuesLineEditValuesGatherer::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFieldValuesLineEditValuesGatherer::collectedValues)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFieldValuesLineEditValuesGatherer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QgsFieldValuesLineEditValuesGatherer.data,
      qt_meta_data_QgsFieldValuesLineEditValuesGatherer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFieldValuesLineEditValuesGatherer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldValuesLineEditValuesGatherer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldValuesLineEditValuesGatherer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QgsFieldValuesLineEditValuesGatherer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsFieldValuesLineEditValuesGatherer::collectedValues(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsFieldValuesLineEdit_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldValuesLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldValuesLineEdit_t qt_meta_stringdata_QgsFieldValuesLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsFieldValuesLineEdit"
QT_MOC_LITERAL(1, 23, 12), // "layerChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(4, 53, 5), // "layer"
QT_MOC_LITERAL(5, 59, 21), // "attributeIndexChanged"
QT_MOC_LITERAL(6, 81, 5), // "index"
QT_MOC_LITERAL(7, 87, 22), // "requestCompleterUpdate"
QT_MOC_LITERAL(8, 110, 22), // "triggerCompleterUpdate"
QT_MOC_LITERAL(9, 133, 15), // "updateCompleter"
QT_MOC_LITERAL(10, 149, 6), // "values"
QT_MOC_LITERAL(11, 156, 22), // "gathererThreadFinished"
QT_MOC_LITERAL(12, 179, 14) // "attributeIndex"

    },
    "QgsFieldValuesLineEdit\0layerChanged\0"
    "\0QgsVectorLayer*\0layer\0attributeIndexChanged\0"
    "index\0requestCompleterUpdate\0"
    "triggerCompleterUpdate\0updateCompleter\0"
    "values\0gathererThreadFinished\0"
    "attributeIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldValuesLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      11,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      12, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QgsFieldValuesLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFieldValuesLineEdit *_t = static_cast<QgsFieldValuesLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 1: _t->attributeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->requestCompleterUpdate(); break;
        case 3: _t->triggerCompleterUpdate(); break;
        case 4: _t->updateCompleter((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->gathererThreadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFieldValuesLineEdit::*)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFieldValuesLineEdit::layerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFieldValuesLineEdit::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFieldValuesLineEdit::attributeIndexChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFieldValuesLineEdit *_t = static_cast<QgsFieldValuesLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsVectorLayer**>(_v) = _t->layer(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->attributeIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFieldValuesLineEdit *_t = static_cast<QgsFieldValuesLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayer(*reinterpret_cast< QgsVectorLayer**>(_v)); break;
        case 1: _t->setAttributeIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsFieldValuesLineEdit::staticMetaObject = {
    { &QgsFilterLineEdit::staticMetaObject, qt_meta_stringdata_QgsFieldValuesLineEdit.data,
      qt_meta_data_QgsFieldValuesLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFieldValuesLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldValuesLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldValuesLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsFilterLineEdit::qt_metacast(_clname);
}

int QgsFieldValuesLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsFilterLineEdit::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFieldValuesLineEdit::layerChanged(QgsVectorLayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsFieldValuesLineEdit::attributeIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
