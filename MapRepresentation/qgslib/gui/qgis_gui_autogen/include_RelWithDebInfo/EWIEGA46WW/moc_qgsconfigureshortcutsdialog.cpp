/****************************************************************************
** Meta object code from reading C++ file 'qgsconfigureshortcutsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsconfigureshortcutsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsconfigureshortcutsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsConfigureShortcutsDialog_t {
    QByteArrayData data[14];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsConfigureShortcutsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsConfigureShortcutsDialog_t qt_meta_stringdata_QgsConfigureShortcutsDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsConfigureShortcutsDialog"
QT_MOC_LITERAL(1, 28, 14), // "changeShortcut"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "resetShortcut"
QT_MOC_LITERAL(4, 58, 13), // "setNoShortcut"
QT_MOC_LITERAL(5, 72, 13), // "saveShortcuts"
QT_MOC_LITERAL(6, 86, 13), // "loadShortcuts"
QT_MOC_LITERAL(7, 100, 21), // "mLeFilter_textChanged"
QT_MOC_LITERAL(8, 122, 4), // "text"
QT_MOC_LITERAL(9, 127, 13), // "actionChanged"
QT_MOC_LITERAL(10, 141, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 158, 7), // "current"
QT_MOC_LITERAL(12, 166, 8), // "previous"
QT_MOC_LITERAL(13, 175, 8) // "showHelp"

    },
    "QgsConfigureShortcutsDialog\0changeShortcut\0"
    "\0resetShortcut\0setNoShortcut\0saveShortcuts\0"
    "loadShortcuts\0mLeFilter_textChanged\0"
    "text\0actionChanged\0QTreeWidgetItem*\0"
    "current\0previous\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsConfigureShortcutsDialog[] = {

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
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    2,   62,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void QgsConfigureShortcutsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsConfigureShortcutsDialog *_t = static_cast<QgsConfigureShortcutsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeShortcut(); break;
        case 1: _t->resetShortcut(); break;
        case 2: _t->setNoShortcut(); break;
        case 3: _t->saveShortcuts(); break;
        case 4: _t->loadShortcuts(); break;
        case 5: _t->mLeFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->actionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->showHelp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsConfigureShortcutsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsConfigureShortcutsDialog.data,
      qt_meta_data_QgsConfigureShortcutsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsConfigureShortcutsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsConfigureShortcutsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsConfigureShortcutsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsConfigureShortcutsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
