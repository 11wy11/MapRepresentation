/****************************************************************************
** Meta object code from reading C++ file 'qgsgradientstopeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsgradientstopeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgradientstopeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGradientStopEditor_t {
    QByteArrayData data[14];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGradientStopEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGradientStopEditor_t qt_meta_stringdata_QgsGradientStopEditor = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsGradientStopEditor"
QT_MOC_LITERAL(1, 22, 7), // "changed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "selectedStopChanged"
QT_MOC_LITERAL(4, 51, 15), // "QgsGradientStop"
QT_MOC_LITERAL(5, 67, 4), // "stop"
QT_MOC_LITERAL(6, 72, 20), // "setSelectedStopColor"
QT_MOC_LITERAL(7, 93, 5), // "color"
QT_MOC_LITERAL(8, 99, 21), // "setSelectedStopOffset"
QT_MOC_LITERAL(9, 121, 6), // "offset"
QT_MOC_LITERAL(10, 128, 22), // "setSelectedStopDetails"
QT_MOC_LITERAL(11, 151, 18), // "deleteSelectedStop"
QT_MOC_LITERAL(12, 170, 9), // "setColor1"
QT_MOC_LITERAL(13, 180, 9) // "setColor2"

    },
    "QgsGradientStopEditor\0changed\0\0"
    "selectedStopChanged\0QgsGradientStop\0"
    "stop\0setSelectedStopColor\0color\0"
    "setSelectedStopOffset\0offset\0"
    "setSelectedStopDetails\0deleteSelectedStop\0"
    "setColor1\0setColor2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGradientStopEditor[] = {

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
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    2,   64,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::QColor, QMetaType::Double,    7,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QColor,    7,

       0        // eod
};

void QgsGradientStopEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGradientStopEditor *_t = static_cast<QgsGradientStopEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->selectedStopChanged((*reinterpret_cast< const QgsGradientStop(*)>(_a[1]))); break;
        case 2: _t->setSelectedStopColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setSelectedStopOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setSelectedStopDetails((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->deleteSelectedStop(); break;
        case 6: _t->setColor1((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setColor2((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsGradientStopEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGradientStopEditor::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsGradientStopEditor::*)(const QgsGradientStop & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGradientStopEditor::selectedStopChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsGradientStopEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsGradientStopEditor.data,
      qt_meta_data_QgsGradientStopEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGradientStopEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGradientStopEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGradientStopEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsGradientStopEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsGradientStopEditor::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsGradientStopEditor::selectedStopChanged(const QgsGradientStop & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
