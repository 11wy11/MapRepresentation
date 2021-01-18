/****************************************************************************
** Meta object code from reading C++ file 'qgsauthtrustedcasdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthtrustedcasdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthtrustedcasdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthTrustedCAsDialog_t {
    QByteArrayData data[21];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthTrustedCAsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthTrustedCAsDialog_t qt_meta_stringdata_QgsAuthTrustedCAsDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsAuthTrustedCAsDialog"
QT_MOC_LITERAL(1, 24, 19), // "populateCaCertsView"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "showCertInfo"
QT_MOC_LITERAL(4, 58, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 75, 4), // "item"
QT_MOC_LITERAL(6, 80, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 97, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 112, 8), // "selected"
QT_MOC_LITERAL(9, 121, 10), // "deselected"
QT_MOC_LITERAL(10, 132, 14), // "checkSelection"
QT_MOC_LITERAL(11, 147, 17), // "handleDoubleClick"
QT_MOC_LITERAL(12, 165, 3), // "col"
QT_MOC_LITERAL(13, 169, 17), // "btnInfoCa_clicked"
QT_MOC_LITERAL(14, 187, 21), // "btnGroupByOrg_toggled"
QT_MOC_LITERAL(15, 209, 7), // "checked"
QT_MOC_LITERAL(16, 217, 14), // "authMessageOut"
QT_MOC_LITERAL(17, 232, 7), // "message"
QT_MOC_LITERAL(18, 240, 7), // "authtag"
QT_MOC_LITERAL(19, 248, 28), // "QgsAuthManager::MessageLevel"
QT_MOC_LITERAL(20, 277, 5) // "level"

    },
    "QgsAuthTrustedCAsDialog\0populateCaCertsView\0"
    "\0showCertInfo\0QTreeWidgetItem*\0item\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0checkSelection\0"
    "handleDoubleClick\0col\0btnInfoCa_clicked\0"
    "btnGroupByOrg_toggled\0checked\0"
    "authMessageOut\0message\0authtag\0"
    "QgsAuthManager::MessageLevel\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthTrustedCAsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       6,    2,   58,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    2,   64,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,
      14,    1,   70,    2, 0x08 /* Private */,
      16,    3,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 19,   17,   18,   20,

       0        // eod
};

void QgsAuthTrustedCAsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthTrustedCAsDialog *_t = static_cast<QgsAuthTrustedCAsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateCaCertsView(); break;
        case 1: _t->showCertInfo((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->checkSelection(); break;
        case 4: _t->handleDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->btnInfoCa_clicked(); break;
        case 6: _t->btnGroupByOrg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->authMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthTrustedCAsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthTrustedCAsDialog.data,
      qt_meta_data_QgsAuthTrustedCAsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthTrustedCAsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthTrustedCAsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthTrustedCAsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthTrustedCAsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
