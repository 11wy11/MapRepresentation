/****************************************************************************
** Meta object code from reading C++ file 'qgssymbolselectordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgssymbolselectordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgssymbolselectordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataDefinedRestorer_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataDefinedRestorer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataDefinedRestorer_t qt_meta_stringdata_DataDefinedRestorer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DataDefinedRestorer"
QT_MOC_LITERAL(1, 20, 7), // "restore"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "DataDefinedRestorer\0restore\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataDefinedRestorer[] = {

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

void DataDefinedRestorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataDefinedRestorer *_t = static_cast<DataDefinedRestorer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->restore(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DataDefinedRestorer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataDefinedRestorer.data,
      qt_meta_data_DataDefinedRestorer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataDefinedRestorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataDefinedRestorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataDefinedRestorer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataDefinedRestorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsSymbolSelectorWidget_t {
    QByteArrayData data[16];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolSelectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolSelectorWidget_t qt_meta_stringdata_QgsSymbolSelectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsSymbolSelectorWidget"
QT_MOC_LITERAL(1, 24, 14), // "symbolModified"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "moveLayerDown"
QT_MOC_LITERAL(4, 54, 11), // "moveLayerUp"
QT_MOC_LITERAL(5, 66, 8), // "addLayer"
QT_MOC_LITERAL(6, 75, 11), // "removeLayer"
QT_MOC_LITERAL(7, 87, 9), // "lockLayer"
QT_MOC_LITERAL(8, 97, 14), // "duplicateLayer"
QT_MOC_LITERAL(9, 112, 12), // "layerChanged"
QT_MOC_LITERAL(10, 125, 18), // "updateLayerPreview"
QT_MOC_LITERAL(11, 144, 13), // "updatePreview"
QT_MOC_LITERAL(12, 158, 13), // "symbolChanged"
QT_MOC_LITERAL(13, 172, 11), // "changeLayer"
QT_MOC_LITERAL(14, 184, 15), // "QgsSymbolLayer*"
QT_MOC_LITERAL(15, 200, 5) // "layer"

    },
    "QgsSymbolSelectorWidget\0symbolModified\0"
    "\0moveLayerDown\0moveLayerUp\0addLayer\0"
    "removeLayer\0lockLayer\0duplicateLayer\0"
    "layerChanged\0updateLayerPreview\0"
    "updatePreview\0symbolChanged\0changeLayer\0"
    "QgsSymbolLayer*\0layer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolSelectorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QgsSymbolSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolSelectorWidget *_t = static_cast<QgsSymbolSelectorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->symbolModified(); break;
        case 1: _t->moveLayerDown(); break;
        case 2: _t->moveLayerUp(); break;
        case 3: _t->addLayer(); break;
        case 4: _t->removeLayer(); break;
        case 5: _t->lockLayer(); break;
        case 6: _t->duplicateLayer(); break;
        case 7: _t->layerChanged(); break;
        case 8: _t->updateLayerPreview(); break;
        case 9: _t->updatePreview(); break;
        case 10: _t->symbolChanged(); break;
        case 11: _t->changeLayer((*reinterpret_cast< QgsSymbolLayer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSymbolSelectorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolSelectorWidget::symbolModified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSymbolSelectorWidget::staticMetaObject = {
    { &QgsPanelWidget::staticMetaObject, qt_meta_stringdata_QgsSymbolSelectorWidget.data,
      qt_meta_data_QgsSymbolSelectorWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolSelectorWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPanelWidget::qt_metacast(_clname);
}

int QgsSymbolSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPanelWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QgsSymbolSelectorWidget::symbolModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsSymbolSelectorDialog_t {
    QByteArrayData data[17];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolSelectorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolSelectorDialog_t qt_meta_stringdata_QgsSymbolSelectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsSymbolSelectorDialog"
QT_MOC_LITERAL(1, 24, 14), // "symbolModified"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "moveLayerDown"
QT_MOC_LITERAL(4, 54, 11), // "moveLayerUp"
QT_MOC_LITERAL(5, 66, 8), // "addLayer"
QT_MOC_LITERAL(6, 75, 11), // "removeLayer"
QT_MOC_LITERAL(7, 87, 9), // "lockLayer"
QT_MOC_LITERAL(8, 97, 14), // "duplicateLayer"
QT_MOC_LITERAL(9, 112, 12), // "layerChanged"
QT_MOC_LITERAL(10, 125, 18), // "updateLayerPreview"
QT_MOC_LITERAL(11, 144, 13), // "updatePreview"
QT_MOC_LITERAL(12, 158, 13), // "symbolChanged"
QT_MOC_LITERAL(13, 172, 11), // "changeLayer"
QT_MOC_LITERAL(14, 184, 15), // "QgsSymbolLayer*"
QT_MOC_LITERAL(15, 200, 5), // "layer"
QT_MOC_LITERAL(16, 206, 8) // "showHelp"

    },
    "QgsSymbolSelectorDialog\0symbolModified\0"
    "\0moveLayerDown\0moveLayerUp\0addLayer\0"
    "removeLayer\0lockLayer\0duplicateLayer\0"
    "layerChanged\0updateLayerPreview\0"
    "updatePreview\0symbolChanged\0changeLayer\0"
    "QgsSymbolLayer*\0layer\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolSelectorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void QgsSymbolSelectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolSelectorDialog *_t = static_cast<QgsSymbolSelectorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->symbolModified(); break;
        case 1: _t->moveLayerDown(); break;
        case 2: _t->moveLayerUp(); break;
        case 3: _t->addLayer(); break;
        case 4: _t->removeLayer(); break;
        case 5: _t->lockLayer(); break;
        case 6: _t->duplicateLayer(); break;
        case 7: _t->layerChanged(); break;
        case 8: _t->updateLayerPreview(); break;
        case 9: _t->updatePreview(); break;
        case 10: _t->symbolChanged(); break;
        case 11: _t->changeLayer((*reinterpret_cast< QgsSymbolLayer*(*)>(_a[1]))); break;
        case 12: _t->showHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsSymbolSelectorDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsSymbolSelectorDialog::symbolModified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsSymbolSelectorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsSymbolSelectorDialog.data,
      qt_meta_data_QgsSymbolSelectorDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsSymbolSelectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolSelectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolSelectorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsSymbolSelectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QgsSymbolSelectorDialog::symbolModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
