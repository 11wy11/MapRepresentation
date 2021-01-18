/****************************************************************************
** Meta object code from reading C++ file 'qgscategorizedsymbolrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgscategorizedsymbolrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscategorizedsymbolrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsCategorizedSymbolRendererModel_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCategorizedSymbolRendererModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCategorizedSymbolRendererModel_t qt_meta_stringdata_QgsCategorizedSymbolRendererModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QgsCategorizedSymbolRendererM..."
QT_MOC_LITERAL(1, 34, 9), // "rowsMoved"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "QgsCategorizedSymbolRendererModel\0"
    "rowsMoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCategorizedSymbolRendererModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsCategorizedSymbolRendererModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCategorizedSymbolRendererModel *_t = static_cast<QgsCategorizedSymbolRendererModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsMoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsCategorizedSymbolRendererModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsCategorizedSymbolRendererModel::rowsMoved)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCategorizedSymbolRendererModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsCategorizedSymbolRendererModel.data,
      qt_meta_data_QgsCategorizedSymbolRendererModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCategorizedSymbolRendererModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCategorizedSymbolRendererModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCategorizedSymbolRendererModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsCategorizedSymbolRendererModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsCategorizedSymbolRendererModel::rowsMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle_t qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle = {
    {
QT_MOC_LITERAL(0, 0, 37) // "QgsCategorizedSymbolRendererV..."

    },
    "QgsCategorizedSymbolRendererViewStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCategorizedSymbolRendererViewStyle[] = {

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

void QgsCategorizedSymbolRendererViewStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCategorizedSymbolRendererViewStyle::staticMetaObject = {
    { &QgsProxyStyle::staticMetaObject, qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle.data,
      qt_meta_data_QgsCategorizedSymbolRendererViewStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCategorizedSymbolRendererViewStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCategorizedSymbolRendererViewStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCategorizedSymbolRendererViewStyle.stringdata0))
        return static_cast<void*>(this);
    return QgsProxyStyle::qt_metacast(_clname);
}

int QgsCategorizedSymbolRendererViewStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsCategorizedSymbolRendererWidget_t {
    QByteArrayData data[32];
    char stringdata0[542];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCategorizedSymbolRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCategorizedSymbolRendererWidget_t qt_meta_stringdata_QgsCategorizedSymbolRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QgsCategorizedSymbolRendererW..."
QT_MOC_LITERAL(1, 35, 23), // "changeCategorizedSymbol"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 21), // "categoryColumnChanged"
QT_MOC_LITERAL(4, 82, 5), // "field"
QT_MOC_LITERAL(5, 88, 23), // "categoriesDoubleClicked"
QT_MOC_LITERAL(6, 112, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 124, 3), // "idx"
QT_MOC_LITERAL(8, 128, 11), // "addCategory"
QT_MOC_LITERAL(9, 140, 13), // "addCategories"
QT_MOC_LITERAL(10, 154, 14), // "applyColorRamp"
QT_MOC_LITERAL(11, 169, 16), // "deleteCategories"
QT_MOC_LITERAL(12, 186, 19), // "deleteAllCategories"
QT_MOC_LITERAL(13, 206, 16), // "showSymbolLevels"
QT_MOC_LITERAL(14, 223, 9), // "rowsMoved"
QT_MOC_LITERAL(15, 233, 25), // "matchToSymbolsFromLibrary"
QT_MOC_LITERAL(16, 259, 21), // "matchToSymbolsFromXml"
QT_MOC_LITERAL(17, 281, 22), // "pasteSymbolToSelection"
QT_MOC_LITERAL(18, 304, 21), // "cleanUpSymbolSelector"
QT_MOC_LITERAL(19, 326, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(20, 342, 9), // "container"
QT_MOC_LITERAL(21, 352, 23), // "updateSymbolsFromWidget"
QT_MOC_LITERAL(22, 376, 23), // "updateSymbolsFromButton"
QT_MOC_LITERAL(23, 400, 21), // "dataDefinedSizeLegend"
QT_MOC_LITERAL(24, 422, 23), // "mergeSelectedCategories"
QT_MOC_LITERAL(25, 446, 25), // "unmergeSelectedCategories"
QT_MOC_LITERAL(26, 472, 15), // "showContextMenu"
QT_MOC_LITERAL(27, 488, 1), // "p"
QT_MOC_LITERAL(28, 490, 16), // "selectionChanged"
QT_MOC_LITERAL(29, 507, 14), // "QItemSelection"
QT_MOC_LITERAL(30, 522, 8), // "selected"
QT_MOC_LITERAL(31, 531, 10) // "deselected"

    },
    "QgsCategorizedSymbolRendererWidget\0"
    "changeCategorizedSymbol\0\0categoryColumnChanged\0"
    "field\0categoriesDoubleClicked\0QModelIndex\0"
    "idx\0addCategory\0addCategories\0"
    "applyColorRamp\0deleteCategories\0"
    "deleteAllCategories\0showSymbolLevels\0"
    "rowsMoved\0matchToSymbolsFromLibrary\0"
    "matchToSymbolsFromXml\0pasteSymbolToSelection\0"
    "cleanUpSymbolSelector\0QgsPanelWidget*\0"
    "container\0updateSymbolsFromWidget\0"
    "updateSymbolsFromButton\0dataDefinedSizeLegend\0"
    "mergeSelectedCategories\0"
    "unmergeSelectedCategories\0showContextMenu\0"
    "p\0selectionChanged\0QItemSelection\0"
    "selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCategorizedSymbolRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x0a /* Public */,
       3,    1,  120,    2, 0x0a /* Public */,
       5,    1,  123,    2, 0x0a /* Public */,
       8,    0,  126,    2, 0x0a /* Public */,
       9,    0,  127,    2, 0x0a /* Public */,
      10,    0,  128,    2, 0x0a /* Public */,
      11,    0,  129,    2, 0x0a /* Public */,
      12,    0,  130,    2, 0x0a /* Public */,
      13,    0,  131,    2, 0x0a /* Public */,
      14,    0,  132,    2, 0x0a /* Public */,
      15,    0,  133,    2, 0x0a /* Public */,
      16,    0,  134,    2, 0x0a /* Public */,
      17,    0,  135,    2, 0x09 /* Protected */,
      18,    1,  136,    2, 0x08 /* Private */,
      21,    0,  139,    2, 0x08 /* Private */,
      22,    0,  140,    2, 0x08 /* Private */,
      23,    0,  141,    2, 0x08 /* Private */,
      24,    0,  142,    2, 0x08 /* Private */,
      25,    0,  143,    2, 0x08 /* Private */,
      26,    1,  144,    2, 0x08 /* Private */,
      28,    2,  147,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   30,   31,

       0        // eod
};

void QgsCategorizedSymbolRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCategorizedSymbolRendererWidget *_t = static_cast<QgsCategorizedSymbolRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCategorizedSymbol(); break;
        case 1: _t->categoryColumnChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->categoriesDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->addCategory(); break;
        case 4: _t->addCategories(); break;
        case 5: _t->applyColorRamp(); break;
        case 6: _t->deleteCategories(); break;
        case 7: _t->deleteAllCategories(); break;
        case 8: _t->showSymbolLevels(); break;
        case 9: _t->rowsMoved(); break;
        case 10: _t->matchToSymbolsFromLibrary(); break;
        case 11: _t->matchToSymbolsFromXml(); break;
        case 12: _t->pasteSymbolToSelection(); break;
        case 13: _t->cleanUpSymbolSelector((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 14: _t->updateSymbolsFromWidget(); break;
        case 15: _t->updateSymbolsFromButton(); break;
        case 16: _t->dataDefinedSizeLegend(); break;
        case 17: _t->mergeSelectedCategories(); break;
        case 18: _t->unmergeSelectedCategories(); break;
        case 19: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 20: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        case 20:
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

QT_INIT_METAOBJECT const QMetaObject QgsCategorizedSymbolRendererWidget::staticMetaObject = {
    { &QgsRendererWidget::staticMetaObject, qt_meta_stringdata_QgsCategorizedSymbolRendererWidget.data,
      qt_meta_data_QgsCategorizedSymbolRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCategorizedSymbolRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCategorizedSymbolRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCategorizedSymbolRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRendererWidget::qt_metacast(_clname);
}

int QgsCategorizedSymbolRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
