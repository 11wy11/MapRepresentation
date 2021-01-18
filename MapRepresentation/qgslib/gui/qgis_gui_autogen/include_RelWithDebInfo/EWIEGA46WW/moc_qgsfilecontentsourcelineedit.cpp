/****************************************************************************
** Meta object code from reading C++ file 'qgsfilecontentsourcelineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfilecontentsourcelineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfilecontentsourcelineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAbstractFileContentSourceLineEdit_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAbstractFileContentSourceLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAbstractFileContentSourceLineEdit_t qt_meta_stringdata_QgsAbstractFileContentSourceLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QgsAbstractFileContentSourceL..."
QT_MOC_LITERAL(1, 37, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 6), // "source"
QT_MOC_LITERAL(4, 59, 9), // "setSource"
QT_MOC_LITERAL(5, 69, 10), // "selectFile"
QT_MOC_LITERAL(6, 80, 9), // "selectUrl"
QT_MOC_LITERAL(7, 90, 9), // "embedFile"
QT_MOC_LITERAL(8, 100, 11), // "extractFile"
QT_MOC_LITERAL(9, 112, 24), // "mFileLineEdit_textEdited"
QT_MOC_LITERAL(10, 137, 4) // "text"

    },
    "QgsAbstractFileContentSourceLineEdit\0"
    "sourceChanged\0\0source\0setSource\0"
    "selectFile\0selectUrl\0embedFile\0"
    "extractFile\0mFileLineEdit_textEdited\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAbstractFileContentSourceLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QgsAbstractFileContentSourceLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAbstractFileContentSourceLineEdit *_t = static_cast<QgsAbstractFileContentSourceLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setSource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectFile(); break;
        case 3: _t->selectUrl(); break;
        case 4: _t->embedFile(); break;
        case 5: _t->extractFile(); break;
        case 6: _t->mFileLineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAbstractFileContentSourceLineEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAbstractFileContentSourceLineEdit::sourceChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsAbstractFileContentSourceLineEdit *_t = static_cast<QgsAbstractFileContentSourceLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsAbstractFileContentSourceLineEdit *_t = static_cast<QgsAbstractFileContentSourceLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsAbstractFileContentSourceLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAbstractFileContentSourceLineEdit.data,
      qt_meta_data_QgsAbstractFileContentSourceLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAbstractFileContentSourceLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAbstractFileContentSourceLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAbstractFileContentSourceLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAbstractFileContentSourceLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void QgsAbstractFileContentSourceLineEdit::sourceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsSvgSourceLineEdit_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSvgSourceLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSvgSourceLineEdit_t qt_meta_stringdata_QgsSvgSourceLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QgsSvgSourceLineEdit"

    },
    "QgsSvgSourceLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSvgSourceLineEdit[] = {

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

void QgsSvgSourceLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsSvgSourceLineEdit::staticMetaObject = {
    { &QgsAbstractFileContentSourceLineEdit::staticMetaObject, qt_meta_stringdata_QgsSvgSourceLineEdit.data,
      qt_meta_data_QgsSvgSourceLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSvgSourceLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSvgSourceLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSvgSourceLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractFileContentSourceLineEdit::qt_metacast(_clname);
}

int QgsSvgSourceLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractFileContentSourceLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsImageSourceLineEdit_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsImageSourceLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsImageSourceLineEdit_t qt_meta_stringdata_QgsImageSourceLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsImageSourceLineEdit"

    },
    "QgsImageSourceLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsImageSourceLineEdit[] = {

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

void QgsImageSourceLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsImageSourceLineEdit::staticMetaObject = {
    { &QgsAbstractFileContentSourceLineEdit::staticMetaObject, qt_meta_stringdata_QgsImageSourceLineEdit.data,
      qt_meta_data_QgsImageSourceLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsImageSourceLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsImageSourceLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsImageSourceLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractFileContentSourceLineEdit::qt_metacast(_clname);
}

int QgsImageSourceLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractFileContentSourceLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
