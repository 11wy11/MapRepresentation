/****************************************************************************
** Meta object code from reading C++ file 'qgssearchwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/editorwidgets/core/qgssearchwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssearchwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSearchWidgetWrapper_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSearchWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSearchWidgetWrapper_t qt_meta_stringdata_QgsSearchWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsSearchWidgetWrapper"
QT_MOC_LITERAL(1, 23, 17), // "expressionChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "exp"
QT_MOC_LITERAL(4, 46, 12), // "valueChanged"
QT_MOC_LITERAL(5, 59, 12), // "valueCleared"
QT_MOC_LITERAL(6, 72, 11), // "clearWidget"
QT_MOC_LITERAL(7, 84, 10), // "setEnabled"
QT_MOC_LITERAL(8, 95, 7), // "enabled"
QT_MOC_LITERAL(9, 103, 13), // "setExpression"
QT_MOC_LITERAL(10, 117, 10), // "expression"
QT_MOC_LITERAL(11, 128, 10), // "setFeature"
QT_MOC_LITERAL(12, 139, 10), // "QgsFeature"
QT_MOC_LITERAL(13, 150, 7) // "feature"

    },
    "QgsSearchWidgetWrapper\0expressionChanged\0"
    "\0exp\0valueChanged\0valueCleared\0"
    "clearWidget\0setEnabled\0enabled\0"
    "setExpression\0expression\0setFeature\0"
    "QgsFeature\0feature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSearchWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       9,    1,   58,    2, 0x09 /* Protected */,
      11,    1,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void QgsSearchWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSearchWidgetWrapper *_t = static_cast<QgsSearchWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->valueChanged(); break;
        case 2: _t->valueCleared(); break;
        case 3: _t->clearWidget(); break;
        case 4: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            using _t = void (QgsSearchWidgetWrapper::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSearchWidgetWrapper::expressionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsSearchWidgetWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSearchWidgetWrapper::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsSearchWidgetWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSearchWidgetWrapper::valueCleared)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSearchWidgetWrapper::staticMetaObject = {
    { &QgsWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsSearchWidgetWrapper.data,
      qt_meta_data_QgsSearchWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSearchWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSearchWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSearchWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsWidgetWrapper::qt_metacast(_clname);
}

int QgsSearchWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsWidgetWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsSearchWidgetWrapper::expressionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsSearchWidgetWrapper::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsSearchWidgetWrapper::valueCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
