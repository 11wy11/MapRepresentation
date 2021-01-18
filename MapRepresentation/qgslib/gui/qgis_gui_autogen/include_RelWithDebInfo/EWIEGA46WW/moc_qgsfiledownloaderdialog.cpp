/****************************************************************************
** Meta object code from reading C++ file 'qgsfiledownloaderdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsfiledownloaderdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsfiledownloaderdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFileDownloaderDialog_t {
    QByteArrayData data[13];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFileDownloaderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFileDownloaderDialog_t qt_meta_stringdata_QgsFileDownloaderDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsFileDownloaderDialog"
QT_MOC_LITERAL(1, 24, 17), // "downloadCompleted"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "downloadExited"
QT_MOC_LITERAL(4, 58, 16), // "downloadCanceled"
QT_MOC_LITERAL(5, 75, 13), // "downloadError"
QT_MOC_LITERAL(6, 89, 13), // "errorMessages"
QT_MOC_LITERAL(7, 103, 16), // "downloadProgress"
QT_MOC_LITERAL(8, 120, 13), // "bytesReceived"
QT_MOC_LITERAL(9, 134, 10), // "bytesTotal"
QT_MOC_LITERAL(10, 145, 7), // "onError"
QT_MOC_LITERAL(11, 153, 6), // "errors"
QT_MOC_LITERAL(12, 160, 18) // "onDownloadProgress"

    },
    "QgsFileDownloaderDialog\0downloadCompleted\0"
    "\0downloadExited\0downloadCanceled\0"
    "downloadError\0errorMessages\0"
    "downloadProgress\0bytesReceived\0"
    "bytesTotal\0onError\0errors\0onDownloadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFileDownloaderDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   60,    2, 0x08 /* Private */,
      12,    2,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,

       0        // eod
};

void QgsFileDownloaderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFileDownloaderDialog *_t = static_cast<QgsFileDownloaderDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadCompleted(); break;
        case 1: _t->downloadExited(); break;
        case 2: _t->downloadCanceled(); break;
        case 3: _t->downloadError((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->onError((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsFileDownloaderDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloaderDialog::downloadCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsFileDownloaderDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloaderDialog::downloadExited)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsFileDownloaderDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloaderDialog::downloadCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsFileDownloaderDialog::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloaderDialog::downloadError)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsFileDownloaderDialog::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsFileDownloaderDialog::downloadProgress)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFileDownloaderDialog::staticMetaObject = {
    { &QProgressDialog::staticMetaObject, qt_meta_stringdata_QgsFileDownloaderDialog.data,
      qt_meta_data_QgsFileDownloaderDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFileDownloaderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFileDownloaderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFileDownloaderDialog.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int QgsFileDownloaderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsFileDownloaderDialog::downloadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsFileDownloaderDialog::downloadExited()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsFileDownloaderDialog::downloadCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QgsFileDownloaderDialog::downloadError(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsFileDownloaderDialog::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
