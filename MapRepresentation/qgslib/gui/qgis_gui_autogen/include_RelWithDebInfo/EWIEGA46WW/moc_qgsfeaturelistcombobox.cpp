/****************************************************************************
** Meta object code from reading C++ file 'qgsfeaturelistcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfeaturelistcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeaturelistcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeatureListComboBox_t {
    QByteArrayData data[34];
    char stringdata0[519];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeatureListComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeatureListComboBox_t qt_meta_stringdata_QgsFeatureListComboBox = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsFeatureListComboBox"
QT_MOC_LITERAL(1, 23, 12), // "modelUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "sourceLayerChanged"
QT_MOC_LITERAL(4, 56, 24), // "displayExpressionChanged"
QT_MOC_LITERAL(5, 81, 23), // "filterExpressionChanged"
QT_MOC_LITERAL(6, 105, 22), // "identifierValueChanged"
QT_MOC_LITERAL(7, 128, 22), // "identifierFieldChanged"
QT_MOC_LITERAL(8, 151, 16), // "allowNullChanged"
QT_MOC_LITERAL(9, 168, 20), // "onCurrentTextChanged"
QT_MOC_LITERAL(10, 189, 4), // "text"
QT_MOC_LITERAL(11, 194, 23), // "onFilterUpdateCompleted"
QT_MOC_LITERAL(12, 218, 16), // "onLoadingChanged"
QT_MOC_LITERAL(13, 235, 14), // "onItemSelected"
QT_MOC_LITERAL(14, 250, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 262, 5), // "index"
QT_MOC_LITERAL(16, 268, 21), // "onCurrentIndexChanged"
QT_MOC_LITERAL(17, 290, 1), // "i"
QT_MOC_LITERAL(18, 292, 11), // "onActivated"
QT_MOC_LITERAL(19, 304, 18), // "storeLineEditState"
QT_MOC_LITERAL(20, 323, 20), // "restoreLineEditState"
QT_MOC_LITERAL(21, 344, 13), // "onDataChanged"
QT_MOC_LITERAL(22, 358, 7), // "topLeft"
QT_MOC_LITERAL(23, 366, 11), // "bottomRight"
QT_MOC_LITERAL(24, 378, 12), // "QVector<int>"
QT_MOC_LITERAL(25, 391, 5), // "roles"
QT_MOC_LITERAL(26, 397, 11), // "sourceLayer"
QT_MOC_LITERAL(27, 409, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(28, 425, 17), // "displayExpression"
QT_MOC_LITERAL(29, 443, 16), // "filterExpression"
QT_MOC_LITERAL(30, 460, 15), // "identifierValue"
QT_MOC_LITERAL(31, 476, 16), // "identifierValues"
QT_MOC_LITERAL(32, 493, 15), // "identifierField"
QT_MOC_LITERAL(33, 509, 9) // "allowNull"

    },
    "QgsFeatureListComboBox\0modelUpdated\0"
    "\0sourceLayerChanged\0displayExpressionChanged\0"
    "filterExpressionChanged\0identifierValueChanged\0"
    "identifierFieldChanged\0allowNullChanged\0"
    "onCurrentTextChanged\0text\0"
    "onFilterUpdateCompleted\0onLoadingChanged\0"
    "onItemSelected\0QModelIndex\0index\0"
    "onCurrentIndexChanged\0i\0onActivated\0"
    "storeLineEditState\0restoreLineEditState\0"
    "onDataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0sourceLayer\0"
    "QgsVectorLayer*\0displayExpression\0"
    "filterExpression\0identifierValue\0"
    "identifierValues\0identifierField\0"
    "allowNull"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeatureListComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       7,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,
       7,    0,  104,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  106,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    1,  111,    2, 0x08 /* Private */,
      16,    1,  114,    2, 0x08 /* Private */,
      18,    1,  117,    2, 0x08 /* Private */,
      19,    0,  120,    2, 0x08 /* Private */,
      20,    0,  121,    2, 0x08 /* Private */,
      21,    3,  122,    2, 0x08 /* Private */,
      21,    2,  129,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 24,   22,   23,   25,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   22,   23,

 // properties: name, type, flags
      26, 0x80000000 | 27, 0x0049510b,
      28, QMetaType::QString, 0x00495103,
      29, QMetaType::QString, 0x00495103,
      30, QMetaType::QVariant, 0x00495103,
      31, QMetaType::QVariantList, 0x00495103,
      32, QMetaType::QString, 0x00495103,
      33, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       4,
       5,
       6,

       0        // eod
};

void QgsFeatureListComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFeatureListComboBox *_t = static_cast<QgsFeatureListComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelUpdated(); break;
        case 1: _t->sourceLayerChanged(); break;
        case 2: _t->displayExpressionChanged(); break;
        case 3: _t->filterExpressionChanged(); break;
        case 4: _t->identifierValueChanged(); break;
        case 5: _t->identifierFieldChanged(); break;
        case 6: _t->allowNullChanged(); break;
        case 7: _t->onCurrentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onFilterUpdateCompleted(); break;
        case 9: _t->onLoadingChanged(); break;
        case 10: _t->onItemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 13: _t->storeLineEditState(); break;
        case 14: _t->restoreLineEditState(); break;
        case 15: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 16: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::modelUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::sourceLayerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::displayExpressionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::filterExpressionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::identifierValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::identifierFieldChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsFeatureListComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFeatureListComboBox::allowNullChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFeatureListComboBox *_t = static_cast<QgsFeatureListComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsVectorLayer**>(_v) = _t->sourceLayer(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->displayExpression(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->filterExpression(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->identifierValue(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->identifierValues(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->identifierField(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->allowNull(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFeatureListComboBox *_t = static_cast<QgsFeatureListComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceLayer(*reinterpret_cast< QgsVectorLayer**>(_v)); break;
        case 1: _t->setDisplayExpression(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFilterExpression(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setIdentifierValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: _t->setIdentifierValues(*reinterpret_cast< QVariantList*>(_v)); break;
        case 5: _t->setIdentifierField(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setAllowNull(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsFeatureListComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QgsFeatureListComboBox.data,
      qt_meta_data_QgsFeatureListComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFeatureListComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFeatureListComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFeatureListComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QgsFeatureListComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFeatureListComboBox::modelUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsFeatureListComboBox::sourceLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsFeatureListComboBox::displayExpressionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsFeatureListComboBox::filterExpressionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsFeatureListComboBox::identifierValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QgsFeatureListComboBox::identifierFieldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QgsFeatureListComboBox::allowNullChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
