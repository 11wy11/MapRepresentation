/****************************************************************************
** Meta object code from reading C++ file 'qgssqlcomposerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgssqlcomposerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssqlcomposerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsSQLComposerDialog_t {
    QByteArrayData data[15];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSQLComposerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSQLComposerDialog_t qt_meta_stringdata_QgsSQLComposerDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsSQLComposerDialog"
QT_MOC_LITERAL(1, 21, 6), // "accept"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 32), // "mTablesCombo_currentIndexChanged"
QT_MOC_LITERAL(4, 62, 33), // "mColumnsCombo_currentIndexCha..."
QT_MOC_LITERAL(5, 96, 43), // "mSpatialPredicatesCombo_curre..."
QT_MOC_LITERAL(6, 140, 35), // "mFunctionsCombo_currentIndexC..."
QT_MOC_LITERAL(7, 176, 35), // "mOperatorsCombo_currentIndexC..."
QT_MOC_LITERAL(8, 212, 22), // "mAddJoinButton_clicked"
QT_MOC_LITERAL(9, 235, 25), // "mRemoveJoinButton_clicked"
QT_MOC_LITERAL(10, 261, 32), // "mTableJoins_itemSelectionChanged"
QT_MOC_LITERAL(11, 294, 8), // "showHelp"
QT_MOC_LITERAL(12, 303, 5), // "reset"
QT_MOC_LITERAL(13, 309, 18), // "buildSQLFromFields"
QT_MOC_LITERAL(14, 328, 18) // "splitSQLIntoFields"

    },
    "QgsSQLComposerDialog\0accept\0\0"
    "mTablesCombo_currentIndexChanged\0"
    "mColumnsCombo_currentIndexChanged\0"
    "mSpatialPredicatesCombo_currentIndexChanged\0"
    "mFunctionsCombo_currentIndexChanged\0"
    "mOperatorsCombo_currentIndexChanged\0"
    "mAddJoinButton_clicked\0mRemoveJoinButton_clicked\0"
    "mTableJoins_itemSelectionChanged\0"
    "showHelp\0reset\0buildSQLFromFields\0"
    "splitSQLIntoFields"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSQLComposerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    1,   80,    2, 0x08 /* Private */,
       4,    1,   83,    2, 0x08 /* Private */,
       5,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       7,    1,   92,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSQLComposerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSQLComposerDialog *_t = static_cast<QgsSQLComposerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->mTablesCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mColumnsCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mSpatialPredicatesCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mFunctionsCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mOperatorsCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mAddJoinButton_clicked(); break;
        case 7: _t->mRemoveJoinButton_clicked(); break;
        case 8: _t->mTableJoins_itemSelectionChanged(); break;
        case 9: _t->showHelp(); break;
        case 10: _t->reset(); break;
        case 11: _t->buildSQLFromFields(); break;
        case 12: _t->splitSQLIntoFields(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSQLComposerDialog::staticMetaObject = {
    { &QgsSubsetStringEditorInterface::staticMetaObject, qt_meta_stringdata_QgsSQLComposerDialog.data,
      qt_meta_data_QgsSQLComposerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSQLComposerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSQLComposerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSQLComposerDialog.stringdata0))
        return static_cast<void*>(this);
    return QgsSubsetStringEditorInterface::qt_metacast(_clname);
}

int QgsSQLComposerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsSubsetStringEditorInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
