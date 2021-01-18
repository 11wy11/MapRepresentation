/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutguidewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutguidewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutguidewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutGuideWidget_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutGuideWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutGuideWidget_t qt_meta_stringdata_QgsLayoutGuideWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsLayoutGuideWidget"
QT_MOC_LITERAL(1, 21, 14), // "setCurrentPage"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "page"
QT_MOC_LITERAL(4, 42, 18), // "addHorizontalGuide"
QT_MOC_LITERAL(5, 61, 16), // "addVerticalGuide"
QT_MOC_LITERAL(6, 78, 21), // "deleteHorizontalGuide"
QT_MOC_LITERAL(7, 100, 19), // "deleteVerticalGuide"
QT_MOC_LITERAL(8, 120, 8), // "clearAll"
QT_MOC_LITERAL(9, 129, 10), // "applyToAll"
QT_MOC_LITERAL(10, 140, 15) // "updatePageCount"

    },
    "QgsLayoutGuideWidget\0setCurrentPage\0"
    "\0page\0addHorizontalGuide\0addVerticalGuide\0"
    "deleteHorizontalGuide\0deleteVerticalGuide\0"
    "clearAll\0applyToAll\0updatePageCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutGuideWidget[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutGuideWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutGuideWidget *_t = static_cast<QgsLayoutGuideWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addHorizontalGuide(); break;
        case 2: _t->addVerticalGuide(); break;
        case 3: _t->deleteHorizontalGuide(); break;
        case 4: _t->deleteVerticalGuide(); break;
        case 5: _t->clearAll(); break;
        case 6: _t->applyToAll(); break;
        case 7: _t->updatePageCount(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutGuideWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutGuideWidget.data,
      qt_meta_data_QgsLayoutGuideWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutGuideWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutGuideWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutGuideWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsLayoutGuideWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QgsLayoutGuidePositionDelegate_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutGuidePositionDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutGuidePositionDelegate_t qt_meta_stringdata_QgsLayoutGuidePositionDelegate = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QgsLayoutGuidePositionDelegate"

    },
    "QgsLayoutGuidePositionDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutGuidePositionDelegate[] = {

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

void QgsLayoutGuidePositionDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutGuidePositionDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QgsLayoutGuidePositionDelegate.data,
      qt_meta_data_QgsLayoutGuidePositionDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutGuidePositionDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutGuidePositionDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutGuidePositionDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QgsLayoutGuidePositionDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLayoutGuideUnitDelegate_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutGuideUnitDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutGuideUnitDelegate_t qt_meta_stringdata_QgsLayoutGuideUnitDelegate = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QgsLayoutGuideUnitDelegate"

    },
    "QgsLayoutGuideUnitDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutGuideUnitDelegate[] = {

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

void QgsLayoutGuideUnitDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutGuideUnitDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_QgsLayoutGuideUnitDelegate.data,
      qt_meta_data_QgsLayoutGuideUnitDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutGuideUnitDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutGuideUnitDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutGuideUnitDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int QgsLayoutGuideUnitDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
