/****************************************************************************
** Meta object code from reading C++ file 'qgscodeeditorcss.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/codeeditors/qgscodeeditorcss.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscodeeditorcss.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsQsciLexerCSS_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsQsciLexerCSS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsQsciLexerCSS_t qt_meta_stringdata_QgsQsciLexerCSS = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QgsQsciLexerCSS"

    },
    "QgsQsciLexerCSS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsQsciLexerCSS[] = {

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

void QgsQsciLexerCSS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsQsciLexerCSS::staticMetaObject = {
    { &QsciLexerCSS::staticMetaObject, qt_meta_stringdata_QgsQsciLexerCSS.data,
      qt_meta_data_QgsQsciLexerCSS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsQsciLexerCSS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsQsciLexerCSS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsQsciLexerCSS.stringdata0))
        return static_cast<void*>(this);
    return QsciLexerCSS::qt_metacast(_clname);
}

int QgsQsciLexerCSS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciLexerCSS::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsCodeEditorCSS_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCodeEditorCSS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCodeEditorCSS_t qt_meta_stringdata_QgsCodeEditorCSS = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsCodeEditorCSS"

    },
    "QgsCodeEditorCSS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCodeEditorCSS[] = {

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

void QgsCodeEditorCSS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCodeEditorCSS::staticMetaObject = {
    { &QgsCodeEditor::staticMetaObject, qt_meta_stringdata_QgsCodeEditorCSS.data,
      qt_meta_data_QgsCodeEditorCSS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCodeEditorCSS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCodeEditorCSS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCodeEditorCSS.stringdata0))
        return static_cast<void*>(this);
    return QgsCodeEditor::qt_metacast(_clname);
}

int QgsCodeEditorCSS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCodeEditor::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
