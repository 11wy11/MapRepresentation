/****************************************************************************
** Meta object code from reading C++ file 'qgsvaluemapsearchwidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/editorwidgets/qgsvaluemapsearchwidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvaluemapsearchwidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsValueMapSearchWidgetWrapper_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsValueMapSearchWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsValueMapSearchWidgetWrapper_t qt_meta_stringdata_QgsValueMapSearchWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsValueMapSearchWidgetWrapper"
QT_MOC_LITERAL(1, 31, 11), // "clearWidget"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 10), // "setEnabled"
QT_MOC_LITERAL(4, 55, 7), // "enabled"
QT_MOC_LITERAL(5, 63, 13), // "setExpression"
QT_MOC_LITERAL(6, 77, 3), // "exp"
QT_MOC_LITERAL(7, 81, 20), // "comboBoxIndexChanged"
QT_MOC_LITERAL(8, 102, 3) // "idx"

    },
    "QgsValueMapSearchWidgetWrapper\0"
    "clearWidget\0\0setEnabled\0enabled\0"
    "setExpression\0exp\0comboBoxIndexChanged\0"
    "idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsValueMapSearchWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x09 /* Protected */,
       7,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void QgsValueMapSearchWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsValueMapSearchWidgetWrapper *_t = static_cast<QgsValueMapSearchWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearWidget(); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->comboBoxIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsValueMapSearchWidgetWrapper::staticMetaObject = {
    { &QgsSearchWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsValueMapSearchWidgetWrapper.data,
      qt_meta_data_QgsValueMapSearchWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsValueMapSearchWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsValueMapSearchWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsValueMapSearchWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsSearchWidgetWrapper::qt_metacast(_clname);
}

int QgsValueMapSearchWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSearchWidgetWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
