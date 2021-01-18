/****************************************************************************
** Meta object code from reading C++ file 'qgsautheditorwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/auth/qgsautheditorwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsautheditorwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsAuthMethodPlugins_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthMethodPlugins_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthMethodPlugins_t qt_meta_stringdata_QgsAuthMethodPlugins = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAuthMethodPlugins"
QT_MOC_LITERAL(1, 21, 13), // "populateTable"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "QgsAuthMethodPlugins\0populateTable\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthMethodPlugins[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsAuthMethodPlugins::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthMethodPlugins *_t = static_cast<QgsAuthMethodPlugins *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populateTable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthMethodPlugins::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsAuthMethodPlugins.data,
      qt_meta_data_QgsAuthMethodPlugins,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthMethodPlugins::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthMethodPlugins::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthMethodPlugins.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsAuthMethodPlugins::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QgsAuthEditorWidgets_t {
    QByteArrayData data[19];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAuthEditorWidgets_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAuthEditorWidgets_t qt_meta_stringdata_QgsAuthEditorWidgets = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsAuthEditorWidgets"
QT_MOC_LITERAL(1, 21, 22), // "btnCertManager_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "btnAuthPlugins_clicked"
QT_MOC_LITERAL(4, 68, 17), // "setMasterPassword"
QT_MOC_LITERAL(5, 86, 25), // "clearCachedMasterPassword"
QT_MOC_LITERAL(6, 112, 19), // "resetMasterPassword"
QT_MOC_LITERAL(7, 132, 32), // "clearCachedAuthenticationConfigs"
QT_MOC_LITERAL(8, 165, 27), // "removeAuthenticationConfigs"
QT_MOC_LITERAL(9, 193, 27), // "eraseAuthenticationDatabase"
QT_MOC_LITERAL(10, 221, 14), // "authMessageOut"
QT_MOC_LITERAL(11, 236, 7), // "message"
QT_MOC_LITERAL(12, 244, 7), // "authtag"
QT_MOC_LITERAL(13, 252, 28), // "QgsAuthManager::MessageLevel"
QT_MOC_LITERAL(14, 281, 5), // "level"
QT_MOC_LITERAL(15, 287, 20), // "passwordHelperDelete"
QT_MOC_LITERAL(16, 308, 18), // "passwordHelperSync"
QT_MOC_LITERAL(17, 327, 29), // "passwordHelperEnableTriggered"
QT_MOC_LITERAL(18, 357, 36) // "passwordHelperLoggingEnableTr..."

    },
    "QgsAuthEditorWidgets\0btnCertManager_clicked\0"
    "\0btnAuthPlugins_clicked\0setMasterPassword\0"
    "clearCachedMasterPassword\0resetMasterPassword\0"
    "clearCachedAuthenticationConfigs\0"
    "removeAuthenticationConfigs\0"
    "eraseAuthenticationDatabase\0authMessageOut\0"
    "message\0authtag\0QgsAuthManager::MessageLevel\0"
    "level\0passwordHelperDelete\0"
    "passwordHelperSync\0passwordHelperEnableTriggered\0"
    "passwordHelperLoggingEnableTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAuthEditorWidgets[] = {

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
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    3,   87,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    0,   96,    2, 0x08 /* Private */,
      18,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   11,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAuthEditorWidgets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAuthEditorWidgets *_t = static_cast<QgsAuthEditorWidgets *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btnCertManager_clicked(); break;
        case 1: _t->btnAuthPlugins_clicked(); break;
        case 2: _t->setMasterPassword(); break;
        case 3: _t->clearCachedMasterPassword(); break;
        case 4: _t->resetMasterPassword(); break;
        case 5: _t->clearCachedAuthenticationConfigs(); break;
        case 6: _t->removeAuthenticationConfigs(); break;
        case 7: _t->eraseAuthenticationDatabase(); break;
        case 8: _t->authMessageOut((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsAuthManager::MessageLevel(*)>(_a[3]))); break;
        case 9: _t->passwordHelperDelete(); break;
        case 10: _t->passwordHelperSync(); break;
        case 11: _t->passwordHelperEnableTriggered(); break;
        case 12: _t->passwordHelperLoggingEnableTriggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsAuthEditorWidgets::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsAuthEditorWidgets.data,
      qt_meta_data_QgsAuthEditorWidgets,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAuthEditorWidgets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAuthEditorWidgets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAuthEditorWidgets.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsAuthEditorWidgets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
