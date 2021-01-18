/****************************************************************************
** Meta object code from reading C++ file 'qgssublayersdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgssublayersdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssublayersdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSublayersDialog_t {
    QByteArrayData data[11];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSublayersDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSublayersDialog_t qt_meta_stringdata_QgsSublayersDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsSublayersDialog"
QT_MOC_LITERAL(1, 19, 4), // "exec"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 28), // "layersTable_selectionChanged"
QT_MOC_LITERAL(4, 54, 14), // "QItemSelection"
QT_MOC_LITERAL(5, 69, 23), // "mBtnDeselectAll_pressed"
QT_MOC_LITERAL(6, 93, 10), // "PromptMode"
QT_MOC_LITERAL(7, 104, 12), // "PromptAlways"
QT_MOC_LITERAL(8, 117, 14), // "PromptIfNeeded"
QT_MOC_LITERAL(9, 132, 11), // "PromptNever"
QT_MOC_LITERAL(10, 144, 13) // "PromptLoadAll"

    },
    "QgsSublayersDialog\0exec\0\0"
    "layersTable_selectionChanged\0"
    "QItemSelection\0mBtnDeselectAll_pressed\0"
    "PromptMode\0PromptAlways\0PromptIfNeeded\0"
    "PromptNever\0PromptLoadAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSublayersDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void,

 // enums: name, flags, count, data
       6, 0x0,    4,   40,

 // enum data: key, value
       7, uint(QgsSublayersDialog::PromptAlways),
       8, uint(QgsSublayersDialog::PromptIfNeeded),
       9, uint(QgsSublayersDialog::PromptNever),
      10, uint(QgsSublayersDialog::PromptLoadAll),

       0        // eod
};

void QgsSublayersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSublayersDialog *_t = static_cast<QgsSublayersDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->layersTable_selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->mBtnDeselectAll_pressed(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSublayersDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsSublayersDialog.data,
      qt_meta_data_QgsSublayersDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSublayersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSublayersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSublayersDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsSublayersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
