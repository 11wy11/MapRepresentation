/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutimageexportoptionsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutimageexportoptionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutimageexportoptionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutImageExportOptionsDialog_t {
    QByteArrayData data[9];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutImageExportOptionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutImageExportOptionsDialog_t qt_meta_stringdata_QgsLayoutImageExportOptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsLayoutImageExportOptionsDi..."
QT_MOC_LITERAL(1, 34, 26), // "mWidthSpinBox_valueChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 5), // "value"
QT_MOC_LITERAL(4, 68, 27), // "mHeightSpinBox_valueChanged"
QT_MOC_LITERAL(5, 96, 31), // "mResolutionSpinBox_valueChanged"
QT_MOC_LITERAL(6, 128, 21), // "clipToContentsToggled"
QT_MOC_LITERAL(7, 150, 5), // "state"
QT_MOC_LITERAL(8, 156, 8) // "showHelp"

    },
    "QgsLayoutImageExportOptionsDialog\0"
    "mWidthSpinBox_valueChanged\0\0value\0"
    "mHeightSpinBox_valueChanged\0"
    "mResolutionSpinBox_valueChanged\0"
    "clipToContentsToggled\0state\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutImageExportOptionsDialog[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutImageExportOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutImageExportOptionsDialog *_t = static_cast<QgsLayoutImageExportOptionsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mWidthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mHeightSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mResolutionSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clipToContentsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showHelp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutImageExportOptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLayoutImageExportOptionsDialog.data,
      qt_meta_data_QgsLayoutImageExportOptionsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutImageExportOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutImageExportOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutImageExportOptionsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsLayoutImageExportOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
