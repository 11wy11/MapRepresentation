/****************************************************************************
** Meta object code from reading C++ file 'qgsstylemanagerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgsstylemanagerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstylemanagerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCheckableStyleModel_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCheckableStyleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCheckableStyleModel_t qt_meta_stringdata_QgsCheckableStyleModel = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsCheckableStyleModel"

    },
    "QgsCheckableStyleModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCheckableStyleModel[] = {

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

void QgsCheckableStyleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCheckableStyleModel::staticMetaObject = {
    { &QgsStyleProxyModel::staticMetaObject, qt_meta_stringdata_QgsCheckableStyleModel.data,
      qt_meta_data_QgsCheckableStyleModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCheckableStyleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCheckableStyleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCheckableStyleModel.stringdata0))
        return static_cast<void*>(this);
    return QgsStyleProxyModel::qt_metacast(_clname);
}

int QgsCheckableStyleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsStyleProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsStyleManagerDialog_t {
    QByteArrayData data[50];
    char stringdata0[671];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleManagerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleManagerDialog_t qt_meta_stringdata_QgsStyleManagerDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsStyleManagerDialog"
QT_MOC_LITERAL(1, 22, 8), // "activate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "addItem"
QT_MOC_LITERAL(4, 40, 8), // "editItem"
QT_MOC_LITERAL(5, 49, 10), // "removeItem"
QT_MOC_LITERAL(6, 60, 14), // "exportItemsSVG"
QT_MOC_LITERAL(7, 75, 14), // "exportItemsPNG"
QT_MOC_LITERAL(8, 90, 25), // "exportSelectedItemsImages"
QT_MOC_LITERAL(9, 116, 3), // "dir"
QT_MOC_LITERAL(10, 120, 6), // "format"
QT_MOC_LITERAL(11, 127, 4), // "size"
QT_MOC_LITERAL(12, 132, 11), // "exportItems"
QT_MOC_LITERAL(13, 144, 11), // "importItems"
QT_MOC_LITERAL(14, 156, 12), // "populateList"
QT_MOC_LITERAL(15, 169, 10), // "onFinished"
QT_MOC_LITERAL(16, 180, 7), // "onClose"
QT_MOC_LITERAL(17, 188, 8), // "showHelp"
QT_MOC_LITERAL(18, 197, 11), // "itemChanged"
QT_MOC_LITERAL(19, 209, 14), // "QStandardItem*"
QT_MOC_LITERAL(20, 224, 4), // "item"
QT_MOC_LITERAL(21, 229, 12), // "groupChanged"
QT_MOC_LITERAL(22, 242, 11), // "QModelIndex"
QT_MOC_LITERAL(23, 254, 12), // "groupRenamed"
QT_MOC_LITERAL(24, 267, 6), // "addTag"
QT_MOC_LITERAL(25, 274, 13), // "addSmartgroup"
QT_MOC_LITERAL(26, 288, 11), // "removeGroup"
QT_MOC_LITERAL(27, 300, 16), // "tagSymbolsAction"
QT_MOC_LITERAL(28, 317, 20), // "editSmartgroupAction"
QT_MOC_LITERAL(29, 338, 9), // "regrouped"
QT_MOC_LITERAL(30, 348, 13), // "filterSymbols"
QT_MOC_LITERAL(31, 362, 6), // "filter"
QT_MOC_LITERAL(32, 369, 14), // "symbolSelected"
QT_MOC_LITERAL(33, 384, 22), // "selectedSymbolsChanged"
QT_MOC_LITERAL(34, 407, 14), // "QItemSelection"
QT_MOC_LITERAL(35, 422, 8), // "selected"
QT_MOC_LITERAL(36, 431, 10), // "deselected"
QT_MOC_LITERAL(37, 442, 20), // "grouptreeContextMenu"
QT_MOC_LITERAL(38, 463, 20), // "listitemsContextMenu"
QT_MOC_LITERAL(39, 484, 12), // "addColorRamp"
QT_MOC_LITERAL(40, 497, 4), // "type"
QT_MOC_LITERAL(41, 502, 26), // "addFavoriteSelectedSymbols"
QT_MOC_LITERAL(42, 529, 29), // "removeFavoriteSelectedSymbols"
QT_MOC_LITERAL(43, 559, 18), // "tagSelectedSymbols"
QT_MOC_LITERAL(44, 578, 6), // "newTag"
QT_MOC_LITERAL(45, 585, 20), // "detagSelectedSymbols"
QT_MOC_LITERAL(46, 606, 26), // "tabItemType_currentChanged"
QT_MOC_LITERAL(47, 633, 18), // "copyItemsToDefault"
QT_MOC_LITERAL(48, 652, 8), // "copyItem"
QT_MOC_LITERAL(49, 661, 9) // "pasteItem"

    },
    "QgsStyleManagerDialog\0activate\0\0addItem\0"
    "editItem\0removeItem\0exportItemsSVG\0"
    "exportItemsPNG\0exportSelectedItemsImages\0"
    "dir\0format\0size\0exportItems\0importItems\0"
    "populateList\0onFinished\0onClose\0"
    "showHelp\0itemChanged\0QStandardItem*\0"
    "item\0groupChanged\0QModelIndex\0"
    "groupRenamed\0addTag\0addSmartgroup\0"
    "removeGroup\0tagSymbolsAction\0"
    "editSmartgroupAction\0regrouped\0"
    "filterSymbols\0filter\0symbolSelected\0"
    "selectedSymbolsChanged\0QItemSelection\0"
    "selected\0deselected\0grouptreeContextMenu\0"
    "listitemsContextMenu\0addColorRamp\0"
    "type\0addFavoriteSelectedSymbols\0"
    "removeFavoriteSelectedSymbols\0"
    "tagSelectedSymbols\0newTag\0"
    "detagSelectedSymbols\0tabItemType_currentChanged\0"
    "copyItemsToDefault\0copyItem\0pasteItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleManagerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x0a /* Public */,
       3,    0,  205,    2, 0x0a /* Public */,
       4,    0,  206,    2, 0x0a /* Public */,
       5,    0,  207,    2, 0x0a /* Public */,
       6,    0,  208,    2, 0x0a /* Public */,
       7,    0,  209,    2, 0x0a /* Public */,
       8,    3,  210,    2, 0x0a /* Public */,
      12,    0,  217,    2, 0x0a /* Public */,
      13,    0,  218,    2, 0x0a /* Public */,
      14,    0,  219,    2, 0x0a /* Public */,
      15,    0,  220,    2, 0x0a /* Public */,
      16,    0,  221,    2, 0x0a /* Public */,
      17,    0,  222,    2, 0x0a /* Public */,
      18,    1,  223,    2, 0x0a /* Public */,
      21,    1,  226,    2, 0x0a /* Public */,
      23,    1,  229,    2, 0x0a /* Public */,
      24,    0,  232,    2, 0x0a /* Public */,
      25,    0,  233,    2, 0x0a /* Public */,
      26,    0,  234,    2, 0x0a /* Public */,
      27,    0,  235,    2, 0x0a /* Public */,
      28,    0,  236,    2, 0x0a /* Public */,
      29,    1,  237,    2, 0x0a /* Public */,
      30,    1,  240,    2, 0x0a /* Public */,
      32,    1,  243,    2, 0x0a /* Public */,
      33,    2,  246,    2, 0x0a /* Public */,
      37,    1,  251,    2, 0x0a /* Public */,
      38,    1,  254,    2, 0x0a /* Public */,
      39,    1,  257,    2, 0x09 /* Protected */,
      39,    0,  260,    2, 0x29 /* Protected | MethodCloned */,
      41,    0,  261,    2, 0x09 /* Protected */,
      42,    0,  262,    2, 0x09 /* Protected */,
      43,    1,  263,    2, 0x09 /* Protected */,
      43,    0,  266,    2, 0x29 /* Protected | MethodCloned */,
      45,    0,  267,    2, 0x09 /* Protected */,
      46,    1,  268,    2, 0x08 /* Private */,
      47,    0,  271,    2, 0x08 /* Private */,
      48,    0,  272,    2, 0x08 /* Private */,
      49,    0,  273,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QSize,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 34,   35,   36,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Bool, QMetaType::QString,   40,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsStyleManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleManagerDialog *_t = static_cast<QgsStyleManagerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->addItem(); break;
        case 2: _t->editItem(); break;
        case 3: _t->removeItem(); break;
        case 4: _t->exportItemsSVG(); break;
        case 5: _t->exportItemsPNG(); break;
        case 6: _t->exportSelectedItemsImages((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSize(*)>(_a[3]))); break;
        case 7: _t->exportItems(); break;
        case 8: _t->importItems(); break;
        case 9: _t->populateList(); break;
        case 10: _t->onFinished(); break;
        case 11: _t->onClose(); break;
        case 12: _t->showHelp(); break;
        case 13: _t->itemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 14: _t->groupChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->groupRenamed((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 16: { int _r = _t->addTag();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->addSmartgroup();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->removeGroup(); break;
        case 19: _t->tagSymbolsAction(); break;
        case 20: _t->editSmartgroupAction(); break;
        case 21: _t->regrouped((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 22: _t->filterSymbols((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->symbolSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: _t->selectedSymbolsChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 25: _t->grouptreeContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 26: _t->listitemsContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 27: { bool _r = _t->addColorRamp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->addColorRamp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->addFavoriteSelectedSymbols(); break;
        case 30: _t->removeFavoriteSelectedSymbols(); break;
        case 31: _t->tagSelectedSymbols((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->tagSelectedSymbols(); break;
        case 33: _t->detagSelectedSymbols(); break;
        case 34: _t->tabItemType_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->copyItemsToDefault(); break;
        case 36: _t->copyItem(); break;
        case 37: _t->pasteItem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsStyleManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsStyleManagerDialog.data,
      qt_meta_data_QgsStyleManagerDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsStyleManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleManagerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsStyleManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
