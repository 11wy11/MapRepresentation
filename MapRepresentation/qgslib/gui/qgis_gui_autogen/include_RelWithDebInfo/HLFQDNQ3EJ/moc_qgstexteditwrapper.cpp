/****************************************************************************
** Meta object code from reading C++ file 'qgstexteditwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/editorwidgets/qgstexteditwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstexteditwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTextEditWrapper_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTextEditWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTextEditWrapper_t qt_meta_stringdata_QgsTextEditWrapper = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsTextEditWrapper"
QT_MOC_LITERAL(1, 19, 10), // "setEnabled"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "enabled"
QT_MOC_LITERAL(4, 39, 10), // "setFeature"
QT_MOC_LITERAL(5, 50, 10), // "QgsFeature"
QT_MOC_LITERAL(6, 61, 7), // "feature"
QT_MOC_LITERAL(7, 69, 11), // "textChanged"
QT_MOC_LITERAL(8, 81, 4) // "text"

    },
    "QgsTextEditWrapper\0setEnabled\0\0enabled\0"
    "setFeature\0QgsFeature\0feature\0textChanged\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTextEditWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QgsTextEditWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTextEditWrapper *_t = static_cast<QgsTextEditWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 2: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeature >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTextEditWrapper::staticMetaObject = {
    { &QgsEditorWidgetWrapper::staticMetaObject, qt_meta_stringdata_QgsTextEditWrapper.data,
      qt_meta_data_QgsTextEditWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTextEditWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTextEditWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTextEditWrapper.stringdata0))
        return static_cast<void*>(this);
    return QgsEditorWidgetWrapper::qt_metacast(_clname);
}

int QgsTextEditWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsEditorWidgetWrapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
