/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayersaveasdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/ogr/qgsvectorlayersaveasdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayersaveasdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsVectorLayerSaveAsDialog_t {
    QByteArrayData data[20];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayerSaveAsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayerSaveAsDialog_t qt_meta_stringdata_QgsVectorLayerSaveAsDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsVectorLayerSaveAsDialog"
QT_MOC_LITERAL(1, 27, 35), // "mFormatComboBox_currentIndexC..."
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 3), // "idx"
QT_MOC_LITERAL(4, 68, 23), // "mCrsSelector_crsChanged"
QT_MOC_LITERAL(5, 92, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(6, 121, 3), // "crs"
QT_MOC_LITERAL(7, 125, 8), // "showHelp"
QT_MOC_LITERAL(8, 134, 44), // "mSymbologyExportComboBox_curr..."
QT_MOC_LITERAL(9, 179, 4), // "text"
QT_MOC_LITERAL(10, 184, 41), // "mGeometryTypeComboBox_current..."
QT_MOC_LITERAL(11, 226, 5), // "index"
QT_MOC_LITERAL(12, 232, 6), // "accept"
QT_MOC_LITERAL(13, 239, 28), // "mSelectAllAttributes_clicked"
QT_MOC_LITERAL(14, 268, 30), // "mDeselectAllAttributes_clicked"
QT_MOC_LITERAL(15, 299, 35), // "mReplaceRawFieldValues_stateC..."
QT_MOC_LITERAL(16, 335, 5), // "state"
QT_MOC_LITERAL(17, 341, 27), // "mAttributeTable_itemChanged"
QT_MOC_LITERAL(18, 369, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(19, 387, 4) // "item"

    },
    "QgsVectorLayerSaveAsDialog\0"
    "mFormatComboBox_currentIndexChanged\0"
    "\0idx\0mCrsSelector_crsChanged\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "showHelp\0mSymbologyExportComboBox_currentIndexChanged\0"
    "text\0mGeometryTypeComboBox_currentIndexChanged\0"
    "index\0accept\0mSelectAllAttributes_clicked\0"
    "mDeselectAllAttributes_clicked\0"
    "mReplaceRawFieldValues_stateChanged\0"
    "state\0mAttributeTable_itemChanged\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayerSaveAsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,
      15,    1,   80,    2, 0x08 /* Private */,
      17,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void QgsVectorLayerSaveAsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayerSaveAsDialog *_t = static_cast<QgsVectorLayerSaveAsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mFormatComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mCrsSelector_crsChanged((*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 2: _t->showHelp(); break;
        case 3: _t->mSymbologyExportComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->mGeometryTypeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->accept(); break;
        case 6: _t->mSelectAllAttributes_clicked(); break;
        case 7: _t->mDeselectAllAttributes_clicked(); break;
        case 8: _t->mReplaceRawFieldValues_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->mAttributeTable_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsVectorLayerSaveAsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsVectorLayerSaveAsDialog.data,
      qt_meta_data_QgsVectorLayerSaveAsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsVectorLayerSaveAsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayerSaveAsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayerSaveAsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsVectorLayerSaveAsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
