/****************************************************************************
** Meta object code from reading C++ file 'qgsnewvectorlayerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsnewvectorlayerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnewvectorlayerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsNewVectorLayerDialog_t {
    QByteArrayData data[11];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNewVectorLayerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNewVectorLayerDialog_t qt_meta_stringdata_QgsNewVectorLayerDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsNewVectorLayerDialog"
QT_MOC_LITERAL(1, 24, 27), // "mAddAttributeButton_clicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 30), // "mRemoveAttributeButton_clicked"
QT_MOC_LITERAL(4, 84, 39), // "mFileFormatComboBox_currentIn..."
QT_MOC_LITERAL(5, 124, 5), // "index"
QT_MOC_LITERAL(6, 130, 28), // "mTypeBox_currentIndexChanged"
QT_MOC_LITERAL(7, 159, 7), // "checkOk"
QT_MOC_LITERAL(8, 167, 8), // "showHelp"
QT_MOC_LITERAL(9, 176, 11), // "nameChanged"
QT_MOC_LITERAL(10, 188, 16) // "selectionChanged"

    },
    "QgsNewVectorLayerDialog\0"
    "mAddAttributeButton_clicked\0\0"
    "mRemoveAttributeButton_clicked\0"
    "mFileFormatComboBox_currentIndexChanged\0"
    "index\0mTypeBox_currentIndexChanged\0"
    "checkOk\0showHelp\0nameChanged\0"
    "selectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNewVectorLayerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void QgsNewVectorLayerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsNewVectorLayerDialog *_t = static_cast<QgsNewVectorLayerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mAddAttributeButton_clicked(); break;
        case 1: _t->mRemoveAttributeButton_clicked(); break;
        case 2: _t->mFileFormatComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mTypeBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->checkOk(); break;
        case 5: _t->showHelp(); break;
        case 6: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->selectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsNewVectorLayerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsNewVectorLayerDialog.data,
      qt_meta_data_QgsNewVectorLayerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNewVectorLayerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNewVectorLayerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNewVectorLayerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsNewVectorLayerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
