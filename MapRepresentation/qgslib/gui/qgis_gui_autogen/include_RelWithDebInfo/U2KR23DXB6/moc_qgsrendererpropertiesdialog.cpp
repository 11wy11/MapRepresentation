/****************************************************************************
** Meta object code from reading C++ file 'qgsrendererpropertiesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/symbology/qgsrendererpropertiesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrendererpropertiesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsRendererPropertiesDialog_t {
    QByteArrayData data[19];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRendererPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRendererPropertiesDialog_t qt_meta_stringdata_QgsRendererPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsRendererPropertiesDialog"
QT_MOC_LITERAL(1, 28, 21), // "layerVariablesChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "widgetChanged"
QT_MOC_LITERAL(4, 65, 9), // "showPanel"
QT_MOC_LITERAL(5, 75, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(6, 91, 5), // "panel"
QT_MOC_LITERAL(7, 97, 15), // "rendererChanged"
QT_MOC_LITERAL(8, 113, 5), // "apply"
QT_MOC_LITERAL(9, 119, 4), // "onOK"
QT_MOC_LITERAL(10, 124, 9), // "openPanel"
QT_MOC_LITERAL(11, 134, 17), // "showOrderByDialog"
QT_MOC_LITERAL(12, 152, 13), // "changeOrderBy"
QT_MOC_LITERAL(13, 166, 26), // "QgsFeatureRequest::OrderBy"
QT_MOC_LITERAL(14, 193, 7), // "orderBy"
QT_MOC_LITERAL(15, 201, 14), // "orderByEnabled"
QT_MOC_LITERAL(16, 216, 13), // "updateUIState"
QT_MOC_LITERAL(17, 230, 6), // "hidden"
QT_MOC_LITERAL(18, 237, 11) // "syncToLayer"

    },
    "QgsRendererPropertiesDialog\0"
    "layerVariablesChanged\0\0widgetChanged\0"
    "showPanel\0QgsPanelWidget*\0panel\0"
    "rendererChanged\0apply\0onOK\0openPanel\0"
    "showOrderByDialog\0changeOrderBy\0"
    "QgsFeatureRequest::OrderBy\0orderBy\0"
    "orderByEnabled\0updateUIState\0hidden\0"
    "syncToLayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRendererPropertiesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    2,   81,    2, 0x08 /* Private */,
      16,    1,   86,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void QgsRendererPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRendererPropertiesDialog *_t = static_cast<QgsRendererPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layerVariablesChanged(); break;
        case 1: _t->widgetChanged(); break;
        case 2: _t->showPanel((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 3: _t->rendererChanged(); break;
        case 4: _t->apply(); break;
        case 5: _t->onOK(); break;
        case 6: _t->openPanel((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 7: _t->showOrderByDialog(); break;
        case 8: _t->changeOrderBy((*reinterpret_cast< const QgsFeatureRequest::OrderBy(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->updateUIState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->syncToLayer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsPanelWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsRendererPropertiesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRendererPropertiesDialog::layerVariablesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsRendererPropertiesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRendererPropertiesDialog::widgetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsRendererPropertiesDialog::*)(QgsPanelWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsRendererPropertiesDialog::showPanel)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsRendererPropertiesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsRendererPropertiesDialog.data,
      qt_meta_data_QgsRendererPropertiesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsRendererPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRendererPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRendererPropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsRendererPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsRendererPropertiesDialog::layerVariablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsRendererPropertiesDialog::widgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsRendererPropertiesDialog::showPanel(QgsPanelWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
