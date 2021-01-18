/****************************************************************************
** Meta object code from reading C++ file 'qgsmodelgraphicsscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/processing/models/qgsmodelgraphicsscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmodelgraphicsscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsModelGraphicsScene_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsModelGraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsModelGraphicsScene_t qt_meta_stringdata_QgsModelGraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsModelGraphicsScene"
QT_MOC_LITERAL(1, 22, 15), // "rebuildRequired"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "componentAboutToChange"
QT_MOC_LITERAL(4, 62, 4), // "text"
QT_MOC_LITERAL(5, 67, 2), // "id"
QT_MOC_LITERAL(6, 70, 16), // "componentChanged"
QT_MOC_LITERAL(7, 87, 19), // "selectedItemChanged"
QT_MOC_LITERAL(8, 107, 29), // "QgsModelComponentGraphicItem*"
QT_MOC_LITERAL(9, 137, 8) // "selected"

    },
    "QgsModelGraphicsScene\0rebuildRequired\0"
    "\0componentAboutToChange\0text\0id\0"
    "componentChanged\0selectedItemChanged\0"
    "QgsModelComponentGraphicItem*\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsModelGraphicsScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    2,   40,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x26 /* Public | MethodCloned */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    1,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QgsModelGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsModelGraphicsScene *_t = static_cast<QgsModelGraphicsScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rebuildRequired(); break;
        case 1: _t->componentAboutToChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->componentAboutToChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->componentChanged(); break;
        case 4: _t->selectedItemChanged((*reinterpret_cast< QgsModelComponentGraphicItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsModelGraphicsScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsScene::rebuildRequired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsScene::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsScene::componentAboutToChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsScene::componentChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsModelGraphicsScene::*)(QgsModelComponentGraphicItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsModelGraphicsScene::selectedItemChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsModelGraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_QgsModelGraphicsScene.data,
      qt_meta_data_QgsModelGraphicsScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsModelGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsModelGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsModelGraphicsScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int QgsModelGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QgsModelGraphicsScene::rebuildRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsModelGraphicsScene::componentAboutToChange(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QgsModelGraphicsScene::componentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QgsModelGraphicsScene::selectedItemChanged(QgsModelComponentGraphicItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
