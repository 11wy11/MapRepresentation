/****************************************************************************
** Meta object code from reading C++ file 'qgstableeditorformattingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/tableeditor/qgstableeditorformattingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstableeditorformattingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsTableEditorFormattingWidget_t {
    QByteArrayData data[17];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTableEditorFormattingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTableEditorFormattingWidget_t qt_meta_stringdata_QgsTableEditorFormattingWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QgsTableEditorFormattingWidget"
QT_MOC_LITERAL(1, 31, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "color"
QT_MOC_LITERAL(4, 61, 19), // "numberFormatChanged"
QT_MOC_LITERAL(5, 81, 17), // "textFormatChanged"
QT_MOC_LITERAL(6, 99, 16), // "rowHeightChanged"
QT_MOC_LITERAL(7, 116, 6), // "height"
QT_MOC_LITERAL(8, 123, 18), // "columnWidthChanged"
QT_MOC_LITERAL(9, 142, 5), // "width"
QT_MOC_LITERAL(10, 148, 26), // "horizontalAlignmentChanged"
QT_MOC_LITERAL(11, 175, 13), // "Qt::Alignment"
QT_MOC_LITERAL(12, 189, 9), // "alignment"
QT_MOC_LITERAL(13, 199, 24), // "verticalAlignmentChanged"
QT_MOC_LITERAL(14, 224, 19), // "cellPropertyChanged"
QT_MOC_LITERAL(15, 244, 11), // "QgsProperty"
QT_MOC_LITERAL(16, 256, 8) // "property"

    },
    "QgsTableEditorFormattingWidget\0"
    "backgroundColorChanged\0\0color\0"
    "numberFormatChanged\0textFormatChanged\0"
    "rowHeightChanged\0height\0columnWidthChanged\0"
    "width\0horizontalAlignmentChanged\0"
    "Qt::Alignment\0alignment\0"
    "verticalAlignmentChanged\0cellPropertyChanged\0"
    "QgsProperty\0property"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTableEditorFormattingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,
      13,    1,   68,    2, 0x06 /* Public */,
      14,    1,   71,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void QgsTableEditorFormattingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTableEditorFormattingWidget *_t = static_cast<QgsTableEditorFormattingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->numberFormatChanged(); break;
        case 2: _t->textFormatChanged(); break;
        case 3: _t->rowHeightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->columnWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->horizontalAlignmentChanged((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 6: _t->verticalAlignmentChanged((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 7: _t->cellPropertyChanged((*reinterpret_cast< const QgsProperty(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsTableEditorFormattingWidget::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::backgroundColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::numberFormatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::textFormatChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::rowHeightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::columnWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)(Qt::Alignment );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::horizontalAlignmentChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)(Qt::Alignment );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::verticalAlignmentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QgsTableEditorFormattingWidget::*)(const QgsProperty & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsTableEditorFormattingWidget::cellPropertyChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTableEditorFormattingWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsTableEditorFormattingWidget.data,
      qt_meta_data_QgsTableEditorFormattingWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTableEditorFormattingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTableEditorFormattingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTableEditorFormattingWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QgsExpressionContextGenerator"))
        return static_cast< QgsExpressionContextGenerator*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsTableEditorFormattingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsTableEditorFormattingWidget::backgroundColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsTableEditorFormattingWidget::numberFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsTableEditorFormattingWidget::textFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsTableEditorFormattingWidget::rowHeightChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsTableEditorFormattingWidget::columnWidthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsTableEditorFormattingWidget::horizontalAlignmentChanged(Qt::Alignment _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsTableEditorFormattingWidget::verticalAlignmentChanged(Qt::Alignment _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsTableEditorFormattingWidget::cellPropertyChanged(const QgsProperty & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
