/****************************************************************************
** Meta object code from reading C++ file 'qgsnumericformatwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/numericformats/qgsnumericformatwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnumericformatwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsNumericFormatWidget_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNumericFormatWidget_t qt_meta_stringdata_QgsNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsNumericFormatWidget"
QT_MOC_LITERAL(1, 23, 7), // "changed"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "QgsNumericFormatWidget\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNumericFormatWidget[] = {

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

void QgsNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsNumericFormatWidget *_t = static_cast<QgsNumericFormatWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsNumericFormatWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsNumericFormatWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsNumericFormatWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsNumericFormatWidget.data,
      qt_meta_data_QgsNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
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
void QgsNumericFormatWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsBasicNumericFormatWidget_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBasicNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBasicNumericFormatWidget_t qt_meta_stringdata_QgsBasicNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QgsBasicNumericFormatWidget"

    },
    "QgsBasicNumericFormatWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBasicNumericFormatWidget[] = {

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

void QgsBasicNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsBasicNumericFormatWidget::staticMetaObject = {
    { &QgsNumericFormatWidget::staticMetaObject, qt_meta_stringdata_QgsBasicNumericFormatWidget.data,
      qt_meta_data_QgsBasicNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBasicNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBasicNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBasicNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsNumericFormatWidget::qt_metacast(_clname);
}

int QgsBasicNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsNumericFormatWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsBearingNumericFormatWidget_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBearingNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBearingNumericFormatWidget_t qt_meta_stringdata_QgsBearingNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QgsBearingNumericFormatWidget"

    },
    "QgsBearingNumericFormatWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBearingNumericFormatWidget[] = {

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

void QgsBearingNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsBearingNumericFormatWidget::staticMetaObject = {
    { &QgsNumericFormatWidget::staticMetaObject, qt_meta_stringdata_QgsBearingNumericFormatWidget.data,
      qt_meta_data_QgsBearingNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBearingNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBearingNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBearingNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsNumericFormatWidget::qt_metacast(_clname);
}

int QgsBearingNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsNumericFormatWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsBearingNumericFormatDialog_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBearingNumericFormatDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBearingNumericFormatDialog_t qt_meta_stringdata_QgsBearingNumericFormatDialog = {
    {
QT_MOC_LITERAL(0, 0, 29) // "QgsBearingNumericFormatDialog"

    },
    "QgsBearingNumericFormatDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBearingNumericFormatDialog[] = {

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

void QgsBearingNumericFormatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsBearingNumericFormatDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsBearingNumericFormatDialog.data,
      qt_meta_data_QgsBearingNumericFormatDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBearingNumericFormatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBearingNumericFormatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBearingNumericFormatDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsBearingNumericFormatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsCurrencyNumericFormatWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCurrencyNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCurrencyNumericFormatWidget_t qt_meta_stringdata_QgsCurrencyNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QgsCurrencyNumericFormatWidget"

    },
    "QgsCurrencyNumericFormatWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCurrencyNumericFormatWidget[] = {

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

void QgsCurrencyNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsCurrencyNumericFormatWidget::staticMetaObject = {
    { &QgsNumericFormatWidget::staticMetaObject, qt_meta_stringdata_QgsCurrencyNumericFormatWidget.data,
      qt_meta_data_QgsCurrencyNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsCurrencyNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCurrencyNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCurrencyNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsNumericFormatWidget::qt_metacast(_clname);
}

int QgsCurrencyNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsNumericFormatWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsPercentageNumericFormatWidget_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPercentageNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPercentageNumericFormatWidget_t qt_meta_stringdata_QgsPercentageNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 32) // "QgsPercentageNumericFormatWidget"

    },
    "QgsPercentageNumericFormatWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPercentageNumericFormatWidget[] = {

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

void QgsPercentageNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsPercentageNumericFormatWidget::staticMetaObject = {
    { &QgsNumericFormatWidget::staticMetaObject, qt_meta_stringdata_QgsPercentageNumericFormatWidget.data,
      qt_meta_data_QgsPercentageNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPercentageNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPercentageNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPercentageNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsNumericFormatWidget::qt_metacast(_clname);
}

int QgsPercentageNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsNumericFormatWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsScientificNumericFormatWidget_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsScientificNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsScientificNumericFormatWidget_t qt_meta_stringdata_QgsScientificNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 32) // "QgsScientificNumericFormatWidget"

    },
    "QgsScientificNumericFormatWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsScientificNumericFormatWidget[] = {

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

void QgsScientificNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsScientificNumericFormatWidget::staticMetaObject = {
    { &QgsNumericFormatWidget::staticMetaObject, qt_meta_stringdata_QgsScientificNumericFormatWidget.data,
      qt_meta_data_QgsScientificNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsScientificNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsScientificNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsScientificNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsNumericFormatWidget::qt_metacast(_clname);
}

int QgsScientificNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsNumericFormatWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QgsFractionNumericFormatWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFractionNumericFormatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFractionNumericFormatWidget_t qt_meta_stringdata_QgsFractionNumericFormatWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QgsFractionNumericFormatWidget"

    },
    "QgsFractionNumericFormatWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFractionNumericFormatWidget[] = {

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

void QgsFractionNumericFormatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsFractionNumericFormatWidget::staticMetaObject = {
    { &QgsNumericFormatWidget::staticMetaObject, qt_meta_stringdata_QgsFractionNumericFormatWidget.data,
      qt_meta_data_QgsFractionNumericFormatWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFractionNumericFormatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFractionNumericFormatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFractionNumericFormatWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsNumericFormatWidget::qt_metacast(_clname);
}

int QgsFractionNumericFormatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsNumericFormatWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
