/****************************************************************************
** Meta object code from reading C++ file 'qgsfilewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfilewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfilewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFileWidget_t {
    QByteArrayData data[26];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFileWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFileWidget_t qt_meta_stringdata_QgsFileWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsFileWidget"
QT_MOC_LITERAL(1, 14, 11), // "fileChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "path"
QT_MOC_LITERAL(4, 32, 14), // "openFileDialog"
QT_MOC_LITERAL(5, 47, 10), // "textEdited"
QT_MOC_LITERAL(6, 58, 8), // "editLink"
QT_MOC_LITERAL(7, 67, 23), // "fileWidgetButtonVisible"
QT_MOC_LITERAL(8, 91, 7), // "useLink"
QT_MOC_LITERAL(9, 99, 7), // "fullUrl"
QT_MOC_LITERAL(10, 107, 11), // "dialogTitle"
QT_MOC_LITERAL(11, 119, 6), // "filter"
QT_MOC_LITERAL(12, 126, 11), // "defaultRoot"
QT_MOC_LITERAL(13, 138, 11), // "storageMode"
QT_MOC_LITERAL(14, 150, 11), // "StorageMode"
QT_MOC_LITERAL(15, 162, 15), // "relativeStorage"
QT_MOC_LITERAL(16, 178, 15), // "RelativeStorage"
QT_MOC_LITERAL(17, 194, 7), // "options"
QT_MOC_LITERAL(18, 202, 20), // "QFileDialog::Options"
QT_MOC_LITERAL(19, 223, 7), // "GetFile"
QT_MOC_LITERAL(20, 231, 12), // "GetDirectory"
QT_MOC_LITERAL(21, 244, 16), // "GetMultipleFiles"
QT_MOC_LITERAL(22, 261, 8), // "SaveFile"
QT_MOC_LITERAL(23, 270, 8), // "Absolute"
QT_MOC_LITERAL(24, 279, 15), // "RelativeProject"
QT_MOC_LITERAL(25, 295, 19) // "RelativeDefaultPath"

    },
    "QgsFileWidget\0fileChanged\0\0path\0"
    "openFileDialog\0textEdited\0editLink\0"
    "fileWidgetButtonVisible\0useLink\0fullUrl\0"
    "dialogTitle\0filter\0defaultRoot\0"
    "storageMode\0StorageMode\0relativeStorage\0"
    "RelativeStorage\0options\0QFileDialog::Options\0"
    "GetFile\0GetDirectory\0GetMultipleFiles\0"
    "SaveFile\0Absolute\0RelativeProject\0"
    "RelativeDefaultPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFileWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       9,   42, // properties
       2,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 16, 0x0009510b,
      17, 0x80000000 | 18, 0x0009510b,

 // enums: name, flags, count, data
      14, 0x0,    4,   77,
      16, 0x0,    3,   85,

 // enum data: key, value
      19, uint(QgsFileWidget::GetFile),
      20, uint(QgsFileWidget::GetDirectory),
      21, uint(QgsFileWidget::GetMultipleFiles),
      22, uint(QgsFileWidget::SaveFile),
      23, uint(QgsFileWidget::Absolute),
      24, uint(QgsFileWidget::RelativeProject),
      25, uint(QgsFileWidget::RelativeDefaultPath),

       0        // eod
};

void QgsFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFileWidget *_t = static_cast<QgsFileWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->openFileDialog(); break;
        case 2: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->editLink(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFileWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileWidget::fileChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsFileWidget *_t = static_cast<QgsFileWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->fileWidgetButtonVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useLink(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->fullUrl(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->dialogTitle(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->filter(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->defaultRoot(); break;
        case 6: *reinterpret_cast< StorageMode*>(_v) = _t->storageMode(); break;
        case 7: *reinterpret_cast< RelativeStorage*>(_v) = _t->relativeStorage(); break;
        case 8: *reinterpret_cast< QFileDialog::Options*>(_v) = _t->options(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsFileWidget *_t = static_cast<QgsFileWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileWidgetButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUseLink(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setFullUrl(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDialogTitle(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDefaultRoot(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setStorageMode(*reinterpret_cast< StorageMode*>(_v)); break;
        case 7: _t->setRelativeStorage(*reinterpret_cast< RelativeStorage*>(_v)); break;
        case 8: _t->setOptions(*reinterpret_cast< QFileDialog::Options*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsFileWidget[] = {
        &QFileDialog::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsFileWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsFileWidget.data,
      qt_meta_data_QgsFileWidget,  qt_static_metacall, qt_meta_extradata_QgsFileWidget, nullptr}
};


const QMetaObject *QgsFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFileWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QgsFileWidget::fileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QgsFileDropEdit_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFileDropEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFileDropEdit_t qt_meta_stringdata_QgsFileDropEdit = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QgsFileDropEdit"

    },
    "QgsFileDropEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFileDropEdit[] = {

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

void QgsFileDropEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsFileDropEdit::staticMetaObject = {
    { &QgsHighlightableLineEdit::staticMetaObject, qt_meta_stringdata_QgsFileDropEdit.data,
      qt_meta_data_QgsFileDropEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFileDropEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFileDropEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFileDropEdit.stringdata0))
        return static_cast<void*>(this);
    return QgsHighlightableLineEdit::qt_metacast(_clname);
}

int QgsFileDropEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsHighlightableLineEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
