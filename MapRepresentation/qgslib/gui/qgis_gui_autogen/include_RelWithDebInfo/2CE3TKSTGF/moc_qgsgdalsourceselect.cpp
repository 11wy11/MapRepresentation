/****************************************************************************
** Meta object code from reading C++ file 'qgsgdalsourceselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/providers/gdal/qgsgdalsourceselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgdalsourceselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGdalSourceSelect_t {
    QByteArrayData data[9];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGdalSourceSelect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGdalSourceSelect_t qt_meta_stringdata_QgsGdalSourceSelect = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsGdalSourceSelect"
QT_MOC_LITERAL(1, 20, 16), // "addButtonClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 28), // "setProtocolWidgetsVisibility"
QT_MOC_LITERAL(4, 67, 20), // "radioSrcFile_toggled"
QT_MOC_LITERAL(5, 88, 7), // "checked"
QT_MOC_LITERAL(6, 96, 24), // "radioSrcProtocol_toggled"
QT_MOC_LITERAL(7, 121, 36), // "cmbProtocolTypes_currentIndex..."
QT_MOC_LITERAL(8, 158, 4) // "text"

    },
    "QgsGdalSourceSelect\0addButtonClicked\0"
    "\0setProtocolWidgetsVisibility\0"
    "radioSrcFile_toggled\0checked\0"
    "radioSrcProtocol_toggled\0"
    "cmbProtocolTypes_currentIndexChanged\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGdalSourceSelect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QgsGdalSourceSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGdalSourceSelect *_t = static_cast<QgsGdalSourceSelect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addButtonClicked(); break;
        case 1: _t->setProtocolWidgetsVisibility(); break;
        case 2: _t->radioSrcFile_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->radioSrcProtocol_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cmbProtocolTypes_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsGdalSourceSelect::staticMetaObject = {
    { &QgsAbstractDataSourceWidget::staticMetaObject, qt_meta_stringdata_QgsGdalSourceSelect.data,
      qt_meta_data_QgsGdalSourceSelect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGdalSourceSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGdalSourceSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGdalSourceSelect.stringdata0))
        return static_cast<void*>(this);
    return QgsAbstractDataSourceWidget::qt_metacast(_clname);
}

int QgsGdalSourceSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsAbstractDataSourceWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
