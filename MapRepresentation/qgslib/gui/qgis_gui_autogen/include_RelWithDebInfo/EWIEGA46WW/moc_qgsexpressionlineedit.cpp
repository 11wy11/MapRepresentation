/****************************************************************************
** Meta object code from reading C++ file 'qgsexpressionlineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsexpressionlineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexpressionlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExpressionLineEdit_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionLineEdit_t qt_meta_stringdata_QgsExpressionLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsExpressionLineEdit"
QT_MOC_LITERAL(1, 22, 17), // "expressionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "expression"
QT_MOC_LITERAL(4, 52, 13), // "setExpression"
QT_MOC_LITERAL(5, 66, 16), // "expressionEdited"
QT_MOC_LITERAL(6, 83, 14), // "editExpression"
QT_MOC_LITERAL(7, 98, 19) // "updateLineEditStyle"

    },
    "QgsExpressionLineEdit\0expressionChanged\0"
    "\0expression\0setExpression\0expressionEdited\0"
    "editExpression\0updateLineEditStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionLineEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QgsExpressionLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExpressionLineEdit *_t = static_cast<QgsExpressionLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->expressionEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->expressionEdited(); break;
        case 4: _t->editExpression(); break;
        case 5: _t->updateLineEditStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->updateLineEditStyle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExpressionLineEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionLineEdit::expressionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsExpressionLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsExpressionLineEdit.data,
      qt_meta_data_QgsExpressionLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsExpressionLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QgsExpressionLineEdit::expressionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
