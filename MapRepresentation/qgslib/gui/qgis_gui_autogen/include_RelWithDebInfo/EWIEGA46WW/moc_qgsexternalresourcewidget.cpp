/****************************************************************************
** Meta object code from reading C++ file 'qgsexternalresourcewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsexternalresourcewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsexternalresourcewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsExternalResourceWidget_t {
    QByteArrayData data[13];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsExternalResourceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsExternalResourceWidget_t qt_meta_stringdata_QgsExternalResourceWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsExternalResourceWidget"
QT_MOC_LITERAL(1, 26, 12), // "valueChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "loadDocument"
QT_MOC_LITERAL(4, 53, 4), // "path"
QT_MOC_LITERAL(5, 58, 17), // "fileWidgetVisible"
QT_MOC_LITERAL(6, 76, 21), // "documentViewerContent"
QT_MOC_LITERAL(7, 98, 21), // "DocumentViewerContent"
QT_MOC_LITERAL(8, 120, 20), // "documentViewerHeight"
QT_MOC_LITERAL(9, 141, 19), // "documentViewerWidth"
QT_MOC_LITERAL(10, 161, 15), // "relativeStorage"
QT_MOC_LITERAL(11, 177, 30), // "QgsFileWidget::RelativeStorage"
QT_MOC_LITERAL(12, 208, 11) // "defaultRoot"

    },
    "QgsExternalResourceWidget\0valueChanged\0"
    "\0loadDocument\0path\0fileWidgetVisible\0"
    "documentViewerContent\0DocumentViewerContent\0"
    "documentViewerHeight\0documentViewerWidth\0"
    "relativeStorage\0QgsFileWidget::RelativeStorage\0"
    "defaultRoot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsExternalResourceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00095103,
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QString, 0x00095103,

       0        // eod
};

void QgsExternalResourceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsExternalResourceWidget *_t = static_cast<QgsExternalResourceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->loadDocument((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsExternalResourceWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsExternalResourceWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsExternalResourceWidget *_t = static_cast<QgsExternalResourceWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->fileWidgetVisible(); break;
        case 1: *reinterpret_cast< DocumentViewerContent*>(_v) = _t->documentViewerContent(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->documentViewerHeight(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->documentViewerWidth(); break;
        case 4: *reinterpret_cast< QgsFileWidget::RelativeStorage*>(_v) = _t->relativeStorage(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->defaultRoot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsExternalResourceWidget *_t = static_cast<QgsExternalResourceWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileWidgetVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDocumentViewerContent(*reinterpret_cast< DocumentViewerContent*>(_v)); break;
        case 2: _t->setDocumentViewerHeight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDocumentViewerWidth(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setRelativeStorage(*reinterpret_cast< QgsFileWidget::RelativeStorage*>(_v)); break;
        case 5: _t->setDefaultRoot(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsExternalResourceWidget[] = {
        &QgsFileWidget::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsExternalResourceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsExternalResourceWidget.data,
      qt_meta_data_QgsExternalResourceWidget,  qt_static_metacall, qt_meta_extradata_QgsExternalResourceWidget, nullptr}
};


const QMetaObject *QgsExternalResourceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsExternalResourceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsExternalResourceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsExternalResourceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsExternalResourceWidget::valueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
