/****************************************************************************
** Meta object code from reading C++ file 'qgscptcitycolorrampdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgscptcitycolorrampdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscptcitycolorrampdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCptCityColorRampDialog_t {
    QByteArrayData data[18];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityColorRampDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityColorRampDialog_t qt_meta_stringdata_QgsCptCityColorRampDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsCptCityColorRampDialog"
QT_MOC_LITERAL(1, 26, 7), // "changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "populateVariants"
QT_MOC_LITERAL(4, 52, 17), // "mTreeView_clicked"
QT_MOC_LITERAL(5, 70, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 82, 23), // "mListWidget_itemClicked"
QT_MOC_LITERAL(7, 106, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 123, 4), // "item"
QT_MOC_LITERAL(9, 128, 32), // "mListWidget_itemSelectionChanged"
QT_MOC_LITERAL(10, 161, 21), // "tabBar_currentChanged"
QT_MOC_LITERAL(11, 183, 5), // "index"
QT_MOC_LITERAL(12, 189, 26), // "pbtnLicenseDetails_pressed"
QT_MOC_LITERAL(13, 216, 34), // "cboVariantName_currentIndexCh..."
QT_MOC_LITERAL(14, 251, 10), // "onFinished"
QT_MOC_LITERAL(15, 262, 8), // "showHelp"
QT_MOC_LITERAL(16, 271, 4), // "ramp"
QT_MOC_LITERAL(17, 276, 19) // "QgsCptCityColorRamp"

    },
    "QgsCptCityColorRampDialog\0changed\0\0"
    "populateVariants\0mTreeView_clicked\0"
    "QModelIndex\0mListWidget_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "mListWidget_itemSelectionChanged\0"
    "tabBar_currentChanged\0index\0"
    "pbtnLicenseDetails_pressed\0"
    "cboVariantName_currentIndexChanged\0"
    "onFinished\0showHelp\0ramp\0QgsCptCityColorRamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityColorRampDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x0009510b,

       0        // eod
};

void QgsCptCityColorRampDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCptCityColorRampDialog *_t = static_cast<QgsCptCityColorRampDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->populateVariants(); break;
        case 2: _t->mTreeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->mListWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->mListWidget_itemSelectionChanged(); break;
        case 5: _t->tabBar_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->pbtnLicenseDetails_pressed(); break;
        case 7: _t->cboVariantName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onFinished(); break;
        case 9: _t->showHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsCptCityColorRampDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCptCityColorRampDialog::changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsCptCityColorRampDialog *_t = static_cast<QgsCptCityColorRampDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsCptCityColorRamp*>(_v) = _t->ramp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsCptCityColorRampDialog *_t = static_cast<QgsCptCityColorRampDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRamp(*reinterpret_cast< QgsCptCityColorRamp*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QgsCptCityColorRampDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsCptCityColorRampDialog.data,
      qt_meta_data_QgsCptCityColorRampDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCptCityColorRampDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityColorRampDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityColorRampDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsCptCityColorRampDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsCptCityColorRampDialog::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TreeFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreeFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreeFilterProxyModel_t qt_meta_stringdata_TreeFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 20) // "TreeFilterProxyModel"

    },
    "TreeFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeFilterProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TreeFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TreeFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_TreeFilterProxyModel.data,
      qt_meta_data_TreeFilterProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TreeFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TreeFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int TreeFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
