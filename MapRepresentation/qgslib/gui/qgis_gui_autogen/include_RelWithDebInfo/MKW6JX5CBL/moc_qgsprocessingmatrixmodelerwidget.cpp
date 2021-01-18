/****************************************************************************
** Meta object code from reading C++ file 'qgsprocessingmatrixmodelerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/qgsprocessingmatrixmodelerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprocessingmatrixmodelerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProcessingMatrixModelerWidget_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProcessingMatrixModelerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProcessingMatrixModelerWidget_t qt_meta_stringdata_QgsProcessingMatrixModelerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsProcessingMatrixModelerWidget"
QT_MOC_LITERAL(1, 33, 9), // "addColumn"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "removeColumns"
QT_MOC_LITERAL(4, 58, 6), // "addRow"
QT_MOC_LITERAL(5, 65, 10), // "removeRows"
QT_MOC_LITERAL(6, 76, 10), // "clearTable"
QT_MOC_LITERAL(7, 87, 12), // "changeHeader"
QT_MOC_LITERAL(8, 100, 5) // "index"

    },
    "QgsProcessingMatrixModelerWidget\0"
    "addColumn\0\0removeColumns\0addRow\0"
    "removeRows\0clearTable\0changeHeader\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProcessingMatrixModelerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void QgsProcessingMatrixModelerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProcessingMatrixModelerWidget *_t = static_cast<QgsProcessingMatrixModelerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addColumn(); break;
        case 1: _t->removeColumns(); break;
        case 2: _t->addRow(); break;
        case 3: _t->removeRows(); break;
        case 4: _t->clearTable(); break;
        case 5: _t->changeHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsProcessingMatrixModelerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProcessingMatrixModelerWidget.data,
      qt_meta_data_QgsProcessingMatrixModelerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProcessingMatrixModelerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProcessingMatrixModelerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProcessingMatrixModelerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsProcessingMatrixModelerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
