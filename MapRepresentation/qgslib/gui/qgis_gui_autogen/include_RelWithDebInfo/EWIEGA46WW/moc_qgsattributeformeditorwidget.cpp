/****************************************************************************
** Meta object code from reading C++ file 'qgsattributeformeditorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsattributeformeditorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsattributeformeditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAttributeFormEditorWidget_t {
    QByteArrayData data[13];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeFormEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeFormEditorWidget_t qt_meta_stringdata_QgsAttributeFormEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsAttributeFormEditorWidget"
QT_MOC_LITERAL(1, 29, 12), // "valueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "value"
QT_MOC_LITERAL(4, 49, 13), // "valuesChanged"
QT_MOC_LITERAL(5, 63, 21), // "additionalFieldValues"
QT_MOC_LITERAL(6, 85, 10), // "setIsMixed"
QT_MOC_LITERAL(7, 96, 5), // "mixed"
QT_MOC_LITERAL(8, 102, 16), // "changesCommitted"
QT_MOC_LITERAL(9, 119, 25), // "editorWidgetValuesChanged"
QT_MOC_LITERAL(10, 145, 10), // "resetValue"
QT_MOC_LITERAL(11, 156, 17), // "setFieldTriggered"
QT_MOC_LITERAL(12, 174, 18) // "onAggregateChanged"

    },
    "QgsAttributeFormEditorWidget\0valueChanged\0"
    "\0value\0valuesChanged\0additionalFieldValues\0"
    "setIsMixed\0mixed\0changesCommitted\0"
    "editorWidgetValuesChanged\0resetValue\0"
    "setFieldTriggered\0onAggregateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeFormEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   62,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    2,   66,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariantList,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariantList,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeFormEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeFormEditorWidget *_t = static_cast<QgsAttributeFormEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->valuesChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 2: _t->setIsMixed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->changesCommitted(); break;
        case 4: _t->editorWidgetValuesChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 5: _t->resetValue(); break;
        case 6: _t->setFieldTriggered(); break;
        case 7: _t->onAggregateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsAttributeFormEditorWidget::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeFormEditorWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsAttributeFormEditorWidget::*)(const QVariant & , const QVariantList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsAttributeFormEditorWidget::valuesChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeFormEditorWidget::staticMetaObject = {
    { &QgsAttributeFormWidget::staticMetaObject, qt_meta_stringdata_QgsAttributeFormEditorWidget.data,
      qt_meta_data_QgsAttributeFormEditorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeFormEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeFormEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeFormEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsAttributeFormWidget::qt_metacast(_clname);
}

int QgsAttributeFormEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAttributeFormWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsAttributeFormEditorWidget::valueChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsAttributeFormEditorWidget::valuesChanged(const QVariant & _t1, const QVariantList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
