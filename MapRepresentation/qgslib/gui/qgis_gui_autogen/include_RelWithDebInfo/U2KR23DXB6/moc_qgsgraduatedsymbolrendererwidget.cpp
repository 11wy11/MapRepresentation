/****************************************************************************
** Meta object code from reading C++ file 'qgsgraduatedsymbolrendererwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgsgraduatedsymbolrendererwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgraduatedsymbolrendererwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsGraduatedSymbolRendererModel_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedSymbolRendererModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedSymbolRendererModel_t qt_meta_stringdata_QgsGraduatedSymbolRendererModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsGraduatedSymbolRendererModel"
QT_MOC_LITERAL(1, 32, 9), // "rowsMoved"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "QgsGraduatedSymbolRendererModel\0"
    "rowsMoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedSymbolRendererModel[] = {

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

void QgsGraduatedSymbolRendererModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGraduatedSymbolRendererModel *_t = static_cast<QgsGraduatedSymbolRendererModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsMoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsGraduatedSymbolRendererModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsGraduatedSymbolRendererModel::rowsMoved)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsGraduatedSymbolRendererModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolRendererModel.data,
      qt_meta_data_QgsGraduatedSymbolRendererModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedSymbolRendererModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedSymbolRendererModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolRendererModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsGraduatedSymbolRendererModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsGraduatedSymbolRendererModel::rowsMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle_t qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle = {
    {
QT_MOC_LITERAL(0, 0, 35) // "QgsGraduatedSymbolRendererVie..."

    },
    "QgsGraduatedSymbolRendererViewStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedSymbolRendererViewStyle[] = {

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

void QgsGraduatedSymbolRendererViewStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsGraduatedSymbolRendererViewStyle::staticMetaObject = {
    { &QgsProxyStyle::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle.data,
      qt_meta_data_QgsGraduatedSymbolRendererViewStyle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedSymbolRendererViewStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedSymbolRendererViewStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolRendererViewStyle.stringdata0))
        return static_cast<void*>(this);
    return QgsProxyStyle::qt_metacast(_clname);
}

int QgsGraduatedSymbolRendererViewStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProxyStyle::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsGraduatedSymbolRendererWidget_t {
    QByteArrayData data[40];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGraduatedSymbolRendererWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGraduatedSymbolRendererWidget_t qt_meta_stringdata_QgsGraduatedSymbolRendererWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsGraduatedSymbolRendererWidget"
QT_MOC_LITERAL(1, 33, 22), // "graduatedColumnChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 5), // "field"
QT_MOC_LITERAL(4, 63, 17), // "classifyGraduated"
QT_MOC_LITERAL(5, 81, 16), // "reapplyColorRamp"
QT_MOC_LITERAL(6, 98, 12), // "reapplySizes"
QT_MOC_LITERAL(7, 111, 19), // "rangesDoubleClicked"
QT_MOC_LITERAL(8, 131, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 143, 3), // "idx"
QT_MOC_LITERAL(10, 147, 13), // "rangesClicked"
QT_MOC_LITERAL(11, 161, 18), // "changeCurrentValue"
QT_MOC_LITERAL(12, 180, 14), // "QStandardItem*"
QT_MOC_LITERAL(13, 195, 4), // "item"
QT_MOC_LITERAL(14, 200, 8), // "addClass"
QT_MOC_LITERAL(15, 209, 13), // "deleteClasses"
QT_MOC_LITERAL(16, 223, 16), // "deleteAllClasses"
QT_MOC_LITERAL(17, 240, 20), // "toggleBoundariesLink"
QT_MOC_LITERAL(18, 261, 6), // "linked"
QT_MOC_LITERAL(19, 268, 18), // "labelFormatChanged"
QT_MOC_LITERAL(20, 287, 16), // "showSymbolLevels"
QT_MOC_LITERAL(21, 304, 9), // "rowsMoved"
QT_MOC_LITERAL(22, 314, 16), // "modelDataChanged"
QT_MOC_LITERAL(23, 331, 13), // "refreshRanges"
QT_MOC_LITERAL(24, 345, 5), // "reset"
QT_MOC_LITERAL(25, 351, 23), // "mSizeUnitWidget_changed"
QT_MOC_LITERAL(26, 375, 34), // "methodComboBox_currentIndexCh..."
QT_MOC_LITERAL(27, 410, 22), // "updateMethodParameters"
QT_MOC_LITERAL(28, 433, 21), // "cleanUpSymbolSelector"
QT_MOC_LITERAL(29, 455, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(30, 471, 9), // "container"
QT_MOC_LITERAL(31, 481, 23), // "updateSymbolsFromWidget"
QT_MOC_LITERAL(32, 505, 21), // "dataDefinedSizeLegend"
QT_MOC_LITERAL(33, 527, 21), // "changeGraduatedSymbol"
QT_MOC_LITERAL(34, 549, 16), // "selectionChanged"
QT_MOC_LITERAL(35, 566, 14), // "QItemSelection"
QT_MOC_LITERAL(36, 581, 8), // "selected"
QT_MOC_LITERAL(37, 590, 10), // "deselected"
QT_MOC_LITERAL(38, 601, 28), // "symmetryPointEditingFinished"
QT_MOC_LITERAL(39, 630, 22) // "pasteSymbolToSelection"

    },
    "QgsGraduatedSymbolRendererWidget\0"
    "graduatedColumnChanged\0\0field\0"
    "classifyGraduated\0reapplyColorRamp\0"
    "reapplySizes\0rangesDoubleClicked\0"
    "QModelIndex\0idx\0rangesClicked\0"
    "changeCurrentValue\0QStandardItem*\0"
    "item\0addClass\0deleteClasses\0"
    "deleteAllClasses\0toggleBoundariesLink\0"
    "linked\0labelFormatChanged\0showSymbolLevels\0"
    "rowsMoved\0modelDataChanged\0refreshRanges\0"
    "reset\0mSizeUnitWidget_changed\0"
    "methodComboBox_currentIndexChanged\0"
    "updateMethodParameters\0cleanUpSymbolSelector\0"
    "QgsPanelWidget*\0container\0"
    "updateSymbolsFromWidget\0dataDefinedSizeLegend\0"
    "changeGraduatedSymbol\0selectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "symmetryPointEditingFinished\0"
    "pasteSymbolToSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGraduatedSymbolRendererWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x0a /* Public */,
       4,    0,  147,    2, 0x0a /* Public */,
       5,    0,  148,    2, 0x0a /* Public */,
       6,    0,  149,    2, 0x0a /* Public */,
       7,    1,  150,    2, 0x0a /* Public */,
      10,    1,  153,    2, 0x0a /* Public */,
      11,    1,  156,    2, 0x0a /* Public */,
      14,    0,  159,    2, 0x0a /* Public */,
      15,    0,  160,    2, 0x0a /* Public */,
      16,    0,  161,    2, 0x0a /* Public */,
      17,    1,  162,    2, 0x0a /* Public */,
      19,    0,  165,    2, 0x0a /* Public */,
      20,    0,  166,    2, 0x0a /* Public */,
      21,    0,  167,    2, 0x0a /* Public */,
      22,    0,  168,    2, 0x0a /* Public */,
      23,    1,  169,    2, 0x0a /* Public */,
      25,    0,  172,    2, 0x08 /* Private */,
      26,    1,  173,    2, 0x08 /* Private */,
      27,    0,  176,    2, 0x08 /* Private */,
      28,    1,  177,    2, 0x08 /* Private */,
      31,    0,  180,    2, 0x08 /* Private */,
      32,    0,  181,    2, 0x08 /* Private */,
      33,    0,  182,    2, 0x08 /* Private */,
      34,    2,  183,    2, 0x08 /* Private */,
      38,    0,  188,    2, 0x08 /* Private */,
      39,    0,  189,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsGraduatedSymbolRendererWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGraduatedSymbolRendererWidget *_t = static_cast<QgsGraduatedSymbolRendererWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->graduatedColumnChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->classifyGraduated(); break;
        case 2: _t->reapplyColorRamp(); break;
        case 3: _t->reapplySizes(); break;
        case 4: _t->rangesDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->rangesClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->changeCurrentValue((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 7: _t->addClass(); break;
        case 8: _t->deleteClasses(); break;
        case 9: _t->deleteAllClasses(); break;
        case 10: _t->toggleBoundariesLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->labelFormatChanged(); break;
        case 12: _t->showSymbolLevels(); break;
        case 13: _t->rowsMoved(); break;
        case 14: _t->modelDataChanged(); break;
        case 15: _t->refreshRanges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->mSizeUnitWidget_changed(); break;
        case 17: _t->methodComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->updateMethodParameters(); break;
        case 19: _t->cleanUpSymbolSelector((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 20: _t->updateSymbolsFromWidget(); break;
        case 21: _t->dataDefinedSizeLegend(); break;
        case 22: _t->changeGraduatedSymbol(); break;
        case 23: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 24: _t->symmetryPointEditingFinished(); break;
        case 25: _t->pasteSymbolToSelection(); break;
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
        case 23:
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

QT_INIT_METAOBJECT const QMetaObject QgsGraduatedSymbolRendererWidget::staticMetaObject = {
    { &QgsRendererWidget::staticMetaObject, qt_meta_stringdata_QgsGraduatedSymbolRendererWidget.data,
      qt_meta_data_QgsGraduatedSymbolRendererWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGraduatedSymbolRendererWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGraduatedSymbolRendererWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGraduatedSymbolRendererWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsRendererWidget::qt_metacast(_clname);
}

int QgsGraduatedSymbolRendererWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRendererWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
