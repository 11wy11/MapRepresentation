/****************************************************************************
** Meta object code from reading C++ file 'qgsbrowserdockwidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsbrowserdockwidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsbrowserdockwidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsBrowserPropertiesWrapLabel_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserPropertiesWrapLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserPropertiesWrapLabel_t qt_meta_stringdata_QgsBrowserPropertiesWrapLabel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsBrowserPropertiesWrapLabel"
QT_MOC_LITERAL(1, 30, 12), // "adjustHeight"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4) // "size"

    },
    "QgsBrowserPropertiesWrapLabel\0"
    "adjustHeight\0\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserPropertiesWrapLabel[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QSizeF,    3,

       0        // eod
};

void QgsBrowserPropertiesWrapLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBrowserPropertiesWrapLabel *_t = static_cast<QgsBrowserPropertiesWrapLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adjustHeight((*reinterpret_cast< QSizeF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsBrowserPropertiesWrapLabel::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_QgsBrowserPropertiesWrapLabel.data,
      qt_meta_data_QgsBrowserPropertiesWrapLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserPropertiesWrapLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserPropertiesWrapLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserPropertiesWrapLabel.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int QgsBrowserPropertiesWrapLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsBrowserPropertiesWidget_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserPropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserPropertiesWidget_t qt_meta_stringdata_QgsBrowserPropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QgsBrowserPropertiesWidget"

    },
    "QgsBrowserPropertiesWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserPropertiesWidget[] = {

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

void QgsBrowserPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsBrowserPropertiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsBrowserPropertiesWidget.data,
      qt_meta_data_QgsBrowserPropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserPropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsBrowserPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsBrowserLayerProperties_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserLayerProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserLayerProperties_t qt_meta_stringdata_QgsBrowserLayerProperties = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsBrowserLayerProperties"
QT_MOC_LITERAL(1, 26, 10), // "urlClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "url"

    },
    "QgsBrowserLayerProperties\0urlClicked\0"
    "\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserLayerProperties[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void QgsBrowserLayerProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBrowserLayerProperties *_t = static_cast<QgsBrowserLayerProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsBrowserLayerProperties::staticMetaObject = {
    { &QgsBrowserPropertiesWidget::staticMetaObject, qt_meta_stringdata_QgsBrowserLayerProperties.data,
      qt_meta_data_QgsBrowserLayerProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserLayerProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserLayerProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserLayerProperties.stringdata0))
        return static_cast<void*>(this);
    return QgsBrowserPropertiesWidget::qt_metacast(_clname);
}

int QgsBrowserLayerProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsBrowserPropertiesWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsBrowserDirectoryProperties_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserDirectoryProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserDirectoryProperties_t qt_meta_stringdata_QgsBrowserDirectoryProperties = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QgsBrowserDirectoryProperties"

    },
    "QgsBrowserDirectoryProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserDirectoryProperties[] = {

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

void QgsBrowserDirectoryProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsBrowserDirectoryProperties::staticMetaObject = {
    { &QgsBrowserPropertiesWidget::staticMetaObject, qt_meta_stringdata_QgsBrowserDirectoryProperties.data,
      qt_meta_data_QgsBrowserDirectoryProperties,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserDirectoryProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserDirectoryProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserDirectoryProperties.stringdata0))
        return static_cast<void*>(this);
    return QgsBrowserPropertiesWidget::qt_metacast(_clname);
}

int QgsBrowserDirectoryProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsBrowserPropertiesWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsBrowserPropertiesDialog_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBrowserPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBrowserPropertiesDialog_t qt_meta_stringdata_QgsBrowserPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QgsBrowserPropertiesDialog"

    },
    "QgsBrowserPropertiesDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBrowserPropertiesDialog[] = {

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

void QgsBrowserPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsBrowserPropertiesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsBrowserPropertiesDialog.data,
      qt_meta_data_QgsBrowserPropertiesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBrowserPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBrowserPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBrowserPropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsBrowserPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsDockBrowserTreeView_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDockBrowserTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDockBrowserTreeView_t qt_meta_stringdata_QgsDockBrowserTreeView = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsDockBrowserTreeView"

    },
    "QgsDockBrowserTreeView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDockBrowserTreeView[] = {

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

void QgsDockBrowserTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsDockBrowserTreeView::staticMetaObject = {
    { &QgsBrowserTreeView::staticMetaObject, qt_meta_stringdata_QgsDockBrowserTreeView.data,
      qt_meta_data_QgsDockBrowserTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDockBrowserTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDockBrowserTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDockBrowserTreeView.stringdata0))
        return static_cast<void*>(this);
    return QgsBrowserTreeView::qt_metacast(_clname);
}

int QgsDockBrowserTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsBrowserTreeView::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
