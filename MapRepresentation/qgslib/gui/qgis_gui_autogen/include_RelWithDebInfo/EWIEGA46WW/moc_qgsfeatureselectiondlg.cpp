/****************************************************************************
** Meta object code from reading C++ file 'qgsfeatureselectiondlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfeatureselectiondlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfeatureselectiondlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFeatureSelectionDlg_t {
    QByteArrayData data[15];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFeatureSelectionDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFeatureSelectionDlg_t qt_meta_stringdata_QgsFeatureSelectionDlg = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsFeatureSelectionDlg"
QT_MOC_LITERAL(1, 23, 32), // "mActionInvertSelection_triggered"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 32), // "mActionRemoveSelection_triggered"
QT_MOC_LITERAL(4, 90, 26), // "mActionSelectAll_triggered"
QT_MOC_LITERAL(5, 117, 38), // "mActionZoomMapToSelectedRows_..."
QT_MOC_LITERAL(6, 156, 37), // "mActionPanMapToSelectedRows_t..."
QT_MOC_LITERAL(7, 194, 33), // "mActionExpressionSelect_trigg..."
QT_MOC_LITERAL(8, 228, 19), // "setFilterExpression"
QT_MOC_LITERAL(9, 248, 6), // "filter"
QT_MOC_LITERAL(10, 255, 28), // "QgsAttributeForm::FilterType"
QT_MOC_LITERAL(11, 284, 4), // "type"
QT_MOC_LITERAL(12, 289, 15), // "viewModeChanged"
QT_MOC_LITERAL(13, 305, 31), // "QgsAttributeEditorContext::Mode"
QT_MOC_LITERAL(14, 337, 4) // "mode"

    },
    "QgsFeatureSelectionDlg\0"
    "mActionInvertSelection_triggered\0\0"
    "mActionRemoveSelection_triggered\0"
    "mActionSelectAll_triggered\0"
    "mActionZoomMapToSelectedRows_triggered\0"
    "mActionPanMapToSelectedRows_triggered\0"
    "mActionExpressionSelect_triggered\0"
    "setFilterExpression\0filter\0"
    "QgsAttributeForm::FilterType\0type\0"
    "viewModeChanged\0QgsAttributeEditorContext::Mode\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFeatureSelectionDlg[] = {

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
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    2,   60,    2, 0x08 /* Private */,
      12,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void QgsFeatureSelectionDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFeatureSelectionDlg *_t = static_cast<QgsFeatureSelectionDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mActionInvertSelection_triggered(); break;
        case 1: _t->mActionRemoveSelection_triggered(); break;
        case 2: _t->mActionSelectAll_triggered(); break;
        case 3: _t->mActionZoomMapToSelectedRows_triggered(); break;
        case 4: _t->mActionPanMapToSelectedRows_triggered(); break;
        case 5: _t->mActionExpressionSelect_triggered(); break;
        case 6: _t->setFilterExpression((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2]))); break;
        case 7: _t->viewModeChanged((*reinterpret_cast< QgsAttributeEditorContext::Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFeatureSelectionDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsFeatureSelectionDlg.data,
      qt_meta_data_QgsFeatureSelectionDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFeatureSelectionDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFeatureSelectionDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFeatureSelectionDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsFeatureSelectionDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
