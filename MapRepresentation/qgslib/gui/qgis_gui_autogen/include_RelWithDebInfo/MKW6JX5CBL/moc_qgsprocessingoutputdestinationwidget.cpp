/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingoutputdestinationwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingoutputdestinationwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingoutputdestinationwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingLayerOutputDestinationWidget_t {
    QByteArrayData data[16];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingLayerOutputDestinationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingLayerOutputDestinationWidget_t qt_meta_stringdata_QgsProcessingLayerOutputDestinationWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "QgsProcessingLayerOutputDesti..."
QT_MOC_LITERAL(1, 42, 17), // "skipOutputChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 7), // "skipped"
QT_MOC_LITERAL(4, 69, 18), // "destinationChanged"
QT_MOC_LITERAL(5, 88, 15), // "menuAboutToShow"
QT_MOC_LITERAL(6, 104, 10), // "skipOutput"
QT_MOC_LITERAL(7, 115, 15), // "saveToTemporary"
QT_MOC_LITERAL(8, 131, 15), // "selectDirectory"
QT_MOC_LITERAL(9, 147, 10), // "selectFile"
QT_MOC_LITERAL(10, 158, 16), // "saveToGeopackage"
QT_MOC_LITERAL(11, 175, 14), // "saveToDatabase"
QT_MOC_LITERAL(12, 190, 13), // "appendToLayer"
QT_MOC_LITERAL(13, 204, 14), // "selectEncoding"
QT_MOC_LITERAL(14, 219, 11), // "textChanged"
QT_MOC_LITERAL(15, 231, 4) // "text"

    },
    "QgsProcessingLayerOutputDestinationWidget\0"
    "skipOutputChanged\0\0skipped\0"
    "destinationChanged\0menuAboutToShow\0"
    "skipOutput\0saveToTemporary\0selectDirectory\0"
    "selectFile\0saveToGeopackage\0saveToDatabase\0"
    "appendToLayer\0selectEncoding\0textChanged\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingLayerOutputDestinationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void QgsProcessingLayerOutputDestinationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingLayerOutputDestinationWidget *_t = static_cast<QgsProcessingLayerOutputDestinationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->skipOutputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->destinationChanged(); break;
        case 2: _t->menuAboutToShow(); break;
        case 3: _t->skipOutput(); break;
        case 4: _t->saveToTemporary(); break;
        case 5: _t->selectDirectory(); break;
        case 6: _t->selectFile(); break;
        case 7: _t->saveToGeopackage(); break;
        case 8: _t->saveToDatabase(); break;
        case 9: _t->appendToLayer(); break;
        case 10: _t->selectEncoding(); break;
        case 11: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsProcessingLayerOutputDestinationWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingLayerOutputDestinationWidget::skipOutputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsProcessingLayerOutputDestinationWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingLayerOutputDestinationWidget::destinationChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingLayerOutputDestinationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingLayerOutputDestinationWidget.data,
      qt_meta_data_QgsProcessingLayerOutputDestinationWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingLayerOutputDestinationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingLayerOutputDestinationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingLayerOutputDestinationWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsProcessingLayerOutputDestinationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsProcessingLayerOutputDestinationWidget::skipOutputChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProcessingLayerOutputDestinationWidget::destinationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
