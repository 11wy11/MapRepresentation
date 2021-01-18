/****************************************************************************
** Meta object code from reading C++ file 'qgsauthcerttrustpolicycombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthcerttrustpolicycombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthcerttrustpolicycombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthCertTrustPolicyComboBox_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthCertTrustPolicyComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthCertTrustPolicyComboBox_t qt_meta_stringdata_QgsAuthCertTrustPolicyComboBox = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsAuthCertTrustPolicyComboBox"
QT_MOC_LITERAL(1, 31, 14), // "setTrustPolicy"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 33), // "QgsAuthCertUtils::CertTrustPo..."
QT_MOC_LITERAL(4, 81, 6), // "policy"
QT_MOC_LITERAL(5, 88, 21), // "setDefaultTrustPolicy"
QT_MOC_LITERAL(6, 110, 13), // "defaultpolicy"
QT_MOC_LITERAL(7, 124, 21), // "highlightCurrentIndex"
QT_MOC_LITERAL(8, 146, 4) // "indx"

    },
    "QgsAuthCertTrustPolicyComboBox\0"
    "setTrustPolicy\0\0QgsAuthCertUtils::CertTrustPolicy\0"
    "policy\0setDefaultTrustPolicy\0defaultpolicy\0"
    "highlightCurrentIndex\0indx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthCertTrustPolicyComboBox[] = {

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
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void QgsAuthCertTrustPolicyComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthCertTrustPolicyComboBox *_t = static_cast<QgsAuthCertTrustPolicyComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTrustPolicy((*reinterpret_cast< QgsAuthCertUtils::CertTrustPolicy(*)>(_a[1]))); break;
        case 1: _t->setDefaultTrustPolicy((*reinterpret_cast< QgsAuthCertUtils::CertTrustPolicy(*)>(_a[1]))); break;
        case 2: _t->highlightCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthCertTrustPolicyComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QgsAuthCertTrustPolicyComboBox.data,
      qt_meta_data_QgsAuthCertTrustPolicyComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthCertTrustPolicyComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthCertTrustPolicyComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthCertTrustPolicyComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QgsAuthCertTrustPolicyComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
