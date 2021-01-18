/****************************************************************************
** Meta object code from reading C++ file 'qgseditorwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/editorwidgets/core/qgseditorwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgseditorwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsEditorWidgetWrapper_t {
    QByteArrayData data[26];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsEditorWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsEditorWidgetWrapper_t qt_meta_stringdata_QgsEditorWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsEditorWidgetWrapper"
QT_MOC_LITERAL(1, 23, 12), // "valueChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 13), // "valuesChanged"
QT_MOC_LITERAL(5, 57, 21), // "additionalFieldValues"
QT_MOC_LITERAL(6, 79, 23), // "constraintStatusChanged"
QT_MOC_LITERAL(7, 103, 10), // "constraint"
QT_MOC_LITERAL(8, 114, 4), // "desc"
QT_MOC_LITERAL(9, 119, 3), // "err"
QT_MOC_LITERAL(10, 123, 40), // "QgsEditorWidgetWrapper::Const..."
QT_MOC_LITERAL(11, 164, 6), // "status"
QT_MOC_LITERAL(12, 171, 30), // "constraintResultVisibleChanged"
QT_MOC_LITERAL(13, 202, 7), // "visible"
QT_MOC_LITERAL(14, 210, 10), // "setFeature"
QT_MOC_LITERAL(15, 221, 10), // "QgsFeature"
QT_MOC_LITERAL(16, 232, 7), // "feature"
QT_MOC_LITERAL(17, 240, 8), // "setValue"
QT_MOC_LITERAL(18, 249, 9), // "setValues"
QT_MOC_LITERAL(19, 259, 16), // "additionalValues"
QT_MOC_LITERAL(20, 276, 16), // "emitValueChanged"
QT_MOC_LITERAL(21, 293, 22), // "parentFormValueChanged"
QT_MOC_LITERAL(22, 316, 9), // "attribute"
QT_MOC_LITERAL(23, 326, 23), // "constraintResultVisible"
QT_MOC_LITERAL(24, 350, 16), // "constraintResult"
QT_MOC_LITERAL(25, 367, 16) // "ConstraintResult"

    },
    "QgsEditorWidgetWrapper\0valueChanged\0"
    "\0value\0valuesChanged\0additionalFieldValues\0"
    "constraintStatusChanged\0constraint\0"
    "desc\0err\0QgsEditorWidgetWrapper::ConstraintResult\0"
    "status\0constraintResultVisibleChanged\0"
    "visible\0setFeature\0QgsFeature\0feature\0"
    "setValue\0setValues\0additionalValues\0"
    "emitValueChanged\0parentFormValueChanged\0"
    "attribute\0constraintResultVisible\0"
    "constraintResult\0ConstraintResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsEditorWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x26 /* Public | MethodCloned */,
       6,    4,   75,    2, 0x06 /* Public */,
      12,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   87,    2, 0x0a /* Public */,
      17,    1,   90,    2, 0x0a /* Public */,
      18,    2,   93,    2, 0x0a /* Public */,
      20,    0,   98,    2, 0x0a /* Public */,
      21,    2,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariantList,    3,    5,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 10,    7,    8,    9,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariantList,    3,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   22,    3,

 // properties: name, type, flags
      23, QMetaType::Bool, 0x00495103,
      24, 0x80000000 | 25, 0x00495009,

 // properties: notify_signal_id
       4,
       3,

       0        // eod
};

void QgsEditorWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsEditorWidgetWrapper *_t = static_cast<QgsEditorWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->valuesChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 2: _t->valuesChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->constraintStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QgsEditorWidgetWrapper::ConstraintResult(*)>(_a[4]))); break;
        case 4: _t->constraintResultVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 6: _t->setValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 7: _t->setValues((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 8: _t->emitValueChanged(); break;
        case 9: _t->parentFormValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeature >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsEditorWidgetWrapper::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsEditorWidgetWrapper::*)(const QVariant & , const QVariantList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::valuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsEditorWidgetWrapper::*)(const QString & , const QString & , const QString & , QgsEditorWidgetWrapper::ConstraintResult );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::constraintStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsEditorWidgetWrapper::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsEditorWidgetWrapper::constraintResultVisibleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsEditorWidgetWrapper *_t = static_cast<QgsEditorWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->constraintResultVisible(); break;
        case 1: *reinterpret_cast< ConstraintResult*>(_v) = _t->constraintResult(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsEditorWidgetWrapper *_t = static_cast<QgsEditorWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConstraintResultVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsEditorWidgetWrapper::staticMetaObject = {
    { &QgsWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsEditorWidgetWrapper.data,
      qt_meta_data_QgsEditorWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsEditorWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsEditorWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsEditorWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsWidgetWrapper::qt_metacast(_clname);
}

int QgsEditorWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWidgetWrapper::qt_metacall(_c, _id, _a);
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
void QgsEditorWidgetWrapper::valueChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsEditorWidgetWrapper::valuesChanged(const QVariant & _t1, const QVariantList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QgsEditorWidgetWrapper::constraintStatusChanged(const QString & _t1, const QString & _t2, const QString & _t3, QgsEditorWidgetWrapper::ConstraintResult _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsEditorWidgetWrapper::constraintResultVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
