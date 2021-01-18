/****************************************************************************
** Meta object code from reading C++ file 'qgsvectortilesourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/vectortile/qgsvectortilesourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectortilesourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorTileSourceSelect_t {
    QByteArrayData data[10];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorTileSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorTileSourceSelect_t qt_meta_stringdata_QgsVectorTileSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsVectorTileSourceSelect"
QT_MOC_LITERAL(1, 26, 14), // "btnNew_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 35), // "newArcgisVectorTileServerConn..."
QT_MOC_LITERAL(4, 78, 15), // "btnEdit_clicked"
QT_MOC_LITERAL(5, 94, 17), // "btnDelete_clicked"
QT_MOC_LITERAL(6, 112, 15), // "btnSave_clicked"
QT_MOC_LITERAL(7, 128, 15), // "btnLoad_clicked"
QT_MOC_LITERAL(8, 144, 33), // "cmbConnections_currentTextCha..."
QT_MOC_LITERAL(9, 178, 4) // "text"

    },
    "QgsVectorTileSourceSelect\0btnNew_clicked\0"
    "\0newArcgisVectorTileServerConnection\0"
    "btnEdit_clicked\0btnDelete_clicked\0"
    "btnSave_clicked\0btnLoad_clicked\0"
    "cmbConnections_currentTextChanged\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorTileSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void QgsVectorTileSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorTileSourceSelect *_t = static_cast<QgsVectorTileSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btnNew_clicked(); break;
        case 1: _t->newArcgisVectorTileServerConnection(); break;
        case 2: _t->btnEdit_clicked(); break;
        case 3: _t->btnDelete_clicked(); break;
        case 4: _t->btnSave_clicked(); break;
        case 5: _t->btnLoad_clicked(); break;
        case 6: _t->cmbConnections_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorTileSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsVectorTileSourceSelect.data,
      qt_meta_data_QgsVectorTileSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorTileSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorTileSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorTileSourceSelect.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsVectorTileSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
