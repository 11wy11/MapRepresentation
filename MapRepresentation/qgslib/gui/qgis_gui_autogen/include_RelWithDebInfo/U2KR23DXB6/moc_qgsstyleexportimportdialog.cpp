/****************************************************************************
** Meta object code from reading C++ file 'qgsstyleexportimportdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgsstyleexportimportdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstyleexportimportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStyleExportImportDialog_t {
    QByteArrayData data[23];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleExportImportDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleExportImportDialog_t qt_meta_stringdata_QgsStyleExportImportDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsStyleExportImportDialog"
QT_MOC_LITERAL(1, 27, 14), // "doExportImport"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "selectByGroup"
QT_MOC_LITERAL(4, 57, 9), // "selectAll"
QT_MOC_LITERAL(5, 67, 14), // "clearSelection"
QT_MOC_LITERAL(6, 82, 15), // "selectFavorites"
QT_MOC_LITERAL(7, 98, 17), // "deselectFavorites"
QT_MOC_LITERAL(8, 116, 9), // "selectTag"
QT_MOC_LITERAL(9, 126, 7), // "tagName"
QT_MOC_LITERAL(10, 134, 11), // "deselectTag"
QT_MOC_LITERAL(11, 146, 16), // "selectSmartgroup"
QT_MOC_LITERAL(12, 163, 9), // "groupName"
QT_MOC_LITERAL(13, 173, 18), // "deselectSmartgroup"
QT_MOC_LITERAL(14, 192, 17), // "importTypeChanged"
QT_MOC_LITERAL(15, 210, 16), // "selectionChanged"
QT_MOC_LITERAL(16, 227, 14), // "QItemSelection"
QT_MOC_LITERAL(17, 242, 8), // "selected"
QT_MOC_LITERAL(18, 251, 10), // "deselected"
QT_MOC_LITERAL(19, 262, 8), // "showHelp"
QT_MOC_LITERAL(20, 271, 5), // "fetch"
QT_MOC_LITERAL(21, 277, 17), // "importFileChanged"
QT_MOC_LITERAL(22, 295, 4) // "path"

    },
    "QgsStyleExportImportDialog\0doExportImport\0"
    "\0selectByGroup\0selectAll\0clearSelection\0"
    "selectFavorites\0deselectFavorites\0"
    "selectTag\0tagName\0deselectTag\0"
    "selectSmartgroup\0groupName\0"
    "deselectSmartgroup\0importTypeChanged\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0showHelp\0fetch\0"
    "importFileChanged\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleExportImportDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x0a /* Public */,
      14,    1,  107,    2, 0x0a /* Public */,
      15,    2,  110,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void QgsStyleExportImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleExportImportDialog *_t = static_cast<QgsStyleExportImportDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doExportImport(); break;
        case 1: _t->selectByGroup(); break;
        case 2: _t->selectAll(); break;
        case 3: _t->clearSelection(); break;
        case 4: _t->selectFavorites(); break;
        case 5: _t->deselectFavorites(); break;
        case 6: _t->selectTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->deselectTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->selectSmartgroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->deselectSmartgroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->importTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 12: _t->showHelp(); break;
        case 13: _t->fetch(); break;
        case 14: _t->importFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
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

QT_INIT_METAOBJECT const QMetaObject QgsStyleExportImportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsStyleExportImportDialog.data,
      qt_meta_data_QgsStyleExportImportDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyleExportImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleExportImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleExportImportDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsStyleExportImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
