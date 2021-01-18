/****************************************************************************
** Meta object code from reading C++ file 'qgsauthsslerrorsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthsslerrorsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthsslerrorsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthSslErrorsDialog_t {
    QByteArrayData data[17];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthSslErrorsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthSslErrorsDialog_t qt_meta_stringdata_QgsAuthSslErrorsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsAuthSslErrorsDialog"
QT_MOC_LITERAL(1, 23, 21), // "loadUnloadCertificate"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "load"
QT_MOC_LITERAL(4, 51, 24), // "showCertificateChainInfo"
QT_MOC_LITERAL(5, 76, 27), // "showCertificateChainCAsInfo"
QT_MOC_LITERAL(6, 104, 24), // "widgetReadyToSaveChanged"
QT_MOC_LITERAL(7, 129, 7), // "cansave"
QT_MOC_LITERAL(8, 137, 12), // "checkCanSave"
QT_MOC_LITERAL(9, 150, 22), // "clearCertificateConfig"
QT_MOC_LITERAL(10, 173, 17), // "buttonBox_clicked"
QT_MOC_LITERAL(11, 191, 16), // "QAbstractButton*"
QT_MOC_LITERAL(12, 208, 6), // "button"
QT_MOC_LITERAL(13, 215, 20), // "btnChainInfo_clicked"
QT_MOC_LITERAL(14, 236, 19), // "btnChainCAs_clicked"
QT_MOC_LITERAL(15, 256, 36), // "grpbxSslErrors_collapsedState..."
QT_MOC_LITERAL(16, 293, 9) // "collapsed"

    },
    "QgsAuthSslErrorsDialog\0loadUnloadCertificate\0"
    "\0load\0showCertificateChainInfo\0"
    "showCertificateChainCAsInfo\0"
    "widgetReadyToSaveChanged\0cansave\0"
    "checkCanSave\0clearCertificateConfig\0"
    "buttonBox_clicked\0QAbstractButton*\0"
    "button\0btnChainInfo_clicked\0"
    "btnChainCAs_clicked\0"
    "grpbxSslErrors_collapsedStateChanged\0"
    "collapsed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthSslErrorsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void QgsAuthSslErrorsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthSslErrorsDialog *_t = static_cast<QgsAuthSslErrorsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadUnloadCertificate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showCertificateChainInfo(); break;
        case 2: _t->showCertificateChainCAsInfo(); break;
        case 3: _t->widgetReadyToSaveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->checkCanSave(); break;
        case 5: _t->clearCertificateConfig(); break;
        case 6: _t->buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: _t->btnChainInfo_clicked(); break;
        case 8: _t->btnChainCAs_clicked(); break;
        case 9: _t->grpbxSslErrors_collapsedStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthSslErrorsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthSslErrorsDialog.data,
      qt_meta_data_QgsAuthSslErrorsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthSslErrorsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthSslErrorsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthSslErrorsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthSslErrorsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
