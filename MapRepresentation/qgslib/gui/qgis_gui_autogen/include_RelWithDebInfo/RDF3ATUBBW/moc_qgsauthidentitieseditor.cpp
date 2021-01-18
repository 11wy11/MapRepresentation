/****************************************************************************
** Meta object code from reading C++ file 'qgsauthidentitieseditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthidentitieseditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthidentitieseditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthIdentitiesEditor_t {
    QByteArrayData data[24];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthIdentitiesEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthIdentitiesEditor_t qt_meta_stringdata_QgsAuthIdentitiesEditor = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsAuthIdentitiesEditor"
QT_MOC_LITERAL(1, 24, 22), // "populateIdentitiesView"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "refreshIdentitiesView"
QT_MOC_LITERAL(4, 70, 12), // "showCertInfo"
QT_MOC_LITERAL(5, 83, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 100, 4), // "item"
QT_MOC_LITERAL(7, 105, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 122, 14), // "QItemSelection"
QT_MOC_LITERAL(9, 137, 8), // "selected"
QT_MOC_LITERAL(10, 146, 10), // "deselected"
QT_MOC_LITERAL(11, 157, 14), // "checkSelection"
QT_MOC_LITERAL(12, 172, 17), // "handleDoubleClick"
QT_MOC_LITERAL(13, 190, 3), // "col"
QT_MOC_LITERAL(14, 194, 22), // "btnAddIdentity_clicked"
QT_MOC_LITERAL(15, 217, 25), // "btnRemoveIdentity_clicked"
QT_MOC_LITERAL(16, 243, 23), // "btnInfoIdentity_clicked"
QT_MOC_LITERAL(17, 267, 21), // "btnGroupByOrg_toggled"
QT_MOC_LITERAL(18, 289, 7), // "checked"
QT_MOC_LITERAL(19, 297, 14), // "authMessageOut"
QT_MOC_LITERAL(20, 312, 7), // "message"
QT_MOC_LITERAL(21, 320, 7), // "authtag"
QT_MOC_LITERAL(22, 328, 28), // "QgsAuthManager::MessageLevel"
QT_MOC_LITERAL(23, 357, 5) // "level"

    },
    "QgsAuthIdentitiesEditor\0populateIdentitiesView\0"
    "\0refreshIdentitiesView\0showCertInfo\0"
    "QTreeWidgetItem*\0item\0selectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "checkSelection\0handleDoubleClick\0col\0"
    "btnAddIdentity_clicked\0btnRemoveIdentity_clicked\0"
    "btnInfoIdentity_clicked\0btnGroupByOrg_toggled\0"
    "checked\0authMessageOut\0message\0authtag\0"
    "QgsAuthManager::MessageLevel\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthIdentitiesEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       7,    2,   74,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    2,   80,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,
      17,    1,   88,    2, 0x08 /* Private */,
      19,    3,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,   20,   21,   23,

       0        // eod
};

void QgsAuthIdentitiesEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthIdentitiesEditor *_t = static_cast<QgsAuthIdentitiesEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateIdentitiesView(); break;
        case 1: _t->refreshIdentitiesView(); break;
        case 2: _t->showCertInfo((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->checkSelection(); break;
        case 5: _t->handleDoubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->btnAddIdentity_clicked(); break;
        case 7: _t->btnRemoveIdentity_clicked(); break;
        case 8: _t->btnInfoIdentity_clicked(); break;
        case 9: _t->btnGroupByOrg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->authMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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

QT_INIT_METAOBJECT const QMetaObject QgsAuthIdentitiesEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAuthIdentitiesEditor.data,
      qt_meta_data_QgsAuthIdentitiesEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthIdentitiesEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthIdentitiesEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthIdentitiesEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAuthIdentitiesEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
