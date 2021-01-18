/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayerstylemanagerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmaplayerstylemanagerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayerstylemanagerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMapLayerStyleManagerWidget_t {
    QByteArrayData data[22];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerStyleManagerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerStyleManagerWidget_t qt_meta_stringdata_QgsMapLayerStyleManagerWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsMapLayerStyleManagerWidget"
QT_MOC_LITERAL(1, 30, 5), // "apply"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "styleClicked"
QT_MOC_LITERAL(4, 50, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 62, 5), // "index"
QT_MOC_LITERAL(6, 68, 19), // "currentStyleChanged"
QT_MOC_LITERAL(7, 88, 4), // "name"
QT_MOC_LITERAL(8, 93, 10), // "styleAdded"
QT_MOC_LITERAL(9, 104, 12), // "styleRemoved"
QT_MOC_LITERAL(10, 117, 12), // "styleRenamed"
QT_MOC_LITERAL(11, 130, 7), // "oldname"
QT_MOC_LITERAL(12, 138, 7), // "newname"
QT_MOC_LITERAL(13, 146, 8), // "addStyle"
QT_MOC_LITERAL(14, 155, 11), // "removeStyle"
QT_MOC_LITERAL(15, 167, 11), // "renameStyle"
QT_MOC_LITERAL(16, 179, 14), // "QStandardItem*"
QT_MOC_LITERAL(17, 194, 4), // "item"
QT_MOC_LITERAL(18, 199, 13), // "saveAsDefault"
QT_MOC_LITERAL(19, 213, 11), // "loadDefault"
QT_MOC_LITERAL(20, 225, 9), // "saveStyle"
QT_MOC_LITERAL(21, 235, 9) // "loadStyle"

    },
    "QgsMapLayerStyleManagerWidget\0apply\0"
    "\0styleClicked\0QModelIndex\0index\0"
    "currentStyleChanged\0name\0styleAdded\0"
    "styleRemoved\0styleRenamed\0oldname\0"
    "newname\0addStyle\0removeStyle\0renameStyle\0"
    "QStandardItem*\0item\0saveAsDefault\0"
    "loadDefault\0saveStyle\0loadStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerStyleManagerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    2,   92,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,
      20,    0,  104,    2, 0x08 /* Private */,
      21,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapLayerStyleManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerStyleManagerWidget *_t = static_cast<QgsMapLayerStyleManagerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->styleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->currentStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->styleAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->styleRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->styleRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->addStyle(); break;
        case 7: _t->removeStyle(); break;
        case 8: _t->renameStyle((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 9: _t->saveAsDefault(); break;
        case 10: _t->loadDefault(); break;
        case 11: _t->saveStyle(); break;
        case 12: _t->loadStyle(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMapLayerStyleManagerWidget::staticMetaObject = {
    { &QgsMapLayerConfigWidget::staticMetaObject, qt_meta_stringdata_QgsMapLayerStyleManagerWidget.data,
      qt_meta_data_QgsMapLayerStyleManagerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMapLayerStyleManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerStyleManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerStyleManagerWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsMapLayerConfigWidget::qt_metacast(_clname);
}

int QgsMapLayerStyleManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerConfigWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
