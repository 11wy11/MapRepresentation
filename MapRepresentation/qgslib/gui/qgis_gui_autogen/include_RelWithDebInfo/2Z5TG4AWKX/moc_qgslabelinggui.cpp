/****************************************************************************
** Meta object code from reading C++ file 'qgslabelinggui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/labeling/qgslabelinggui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslabelinggui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLabelingGui_t {
    QByteArrayData data[19];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLabelingGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLabelingGui_t qt_meta_stringdata_QgsLabelingGui = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsLabelingGui"
QT_MOC_LITERAL(1, 15, 8), // "updateUi"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "setFormatFromStyle"
QT_MOC_LITERAL(4, 44, 4), // "name"
QT_MOC_LITERAL(5, 49, 21), // "QgsStyle::StyleEntity"
QT_MOC_LITERAL(6, 71, 4), // "type"
QT_MOC_LITERAL(7, 76, 10), // "saveFormat"
QT_MOC_LITERAL(8, 87, 30), // "updateGeometryTypeBasedWidgets"
QT_MOC_LITERAL(9, 118, 38), // "showGeometryGeneratorExpressi..."
QT_MOC_LITERAL(10, 157, 35), // "validateGeometryGeneratorExpr..."
QT_MOC_LITERAL(11, 193, 30), // "determineGeometryGeneratorType"
QT_MOC_LITERAL(12, 224, 18), // "calloutTypeChanged"
QT_MOC_LITERAL(13, 243, 18), // "initCalloutWidgets"
QT_MOC_LITERAL(14, 262, 19), // "updateCalloutWidget"
QT_MOC_LITERAL(15, 282, 11), // "QgsCallout*"
QT_MOC_LITERAL(16, 294, 7), // "callout"
QT_MOC_LITERAL(17, 302, 20), // "showObstacleSettings"
QT_MOC_LITERAL(18, 323, 22) // "showLineAnchorSettings"

    },
    "QgsLabelingGui\0updateUi\0\0setFormatFromStyle\0"
    "name\0QgsStyle::StyleEntity\0type\0"
    "saveFormat\0updateGeometryTypeBasedWidgets\0"
    "showGeometryGeneratorExpressionBuilder\0"
    "validateGeometryGeneratorExpression\0"
    "determineGeometryGeneratorType\0"
    "calloutTypeChanged\0initCalloutWidgets\0"
    "updateCalloutWidget\0QgsCallout*\0callout\0"
    "showObstacleSettings\0showLineAnchorSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLabelingGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    2,   75,    2, 0x09 /* Protected */,
       7,    0,   80,    2, 0x09 /* Protected */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,
      17,    0,   90,    2, 0x08 /* Private */,
      18,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLabelingGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLabelingGui *_t = static_cast<QgsLabelingGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUi(); break;
        case 1: _t->setFormatFromStyle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsStyle::StyleEntity(*)>(_a[2]))); break;
        case 2: _t->saveFormat(); break;
        case 3: _t->updateGeometryTypeBasedWidgets(); break;
        case 4: _t->showGeometryGeneratorExpressionBuilder(); break;
        case 5: _t->validateGeometryGeneratorExpression(); break;
        case 6: _t->determineGeometryGeneratorType(); break;
        case 7: _t->calloutTypeChanged(); break;
        case 8: _t->initCalloutWidgets(); break;
        case 9: _t->updateCalloutWidget((*reinterpret_cast< QgsCallout*(*)>(_a[1]))); break;
        case 10: _t->showObstacleSettings(); break;
        case 11: _t->showLineAnchorSettings(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLabelingGui::staticMetaObject = {
    { &QgsTextFormatWidget::staticMetaObject, qt_meta_stringdata_QgsLabelingGui.data,
      qt_meta_data_QgsLabelingGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLabelingGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLabelingGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLabelingGui.stringdata0))
        return static_cast<void*>(this);
    return QgsTextFormatWidget::qt_metacast(_clname);
}

int QgsLabelingGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsTextFormatWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_QgsLabelSettingsDialog_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLabelSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLabelSettingsDialog_t qt_meta_stringdata_QgsLabelSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsLabelSettingsDialog"
QT_MOC_LITERAL(1, 23, 8), // "showHelp"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "QgsLabelSettingsDialog\0showHelp\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLabelSettingsDialog[] = {

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

void QgsLabelSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLabelSettingsDialog *_t = static_cast<QgsLabelSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLabelSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsLabelSettingsDialog.data,
      qt_meta_data_QgsLabelSettingsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLabelSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLabelSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLabelSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QgsLabelSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
