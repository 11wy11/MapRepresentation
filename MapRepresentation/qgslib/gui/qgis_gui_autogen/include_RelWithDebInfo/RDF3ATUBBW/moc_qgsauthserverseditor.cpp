/****************************************************************************
** Meta object code from reading C++ file 'qgsauthserverseditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthserverseditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthserverseditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthServersEditor_t {
    QByteArrayData data[23];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthServersEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthServersEditor_t qt_meta_stringdata_QgsAuthServersEditor = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAuthServersEditor"
QT_MOC_LITERAL(1, 21, 22), // "populateSslConfigsView"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "refreshSslConfigsView"
QT_MOC_LITERAL(4, 67, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 84, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 99, 8), // "selected"
QT_MOC_LITERAL(7, 108, 10), // "deselected"
QT_MOC_LITERAL(8, 119, 14), // "checkSelection"
QT_MOC_LITERAL(9, 134, 17), // "handleDoubleClick"
QT_MOC_LITERAL(10, 152, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 169, 4), // "item"
QT_MOC_LITERAL(12, 174, 3), // "col"
QT_MOC_LITERAL(13, 178, 20), // "btnAddServer_clicked"
QT_MOC_LITERAL(14, 199, 23), // "btnRemoveServer_clicked"
QT_MOC_LITERAL(15, 223, 21), // "btnEditServer_clicked"
QT_MOC_LITERAL(16, 245, 21), // "btnGroupByOrg_toggled"
QT_MOC_LITERAL(17, 267, 7), // "checked"
QT_MOC_LITERAL(18, 275, 14), // "authMessageOut"
QT_MOC_LITERAL(19, 290, 7), // "message"
QT_MOC_LITERAL(20, 298, 7), // "authtag"
QT_MOC_LITERAL(21, 306, 28), // "QgsAuthManager::MessageLevel"
QT_MOC_LITERAL(22, 335, 5) // "level"

    },
    "QgsAuthServersEditor\0populateSslConfigsView\0"
    "\0refreshSslConfigsView\0selectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "checkSelection\0handleDoubleClick\0"
    "QTreeWidgetItem*\0item\0col\0"
    "btnAddServer_clicked\0btnRemoveServer_clicked\0"
    "btnEditServer_clicked\0btnGroupByOrg_toggled\0"
    "checked\0authMessageOut\0message\0authtag\0"
    "QgsAuthManager::MessageLevel\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthServersEditor[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    2,   66,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    2,   72,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,
      16,    1,   80,    2, 0x08 /* Private */,
      18,    3,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 21,   19,   20,   22,

       0        // eod
};

void QgsAuthServersEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthServersEditor *_t = static_cast<QgsAuthServersEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateSslConfigsView(); break;
        case 1: _t->refreshSslConfigsView(); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->checkSelection(); break;
        case 4: _t->handleDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->btnAddServer_clicked(); break;
        case 6: _t->btnRemoveServer_clicked(); break;
        case 7: _t->btnEditServer_clicked(); break;
        case 8: _t->btnGroupByOrg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->authMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
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

QT_INIT_METAOBJECT const QMetaObject QgsAuthServersEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAuthServersEditor.data,
      qt_meta_data_QgsAuthServersEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthServersEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthServersEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthServersEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAuthServersEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
