/****************************************************************************
** Meta object code from reading C++ file 'qgssymbolslistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgssymbolslistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssymbolslistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSymbolsListWidget_t {
    QByteArrayData data[29];
    char stringdata0[449];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolsListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolsListWidget_t qt_meta_stringdata_QgsSymbolsListWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsSymbolsListWidget"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "setSymbolColor"
QT_MOC_LITERAL(4, 45, 5), // "color"
QT_MOC_LITERAL(5, 51, 14), // "setMarkerAngle"
QT_MOC_LITERAL(6, 66, 5), // "angle"
QT_MOC_LITERAL(7, 72, 13), // "setMarkerSize"
QT_MOC_LITERAL(8, 86, 4), // "size"
QT_MOC_LITERAL(9, 91, 12), // "setLineWidth"
QT_MOC_LITERAL(10, 104, 5), // "width"
QT_MOC_LITERAL(11, 110, 19), // "clipFeaturesToggled"
QT_MOC_LITERAL(12, 130, 7), // "checked"
QT_MOC_LITERAL(13, 138, 27), // "updateDataDefinedMarkerSize"
QT_MOC_LITERAL(14, 166, 28), // "updateDataDefinedMarkerAngle"
QT_MOC_LITERAL(15, 195, 26), // "updateDataDefinedLineWidth"
QT_MOC_LITERAL(16, 222, 18), // "setSymbolFromStyle"
QT_MOC_LITERAL(17, 241, 4), // "name"
QT_MOC_LITERAL(18, 246, 21), // "QgsStyle::StyleEntity"
QT_MOC_LITERAL(19, 268, 4), // "type"
QT_MOC_LITERAL(20, 273, 25), // "mSymbolUnitWidget_changed"
QT_MOC_LITERAL(21, 299, 21), // "updateAssistantSymbol"
QT_MOC_LITERAL(22, 321, 14), // "opacityChanged"
QT_MOC_LITERAL(23, 336, 5), // "value"
QT_MOC_LITERAL(24, 342, 20), // "createAuxiliaryField"
QT_MOC_LITERAL(25, 363, 26), // "createSymbolAuxiliaryField"
QT_MOC_LITERAL(26, 390, 15), // "forceRHRToggled"
QT_MOC_LITERAL(27, 406, 10), // "saveSymbol"
QT_MOC_LITERAL(28, 417, 31) // "updateSymbolDataDefinedProperty"

    },
    "QgsSymbolsListWidget\0changed\0\0"
    "setSymbolColor\0color\0setMarkerAngle\0"
    "angle\0setMarkerSize\0size\0setLineWidth\0"
    "width\0clipFeaturesToggled\0checked\0"
    "updateDataDefinedMarkerSize\0"
    "updateDataDefinedMarkerAngle\0"
    "updateDataDefinedLineWidth\0"
    "setSymbolFromStyle\0name\0QgsStyle::StyleEntity\0"
    "type\0mSymbolUnitWidget_changed\0"
    "updateAssistantSymbol\0opacityChanged\0"
    "value\0createAuxiliaryField\0"
    "createSymbolAuxiliaryField\0forceRHRToggled\0"
    "saveSymbol\0updateSymbolDataDefinedProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolsListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  105,    2, 0x0a /* Public */,
       5,    1,  108,    2, 0x0a /* Public */,
       7,    1,  111,    2, 0x0a /* Public */,
       9,    1,  114,    2, 0x0a /* Public */,
      11,    1,  117,    2, 0x0a /* Public */,
      13,    0,  120,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    2,  123,    2, 0x08 /* Private */,
      20,    0,  128,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,
      22,    1,  130,    2, 0x08 /* Private */,
      24,    0,  133,    2, 0x08 /* Private */,
      25,    0,  134,    2, 0x08 /* Private */,
      26,    1,  135,    2, 0x08 /* Private */,
      27,    0,  138,    2, 0x08 /* Private */,
      28,    0,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   17,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSymbolsListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolsListWidget *_t = static_cast<QgsSymbolsListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->setSymbolColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setMarkerAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMarkerSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setLineWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->clipFeaturesToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateDataDefinedMarkerSize(); break;
        case 7: _t->updateDataDefinedMarkerAngle(); break;
        case 8: _t->updateDataDefinedLineWidth(); break;
        case 9: _t->setSymbolFromStyle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsStyle::StyleEntity(*)>(_a[2]))); break;
        case 10: _t->mSymbolUnitWidget_changed(); break;
        case 11: _t->updateAssistantSymbol(); break;
        case 12: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->createAuxiliaryField(); break;
        case 14: _t->createSymbolAuxiliaryField(); break;
        case 15: _t->forceRHRToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->saveSymbol(); break;
        case 17: _t->updateSymbolDataDefinedProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSymbolsListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolsListWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSymbolsListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsSymbolsListWidget.data,
      qt_meta_data_QgsSymbolsListWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolsListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolsListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolsListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsSymbolsListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QgsSymbolsListWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
