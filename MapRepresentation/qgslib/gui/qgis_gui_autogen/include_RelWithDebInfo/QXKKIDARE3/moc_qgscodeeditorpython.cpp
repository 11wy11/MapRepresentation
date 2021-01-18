/****************************************************************************
** Meta object code from reading C++ file 'qgscodeeditorpython.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/codeeditors/qgscodeeditorpython.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscodeeditorpython.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsQsciLexerPython_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsQsciLexerPython_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsQsciLexerPython_t qt_meta_stringdata_QgsQsciLexerPython = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QgsQsciLexerPython"

    },
    "QgsQsciLexerPython"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsQsciLexerPython[] = {

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

void QgsQsciLexerPython::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsQsciLexerPython::staticMetaObject = {
    { &QsciLexerPython::staticMetaObject, qt_meta_stringdata_QgsQsciLexerPython.data,
      qt_meta_data_QgsQsciLexerPython,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsQsciLexerPython::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsQsciLexerPython::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsQsciLexerPython.stringdata0))
        return static_cast<void*>(this);
    return QsciLexerPython::qt_metacast(_clname);
}

int QgsQsciLexerPython::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciLexerPython::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsCodeEditorPython_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCodeEditorPython_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCodeEditorPython_t qt_meta_stringdata_QgsCodeEditorPython = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsCodeEditorPython"
QT_MOC_LITERAL(1, 20, 30), // "searchSelectedTextInPyQGISDocs"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12) // "autoComplete"

    },
    "QgsCodeEditorPython\0searchSelectedTextInPyQGISDocs\0"
    "\0autoComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCodeEditorPython[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsCodeEditorPython::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCodeEditorPython *_t = static_cast<QgsCodeEditorPython *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchSelectedTextInPyQGISDocs(); break;
        case 1: _t->autoComplete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCodeEditorPython::staticMetaObject = {
    { &QgsCodeEditor::staticMetaObject, qt_meta_stringdata_QgsCodeEditorPython.data,
      qt_meta_data_QgsCodeEditorPython,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCodeEditorPython::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCodeEditorPython::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCodeEditorPython.stringdata0))
        return static_cast<void*>(this);
    return QgsCodeEditor::qt_metacast(_clname);
}

int QgsCodeEditorPython::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCodeEditor::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
