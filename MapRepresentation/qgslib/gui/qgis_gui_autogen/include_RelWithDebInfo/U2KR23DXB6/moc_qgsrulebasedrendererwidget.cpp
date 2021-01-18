/****************************************************************************
** Meta object code from reading C++ file 'qgsrulebasedrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgsrulebasedrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrulebasedrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRuleBasedRendererModel_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRuleBasedRendererModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRuleBasedRendererModel_t qt_meta_stringdata_QgsRuleBasedRendererModel = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsRuleBasedRendererModel"

    },
    "QgsRuleBasedRendererModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRuleBasedRendererModel[] = {

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

void QgsRuleBasedRendererModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsRuleBasedRendererModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsRuleBasedRendererModel.data,
      qt_meta_data_QgsRuleBasedRendererModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRuleBasedRendererModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRuleBasedRendererModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRuleBasedRendererModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsRuleBasedRendererModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsRuleBasedRendererWidget_t {
    QByteArrayData data[33];
    char stringdata0[475];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRuleBasedRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRuleBasedRendererWidget_t qt_meta_stringdata_QgsRuleBasedRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsRuleBasedRendererWidget"
QT_MOC_LITERAL(1, 27, 7), // "addRule"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "editRule"
QT_MOC_LITERAL(4, 45, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 57, 5), // "index"
QT_MOC_LITERAL(6, 63, 10), // "removeRule"
QT_MOC_LITERAL(7, 74, 13), // "countFeatures"
QT_MOC_LITERAL(8, 88, 18), // "clearFeatureCounts"
QT_MOC_LITERAL(9, 107, 16), // "refineRuleScales"
QT_MOC_LITERAL(10, 124, 20), // "refineRuleCategories"
QT_MOC_LITERAL(11, 145, 16), // "refineRuleRanges"
QT_MOC_LITERAL(12, 162, 17), // "setRenderingOrder"
QT_MOC_LITERAL(13, 180, 18), // "currentRuleChanged"
QT_MOC_LITERAL(14, 199, 7), // "current"
QT_MOC_LITERAL(15, 207, 8), // "previous"
QT_MOC_LITERAL(16, 216, 20), // "selectedRulesChanged"
QT_MOC_LITERAL(17, 237, 16), // "saveSectionWidth"
QT_MOC_LITERAL(18, 254, 7), // "section"
QT_MOC_LITERAL(19, 262, 7), // "oldSize"
QT_MOC_LITERAL(20, 270, 7), // "newSize"
QT_MOC_LITERAL(21, 278, 20), // "restoreSectionWidths"
QT_MOC_LITERAL(22, 299, 4), // "copy"
QT_MOC_LITERAL(23, 304, 5), // "paste"
QT_MOC_LITERAL(24, 310, 22), // "pasteSymbolToSelection"
QT_MOC_LITERAL(25, 333, 28), // "refineRuleCategoriesAccepted"
QT_MOC_LITERAL(26, 362, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(27, 378, 5), // "panel"
QT_MOC_LITERAL(28, 384, 24), // "refineRuleRangesAccepted"
QT_MOC_LITERAL(29, 409, 23), // "ruleWidgetPanelAccepted"
QT_MOC_LITERAL(30, 433, 23), // "liveUpdateRuleFromPanel"
QT_MOC_LITERAL(31, 457, 15), // "showContextMenu"
QT_MOC_LITERAL(32, 473, 1) // "p"

    },
    "QgsRuleBasedRendererWidget\0addRule\0\0"
    "editRule\0QModelIndex\0index\0removeRule\0"
    "countFeatures\0clearFeatureCounts\0"
    "refineRuleScales\0refineRuleCategories\0"
    "refineRuleRanges\0setRenderingOrder\0"
    "currentRuleChanged\0current\0previous\0"
    "selectedRulesChanged\0saveSectionWidth\0"
    "section\0oldSize\0newSize\0restoreSectionWidths\0"
    "copy\0paste\0pasteSymbolToSelection\0"
    "refineRuleCategoriesAccepted\0"
    "QgsPanelWidget*\0panel\0refineRuleRangesAccepted\0"
    "ruleWidgetPanelAccepted\0liveUpdateRuleFromPanel\0"
    "showContextMenu\0p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRuleBasedRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x0a /* Public */,
       3,    0,  135,    2, 0x0a /* Public */,
       3,    1,  136,    2, 0x0a /* Public */,
       6,    0,  139,    2, 0x0a /* Public */,
       7,    0,  140,    2, 0x0a /* Public */,
       8,    0,  141,    2, 0x0a /* Public */,
       9,    0,  142,    2, 0x0a /* Public */,
      10,    0,  143,    2, 0x0a /* Public */,
      11,    0,  144,    2, 0x0a /* Public */,
      12,    0,  145,    2, 0x0a /* Public */,
      13,    2,  146,    2, 0x0a /* Public */,
      13,    1,  151,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  154,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  155,    2, 0x0a /* Public */,
      17,    3,  156,    2, 0x0a /* Public */,
      21,    0,  163,    2, 0x0a /* Public */,
      22,    0,  164,    2, 0x09 /* Protected */,
      23,    0,  165,    2, 0x09 /* Protected */,
      24,    0,  166,    2, 0x09 /* Protected */,
      25,    1,  167,    2, 0x08 /* Private */,
      28,    1,  170,    2, 0x08 /* Private */,
      29,    1,  173,    2, 0x08 /* Private */,
      30,    0,  176,    2, 0x08 /* Private */,
      31,    1,  177,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,   14,   15,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   32,

       0        // eod
};

void QgsRuleBasedRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRuleBasedRendererWidget *_t = static_cast<QgsRuleBasedRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRule(); break;
        case 1: _t->editRule(); break;
        case 2: _t->editRule((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->removeRule(); break;
        case 4: _t->countFeatures(); break;
        case 5: _t->clearFeatureCounts(); break;
        case 6: _t->refineRuleScales(); break;
        case 7: _t->refineRuleCategories(); break;
        case 8: _t->refineRuleRanges(); break;
        case 9: _t->setRenderingOrder(); break;
        case 10: _t->currentRuleChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->currentRuleChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->currentRuleChanged(); break;
        case 13: _t->selectedRulesChanged(); break;
        case 14: _t->saveSectionWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->restoreSectionWidths(); break;
        case 16: _t->copy(); break;
        case 17: _t->paste(); break;
        case 18: _t->pasteSymbolToSelection(); break;
        case 19: _t->refineRuleCategoriesAccepted((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 20: _t->refineRuleRangesAccepted((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 21: _t->ruleWidgetPanelAccepted((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 22: _t->liveUpdateRuleFromPanel(); break;
        case 23: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRuleBasedRendererWidget::staticMetaObject = {
    { &QgsRendererWidget::staticMetaObject, qt_meta_stringdata_QgsRuleBasedRendererWidget.data,
      qt_meta_data_QgsRuleBasedRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRuleBasedRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRuleBasedRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRuleBasedRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRendererWidget::qt_metacast(_clname);
}

int QgsRuleBasedRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
struct qt_meta_stringdata_QgsRendererRulePropsWidget_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRendererRulePropsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRendererRulePropsWidget_t qt_meta_stringdata_QgsRendererRulePropsWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsRendererRulePropsWidget"
QT_MOC_LITERAL(1, 27, 10), // "testFilter"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "buildExpression"
QT_MOC_LITERAL(4, 55, 5), // "apply"
QT_MOC_LITERAL(5, 61, 11), // "setDockMode"
QT_MOC_LITERAL(6, 73, 8) // "dockMode"

    },
    "QgsRendererRulePropsWidget\0testFilter\0"
    "\0buildExpression\0apply\0setDockMode\0"
    "dockMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRendererRulePropsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void QgsRendererRulePropsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRendererRulePropsWidget *_t = static_cast<QgsRendererRulePropsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testFilter(); break;
        case 1: _t->buildExpression(); break;
        case 2: _t->apply(); break;
        case 3: _t->setDockMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRendererRulePropsWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsRendererRulePropsWidget.data,
      qt_meta_data_QgsRendererRulePropsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRendererRulePropsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRendererRulePropsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRendererRulePropsWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsRendererRulePropsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_QgsRendererRulePropsDialog_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRendererRulePropsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRendererRulePropsDialog_t qt_meta_stringdata_QgsRendererRulePropsDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsRendererRulePropsDialog"
QT_MOC_LITERAL(1, 27, 10), // "testFilter"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "buildExpression"
QT_MOC_LITERAL(4, 55, 6), // "accept"
QT_MOC_LITERAL(5, 62, 8) // "showHelp"

    },
    "QgsRendererRulePropsDialog\0testFilter\0"
    "\0buildExpression\0accept\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRendererRulePropsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsRendererRulePropsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRendererRulePropsDialog *_t = static_cast<QgsRendererRulePropsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testFilter(); break;
        case 1: _t->buildExpression(); break;
        case 2: _t->accept(); break;
        case 3: _t->showHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsRendererRulePropsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsRendererRulePropsDialog.data,
      qt_meta_data_QgsRendererRulePropsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRendererRulePropsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRendererRulePropsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRendererRulePropsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsRendererRulePropsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
