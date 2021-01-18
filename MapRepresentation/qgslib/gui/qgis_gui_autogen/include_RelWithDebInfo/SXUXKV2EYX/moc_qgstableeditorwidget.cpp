/****************************************************************************
** Meta object code from reading C++ file 'qgstableeditorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/tableeditor/qgstableeditorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstableeditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTableEditorTextEdit_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTableEditorTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTableEditorTextEdit_t qt_meta_stringdata_QgsTableEditorTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsTableEditorTextEdit"
QT_MOC_LITERAL(1, 23, 16), // "resizeToContents"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsTableEditorTextEdit\0resizeToContents\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTableEditorTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsTableEditorTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTableEditorTextEdit *_t = static_cast<QgsTableEditorTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeToContents(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsTableEditorTextEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_QgsTableEditorTextEdit.data,
      qt_meta_data_QgsTableEditorTextEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTableEditorTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTableEditorTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTableEditorTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int QgsTableEditorTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsTableEditorDelegate_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTableEditorDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTableEditorDelegate_t qt_meta_stringdata_QgsTableEditorDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsTableEditorDelegate"
QT_MOC_LITERAL(1, 23, 27), // "updateNumericFormatForIndex"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 64, 5) // "index"

    },
    "QgsTableEditorDelegate\0"
    "updateNumericFormatForIndex\0\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTableEditorDelegate[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QgsTableEditorDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTableEditorDelegate *_t = static_cast<QgsTableEditorDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNumericFormatForIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsTableEditorDelegate::*)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorDelegate::updateNumericFormatForIndex)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTableEditorDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QgsTableEditorDelegate.data,
      qt_meta_data_QgsTableEditorDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTableEditorDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTableEditorDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTableEditorDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QgsTableEditorDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
void QgsTableEditorDelegate::updateNumericFormatForIndex(const QModelIndex & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< QgsTableEditorDelegate *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsTableEditorWidget_t {
    QByteArrayData data[36];
    char stringdata0[601];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTableEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTableEditorWidget_t qt_meta_stringdata_QgsTableEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsTableEditorWidget"
QT_MOC_LITERAL(1, 21, 12), // "tableChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "activeCellChanged"
QT_MOC_LITERAL(4, 53, 15), // "insertRowsBelow"
QT_MOC_LITERAL(5, 69, 15), // "insertRowsAbove"
QT_MOC_LITERAL(6, 85, 19), // "insertColumnsBefore"
QT_MOC_LITERAL(7, 105, 18), // "insertColumnsAfter"
QT_MOC_LITERAL(8, 124, 10), // "deleteRows"
QT_MOC_LITERAL(9, 135, 13), // "deleteColumns"
QT_MOC_LITERAL(10, 149, 18), // "expandRowSelection"
QT_MOC_LITERAL(11, 168, 21), // "expandColumnSelection"
QT_MOC_LITERAL(12, 190, 18), // "clearSelectedCells"
QT_MOC_LITERAL(13, 209, 27), // "setSelectionForegroundColor"
QT_MOC_LITERAL(14, 237, 5), // "color"
QT_MOC_LITERAL(15, 243, 27), // "setSelectionBackgroundColor"
QT_MOC_LITERAL(16, 271, 31), // "setSelectionHorizontalAlignment"
QT_MOC_LITERAL(17, 303, 13), // "Qt::Alignment"
QT_MOC_LITERAL(18, 317, 9), // "alignment"
QT_MOC_LITERAL(19, 327, 29), // "setSelectionVerticalAlignment"
QT_MOC_LITERAL(20, 357, 24), // "setSelectionCellProperty"
QT_MOC_LITERAL(21, 382, 11), // "QgsProperty"
QT_MOC_LITERAL(22, 394, 8), // "property"
QT_MOC_LITERAL(23, 403, 22), // "setSelectionTextFormat"
QT_MOC_LITERAL(24, 426, 13), // "QgsTextFormat"
QT_MOC_LITERAL(25, 440, 6), // "format"
QT_MOC_LITERAL(26, 447, 21), // "setSelectionRowHeight"
QT_MOC_LITERAL(27, 469, 6), // "height"
QT_MOC_LITERAL(28, 476, 23), // "setSelectionColumnWidth"
QT_MOC_LITERAL(29, 500, 21), // "setIncludeTableHeader"
QT_MOC_LITERAL(30, 522, 8), // "included"
QT_MOC_LITERAL(31, 531, 15), // "setTableHeaders"
QT_MOC_LITERAL(32, 547, 7), // "headers"
QT_MOC_LITERAL(33, 555, 27), // "updateNumericFormatForIndex"
QT_MOC_LITERAL(34, 583, 11), // "QModelIndex"
QT_MOC_LITERAL(35, 595, 5) // "index"

    },
    "QgsTableEditorWidget\0tableChanged\0\0"
    "activeCellChanged\0insertRowsBelow\0"
    "insertRowsAbove\0insertColumnsBefore\0"
    "insertColumnsAfter\0deleteRows\0"
    "deleteColumns\0expandRowSelection\0"
    "expandColumnSelection\0clearSelectedCells\0"
    "setSelectionForegroundColor\0color\0"
    "setSelectionBackgroundColor\0"
    "setSelectionHorizontalAlignment\0"
    "Qt::Alignment\0alignment\0"
    "setSelectionVerticalAlignment\0"
    "setSelectionCellProperty\0QgsProperty\0"
    "property\0setSelectionTextFormat\0"
    "QgsTextFormat\0format\0setSelectionRowHeight\0"
    "height\0setSelectionColumnWidth\0"
    "setIncludeTableHeader\0included\0"
    "setTableHeaders\0headers\0"
    "updateNumericFormatForIndex\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTableEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  126,    2, 0x0a /* Public */,
       5,    0,  127,    2, 0x0a /* Public */,
       6,    0,  128,    2, 0x0a /* Public */,
       7,    0,  129,    2, 0x0a /* Public */,
       8,    0,  130,    2, 0x0a /* Public */,
       9,    0,  131,    2, 0x0a /* Public */,
      10,    0,  132,    2, 0x0a /* Public */,
      11,    0,  133,    2, 0x0a /* Public */,
      12,    0,  134,    2, 0x0a /* Public */,
      13,    1,  135,    2, 0x0a /* Public */,
      15,    1,  138,    2, 0x0a /* Public */,
      16,    1,  141,    2, 0x0a /* Public */,
      19,    1,  144,    2, 0x0a /* Public */,
      20,    1,  147,    2, 0x0a /* Public */,
      23,    1,  150,    2, 0x0a /* Public */,
      26,    1,  153,    2, 0x0a /* Public */,
      28,    1,  156,    2, 0x0a /* Public */,
      29,    1,  159,    2, 0x0a /* Public */,
      31,    1,  162,    2, 0x0a /* Public */,
      33,    1,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::QVariantList,   32,
    QMetaType::Void, 0x80000000 | 34,   35,

       0        // eod
};

void QgsTableEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTableEditorWidget *_t = static_cast<QgsTableEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tableChanged(); break;
        case 1: _t->activeCellChanged(); break;
        case 2: _t->insertRowsBelow(); break;
        case 3: _t->insertRowsAbove(); break;
        case 4: _t->insertColumnsBefore(); break;
        case 5: _t->insertColumnsAfter(); break;
        case 6: _t->deleteRows(); break;
        case 7: _t->deleteColumns(); break;
        case 8: _t->expandRowSelection(); break;
        case 9: _t->expandColumnSelection(); break;
        case 10: _t->clearSelectedCells(); break;
        case 11: _t->setSelectionForegroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->setSelectionBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->setSelectionHorizontalAlignment((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 14: _t->setSelectionVerticalAlignment((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 15: _t->setSelectionCellProperty((*reinterpret_cast< const QgsProperty(*)>(_a[1]))); break;
        case 16: _t->setSelectionTextFormat((*reinterpret_cast< const QgsTextFormat(*)>(_a[1]))); break;
        case 17: _t->setSelectionRowHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setSelectionColumnWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setIncludeTableHeader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setTableHeaders((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 21: _t->updateNumericFormatForIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsProperty >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsTextFormat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsTableEditorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorWidget::tableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorWidget::activeCellChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTableEditorWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_QgsTableEditorWidget.data,
      qt_meta_data_QgsTableEditorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTableEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTableEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTableEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int QgsTableEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void QgsTableEditorWidget::tableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsTableEditorWidget::activeCellChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
