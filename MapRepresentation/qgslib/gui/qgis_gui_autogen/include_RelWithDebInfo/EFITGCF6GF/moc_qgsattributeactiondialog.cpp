/****************************************************************************
** Meta object code from reading C++ file 'qgsattributeactiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vector/qgsattributeactiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributeactiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeActionDialog_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeActionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeActionDialog_t qt_meta_stringdata_QgsAttributeActionDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsAttributeActionDialog"
QT_MOC_LITERAL(1, 25, 6), // "moveUp"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "moveDown"
QT_MOC_LITERAL(4, 42, 6), // "remove"
QT_MOC_LITERAL(5, 49, 6), // "insert"
QT_MOC_LITERAL(6, 56, 17), // "addDefaultActions"
QT_MOC_LITERAL(7, 74, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(8, 92, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 110, 4), // "item"
QT_MOC_LITERAL(10, 115, 13) // "updateButtons"

    },
    "QgsAttributeActionDialog\0moveUp\0\0"
    "moveDown\0remove\0insert\0addDefaultActions\0"
    "itemDoubleClicked\0QTableWidgetItem*\0"
    "item\0updateButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeActionDialog[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeActionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeActionDialog *_t = static_cast<QgsAttributeActionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveUp(); break;
        case 1: _t->moveDown(); break;
        case 2: _t->remove(); break;
        case 3: _t->insert(); break;
        case 4: _t->addDefaultActions(); break;
        case 5: _t->itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->updateButtons(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeActionDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAttributeActionDialog.data,
      qt_meta_data_QgsAttributeActionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeActionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeActionDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAttributeActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
