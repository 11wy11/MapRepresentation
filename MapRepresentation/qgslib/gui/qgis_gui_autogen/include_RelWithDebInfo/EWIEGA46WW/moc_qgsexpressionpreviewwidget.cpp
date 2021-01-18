/****************************************************************************
** Meta object code from reading C++ file 'qgsexpressionpreviewwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsexpressionpreviewwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexpressionpreviewwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExpressionPreviewWidget_t {
    QByteArrayData data[16];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionPreviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionPreviewWidget_t qt_meta_stringdata_QgsExpressionPreviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsExpressionPreviewWidget"
QT_MOC_LITERAL(1, 27, 16), // "expressionParsed"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "isValid"
QT_MOC_LITERAL(4, 53, 16), // "evalErrorChanged"
QT_MOC_LITERAL(5, 70, 18), // "parserErrorChanged"
QT_MOC_LITERAL(6, 89, 14), // "toolTipChanged"
QT_MOC_LITERAL(7, 104, 7), // "toolTip"
QT_MOC_LITERAL(8, 112, 17), // "setCurrentFeature"
QT_MOC_LITERAL(9, 130, 10), // "QgsFeature"
QT_MOC_LITERAL(10, 141, 7), // "feature"
QT_MOC_LITERAL(11, 149, 13), // "linkActivated"
QT_MOC_LITERAL(12, 163, 12), // "setEvalError"
QT_MOC_LITERAL(13, 176, 9), // "evalError"
QT_MOC_LITERAL(14, 186, 14), // "setParserError"
QT_MOC_LITERAL(15, 201, 11) // "parserError"

    },
    "QgsExpressionPreviewWidget\0expressionParsed\0"
    "\0isValid\0evalErrorChanged\0parserErrorChanged\0"
    "toolTipChanged\0toolTip\0setCurrentFeature\0"
    "QgsFeature\0feature\0linkActivated\0"
    "setEvalError\0evalError\0setParserError\0"
    "parserError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionPreviewWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x08 /* Private */,
      12,    1,   68,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void QgsExpressionPreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExpressionPreviewWidget *_t = static_cast<QgsExpressionPreviewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionParsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->evalErrorChanged(); break;
        case 2: _t->parserErrorChanged(); break;
        case 3: _t->toolTipChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setCurrentFeature((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 5: _t->linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setEvalError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setParserError((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeature >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExpressionPreviewWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionPreviewWidget::expressionParsed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsExpressionPreviewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionPreviewWidget::evalErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsExpressionPreviewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionPreviewWidget::parserErrorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsExpressionPreviewWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionPreviewWidget::toolTipChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsExpressionPreviewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsExpressionPreviewWidget.data,
      qt_meta_data_QgsExpressionPreviewWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionPreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionPreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionPreviewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsExpressionPreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsExpressionPreviewWidget::expressionParsed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsExpressionPreviewWidget::evalErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsExpressionPreviewWidget::parserErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsExpressionPreviewWidget::toolTipChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
