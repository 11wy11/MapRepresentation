/****************************************************************************
** Meta object code from reading C++ file 'qgsfieldexpressionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfieldexpressionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfieldexpressionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFieldExpressionWidget_t {
    QByteArrayData data[32];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldExpressionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldExpressionWidget_t qt_meta_stringdata_QgsFieldExpressionWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsFieldExpressionWidget"
QT_MOC_LITERAL(1, 25, 12), // "fieldChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "fieldName"
QT_MOC_LITERAL(4, 49, 7), // "isValid"
QT_MOC_LITERAL(5, 57, 22), // "allowEvalErrorsChanged"
QT_MOC_LITERAL(6, 80, 8), // "setLayer"
QT_MOC_LITERAL(7, 89, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(8, 102, 5), // "layer"
QT_MOC_LITERAL(9, 108, 6), // "setRow"
QT_MOC_LITERAL(10, 115, 3), // "row"
QT_MOC_LITERAL(11, 119, 8), // "setField"
QT_MOC_LITERAL(12, 128, 9), // "setFields"
QT_MOC_LITERAL(13, 138, 9), // "QgsFields"
QT_MOC_LITERAL(14, 148, 6), // "fields"
QT_MOC_LITERAL(15, 155, 13), // "setExpression"
QT_MOC_LITERAL(16, 169, 10), // "expression"
QT_MOC_LITERAL(17, 180, 14), // "editExpression"
QT_MOC_LITERAL(18, 195, 16), // "expressionEdited"
QT_MOC_LITERAL(19, 212, 25), // "expressionEditingFinished"
QT_MOC_LITERAL(20, 238, 19), // "currentFieldChanged"
QT_MOC_LITERAL(21, 258, 19), // "updateLineEditStyle"
QT_MOC_LITERAL(22, 278, 17), // "isExpressionValid"
QT_MOC_LITERAL(23, 296, 13), // "expressionStr"
QT_MOC_LITERAL(24, 310, 11), // "reloadLayer"
QT_MOC_LITERAL(25, 322, 16), // "beforeResetModel"
QT_MOC_LITERAL(26, 339, 15), // "afterResetModel"
QT_MOC_LITERAL(27, 355, 21), // "expressionDialogTitle"
QT_MOC_LITERAL(28, 377, 7), // "filters"
QT_MOC_LITERAL(29, 385, 27), // "QgsFieldProxyModel::Filters"
QT_MOC_LITERAL(30, 413, 19), // "allowEmptyFieldName"
QT_MOC_LITERAL(31, 433, 15) // "allowEvalErrors"

    },
    "QgsFieldExpressionWidget\0fieldChanged\0"
    "\0fieldName\0isValid\0allowEvalErrorsChanged\0"
    "setLayer\0QgsMapLayer*\0layer\0setRow\0"
    "row\0setField\0setFields\0QgsFields\0"
    "fields\0setExpression\0expression\0"
    "editExpression\0expressionEdited\0"
    "expressionEditingFinished\0currentFieldChanged\0"
    "updateLineEditStyle\0isExpressionValid\0"
    "expressionStr\0reloadLayer\0beforeResetModel\0"
    "afterResetModel\0expressionDialogTitle\0"
    "filters\0QgsFieldProxyModel::Filters\0"
    "allowEmptyFieldName\0allowEvalErrors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldExpressionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       4,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       1,    2,  107,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  113,    2, 0x0a /* Public */,
       9,    1,  116,    2, 0x0a /* Public */,
      11,    1,  119,    2, 0x0a /* Public */,
      12,    1,  122,    2, 0x0a /* Public */,
      15,    1,  125,    2, 0x0a /* Public */,
      17,    0,  128,    2, 0x09 /* Protected */,
      18,    1,  129,    2, 0x09 /* Protected */,
      19,    0,  132,    2, 0x09 /* Protected */,
      20,    0,  133,    2, 0x09 /* Protected */,
      21,    1,  134,    2, 0x09 /* Protected */,
      21,    0,  137,    2, 0x29 /* Protected | MethodCloned */,
      22,    1,  138,    2, 0x09 /* Protected */,
      24,    0,  141,    2, 0x08 /* Private */,
      25,    0,  142,    2, 0x08 /* Private */,
      26,    0,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      27, QMetaType::QString, 0x00095103,
      28, 0x80000000 | 29, 0x0009510b,
      30, QMetaType::Bool, 0x00095103,
      31, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       2,

       0        // eod
};

void QgsFieldExpressionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFieldExpressionWidget *_t = static_cast<QgsFieldExpressionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fieldChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fieldChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->allowEvalErrorsChanged(); break;
        case 3: _t->setLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 4: _t->setRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setField((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setFields((*reinterpret_cast< const QgsFields(*)>(_a[1]))); break;
        case 7: _t->setExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->editExpression(); break;
        case 9: _t->expressionEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->expressionEditingFinished(); break;
        case 11: _t->currentFieldChanged(); break;
        case 12: _t->updateLineEditStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->updateLineEditStyle(); break;
        case 14: { bool _r = _t->isExpressionValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->reloadLayer(); break;
        case 16: _t->beforeResetModel(); break;
        case 17: _t->afterResetModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFields >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFieldExpressionWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFieldExpressionWidget::fieldChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFieldExpressionWidget::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFieldExpressionWidget::fieldChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsFieldExpressionWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFieldExpressionWidget::allowEvalErrorsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFieldExpressionWidget *_t = static_cast<QgsFieldExpressionWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->expressionDialogTitle(); break;
        case 1: *reinterpret_cast< QgsFieldProxyModel::Filters*>(_v) = _t->filters(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->allowEmptyFieldName(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->allowEvalErrors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFieldExpressionWidget *_t = static_cast<QgsFieldExpressionWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpressionDialogTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFilters(*reinterpret_cast< QgsFieldProxyModel::Filters*>(_v)); break;
        case 2: _t->setAllowEmptyFieldName(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAllowEvalErrors(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsFieldExpressionWidget[] = {
        &QgsFieldProxyModel::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsFieldExpressionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsFieldExpressionWidget.data,
      qt_meta_data_QgsFieldExpressionWidget,  qt_static_metacall, qt_meta_extradata_QgsFieldExpressionWidget, nullptr}
};


const QMetaObject *QgsFieldExpressionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldExpressionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldExpressionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsFieldExpressionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFieldExpressionWidget::fieldChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsFieldExpressionWidget::fieldChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsFieldExpressionWidget::allowEvalErrorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
