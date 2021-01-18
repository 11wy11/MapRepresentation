/****************************************************************************
** Meta object code from reading C++ file 'qgsvaluemapconfigdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/editorwidgets/qgsvaluemapconfigdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvaluemapconfigdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsValueMapConfigDlg_t {
    QByteArrayData data[10];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsValueMapConfigDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsValueMapConfigDlg_t qt_meta_stringdata_QgsValueMapConfigDlg = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsValueMapConfigDlg"
QT_MOC_LITERAL(1, 21, 24), // "copySelectionToClipboard"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "vCellChanged"
QT_MOC_LITERAL(4, 60, 3), // "row"
QT_MOC_LITERAL(5, 64, 6), // "column"
QT_MOC_LITERAL(6, 71, 19), // "addNullButtonPushed"
QT_MOC_LITERAL(7, 91, 26), // "removeSelectedButtonPushed"
QT_MOC_LITERAL(8, 118, 25), // "loadFromLayerButtonPushed"
QT_MOC_LITERAL(9, 144, 23) // "loadFromCSVButtonPushed"

    },
    "QgsValueMapConfigDlg\0copySelectionToClipboard\0"
    "\0vCellChanged\0row\0column\0addNullButtonPushed\0"
    "removeSelectedButtonPushed\0"
    "loadFromLayerButtonPushed\0"
    "loadFromCSVButtonPushed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsValueMapConfigDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    2,   45,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsValueMapConfigDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsValueMapConfigDlg *_t = static_cast<QgsValueMapConfigDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copySelectionToClipboard(); break;
        case 1: _t->vCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addNullButtonPushed(); break;
        case 3: _t->removeSelectedButtonPushed(); break;
        case 4: _t->loadFromLayerButtonPushed(); break;
        case 5: _t->loadFromCSVButtonPushed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsValueMapConfigDlg::staticMetaObject = {
    { &QgsEditorConfigWidget::staticMetaObject, qt_meta_stringdata_QgsValueMapConfigDlg.data,
      qt_meta_data_QgsValueMapConfigDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsValueMapConfigDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsValueMapConfigDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsValueMapConfigDlg.stringdata0))
        return static_cast<void*>(this);
    return QgsEditorConfigWidget::qt_metacast(_clname);
}

int QgsValueMapConfigDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsEditorConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
