/****************************************************************************
** Meta object code from reading C++ file 'qgsfieldcalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vector/qgsfieldcalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfieldcalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFieldCalculator_t {
    QByteArrayData data[15];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFieldCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFieldCalculator_t qt_meta_stringdata_QgsFieldCalculator = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsFieldCalculator"
QT_MOC_LITERAL(1, 19, 6), // "accept"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 25), // "mNewFieldGroupBox_toggled"
QT_MOC_LITERAL(4, 53, 2), // "on"
QT_MOC_LITERAL(5, 56, 31), // "mUpdateExistingGroupBox_toggled"
QT_MOC_LITERAL(6, 88, 40), // "mCreateVirtualFieldCheckbox_s..."
QT_MOC_LITERAL(7, 129, 5), // "state"
QT_MOC_LITERAL(8, 135, 36), // "mOutputFieldNameLineEdit_text..."
QT_MOC_LITERAL(9, 172, 4), // "text"
QT_MOC_LITERAL(10, 177, 34), // "mOutputFieldTypeComboBox_acti..."
QT_MOC_LITERAL(11, 212, 5), // "index"
QT_MOC_LITERAL(12, 218, 16), // "setOkButtonState"
QT_MOC_LITERAL(13, 235, 18), // "setPrecisionMinMax"
QT_MOC_LITERAL(14, 254, 8) // "showHelp"

    },
    "QgsFieldCalculator\0accept\0\0"
    "mNewFieldGroupBox_toggled\0on\0"
    "mUpdateExistingGroupBox_toggled\0"
    "mCreateVirtualFieldCheckbox_stateChanged\0"
    "state\0mOutputFieldNameLineEdit_textChanged\0"
    "text\0mOutputFieldTypeComboBox_activated\0"
    "index\0setOkButtonState\0setPrecisionMinMax\0"
    "showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFieldCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       6,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsFieldCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFieldCalculator *_t = static_cast<QgsFieldCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->mNewFieldGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mUpdateExistingGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->mCreateVirtualFieldCheckbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mOutputFieldNameLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->mOutputFieldTypeComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setOkButtonState(); break;
        case 7: _t->setPrecisionMinMax(); break;
        case 8: _t->showHelp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFieldCalculator::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsFieldCalculator.data,
      qt_meta_data_QgsFieldCalculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFieldCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFieldCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFieldCalculator.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsFieldCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
