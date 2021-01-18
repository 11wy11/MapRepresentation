/****************************************************************************
** Meta object code from reading C++ file 'qgslocatorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/locator/qgslocatorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslocatorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLocatorWidget_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorWidget_t qt_meta_stringdata_QgsLocatorWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLocatorWidget"
QT_MOC_LITERAL(1, 17, 15), // "configTriggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "search"
QT_MOC_LITERAL(4, 41, 6), // "string"
QT_MOC_LITERAL(5, 48, 17), // "invalidateResults"
QT_MOC_LITERAL(6, 66, 13), // "performSearch"
QT_MOC_LITERAL(7, 80, 8), // "showList"
QT_MOC_LITERAL(8, 89, 24), // "triggerSearchAndShowList"
QT_MOC_LITERAL(9, 114, 21), // "configMenuAboutToShow"
QT_MOC_LITERAL(10, 136, 20), // "scheduleDelayedPopup"
QT_MOC_LITERAL(11, 157, 11), // "resultAdded"
QT_MOC_LITERAL(12, 169, 15), // "showContextMenu"
QT_MOC_LITERAL(13, 185, 5) // "point"

    },
    "QgsLocatorWidget\0configTriggered\0\0"
    "search\0string\0invalidateResults\0"
    "performSearch\0showList\0triggerSearchAndShowList\0"
    "configMenuAboutToShow\0scheduleDelayedPopup\0"
    "resultAdded\0showContextMenu\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   13,

       0        // eod
};

void QgsLocatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLocatorWidget *_t = static_cast<QgsLocatorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configTriggered(); break;
        case 1: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->invalidateResults(); break;
        case 3: _t->performSearch(); break;
        case 4: _t->showList(); break;
        case 5: _t->triggerSearchAndShowList(); break;
        case 6: _t->configMenuAboutToShow(); break;
        case 7: _t->scheduleDelayedPopup(); break;
        case 8: _t->resultAdded(); break;
        case 9: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLocatorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLocatorWidget::configTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLocatorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsLocatorWidget.data,
      qt_meta_data_QgsLocatorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsLocatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QgsLocatorWidget::configTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsLocatorFilterFilter_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorFilterFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorFilterFilter_t qt_meta_stringdata_QgsLocatorFilterFilter = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsLocatorFilterFilter"

    },
    "QgsLocatorFilterFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorFilterFilter[] = {

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

void QgsLocatorFilterFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLocatorFilterFilter::staticMetaObject = {
    { &QgsLocatorFilter::staticMetaObject, qt_meta_stringdata_QgsLocatorFilterFilter.data,
      qt_meta_data_QgsLocatorFilterFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorFilterFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorFilterFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorFilterFilter.stringdata0))
        return static_cast<void*>(this);
    return QgsLocatorFilter::qt_metacast(_clname);
}

int QgsLocatorFilterFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLocatorFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLocatorResultsView_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorResultsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorResultsView_t qt_meta_stringdata_QgsLocatorResultsView = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QgsLocatorResultsView"

    },
    "QgsLocatorResultsView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorResultsView[] = {

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

void QgsLocatorResultsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLocatorResultsView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_QgsLocatorResultsView.data,
      qt_meta_data_QgsLocatorResultsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorResultsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorResultsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorResultsView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int QgsLocatorResultsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsLocatorLineEdit_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLocatorLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLocatorLineEdit_t qt_meta_stringdata_QgsLocatorLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QgsLocatorLineEdit"

    },
    "QgsLocatorLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLocatorLineEdit[] = {

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

void QgsLocatorLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLocatorLineEdit::staticMetaObject = {
    { &QgsFilterLineEdit::staticMetaObject, qt_meta_stringdata_QgsLocatorLineEdit.data,
      qt_meta_data_QgsLocatorLineEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLocatorLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLocatorLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLocatorLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsFilterLineEdit::qt_metacast(_clname);
}

int QgsLocatorLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsFilterLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
