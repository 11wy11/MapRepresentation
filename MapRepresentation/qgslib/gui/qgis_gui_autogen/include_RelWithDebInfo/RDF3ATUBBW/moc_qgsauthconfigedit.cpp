/****************************************************************************
** Meta object code from reading C++ file 'qgsauthconfigedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthconfigedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthconfigedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthConfigEdit_t {
    QByteArrayData data[14];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthConfigEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthConfigEdit_t qt_meta_stringdata_QgsAuthConfigEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsAuthConfigEdit"
QT_MOC_LITERAL(1, 18, 26), // "authenticationConfigStored"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "authcfg"
QT_MOC_LITERAL(4, 54, 27), // "authenticationConfigUpdated"
QT_MOC_LITERAL(5, 82, 19), // "populateAuthMethods"
QT_MOC_LITERAL(6, 102, 10), // "loadConfig"
QT_MOC_LITERAL(7, 113, 11), // "resetConfig"
QT_MOC_LITERAL(8, 125, 10), // "saveConfig"
QT_MOC_LITERAL(9, 136, 16), // "btnClear_clicked"
QT_MOC_LITERAL(10, 153, 8), // "clearAll"
QT_MOC_LITERAL(11, 162, 12), // "validateAuth"
QT_MOC_LITERAL(12, 175, 18), // "leName_textChanged"
QT_MOC_LITERAL(13, 194, 3) // "txt"

    },
    "QgsAuthConfigEdit\0authenticationConfigStored\0"
    "\0authcfg\0authenticationConfigUpdated\0"
    "populateAuthMethods\0loadConfig\0"
    "resetConfig\0saveConfig\0btnClear_clicked\0"
    "clearAll\0validateAuth\0leName_textChanged\0"
    "txt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthConfigEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   70,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void QgsAuthConfigEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthConfigEdit *_t = static_cast<QgsAuthConfigEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticationConfigStored((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->authenticationConfigUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->populateAuthMethods(); break;
        case 3: _t->loadConfig(); break;
        case 4: _t->resetConfig(); break;
        case 5: _t->saveConfig(); break;
        case 6: _t->btnClear_clicked(); break;
        case 7: _t->clearAll(); break;
        case 8: _t->validateAuth(); break;
        case 9: _t->leName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAuthConfigEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthConfigEdit::authenticationConfigStored)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsAuthConfigEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthConfigEdit::authenticationConfigUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthConfigEdit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthConfigEdit.data,
      qt_meta_data_QgsAuthConfigEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthConfigEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthConfigEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthConfigEdit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthConfigEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QgsAuthConfigEdit::authenticationConfigStored(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAuthConfigEdit::authenticationConfigUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
