/****************************************************************************
** Meta object code from reading C++ file 'qgspanelwidgetstack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgspanelwidgetstack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspanelwidgetstack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPanelWidgetStack_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPanelWidgetStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPanelWidgetStack_t qt_meta_stringdata_QgsPanelWidgetStack = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsPanelWidgetStack"
QT_MOC_LITERAL(1, 20, 18), // "acceptCurrentPanel"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "acceptAllPanels"
QT_MOC_LITERAL(4, 56, 9), // "showPanel"
QT_MOC_LITERAL(5, 66, 15), // "QgsPanelWidget*"
QT_MOC_LITERAL(6, 82, 5), // "panel"
QT_MOC_LITERAL(7, 88, 10) // "closePanel"

    },
    "QgsPanelWidgetStack\0acceptCurrentPanel\0"
    "\0acceptAllPanels\0showPanel\0QgsPanelWidget*\0"
    "panel\0closePanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPanelWidgetStack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QgsPanelWidgetStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPanelWidgetStack *_t = static_cast<QgsPanelWidgetStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptCurrentPanel(); break;
        case 1: _t->acceptAllPanels(); break;
        case 2: _t->showPanel((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        case 3: _t->closePanel((*reinterpret_cast< QgsPanelWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsPanelWidgetStack::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsPanelWidgetStack.data,
      qt_meta_data_QgsPanelWidgetStack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPanelWidgetStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPanelWidgetStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPanelWidgetStack.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsPanelWidgetStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
