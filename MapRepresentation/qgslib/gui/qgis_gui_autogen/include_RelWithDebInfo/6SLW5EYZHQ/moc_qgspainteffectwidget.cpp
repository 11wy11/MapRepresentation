/****************************************************************************
** Meta object code from reading C++ file 'qgspainteffectwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/effects/qgspainteffectwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspainteffectwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsPaintEffectWidget_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPaintEffectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPaintEffectWidget_t qt_meta_stringdata_QgsPaintEffectWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsPaintEffectWidget"
QT_MOC_LITERAL(1, 21, 7), // "changed"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "QgsPaintEffectWidget\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPaintEffectWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsPaintEffectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPaintEffectWidget *_t = static_cast<QgsPaintEffectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsPaintEffectWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsPaintEffectWidget::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsPaintEffectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsPaintEffectWidget.data,
      qt_meta_data_QgsPaintEffectWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsPaintEffectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPaintEffectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPaintEffectWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsPaintEffectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsPaintEffectWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QgsDrawSourceWidget_t {
    QByteArrayData data[7];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDrawSourceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDrawSourceWidget_t qt_meta_stringdata_QgsDrawSourceWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsDrawSourceWidget"
QT_MOC_LITERAL(1, 20, 14), // "opacityChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 37), // "mDrawModeComboBox_currentInde..."
QT_MOC_LITERAL(5, 80, 5), // "index"
QT_MOC_LITERAL(6, 86, 31) // "mBlendCmbBx_currentIndexChanged"

    },
    "QgsDrawSourceWidget\0opacityChanged\0\0"
    "value\0mDrawModeComboBox_currentIndexChanged\0"
    "index\0mBlendCmbBx_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDrawSourceWidget[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QgsDrawSourceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDrawSourceWidget *_t = static_cast<QgsDrawSourceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->mDrawModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mBlendCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsDrawSourceWidget::staticMetaObject = {
    { &QgsPaintEffectWidget::staticMetaObject, qt_meta_stringdata_QgsDrawSourceWidget.data,
      qt_meta_data_QgsDrawSourceWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDrawSourceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDrawSourceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDrawSourceWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPaintEffectWidget::qt_metacast(_clname);
}

int QgsDrawSourceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPaintEffectWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsBlurWidget_t {
    QByteArrayData data[10];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsBlurWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsBlurWidget_t qt_meta_stringdata_QgsBlurWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsBlurWidget"
QT_MOC_LITERAL(1, 14, 34), // "mBlurTypeCombo_currentIndexCh..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "index"
QT_MOC_LITERAL(4, 56, 31), // "mBlurStrengthSpnBx_valueChanged"
QT_MOC_LITERAL(5, 88, 5), // "value"
QT_MOC_LITERAL(6, 94, 23), // "mBlurUnitWidget_changed"
QT_MOC_LITERAL(7, 118, 14), // "opacityChanged"
QT_MOC_LITERAL(8, 133, 37), // "mDrawModeComboBox_currentInde..."
QT_MOC_LITERAL(9, 171, 31) // "mBlendCmbBx_currentIndexChanged"

    },
    "QgsBlurWidget\0mBlurTypeCombo_currentIndexChanged\0"
    "\0index\0mBlurStrengthSpnBx_valueChanged\0"
    "value\0mBlurUnitWidget_changed\0"
    "opacityChanged\0mDrawModeComboBox_currentIndexChanged\0"
    "mBlendCmbBx_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsBlurWidget[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QgsBlurWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsBlurWidget *_t = static_cast<QgsBlurWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mBlurTypeCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mBlurStrengthSpnBx_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mBlurUnitWidget_changed(); break;
        case 3: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mDrawModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mBlendCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsBlurWidget::staticMetaObject = {
    { &QgsPaintEffectWidget::staticMetaObject, qt_meta_stringdata_QgsBlurWidget.data,
      qt_meta_data_QgsBlurWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsBlurWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsBlurWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsBlurWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPaintEffectWidget::qt_metacast(_clname);
}

int QgsBlurWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPaintEffectWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsShadowEffectWidget_t {
    QByteArrayData data[15];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsShadowEffectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsShadowEffectWidget_t qt_meta_stringdata_QgsShadowEffectWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsShadowEffectWidget"
QT_MOC_LITERAL(1, 22, 36), // "mShadowOffsetAngleSpnBx_value..."
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 5), // "value"
QT_MOC_LITERAL(4, 66, 35), // "mShadowOffsetAngleDial_valueC..."
QT_MOC_LITERAL(5, 102, 31), // "mShadowOffsetSpnBx_valueChanged"
QT_MOC_LITERAL(6, 134, 25), // "mOffsetUnitWidget_changed"
QT_MOC_LITERAL(7, 160, 14), // "opacityChanged"
QT_MOC_LITERAL(8, 175, 28), // "mShadowColorBtn_colorChanged"
QT_MOC_LITERAL(9, 204, 5), // "color"
QT_MOC_LITERAL(10, 210, 37), // "mDrawModeComboBox_currentInde..."
QT_MOC_LITERAL(11, 248, 5), // "index"
QT_MOC_LITERAL(12, 254, 37), // "mShadowBlendCmbBx_currentInde..."
QT_MOC_LITERAL(13, 292, 30), // "mShadowRadiuSpnBx_valueChanged"
QT_MOC_LITERAL(14, 323, 23) // "mBlurUnitWidget_changed"

    },
    "QgsShadowEffectWidget\0"
    "mShadowOffsetAngleSpnBx_valueChanged\0"
    "\0value\0mShadowOffsetAngleDial_valueChanged\0"
    "mShadowOffsetSpnBx_valueChanged\0"
    "mOffsetUnitWidget_changed\0opacityChanged\0"
    "mShadowColorBtn_colorChanged\0color\0"
    "mDrawModeComboBox_currentIndexChanged\0"
    "index\0mShadowBlendCmbBx_currentIndexChanged\0"
    "mShadowRadiuSpnBx_valueChanged\0"
    "mBlurUnitWidget_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsShadowEffectWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QColor,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

       0        // eod
};

void QgsShadowEffectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsShadowEffectWidget *_t = static_cast<QgsShadowEffectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mShadowOffsetAngleSpnBx_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mShadowOffsetAngleDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mShadowOffsetSpnBx_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->mOffsetUnitWidget_changed(); break;
        case 4: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mShadowColorBtn_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->mDrawModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mShadowBlendCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mShadowRadiuSpnBx_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->mBlurUnitWidget_changed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsShadowEffectWidget::staticMetaObject = {
    { &QgsPaintEffectWidget::staticMetaObject, qt_meta_stringdata_QgsShadowEffectWidget.data,
      qt_meta_data_QgsShadowEffectWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsShadowEffectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsShadowEffectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsShadowEffectWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPaintEffectWidget::qt_metacast(_clname);
}

int QgsShadowEffectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPaintEffectWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_QgsGlowWidget_t {
    QByteArrayData data[15];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGlowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGlowWidget_t qt_meta_stringdata_QgsGlowWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsGlowWidget"
QT_MOC_LITERAL(1, 14, 16), // "colorModeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "mSpreadSpnBx_valueChanged"
QT_MOC_LITERAL(4, 58, 5), // "value"
QT_MOC_LITERAL(5, 64, 25), // "mSpreadUnitWidget_changed"
QT_MOC_LITERAL(6, 90, 14), // "opacityChanged"
QT_MOC_LITERAL(7, 105, 22), // "mColorBtn_colorChanged"
QT_MOC_LITERAL(8, 128, 5), // "color"
QT_MOC_LITERAL(9, 134, 31), // "mBlendCmbBx_currentIndexChanged"
QT_MOC_LITERAL(10, 166, 5), // "index"
QT_MOC_LITERAL(11, 172, 37), // "mDrawModeComboBox_currentInde..."
QT_MOC_LITERAL(12, 210, 29), // "mBlurRadiusSpnBx_valueChanged"
QT_MOC_LITERAL(13, 240, 23), // "mBlurUnitWidget_changed"
QT_MOC_LITERAL(14, 264, 14) // "applyColorRamp"

    },
    "QgsGlowWidget\0colorModeChanged\0\0"
    "mSpreadSpnBx_valueChanged\0value\0"
    "mSpreadUnitWidget_changed\0opacityChanged\0"
    "mColorBtn_colorChanged\0color\0"
    "mBlendCmbBx_currentIndexChanged\0index\0"
    "mDrawModeComboBox_currentIndexChanged\0"
    "mBlurRadiusSpnBx_valueChanged\0"
    "mBlurUnitWidget_changed\0applyColorRamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGlowWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsGlowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGlowWidget *_t = static_cast<QgsGlowWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorModeChanged(); break;
        case 1: _t->mSpreadSpnBx_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mSpreadUnitWidget_changed(); break;
        case 3: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mColorBtn_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->mBlendCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mDrawModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mBlurRadiusSpnBx_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->mBlurUnitWidget_changed(); break;
        case 9: _t->applyColorRamp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsGlowWidget::staticMetaObject = {
    { &QgsPaintEffectWidget::staticMetaObject, qt_meta_stringdata_QgsGlowWidget.data,
      qt_meta_data_QgsGlowWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsGlowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGlowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGlowWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPaintEffectWidget::qt_metacast(_clname);
}

int QgsGlowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPaintEffectWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_QgsTransformWidget_t {
    QByteArrayData data[16];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTransformWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTransformWidget_t qt_meta_stringdata_QgsTransformWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsTransformWidget"
QT_MOC_LITERAL(1, 19, 37), // "mDrawModeComboBox_currentInde..."
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 5), // "index"
QT_MOC_LITERAL(4, 64, 28), // "mSpinTranslateX_valueChanged"
QT_MOC_LITERAL(5, 93, 5), // "value"
QT_MOC_LITERAL(6, 99, 28), // "mSpinTranslateY_valueChanged"
QT_MOC_LITERAL(7, 128, 28), // "mTranslateUnitWidget_changed"
QT_MOC_LITERAL(8, 157, 30), // "mReflectXCheckBox_stateChanged"
QT_MOC_LITERAL(9, 188, 5), // "state"
QT_MOC_LITERAL(10, 194, 30), // "mReflectYCheckBox_stateChanged"
QT_MOC_LITERAL(11, 225, 24), // "mSpinShearX_valueChanged"
QT_MOC_LITERAL(12, 250, 24), // "mSpinShearY_valueChanged"
QT_MOC_LITERAL(13, 275, 24), // "mSpinScaleX_valueChanged"
QT_MOC_LITERAL(14, 300, 24), // "mSpinScaleY_valueChanged"
QT_MOC_LITERAL(15, 325, 29) // "mRotationSpinBox_valueChanged"

    },
    "QgsTransformWidget\0"
    "mDrawModeComboBox_currentIndexChanged\0"
    "\0index\0mSpinTranslateX_valueChanged\0"
    "value\0mSpinTranslateY_valueChanged\0"
    "mTranslateUnitWidget_changed\0"
    "mReflectXCheckBox_stateChanged\0state\0"
    "mReflectYCheckBox_stateChanged\0"
    "mSpinShearX_valueChanged\0"
    "mSpinShearY_valueChanged\0"
    "mSpinScaleX_valueChanged\0"
    "mSpinScaleY_valueChanged\0"
    "mRotationSpinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTransformWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       6,    1,   75,    2, 0x08 /* Private */,
       7,    0,   78,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      12,    1,   88,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      15,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void QgsTransformWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTransformWidget *_t = static_cast<QgsTransformWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mDrawModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mSpinTranslateX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->mSpinTranslateY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->mTranslateUnitWidget_changed(); break;
        case 4: _t->mReflectXCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mReflectYCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mSpinShearX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->mSpinShearY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->mSpinScaleX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->mSpinScaleY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->mRotationSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsTransformWidget::staticMetaObject = {
    { &QgsPaintEffectWidget::staticMetaObject, qt_meta_stringdata_QgsTransformWidget.data,
      qt_meta_data_QgsTransformWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsTransformWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTransformWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTransformWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPaintEffectWidget::qt_metacast(_clname);
}

int QgsTransformWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPaintEffectWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_QgsColorEffectWidget_t {
    QByteArrayData data[16];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsColorEffectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsColorEffectWidget_t qt_meta_stringdata_QgsColorEffectWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsColorEffectWidget"
QT_MOC_LITERAL(1, 21, 14), // "opacityChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 31), // "mBlendCmbBx_currentIndexChanged"
QT_MOC_LITERAL(5, 75, 5), // "index"
QT_MOC_LITERAL(6, 81, 37), // "mDrawModeComboBox_currentInde..."
QT_MOC_LITERAL(7, 119, 31), // "mBrightnessSpinBox_valueChanged"
QT_MOC_LITERAL(8, 151, 29), // "mContrastSpinBox_valueChanged"
QT_MOC_LITERAL(9, 181, 31), // "mSaturationSpinBox_valueChanged"
QT_MOC_LITERAL(10, 213, 37), // "mColorizeStrengthSpinBox_valu..."
QT_MOC_LITERAL(11, 251, 27), // "mColorizeCheck_stateChanged"
QT_MOC_LITERAL(12, 279, 5), // "state"
QT_MOC_LITERAL(13, 285, 33), // "mColorizeColorButton_colorCha..."
QT_MOC_LITERAL(14, 319, 5), // "color"
QT_MOC_LITERAL(15, 325, 35) // "mGrayscaleCombo_currentIndexC..."

    },
    "QgsColorEffectWidget\0opacityChanged\0"
    "\0value\0mBlendCmbBx_currentIndexChanged\0"
    "index\0mDrawModeComboBox_currentIndexChanged\0"
    "mBrightnessSpinBox_valueChanged\0"
    "mContrastSpinBox_valueChanged\0"
    "mSaturationSpinBox_valueChanged\0"
    "mColorizeStrengthSpinBox_valueChanged\0"
    "mColorizeCheck_stateChanged\0state\0"
    "mColorizeColorButton_colorChanged\0"
    "color\0mGrayscaleCombo_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsColorEffectWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       6,    1,   70,    2, 0x08 /* Private */,
       7,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      13,    1,   88,    2, 0x08 /* Private */,
      15,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QColor,   14,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void QgsColorEffectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsColorEffectWidget *_t = static_cast<QgsColorEffectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->mBlendCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mDrawModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mBrightnessSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mContrastSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mSaturationSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->mColorizeStrengthSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mColorizeCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mColorizeColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->mGrayscaleCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsColorEffectWidget::staticMetaObject = {
    { &QgsPaintEffectWidget::staticMetaObject, qt_meta_stringdata_QgsColorEffectWidget.data,
      qt_meta_data_QgsColorEffectWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsColorEffectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsColorEffectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsColorEffectWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsPaintEffectWidget::qt_metacast(_clname);
}

int QgsColorEffectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsPaintEffectWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
