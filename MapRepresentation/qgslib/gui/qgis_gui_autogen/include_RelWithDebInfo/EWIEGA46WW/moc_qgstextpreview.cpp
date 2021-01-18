/****************************************************************************
** Meta object code from reading C++ file 'qgstextpreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgstextpreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstextpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTextPreview_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTextPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTextPreview_t qt_meta_stringdata_QgsTextPreview = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsTextPreview"
QT_MOC_LITERAL(1, 15, 6), // "format"
QT_MOC_LITERAL(2, 22, 13), // "QgsTextFormat"
QT_MOC_LITERAL(3, 36, 5), // "scale"
QT_MOC_LITERAL(4, 42, 8), // "mapUnits"
QT_MOC_LITERAL(5, 51, 26) // "QgsUnitTypes::DistanceUnit"

    },
    "QgsTextPreview\0format\0QgsTextFormat\0"
    "scale\0mapUnits\0QgsUnitTypes::DistanceUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTextPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::Double, 0x00095103,
       4, 0x80000000 | 5, 0x0009510b,

       0        // eod
};

void QgsTextPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsTextFormat >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsTextPreview *_t = static_cast<QgsTextPreview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsTextFormat*>(_v) = _t->format(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->scale(); break;
        case 2: *reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_v) = _t->mapUnits(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsTextPreview *_t = static_cast<QgsTextPreview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFormat(*reinterpret_cast< QgsTextFormat*>(_v)); break;
        case 1: _t->setScale(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMapUnits(*reinterpret_cast< QgsUnitTypes::DistanceUnit*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

static const QMetaObject * const qt_meta_extradata_QgsTextPreview[] = {
        &QgsUnitTypes::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsTextPreview::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QgsTextPreview.data,
      qt_meta_data_QgsTextPreview,  qt_static_metacall, qt_meta_extradata_QgsTextPreview, nullptr}
};


const QMetaObject *QgsTextPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTextPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTextPreview.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int QgsTextPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
