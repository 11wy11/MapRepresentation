/****************************************************************************
** Meta object code from reading C++ file 'qgsexpressionbuilderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsexpressionbuilderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexpressionbuilderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExpressionBuilderWidget_t {
    QByteArrayData data[49];
    char stringdata0[850];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExpressionBuilderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExpressionBuilderWidget_t qt_meta_stringdata_QgsExpressionBuilderWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsExpressionBuilderWidget"
QT_MOC_LITERAL(1, 27, 16), // "expressionParsed"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "isValid"
QT_MOC_LITERAL(4, 53, 16), // "evalErrorChanged"
QT_MOC_LITERAL(5, 70, 18), // "parserErrorChanged"
QT_MOC_LITERAL(6, 89, 16), // "loadSampleValues"
QT_MOC_LITERAL(7, 106, 13), // "loadAllValues"
QT_MOC_LITERAL(8, 120, 20), // "loadSampleUsedValues"
QT_MOC_LITERAL(9, 141, 17), // "loadAllUsedValues"
QT_MOC_LITERAL(10, 159, 8), // "autosave"
QT_MOC_LITERAL(11, 168, 11), // "setAutoSave"
QT_MOC_LITERAL(12, 180, 7), // "enabled"
QT_MOC_LITERAL(13, 188, 26), // "storeCurrentUserExpression"
QT_MOC_LITERAL(14, 215, 28), // "removeSelectedUserExpression"
QT_MOC_LITERAL(15, 244, 26), // "editSelectedUserExpression"
QT_MOC_LITERAL(16, 271, 15), // "findExpressions"
QT_MOC_LITERAL(17, 287, 25), // "QList<QgsExpressionItem*>"
QT_MOC_LITERAL(18, 313, 5), // "label"
QT_MOC_LITERAL(19, 319, 16), // "indicatorClicked"
QT_MOC_LITERAL(20, 336, 4), // "line"
QT_MOC_LITERAL(21, 341, 5), // "index"
QT_MOC_LITERAL(22, 347, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(23, 369, 5), // "state"
QT_MOC_LITERAL(24, 375, 18), // "onExpressionParsed"
QT_MOC_LITERAL(25, 394, 25), // "expressionTreeItemChanged"
QT_MOC_LITERAL(26, 420, 18), // "QgsExpressionItem*"
QT_MOC_LITERAL(27, 439, 4), // "item"
QT_MOC_LITERAL(28, 444, 21), // "operatorButtonClicked"
QT_MOC_LITERAL(29, 466, 14), // "btnRun_pressed"
QT_MOC_LITERAL(30, 481, 18), // "btnNewFile_pressed"
QT_MOC_LITERAL(31, 500, 21), // "btnRemoveFile_pressed"
QT_MOC_LITERAL(32, 522, 29), // "exportUserExpressions_pressed"
QT_MOC_LITERAL(33, 552, 29), // "importUserExpressions_pressed"
QT_MOC_LITERAL(34, 582, 31), // "cmbFileNames_currentItemChanged"
QT_MOC_LITERAL(35, 614, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(36, 631, 8), // "lastitem"
QT_MOC_LITERAL(37, 640, 20), // "insertExpressionText"
QT_MOC_LITERAL(38, 661, 4), // "text"
QT_MOC_LITERAL(39, 666, 31), // "txtExpressionString_textChanged"
QT_MOC_LITERAL(40, 698, 31), // "txtSearchEditValues_textChanged"
QT_MOC_LITERAL(41, 730, 29), // "mValuesListView_doubleClicked"
QT_MOC_LITERAL(42, 760, 11), // "QModelIndex"
QT_MOC_LITERAL(43, 772, 21), // "txtPython_textChanged"
QT_MOC_LITERAL(44, 794, 4), // "Flag"
QT_MOC_LITERAL(45, 799, 11), // "LoadNothing"
QT_MOC_LITERAL(46, 811, 10), // "LoadRecent"
QT_MOC_LITERAL(47, 822, 19), // "LoadUserExpressions"
QT_MOC_LITERAL(48, 842, 7) // "LoadAll"

    },
    "QgsExpressionBuilderWidget\0expressionParsed\0"
    "\0isValid\0evalErrorChanged\0parserErrorChanged\0"
    "loadSampleValues\0loadAllValues\0"
    "loadSampleUsedValues\0loadAllUsedValues\0"
    "autosave\0setAutoSave\0enabled\0"
    "storeCurrentUserExpression\0"
    "removeSelectedUserExpression\0"
    "editSelectedUserExpression\0findExpressions\0"
    "QList<QgsExpressionItem*>\0label\0"
    "indicatorClicked\0line\0index\0"
    "Qt::KeyboardModifiers\0state\0"
    "onExpressionParsed\0expressionTreeItemChanged\0"
    "QgsExpressionItem*\0item\0operatorButtonClicked\0"
    "btnRun_pressed\0btnNewFile_pressed\0"
    "btnRemoveFile_pressed\0"
    "exportUserExpressions_pressed\0"
    "importUserExpressions_pressed\0"
    "cmbFileNames_currentItemChanged\0"
    "QListWidgetItem*\0lastitem\0"
    "insertExpressionText\0text\0"
    "txtExpressionString_textChanged\0"
    "txtSearchEditValues_textChanged\0"
    "mValuesListView_doubleClicked\0QModelIndex\0"
    "txtPython_textChanged\0Flag\0LoadNothing\0"
    "LoadRecent\0LoadUserExpressions\0LoadAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExpressionBuilderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       1,  206, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    0,  157,    2, 0x06 /* Public */,
       5,    0,  158,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  159,    2, 0x0a /* Public */,
       7,    0,  160,    2, 0x0a /* Public */,
       8,    0,  161,    2, 0x0a /* Public */,
       9,    0,  162,    2, 0x0a /* Public */,
      10,    0,  163,    2, 0x0a /* Public */,
      11,    1,  164,    2, 0x0a /* Public */,
      13,    0,  167,    2, 0x0a /* Public */,
      14,    0,  168,    2, 0x0a /* Public */,
      15,    0,  169,    2, 0x0a /* Public */,
      16,    1,  170,    2, 0x0a /* Public */,
      19,    3,  173,    2, 0x08 /* Private */,
      24,    1,  180,    2, 0x08 /* Private */,
      25,    1,  183,    2, 0x08 /* Private */,
      28,    0,  186,    2, 0x08 /* Private */,
      29,    0,  187,    2, 0x08 /* Private */,
      30,    0,  188,    2, 0x08 /* Private */,
      31,    0,  189,    2, 0x08 /* Private */,
      32,    0,  190,    2, 0x08 /* Private */,
      33,    0,  191,    2, 0x08 /* Private */,
      34,    2,  192,    2, 0x08 /* Private */,
      37,    1,  197,    2, 0x08 /* Private */,
      39,    0,  200,    2, 0x08 /* Private */,
      40,    0,  201,    2, 0x08 /* Private */,
      41,    1,  202,    2, 0x08 /* Private */,
      43,    0,  205,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 17, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 22,   20,   21,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 35,   27,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,   21,
    QMetaType::Void,

 // enums: name, flags, count, data
      44, 0x1,    4,  210,

 // enum data: key, value
      45, uint(QgsExpressionBuilderWidget::LoadNothing),
      46, uint(QgsExpressionBuilderWidget::LoadRecent),
      47, uint(QgsExpressionBuilderWidget::LoadUserExpressions),
      48, uint(QgsExpressionBuilderWidget::LoadAll),

       0        // eod
};

void QgsExpressionBuilderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExpressionBuilderWidget *_t = static_cast<QgsExpressionBuilderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->expressionParsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->evalErrorChanged(); break;
        case 2: _t->parserErrorChanged(); break;
        case 3: _t->loadSampleValues(); break;
        case 4: _t->loadAllValues(); break;
        case 5: _t->loadSampleUsedValues(); break;
        case 6: _t->loadAllUsedValues(); break;
        case 7: _t->autosave(); break;
        case 8: _t->setAutoSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->storeCurrentUserExpression(); break;
        case 10: _t->removeSelectedUserExpression(); break;
        case 11: _t->editSelectedUserExpression(); break;
        case 12: { QList<QgsExpressionItem*> _r = _t->findExpressions((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QgsExpressionItem*>*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->indicatorClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[3]))); break;
        case 14: _t->onExpressionParsed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->expressionTreeItemChanged((*reinterpret_cast< QgsExpressionItem*(*)>(_a[1]))); break;
        case 16: _t->operatorButtonClicked(); break;
        case 17: _t->btnRun_pressed(); break;
        case 18: _t->btnNewFile_pressed(); break;
        case 19: _t->btnRemoveFile_pressed(); break;
        case 20: _t->exportUserExpressions_pressed(); break;
        case 21: _t->importUserExpressions_pressed(); break;
        case 22: _t->cmbFileNames_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 23: _t->insertExpressionText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->txtExpressionString_textChanged(); break;
        case 25: _t->txtSearchEditValues_textChanged(); break;
        case 26: _t->mValuesListView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->txtPython_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExpressionBuilderWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionBuilderWidget::expressionParsed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsExpressionBuilderWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionBuilderWidget::evalErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsExpressionBuilderWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExpressionBuilderWidget::parserErrorChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsExpressionBuilderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsExpressionBuilderWidget.data,
      qt_meta_data_QgsExpressionBuilderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsExpressionBuilderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExpressionBuilderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExpressionBuilderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsExpressionBuilderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void QgsExpressionBuilderWidget::expressionParsed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsExpressionBuilderWidget::evalErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsExpressionBuilderWidget::parserErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
