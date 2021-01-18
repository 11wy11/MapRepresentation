/****************************************************************************
** Meta object code from reading C++ file 'qgscollapsiblegroupbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgscollapsiblegroupbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscollapsiblegroupbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGroupBoxCollapseButton_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGroupBoxCollapseButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGroupBoxCollapseButton_t qt_meta_stringdata_QgsGroupBoxCollapseButton = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsGroupBoxCollapseButton"

    },
    "QgsGroupBoxCollapseButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGroupBoxCollapseButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsGroupBoxCollapseButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsGroupBoxCollapseButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QgsGroupBoxCollapseButton.data,
      qt_meta_data_QgsGroupBoxCollapseButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGroupBoxCollapseButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGroupBoxCollapseButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGroupBoxCollapseButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int QgsGroupBoxCollapseButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsCollapsibleGroupBoxBasic_t {
    QByteArrayData data[12];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCollapsibleGroupBoxBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCollapsibleGroupBoxBasic_t qt_meta_stringdata_QgsCollapsibleGroupBoxBasic = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsCollapsibleGroupBoxBasic"
QT_MOC_LITERAL(1, 28, 21), // "collapsedStateChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "collapsed"
QT_MOC_LITERAL(4, 61, 12), // "checkToggled"
QT_MOC_LITERAL(5, 74, 3), // "ckd"
QT_MOC_LITERAL(6, 78, 12), // "checkClicked"
QT_MOC_LITERAL(7, 91, 15), // "toggleCollapsed"
QT_MOC_LITERAL(8, 107, 13), // "setStyleSheet"
QT_MOC_LITERAL(9, 121, 5), // "style"
QT_MOC_LITERAL(10, 127, 9), // "syncGroup"
QT_MOC_LITERAL(11, 137, 14) // "scrollOnExpand"

    },
    "QgsCollapsibleGroupBoxBasic\0"
    "collapsedStateChanged\0\0collapsed\0"
    "checkToggled\0ckd\0checkClicked\0"
    "toggleCollapsed\0setStyleSheet\0style\0"
    "syncGroup\0scrollOnExpand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCollapsibleGroupBoxBasic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    0,   48,    2, 0x0a /* Public */,
       8,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00195103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QgsCollapsibleGroupBoxBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCollapsibleGroupBoxBasic *_t = static_cast<QgsCollapsibleGroupBoxBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collapsedStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->checkToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->checkClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->toggleCollapsed(); break;
        case 4: _t->setStyleSheet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsCollapsibleGroupBoxBasic::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCollapsibleGroupBoxBasic::collapsedStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsCollapsibleGroupBoxBasic *_t = static_cast<QgsCollapsibleGroupBoxBasic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isCollapsed(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->syncGroup(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->scrollOnExpand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsCollapsibleGroupBoxBasic *_t = static_cast<QgsCollapsibleGroupBoxBasic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCollapsed(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSyncGroup(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setScrollOnExpand(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsCollapsibleGroupBoxBasic::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QgsCollapsibleGroupBoxBasic.data,
      qt_meta_data_QgsCollapsibleGroupBoxBasic,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCollapsibleGroupBoxBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCollapsibleGroupBoxBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCollapsibleGroupBoxBasic.stringdata0))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int QgsCollapsibleGroupBoxBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsCollapsibleGroupBoxBasic::collapsedStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsCollapsibleGroupBox_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCollapsibleGroupBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCollapsibleGroupBox_t qt_meta_stringdata_QgsCollapsibleGroupBox = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsCollapsibleGroupBox"
QT_MOC_LITERAL(1, 23, 9), // "loadState"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "saveState"
QT_MOC_LITERAL(4, 44, 18), // "saveCollapsedState"
QT_MOC_LITERAL(5, 63, 16) // "saveCheckedState"

    },
    "QgsCollapsibleGroupBox\0loadState\0\0"
    "saveState\0saveCollapsedState\0"
    "saveCheckedState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCollapsibleGroupBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QgsCollapsibleGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCollapsibleGroupBox *_t = static_cast<QgsCollapsibleGroupBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadState(); break;
        case 1: _t->saveState(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsCollapsibleGroupBox *_t = static_cast<QgsCollapsibleGroupBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->saveCollapsedState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->saveCheckedState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsCollapsibleGroupBox *_t = static_cast<QgsCollapsibleGroupBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSaveCollapsedState(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSaveCheckedState(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCollapsibleGroupBox::staticMetaObject = {
    { &QgsCollapsibleGroupBoxBasic::staticMetaObject, qt_meta_stringdata_QgsCollapsibleGroupBox.data,
      qt_meta_data_QgsCollapsibleGroupBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCollapsibleGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCollapsibleGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCollapsibleGroupBox.stringdata0))
        return static_cast<void*>(this);
    return QgsCollapsibleGroupBoxBasic::qt_metacast(_clname);
}

int QgsCollapsibleGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCollapsibleGroupBoxBasic::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
