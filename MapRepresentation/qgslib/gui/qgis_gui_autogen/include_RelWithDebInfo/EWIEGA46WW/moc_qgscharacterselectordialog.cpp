/****************************************************************************
** Meta object code from reading C++ file 'qgscharacterselectordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgscharacterselectordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscharacterselectordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCharacterSelectorDialog_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCharacterSelectorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCharacterSelectorDialog_t qt_meta_stringdata_QgsCharacterSelectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsCharacterSelectorDialog"
QT_MOC_LITERAL(1, 27, 15), // "selectCharacter"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "bool*"
QT_MOC_LITERAL(4, 50, 7), // "gotChar"
QT_MOC_LITERAL(5, 58, 4), // "font"
QT_MOC_LITERAL(6, 63, 5), // "style"
QT_MOC_LITERAL(7, 69, 16), // "initialSelection"
QT_MOC_LITERAL(8, 86, 12), // "setCharacter"
QT_MOC_LITERAL(9, 99, 3) // "chr"

    },
    "QgsCharacterSelectorDialog\0selectCharacter\0"
    "\0bool*\0gotChar\0font\0style\0initialSelection\0"
    "setCharacter\0chr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCharacterSelectorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x0a /* Public */,
       1,    3,   38,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QChar, 0x80000000 | 3, QMetaType::QFont, QMetaType::QString, QMetaType::QChar,    4,    5,    6,    7,
    QMetaType::QChar, 0x80000000 | 3, QMetaType::QFont, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QChar,    9,

       0        // eod
};

void QgsCharacterSelectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCharacterSelectorDialog *_t = static_cast<QgsCharacterSelectorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QChar _r = _t->selectCharacter((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QChar(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = std::move(_r); }  break;
        case 1: { QChar _r = _t->selectCharacter((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setCharacter((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsCharacterSelectorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsCharacterSelectorDialog.data,
      qt_meta_data_QgsCharacterSelectorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCharacterSelectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCharacterSelectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCharacterSelectorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsCharacterSelectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
