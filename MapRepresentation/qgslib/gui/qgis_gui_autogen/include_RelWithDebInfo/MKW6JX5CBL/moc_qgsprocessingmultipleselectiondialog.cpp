/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingmultipleselectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingmultipleselectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingmultipleselectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingMultipleSelectionPanelWidget_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingMultipleSelectionPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingMultipleSelectionPanelWidget_t qt_meta_stringdata_QgsProcessingMultipleSelectionPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "QgsProcessingMultipleSelectio..."
QT_MOC_LITERAL(1, 42, 13), // "acceptClicked"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 74, 9), // "selectAll"
QT_MOC_LITERAL(5, 84, 7), // "checked"
QT_MOC_LITERAL(6, 92, 15) // "toggleSelection"

    },
    "QgsProcessingMultipleSelectionPanelWidget\0"
    "acceptClicked\0\0selectionChanged\0"
    "selectAll\0checked\0toggleSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingMultipleSelectionPanelWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void QgsProcessingMultipleSelectionPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingMultipleSelectionPanelWidget *_t = static_cast<QgsProcessingMultipleSelectionPanelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptClicked(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->selectAll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->toggleSelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsProcessingMultipleSelectionPanelWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingMultipleSelectionPanelWidget::acceptClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsProcessingMultipleSelectionPanelWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProcessingMultipleSelectionPanelWidget::selectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingMultipleSelectionPanelWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingMultipleSelectionPanelWidget.data,
      qt_meta_data_QgsProcessingMultipleSelectionPanelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingMultipleSelectionPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingMultipleSelectionPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingMultipleSelectionPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsProcessingMultipleSelectionPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsProcessingMultipleSelectionPanelWidget::acceptClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsProcessingMultipleSelectionPanelWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QgsProcessingMultipleSelectionDialog_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingMultipleSelectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingMultipleSelectionDialog_t qt_meta_stringdata_QgsProcessingMultipleSelectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 36) // "QgsProcessingMultipleSelectio..."

    },
    "QgsProcessingMultipleSelectionDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingMultipleSelectionDialog[] = {

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

void QgsProcessingMultipleSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingMultipleSelectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsProcessingMultipleSelectionDialog.data,
      qt_meta_data_QgsProcessingMultipleSelectionDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingMultipleSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingMultipleSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingMultipleSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsProcessingMultipleSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsProcessingMultipleInputPanelWidget_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingMultipleInputPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingMultipleInputPanelWidget_t qt_meta_stringdata_QgsProcessingMultipleInputPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QgsProcessingMultipleInputPan..."
QT_MOC_LITERAL(1, 38, 8), // "addFiles"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12) // "addDirectory"

    },
    "QgsProcessingMultipleInputPanelWidget\0"
    "addFiles\0\0addDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingMultipleInputPanelWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsProcessingMultipleInputPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingMultipleInputPanelWidget *_t = static_cast<QgsProcessingMultipleInputPanelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addFiles(); break;
        case 1: _t->addDirectory(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingMultipleInputPanelWidget::staticMetaObject = {
    { &QgsProcessingMultipleSelectionPanelWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingMultipleInputPanelWidget.data,
      qt_meta_data_QgsProcessingMultipleInputPanelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingMultipleInputPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingMultipleInputPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingMultipleInputPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsProcessingMultipleSelectionPanelWidget::qt_metacast(_clname);
}

int QgsProcessingMultipleInputPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsProcessingMultipleSelectionPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QgsProcessingMultipleInputDialog_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingMultipleInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingMultipleInputDialog_t qt_meta_stringdata_QgsProcessingMultipleInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 32) // "QgsProcessingMultipleInputDialog"

    },
    "QgsProcessingMultipleInputDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingMultipleInputDialog[] = {

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

void QgsProcessingMultipleInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingMultipleInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsProcessingMultipleInputDialog.data,
      qt_meta_data_QgsProcessingMultipleInputDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingMultipleInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingMultipleInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingMultipleInputDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsProcessingMultipleInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
