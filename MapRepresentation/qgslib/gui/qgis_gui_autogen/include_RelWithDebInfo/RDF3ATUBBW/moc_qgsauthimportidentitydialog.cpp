/****************************************************************************
** Meta object code from reading C++ file 'qgsauthimportidentitydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthimportidentitydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthimportidentitydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthImportIdentityDialog_t {
    QByteArrayData data[19];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthImportIdentityDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthImportIdentityDialog_t qt_meta_stringdata_QgsAuthImportIdentityDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsAuthImportIdentityDialog"
QT_MOC_LITERAL(1, 28, 20), // "populateIdentityType"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "validateIdentity"
QT_MOC_LITERAL(4, 67, 15), // "clearValidation"
QT_MOC_LITERAL(5, 83, 15), // "writeValidation"
QT_MOC_LITERAL(6, 99, 3), // "msg"
QT_MOC_LITERAL(7, 103, 37), // "QgsAuthImportIdentityDialog::..."
QT_MOC_LITERAL(8, 141, 5), // "valid"
QT_MOC_LITERAL(9, 147, 6), // "append"
QT_MOC_LITERAL(10, 154, 29), // "lePkiPathsKeyPass_textChanged"
QT_MOC_LITERAL(11, 184, 4), // "pass"
QT_MOC_LITERAL(12, 189, 32), // "chkPkiPathsPassShow_stateChanged"
QT_MOC_LITERAL(13, 222, 5), // "state"
QT_MOC_LITERAL(14, 228, 23), // "btnPkiPathsCert_clicked"
QT_MOC_LITERAL(15, 252, 22), // "btnPkiPathsKey_clicked"
QT_MOC_LITERAL(16, 275, 30), // "lePkiPkcs12KeyPass_textChanged"
QT_MOC_LITERAL(17, 306, 33), // "chkPkiPkcs12PassShow_stateCha..."
QT_MOC_LITERAL(18, 340, 26) // "btnPkiPkcs12Bundle_clicked"

    },
    "QgsAuthImportIdentityDialog\0"
    "populateIdentityType\0\0validateIdentity\0"
    "clearValidation\0writeValidation\0msg\0"
    "QgsAuthImportIdentityDialog::Validity\0"
    "valid\0append\0lePkiPathsKeyPass_textChanged\0"
    "pass\0chkPkiPathsPassShow_stateChanged\0"
    "state\0btnPkiPathsCert_clicked\0"
    "btnPkiPathsKey_clicked\0"
    "lePkiPkcs12KeyPass_textChanged\0"
    "chkPkiPkcs12PassShow_stateChanged\0"
    "btnPkiPkcs12Bundle_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthImportIdentityDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    3,   77,    2, 0x08 /* Private */,
       5,    2,   84,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   89,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7, QMetaType::Bool,    6,    8,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void QgsAuthImportIdentityDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthImportIdentityDialog *_t = static_cast<QgsAuthImportIdentityDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateIdentityType(); break;
        case 1: _t->validateIdentity(); break;
        case 2: _t->clearValidation(); break;
        case 3: _t->writeValidation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAuthImportIdentityDialog::Validity(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->writeValidation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAuthImportIdentityDialog::Validity(*)>(_a[2]))); break;
        case 5: _t->lePkiPathsKeyPass_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->chkPkiPathsPassShow_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->btnPkiPathsCert_clicked(); break;
        case 8: _t->btnPkiPathsKey_clicked(); break;
        case 9: _t->lePkiPkcs12KeyPass_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->chkPkiPkcs12PassShow_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->btnPkiPkcs12Bundle_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthImportIdentityDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthImportIdentityDialog.data,
      qt_meta_data_QgsAuthImportIdentityDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthImportIdentityDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthImportIdentityDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthImportIdentityDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthImportIdentityDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
