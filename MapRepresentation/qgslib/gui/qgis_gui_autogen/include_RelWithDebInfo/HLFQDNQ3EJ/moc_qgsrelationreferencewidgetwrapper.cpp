/****************************************************************************
** Meta object code from reading C++ file 'qgsrelationreferencewidgetwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/editorwidgets/qgsrelationreferencewidgetwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelationreferencewidgetwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRelationReferenceWidgetWrapper_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelationReferenceWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelationReferenceWidgetWrapper_t qt_meta_stringdata_QgsRelationReferenceWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsRelationReferenceWidgetWra..."
QT_MOC_LITERAL(1, 34, 10), // "setEnabled"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "enabled"
QT_MOC_LITERAL(4, 54, 18), // "foreignKeysChanged"
QT_MOC_LITERAL(5, 73, 6) // "values"

    },
    "QgsRelationReferenceWidgetWrapper\0"
    "setEnabled\0\0enabled\0foreignKeysChanged\0"
    "values"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelationReferenceWidgetWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QVariantList,    5,

       0        // eod
};

void QgsRelationReferenceWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelationReferenceWidgetWrapper *_t = static_cast<QgsRelationReferenceWidgetWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->foreignKeysChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRelationReferenceWidgetWrapper::staticMetaObject = {
    { &QgsEditorWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsRelationReferenceWidgetWrapper.data,
      qt_meta_data_QgsRelationReferenceWidgetWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRelationReferenceWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRelationReferenceWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRelationReferenceWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsEditorWidgetWrapper::qt_metacast(_clname);
}

int QgsRelationReferenceWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsEditorWidgetWrapper::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
