/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingconfigurationwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingconfigurationwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingconfigurationwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFilterAlgorithmConfigurationWidget_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFilterAlgorithmConfigurationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFilterAlgorithmConfigurationWidget_t qt_meta_stringdata_QgsFilterAlgorithmConfigurationWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QgsFilterAlgorithmConfigurati..."
QT_MOC_LITERAL(1, 38, 21), // "removeSelectedOutputs"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 9) // "addOutput"

    },
    "QgsFilterAlgorithmConfigurationWidget\0"
    "removeSelectedOutputs\0\0addOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFilterAlgorithmConfigurationWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsFilterAlgorithmConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFilterAlgorithmConfigurationWidget *_t = static_cast<QgsFilterAlgorithmConfigurationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeSelectedOutputs(); break;
        case 1: _t->addOutput(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsFilterAlgorithmConfigurationWidget::staticMetaObject = {
    { &QgsProcessingAlgorithmConfigurationWidget::staticMetaObject, qt_meta_stringdata_QgsFilterAlgorithmConfigurationWidget.data,
      qt_meta_data_QgsFilterAlgorithmConfigurationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFilterAlgorithmConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFilterAlgorithmConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFilterAlgorithmConfigurationWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsProcessingAlgorithmConfigurationWidget::qt_metacast(_clname);
}

int QgsFilterAlgorithmConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProcessingAlgorithmConfigurationWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsConditionalBranchAlgorithmConfigurationWidget_t {
    QByteArrayData data[4];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsConditionalBranchAlgorithmConfigurationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsConditionalBranchAlgorithmConfigurationWidget_t qt_meta_stringdata_QgsConditionalBranchAlgorithmConfigurationWidget = {
    {
QT_MOC_LITERAL(0, 0, 48), // "QgsConditionalBranchAlgorithm..."
QT_MOC_LITERAL(1, 49, 24), // "removeSelectedConditions"
QT_MOC_LITERAL(2, 74, 0), // ""
QT_MOC_LITERAL(3, 75, 12) // "addCondition"

    },
    "QgsConditionalBranchAlgorithmConfigurationWidget\0"
    "removeSelectedConditions\0\0addCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsConditionalBranchAlgorithmConfigurationWidget[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsConditionalBranchAlgorithmConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsConditionalBranchAlgorithmConfigurationWidget *_t = static_cast<QgsConditionalBranchAlgorithmConfigurationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeSelectedConditions(); break;
        case 1: _t->addCondition(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsConditionalBranchAlgorithmConfigurationWidget::staticMetaObject = {
    { &QgsProcessingAlgorithmConfigurationWidget::staticMetaObject, qt_meta_stringdata_QgsConditionalBranchAlgorithmConfigurationWidget.data,
      qt_meta_data_QgsConditionalBranchAlgorithmConfigurationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsConditionalBranchAlgorithmConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsConditionalBranchAlgorithmConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsConditionalBranchAlgorithmConfigurationWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsProcessingAlgorithmConfigurationWidget::qt_metacast(_clname);
}

int QgsConditionalBranchAlgorithmConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProcessingAlgorithmConfigurationWidget::qt_metacall(_c, _id, _a);
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
