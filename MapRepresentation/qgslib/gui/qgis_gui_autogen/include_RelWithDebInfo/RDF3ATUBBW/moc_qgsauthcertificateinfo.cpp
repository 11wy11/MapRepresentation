/****************************************************************************
** Meta object code from reading C++ file 'qgsauthcertificateinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthcertificateinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthcertificateinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthCertInfo_t {
    QByteArrayData data[18];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthCertInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthCertInfo_t qt_meta_stringdata_QgsAuthCertInfo = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsAuthCertInfo"
QT_MOC_LITERAL(1, 16, 10), // "setupError"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "msg"
QT_MOC_LITERAL(4, 32, 22), // "currentCertItemChanged"
QT_MOC_LITERAL(5, 55, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 72, 7), // "current"
QT_MOC_LITERAL(7, 80, 8), // "previous"
QT_MOC_LITERAL(8, 89, 17), // "updateCurrentCert"
QT_MOC_LITERAL(9, 107, 4), // "item"
QT_MOC_LITERAL(10, 112, 20), // "btnSaveTrust_clicked"
QT_MOC_LITERAL(11, 133, 25), // "currentPolicyIndexChanged"
QT_MOC_LITERAL(12, 159, 4), // "indx"
QT_MOC_LITERAL(13, 164, 20), // "decorateCertTreeItem"
QT_MOC_LITERAL(14, 185, 15), // "QSslCertificate"
QT_MOC_LITERAL(15, 201, 4), // "cert"
QT_MOC_LITERAL(16, 206, 33), // "QgsAuthCertUtils::CertTrustPo..."
QT_MOC_LITERAL(17, 240, 11) // "trustpolicy"

    },
    "QgsAuthCertInfo\0setupError\0\0msg\0"
    "currentCertItemChanged\0QTreeWidgetItem*\0"
    "current\0previous\0updateCurrentCert\0"
    "item\0btnSaveTrust_clicked\0"
    "currentPolicyIndexChanged\0indx\0"
    "decorateCertTreeItem\0QSslCertificate\0"
    "cert\0QgsAuthCertUtils::CertTrustPolicy\0"
    "trustpolicy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthCertInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    2,   52,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,
      13,    3,   64,    2, 0x08 /* Private */,
      13,    2,   71,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 5,   15,   17,    9,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,

       0        // eod
};

void QgsAuthCertInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthCertInfo *_t = static_cast<QgsAuthCertInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->currentCertItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->updateCurrentCert((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->btnSaveTrust_clicked(); break;
        case 4: _t->currentPolicyIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->decorateCertTreeItem((*reinterpret_cast< const QSslCertificate(*)>(_a[1])),(*reinterpret_cast< QgsAuthCertUtils::CertTrustPolicy(*)>(_a[2])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[3]))); break;
        case 6: _t->decorateCertTreeItem((*reinterpret_cast< const QSslCertificate(*)>(_a[1])),(*reinterpret_cast< QgsAuthCertUtils::CertTrustPolicy(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthCertInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAuthCertInfo.data,
      qt_meta_data_QgsAuthCertInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthCertInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthCertInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthCertInfo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAuthCertInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_QgsAuthCertInfoDialog_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthCertInfoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthCertInfoDialog_t qt_meta_stringdata_QgsAuthCertInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QgsAuthCertInfoDialog"

    },
    "QgsAuthCertInfoDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthCertInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsAuthCertInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthCertInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthCertInfoDialog.data,
      qt_meta_data_QgsAuthCertInfoDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthCertInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthCertInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthCertInfoDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthCertInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
