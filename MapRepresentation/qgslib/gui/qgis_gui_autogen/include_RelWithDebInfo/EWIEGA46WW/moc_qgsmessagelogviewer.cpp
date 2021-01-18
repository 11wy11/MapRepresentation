/****************************************************************************
** Meta object code from reading C++ file 'qgsmessagelogviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsmessagelogviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmessagelogviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsMessageLogViewer_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMessageLogViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMessageLogViewer_t qt_meta_stringdata_QgsMessageLogViewer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsMessageLogViewer"
QT_MOC_LITERAL(1, 20, 10), // "logMessage"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "message"
QT_MOC_LITERAL(4, 40, 3), // "tag"
QT_MOC_LITERAL(5, 44, 18), // "Qgis::MessageLevel"
QT_MOC_LITERAL(6, 63, 5), // "level"
QT_MOC_LITERAL(7, 69, 24), // "showContextMenuForTabBar"
QT_MOC_LITERAL(8, 94, 5), // "point"
QT_MOC_LITERAL(9, 100, 8), // "closeTab"
QT_MOC_LITERAL(10, 109, 5) // "index"

    },
    "QgsMessageLogViewer\0logMessage\0\0message\0"
    "tag\0Qgis::MessageLevel\0level\0"
    "showContextMenuForTabBar\0point\0closeTab\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMessageLogViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       7,    1,   36,    2, 0x08 /* Private */,
       9,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void QgsMessageLogViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMessageLogViewer *_t = static_cast<QgsMessageLogViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qgis::MessageLevel(*)>(_a[3]))); break;
        case 1: _t->showContextMenuForTabBar((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsMessageLogViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsMessageLogViewer.data,
      qt_meta_data_QgsMessageLogViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsMessageLogViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMessageLogViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMessageLogViewer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsMessageLogViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
