/****************************************************************************
** Meta object code from reading C++ file 'qgsauthconfigidedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthconfigidedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthconfigidedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthConfigIdEdit_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthConfigIdEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthConfigIdEdit_t qt_meta_stringdata_QgsAuthConfigIdEdit = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAuthConfigIdEdit"
QT_MOC_LITERAL(1, 20, 15), // "validityChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "valid"
QT_MOC_LITERAL(4, 43, 15), // "setAuthConfigId"
QT_MOC_LITERAL(5, 59, 7), // "authcfg"
QT_MOC_LITERAL(6, 67, 15), // "setAllowEmptyId"
QT_MOC_LITERAL(7, 83, 7), // "allowed"
QT_MOC_LITERAL(8, 91, 5), // "clear"
QT_MOC_LITERAL(9, 97, 19), // "updateValidityStyle"
QT_MOC_LITERAL(10, 117, 15), // "btnLock_toggled"
QT_MOC_LITERAL(11, 133, 7), // "checked"
QT_MOC_LITERAL(12, 141, 21), // "leAuthCfg_textChanged"
QT_MOC_LITERAL(13, 163, 3) // "txt"

    },
    "QgsAuthConfigIdEdit\0validityChanged\0"
    "\0valid\0setAuthConfigId\0authcfg\0"
    "setAllowEmptyId\0allowed\0clear\0"
    "updateValidityStyle\0btnLock_toggled\0"
    "checked\0leAuthCfg_textChanged\0txt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthConfigIdEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void QgsAuthConfigIdEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthConfigIdEdit *_t = static_cast<QgsAuthConfigIdEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setAuthConfigId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setAllowEmptyId((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->updateValidityStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->btnLock_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->leAuthCfg_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAuthConfigIdEdit::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthConfigIdEdit::validityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthConfigIdEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAuthConfigIdEdit.data,
      qt_meta_data_QgsAuthConfigIdEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthConfigIdEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthConfigIdEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthConfigIdEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAuthConfigIdEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsAuthConfigIdEdit::validityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE