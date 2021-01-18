/****************************************************************************
** Meta object code from reading C++ file 'qgsprojectionselectiontreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsprojectionselectiontreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprojectionselectiontreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsProjectionSelectionTreeWidget_t {
    QByteArrayData data[27];
    char stringdata0[450];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProjectionSelectionTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProjectionSelectionTreeWidget_t qt_meta_stringdata_QgsProjectionSelectionTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QgsProjectionSelectionTreeWidget"
QT_MOC_LITERAL(1, 33, 11), // "crsSelected"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 11), // "initialized"
QT_MOC_LITERAL(4, 58, 23), // "projectionDoubleClicked"
QT_MOC_LITERAL(5, 82, 6), // "setCrs"
QT_MOC_LITERAL(6, 89, 28), // "QgsCoordinateReferenceSystem"
QT_MOC_LITERAL(7, 118, 3), // "crs"
QT_MOC_LITERAL(8, 122, 14), // "setPreviewRect"
QT_MOC_LITERAL(9, 137, 12), // "QgsRectangle"
QT_MOC_LITERAL(10, 150, 4), // "rect"
QT_MOC_LITERAL(11, 155, 11), // "previewRect"
QT_MOC_LITERAL(12, 167, 18), // "setOgcWmsCrsFilter"
QT_MOC_LITERAL(13, 186, 13), // "QSet<QString>"
QT_MOC_LITERAL(14, 200, 9), // "crsFilter"
QT_MOC_LITERAL(15, 210, 21), // "pushProjectionToFront"
QT_MOC_LITERAL(16, 232, 19), // "updateBoundsPreview"
QT_MOC_LITERAL(17, 252, 11), // "authorities"
QT_MOC_LITERAL(18, 264, 38), // "lstCoordinateSystems_itemDoub..."
QT_MOC_LITERAL(19, 303, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(20, 320, 7), // "current"
QT_MOC_LITERAL(21, 328, 6), // "column"
QT_MOC_LITERAL(22, 335, 27), // "lstRecent_itemDoubleClicked"
QT_MOC_LITERAL(23, 363, 39), // "lstCoordinateSystems_currentI..."
QT_MOC_LITERAL(24, 403, 4), // "prev"
QT_MOC_LITERAL(25, 408, 28), // "lstRecent_currentItemChanged"
QT_MOC_LITERAL(26, 437, 12) // "updateFilter"

    },
    "QgsProjectionSelectionTreeWidget\0"
    "crsSelected\0\0initialized\0"
    "projectionDoubleClicked\0setCrs\0"
    "QgsCoordinateReferenceSystem\0crs\0"
    "setPreviewRect\0QgsRectangle\0rect\0"
    "previewRect\0setOgcWmsCrsFilter\0"
    "QSet<QString>\0crsFilter\0pushProjectionToFront\0"
    "updateBoundsPreview\0authorities\0"
    "lstCoordinateSystems_itemDoubleClicked\0"
    "QTreeWidgetItem*\0current\0column\0"
    "lstRecent_itemDoubleClicked\0"
    "lstCoordinateSystems_currentItemChanged\0"
    "prev\0lstRecent_currentItemChanged\0"
    "updateFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProjectionSelectionTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   92,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    2,  105,    2, 0x08 /* Private */,
      22,    2,  110,    2, 0x08 /* Private */,
      23,    2,  115,    2, 0x08 /* Private */,
      25,    2,  120,    2, 0x08 /* Private */,
      26,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 9,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   20,   21,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   20,   21,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   20,   24,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   20,   24,
    QMetaType::Void,

       0        // eod
};

void QgsProjectionSelectionTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProjectionSelectionTreeWidget *_t = static_cast<QgsProjectionSelectionTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->crsSelected(); break;
        case 1: _t->initialized(); break;
        case 2: _t->projectionDoubleClicked(); break;
        case 3: _t->setCrs((*reinterpret_cast< const QgsCoordinateReferenceSystem(*)>(_a[1]))); break;
        case 4: _t->setPreviewRect((*reinterpret_cast< const QgsRectangle(*)>(_a[1]))); break;
        case 5: { QgsRectangle _r = _t->previewRect();
            if (_a[0]) *reinterpret_cast< QgsRectangle*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setOgcWmsCrsFilter((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 7: _t->pushProjectionToFront(); break;
        case 8: _t->updateBoundsPreview(); break;
        case 9: { QStringList _r = _t->authorities();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->lstCoordinateSystems_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->lstRecent_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->lstCoordinateSystems_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 13: _t->lstRecent_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 14: _t->updateFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCoordinateReferenceSystem >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsRectangle >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsProjectionSelectionTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProjectionSelectionTreeWidget::crsSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsProjectionSelectionTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProjectionSelectionTreeWidget::initialized)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsProjectionSelectionTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsProjectionSelectionTreeWidget::projectionDoubleClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsProjectionSelectionTreeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProjectionSelectionTreeWidget.data,
      qt_meta_data_QgsProjectionSelectionTreeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsProjectionSelectionTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProjectionSelectionTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectionSelectionTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QgsProjectionSelectionTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QgsProjectionSelectionTreeWidget::crsSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QgsProjectionSelectionTreeWidget::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsProjectionSelectionTreeWidget::projectionDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
