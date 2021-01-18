/****************************************************************************
** Meta object code from reading C++ file 'qgsexpressionselectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsexpressionselectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexpressionselectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExpressionSelectionDialog_t {
    QByteArrayData data[9];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionSelectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionSelectionDialog_t qt_meta_stringdata_QgsExpressionSelectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsExpressionSelectionDialog"
QT_MOC_LITERAL(1, 29, 23), // "mActionSelect_triggered"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 31), // "mActionAddToSelection_triggered"
QT_MOC_LITERAL(4, 86, 36), // "mActionRemoveFromSelection_tr..."
QT_MOC_LITERAL(5, 123, 32), // "mActionSelectIntersect_triggered"
QT_MOC_LITERAL(6, 156, 29), // "mButtonZoomToFeatures_clicked"
QT_MOC_LITERAL(7, 186, 17), // "mPbnClose_clicked"
QT_MOC_LITERAL(8, 204, 8) // "showHelp"

    },
    "QgsExpressionSelectionDialog\0"
    "mActionSelect_triggered\0\0"
    "mActionAddToSelection_triggered\0"
    "mActionRemoveFromSelection_triggered\0"
    "mActionSelectIntersect_triggered\0"
    "mButtonZoomToFeatures_clicked\0"
    "mPbnClose_clicked\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionSelectionDialog[] = {

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
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsExpressionSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExpressionSelectionDialog *_t = static_cast<QgsExpressionSelectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mActionSelect_triggered(); break;
        case 1: _t->mActionAddToSelection_triggered(); break;
        case 2: _t->mActionRemoveFromSelection_triggered(); break;
        case 3: _t->mActionSelectIntersect_triggered(); break;
        case 4: _t->mButtonZoomToFeatures_clicked(); break;
        case 5: _t->mPbnClose_clicked(); break;
        case 6: _t->showHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsExpressionSelectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsExpressionSelectionDialog.data,
      qt_meta_data_QgsExpressionSelectionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsExpressionSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
