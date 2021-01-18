/****************************************************************************
** Meta object code from reading C++ file 'qgsattributesformproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vector/qgsattributesformproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributesformproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributesFormProperties_t {
    QByteArrayData data[16];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributesFormProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributesFormProperties_t qt_meta_stringdata_QgsAttributesFormProperties = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsAttributesFormProperties"
QT_MOC_LITERAL(1, 28, 30), // "onInvertSelectionButtonClicked"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 7), // "checked"
QT_MOC_LITERAL(4, 68, 27), // "loadAttributeSpecificEditor"
QT_MOC_LITERAL(5, 96, 21), // "QgsAttributesDnDTree*"
QT_MOC_LITERAL(6, 118, 7), // "emitter"
QT_MOC_LITERAL(7, 126, 8), // "receiver"
QT_MOC_LITERAL(8, 135, 27), // "onAttributeSelectionChanged"
QT_MOC_LITERAL(9, 163, 28), // "onFormLayoutSelectionChanged"
QT_MOC_LITERAL(10, 192, 19), // "addTabOrGroupButton"
QT_MOC_LITERAL(11, 212, 22), // "removeTabOrGroupButton"
QT_MOC_LITERAL(12, 235, 41), // "mEditorLayoutComboBox_current..."
QT_MOC_LITERAL(13, 277, 5), // "index"
QT_MOC_LITERAL(14, 283, 25), // "pbnSelectEditForm_clicked"
QT_MOC_LITERAL(15, 309, 19) // "mTbInitCode_clicked"

    },
    "QgsAttributesFormProperties\0"
    "onInvertSelectionButtonClicked\0\0checked\0"
    "loadAttributeSpecificEditor\0"
    "QgsAttributesDnDTree*\0emitter\0receiver\0"
    "onAttributeSelectionChanged\0"
    "onFormLayoutSelectionChanged\0"
    "addTabOrGroupButton\0removeTabOrGroupButton\0"
    "mEditorLayoutComboBox_currentIndexChanged\0"
    "index\0pbnSelectEditForm_clicked\0"
    "mTbInitCode_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributesFormProperties[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    2,   62,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,
      14,    0,   74,    2, 0x08 /* Private */,
      15,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAttributesFormProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributesFormProperties *_t = static_cast<QgsAttributesFormProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onInvertSelectionButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadAttributeSpecificEditor((*reinterpret_cast< QgsAttributesDnDTree*(*)>(_a[1])),(*reinterpret_cast< QgsAttributesDnDTree*(*)>(_a[2]))); break;
        case 2: _t->onAttributeSelectionChanged(); break;
        case 3: _t->onFormLayoutSelectionChanged(); break;
        case 4: _t->addTabOrGroupButton(); break;
        case 5: _t->removeTabOrGroupButton(); break;
        case 6: _t->mEditorLayoutComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->pbnSelectEditForm_clicked(); break;
        case 8: _t->mTbInitCode_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsAttributesDnDTree* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributesFormProperties::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAttributesFormProperties.data,
      qt_meta_data_QgsAttributesFormProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributesFormProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributesFormProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributesFormProperties.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAttributesFormProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_QgsAttributesDnDTree_t {
    QByteArrayData data[9];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributesDnDTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributesDnDTree_t qt_meta_stringdata_QgsAttributesDnDTree = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAttributesDnDTree"
QT_MOC_LITERAL(1, 21, 23), // "selectFirstMatchingItem"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 44), // "QgsAttributesFormProperties::..."
QT_MOC_LITERAL(4, 91, 4), // "data"
QT_MOC_LITERAL(5, 96, 19), // "onItemDoubleClicked"
QT_MOC_LITERAL(6, 116, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 133, 4), // "item"
QT_MOC_LITERAL(8, 138, 6) // "column"

    },
    "QgsAttributesDnDTree\0selectFirstMatchingItem\0"
    "\0QgsAttributesFormProperties::DnDTreeItemData\0"
    "data\0onItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributesDnDTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,

       0        // eod
};

void QgsAttributesDnDTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributesDnDTree *_t = static_cast<QgsAttributesDnDTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectFirstMatchingItem((*reinterpret_cast< const QgsAttributesFormProperties::DnDTreeItemData(*)>(_a[1]))); break;
        case 1: _t->onItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsAttributesFormProperties::DnDTreeItemData >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributesDnDTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_QgsAttributesDnDTree.data,
      qt_meta_data_QgsAttributesDnDTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributesDnDTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributesDnDTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributesDnDTree.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int QgsAttributesDnDTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
