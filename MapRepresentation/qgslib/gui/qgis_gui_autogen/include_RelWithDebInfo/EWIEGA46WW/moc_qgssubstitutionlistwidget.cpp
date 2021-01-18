/****************************************************************************
** Meta object code from reading C++ file 'qgssubstitutionlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgssubstitutionlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssubstitutionlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSubstitutionListWidget_t {
    QByteArrayData data[10];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSubstitutionListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSubstitutionListWidget_t qt_meta_stringdata_QgsSubstitutionListWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsSubstitutionListWidget"
QT_MOC_LITERAL(1, 26, 20), // "substitutionsChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 30), // "QgsStringReplacementCollection"
QT_MOC_LITERAL(4, 79, 13), // "substitutions"
QT_MOC_LITERAL(5, 93, 18), // "mButtonAdd_clicked"
QT_MOC_LITERAL(6, 112, 21), // "mButtonRemove_clicked"
QT_MOC_LITERAL(7, 134, 12), // "tableChanged"
QT_MOC_LITERAL(8, 147, 21), // "mButtonExport_clicked"
QT_MOC_LITERAL(9, 169, 21) // "mButtonImport_clicked"

    },
    "QgsSubstitutionListWidget\0"
    "substitutionsChanged\0\0"
    "QgsStringReplacementCollection\0"
    "substitutions\0mButtonAdd_clicked\0"
    "mButtonRemove_clicked\0tableChanged\0"
    "mButtonExport_clicked\0mButtonImport_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSubstitutionListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QgsSubstitutionListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSubstitutionListWidget *_t = static_cast<QgsSubstitutionListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->substitutionsChanged((*reinterpret_cast< const QgsStringReplacementCollection(*)>(_a[1]))); break;
        case 1: _t->mButtonAdd_clicked(); break;
        case 2: _t->mButtonRemove_clicked(); break;
        case 3: _t->tableChanged(); break;
        case 4: _t->mButtonExport_clicked(); break;
        case 5: _t->mButtonImport_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSubstitutionListWidget::*)(const QgsStringReplacementCollection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSubstitutionListWidget::substitutionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsSubstitutionListWidget *_t = static_cast<QgsSubstitutionListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsStringReplacementCollection*>(_v) = _t->substitutions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsSubstitutionListWidget *_t = static_cast<QgsSubstitutionListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubstitutions(*reinterpret_cast< QgsStringReplacementCollection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsSubstitutionListWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsSubstitutionListWidget.data,
      qt_meta_data_QgsSubstitutionListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSubstitutionListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSubstitutionListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSubstitutionListWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsSubstitutionListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsSubstitutionListWidget::substitutionsChanged(const QgsStringReplacementCollection & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsSubstitutionListDialog_t {
    QByteArrayData data[3];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSubstitutionListDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSubstitutionListDialog_t qt_meta_stringdata_QgsSubstitutionListDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsSubstitutionListDialog"
QT_MOC_LITERAL(1, 26, 13), // "substitutions"
QT_MOC_LITERAL(2, 40, 30) // "QgsStringReplacementCollection"

    },
    "QgsSubstitutionListDialog\0substitutions\0"
    "QgsStringReplacementCollection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSubstitutionListDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,

       0        // eod
};

void QgsSubstitutionListDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QgsSubstitutionListDialog *_t = static_cast<QgsSubstitutionListDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsStringReplacementCollection*>(_v) = _t->substitutions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsSubstitutionListDialog *_t = static_cast<QgsSubstitutionListDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubstitutions(*reinterpret_cast< QgsStringReplacementCollection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsSubstitutionListDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsSubstitutionListDialog.data,
      qt_meta_data_QgsSubstitutionListDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSubstitutionListDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSubstitutionListDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSubstitutionListDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsSubstitutionListDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
