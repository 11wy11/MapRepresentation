/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutpagepropertieswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutpagepropertieswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutpagepropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutPagePropertiesWidget_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutPagePropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutPagePropertiesWidget_t qt_meta_stringdata_QgsLayoutPagePropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsLayoutPagePropertiesWidget"
QT_MOC_LITERAL(1, 30, 22), // "pageOrientationChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 15), // "pageSizeChanged"
QT_MOC_LITERAL(4, 70, 5), // "index"
QT_MOC_LITERAL(5, 76, 18), // "orientationChanged"
QT_MOC_LITERAL(6, 95, 14), // "updatePageSize"
QT_MOC_LITERAL(7, 110, 15), // "setToCustomSize"
QT_MOC_LITERAL(8, 126, 13), // "symbolChanged"
QT_MOC_LITERAL(9, 140, 21), // "excludeExportsToggled"
QT_MOC_LITERAL(10, 162, 7), // "checked"
QT_MOC_LITERAL(11, 170, 13) // "refreshLayout"

    },
    "QgsLayoutPagePropertiesWidget\0"
    "pageOrientationChanged\0\0pageSizeChanged\0"
    "index\0orientationChanged\0updatePageSize\0"
    "setToCustomSize\0symbolChanged\0"
    "excludeExportsToggled\0checked\0"
    "refreshLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutPagePropertiesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutPagePropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutPagePropertiesWidget *_t = static_cast<QgsLayoutPagePropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pageOrientationChanged(); break;
        case 1: _t->pageSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->orientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updatePageSize(); break;
        case 4: _t->setToCustomSize(); break;
        case 5: _t->symbolChanged(); break;
        case 6: _t->excludeExportsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->refreshLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsLayoutPagePropertiesWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsLayoutPagePropertiesWidget::pageOrientationChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutPagePropertiesWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutPagePropertiesWidget.data,
      qt_meta_data_QgsLayoutPagePropertiesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutPagePropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutPagePropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutPagePropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutPagePropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
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
void QgsLayoutPagePropertiesWidget::pageOrientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
