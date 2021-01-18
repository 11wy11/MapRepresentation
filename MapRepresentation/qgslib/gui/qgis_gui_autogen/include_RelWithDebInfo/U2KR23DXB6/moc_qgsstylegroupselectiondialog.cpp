/****************************************************************************
** Meta object code from reading C++ file 'qgsstylegroupselectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgsstylegroupselectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstylegroupselectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsStyleGroupSelectionDialog_t {
    QByteArrayData data[16];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleGroupSelectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleGroupSelectionDialog_t qt_meta_stringdata_QgsStyleGroupSelectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsStyleGroupSelectionDialog"
QT_MOC_LITERAL(1, 29, 11), // "tagSelected"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "tagName"
QT_MOC_LITERAL(4, 50, 13), // "tagDeselected"
QT_MOC_LITERAL(5, 64, 18), // "smartgroupSelected"
QT_MOC_LITERAL(6, 83, 9), // "groupName"
QT_MOC_LITERAL(7, 93, 20), // "smartgroupDeselected"
QT_MOC_LITERAL(8, 114, 13), // "allDeselected"
QT_MOC_LITERAL(9, 128, 11), // "allSelected"
QT_MOC_LITERAL(10, 140, 19), // "favoritesDeselected"
QT_MOC_LITERAL(11, 160, 17), // "favoritesSelected"
QT_MOC_LITERAL(12, 178, 25), // "groupTreeSelectionChanged"
QT_MOC_LITERAL(13, 204, 14), // "QItemSelection"
QT_MOC_LITERAL(14, 219, 8), // "selected"
QT_MOC_LITERAL(15, 228, 10) // "deselected"

    },
    "QgsStyleGroupSelectionDialog\0tagSelected\0"
    "\0tagName\0tagDeselected\0smartgroupSelected\0"
    "groupName\0smartgroupDeselected\0"
    "allDeselected\0allSelected\0favoritesDeselected\0"
    "favoritesSelected\0groupTreeSelectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleGroupSelectionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       7,    1,   68,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    0,   73,    2, 0x06 /* Public */,
      11,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,

       0        // eod
};

void QgsStyleGroupSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleGroupSelectionDialog *_t = static_cast<QgsStyleGroupSelectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tagSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->tagDeselected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->smartgroupSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->smartgroupDeselected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->allDeselected(); break;
        case 5: _t->allSelected(); break;
        case 6: _t->favoritesDeselected(); break;
        case 7: _t->favoritesSelected(); break;
        case 8: _t->groupTreeSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::tagSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::tagDeselected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::smartgroupSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::smartgroupDeselected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::allDeselected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::allSelected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::favoritesDeselected)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QgsStyleGroupSelectionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsStyleGroupSelectionDialog::favoritesSelected)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsStyleGroupSelectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsStyleGroupSelectionDialog.data,
      qt_meta_data_QgsStyleGroupSelectionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyleGroupSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleGroupSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleGroupSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsStyleGroupSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsStyleGroupSelectionDialog::tagSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsStyleGroupSelectionDialog::tagDeselected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsStyleGroupSelectionDialog::smartgroupSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsStyleGroupSelectionDialog::smartgroupDeselected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsStyleGroupSelectionDialog::allDeselected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgsStyleGroupSelectionDialog::allSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsStyleGroupSelectionDialog::favoritesDeselected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QgsStyleGroupSelectionDialog::favoritesSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
