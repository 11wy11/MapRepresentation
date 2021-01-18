/****************************************************************************
** Meta object code from reading C++ file 'qgsauthconfigselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsauthconfigselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsauthconfigselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthConfigSelect_t {
    QByteArrayData data[18];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthConfigSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthConfigSelect_t qt_meta_stringdata_QgsAuthConfigSelect = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAuthConfigSelect"
QT_MOC_LITERAL(1, 20, 23), // "selectedConfigIdChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "authcfg"
QT_MOC_LITERAL(4, 53, 23), // "selectedConfigIdRemoved"
QT_MOC_LITERAL(5, 77, 11), // "showMessage"
QT_MOC_LITERAL(6, 89, 3), // "msg"
QT_MOC_LITERAL(7, 93, 12), // "clearMessage"
QT_MOC_LITERAL(8, 106, 10), // "loadConfig"
QT_MOC_LITERAL(9, 117, 11), // "clearConfig"
QT_MOC_LITERAL(10, 129, 14), // "validateConfig"
QT_MOC_LITERAL(11, 144, 22), // "populateConfigSelector"
QT_MOC_LITERAL(12, 167, 35), // "cmbConfigSelect_currentIndexC..."
QT_MOC_LITERAL(13, 203, 5), // "index"
QT_MOC_LITERAL(14, 209, 20), // "btnConfigAdd_clicked"
QT_MOC_LITERAL(15, 230, 21), // "btnConfigEdit_clicked"
QT_MOC_LITERAL(16, 252, 23), // "btnConfigRemove_clicked"
QT_MOC_LITERAL(17, 276, 25) // "btnConfigMsgClear_clicked"

    },
    "QgsAuthConfigSelect\0selectedConfigIdChanged\0"
    "\0authcfg\0selectedConfigIdRemoved\0"
    "showMessage\0msg\0clearMessage\0loadConfig\0"
    "clearConfig\0validateConfig\0"
    "populateConfigSelector\0"
    "cmbConfigSelect_currentIndexChanged\0"
    "index\0btnConfigAdd_clicked\0"
    "btnConfigEdit_clicked\0btnConfigRemove_clicked\0"
    "btnConfigMsgClear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthConfigSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   85,    2, 0x0a /* Public */,
       7,    0,   88,    2, 0x0a /* Public */,
       8,    0,   89,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    1,   93,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAuthConfigSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthConfigSelect *_t = static_cast<QgsAuthConfigSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedConfigIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectedConfigIdRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->clearMessage(); break;
        case 4: _t->loadConfig(); break;
        case 5: _t->clearConfig(); break;
        case 6: _t->validateConfig(); break;
        case 7: _t->populateConfigSelector(); break;
        case 8: _t->cmbConfigSelect_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->btnConfigAdd_clicked(); break;
        case 10: _t->btnConfigEdit_clicked(); break;
        case 11: _t->btnConfigRemove_clicked(); break;
        case 12: _t->btnConfigMsgClear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAuthConfigSelect::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthConfigSelect::selectedConfigIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsAuthConfigSelect::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAuthConfigSelect::selectedConfigIdRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthConfigSelect::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAuthConfigSelect.data,
      qt_meta_data_QgsAuthConfigSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthConfigSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthConfigSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthConfigSelect.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAuthConfigSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QgsAuthConfigSelect::selectedConfigIdChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAuthConfigSelect::selectedConfigIdRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QgsAuthConfigUriEdit_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthConfigUriEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthConfigUriEdit_t qt_meta_stringdata_QgsAuthConfigUriEdit = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAuthConfigUriEdit"
QT_MOC_LITERAL(1, 21, 11), // "saveChanges"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "resetChanges"
QT_MOC_LITERAL(4, 47, 14), // "authCfgUpdated"
QT_MOC_LITERAL(5, 62, 7), // "authcfg"
QT_MOC_LITERAL(6, 70, 14) // "authCfgRemoved"

    },
    "QgsAuthConfigUriEdit\0saveChanges\0\0"
    "resetChanges\0authCfgUpdated\0authcfg\0"
    "authCfgRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthConfigUriEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void QgsAuthConfigUriEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthConfigUriEdit *_t = static_cast<QgsAuthConfigUriEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveChanges(); break;
        case 1: _t->resetChanges(); break;
        case 2: _t->authCfgUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->authCfgRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthConfigUriEdit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthConfigUriEdit.data,
      qt_meta_data_QgsAuthConfigUriEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthConfigUriEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthConfigUriEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthConfigUriEdit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthConfigUriEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
