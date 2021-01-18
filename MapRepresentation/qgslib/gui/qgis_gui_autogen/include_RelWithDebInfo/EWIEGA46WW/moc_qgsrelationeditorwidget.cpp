/****************************************************************************
** Meta object code from reading C++ file 'qgsrelationeditorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/qgsrelationeditorwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelationeditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsFilteredSelectionManager_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFilteredSelectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFilteredSelectionManager_t qt_meta_stringdata_QgsFilteredSelectionManager = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsFilteredSelectionManager"
QT_MOC_LITERAL(1, 28, 18), // "onSelectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(4, 62, 8), // "selected"
QT_MOC_LITERAL(5, 71, 10), // "deselected"
QT_MOC_LITERAL(6, 82, 14) // "clearAndSelect"

    },
    "QgsFilteredSelectionManager\0"
    "onSelectionChanged\0\0QgsFeatureIds\0"
    "selected\0deselected\0clearAndSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFilteredSelectionManager[] = {

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
       1,    3,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    4,    5,    6,

       0        // eod
};

void QgsFilteredSelectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsFilteredSelectionManager *_t = static_cast<QgsFilteredSelectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSelectionChanged((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsFilteredSelectionManager::staticMetaObject = {
    { &QgsVectorLayerSelectionManager::staticMetaObject, qt_meta_stringdata_QgsFilteredSelectionManager.data,
      qt_meta_data_QgsFilteredSelectionManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsFilteredSelectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFilteredSelectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFilteredSelectionManager.stringdata0))
        return static_cast<void*>(this);
    return QgsVectorLayerSelectionManager::qt_metacast(_clname);
}

int QgsFilteredSelectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsVectorLayerSelectionManager::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsRelationEditorWidget_t {
    QByteArrayData data[43];
    char stringdata0[605];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelationEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelationEditorWidget_t qt_meta_stringdata_QgsRelationEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsRelationEditorWidget"
QT_MOC_LITERAL(1, 24, 22), // "parentFormValueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 9), // "attribute"
QT_MOC_LITERAL(4, 58, 8), // "newValue"
QT_MOC_LITERAL(5, 67, 11), // "setViewMode"
QT_MOC_LITERAL(6, 79, 4), // "mode"
QT_MOC_LITERAL(7, 84, 13), // "updateButtons"
QT_MOC_LITERAL(8, 98, 10), // "addFeature"
QT_MOC_LITERAL(9, 109, 11), // "QgsGeometry"
QT_MOC_LITERAL(10, 121, 8), // "geometry"
QT_MOC_LITERAL(11, 130, 18), // "addFeatureGeometry"
QT_MOC_LITERAL(12, 149, 16), // "duplicateFeature"
QT_MOC_LITERAL(13, 166, 11), // "linkFeature"
QT_MOC_LITERAL(14, 178, 13), // "deleteFeature"
QT_MOC_LITERAL(15, 192, 12), // "QgsFeatureId"
QT_MOC_LITERAL(16, 205, 9), // "featureid"
QT_MOC_LITERAL(17, 215, 22), // "deleteSelectedFeatures"
QT_MOC_LITERAL(18, 238, 13), // "unlinkFeature"
QT_MOC_LITERAL(19, 252, 22), // "unlinkSelectedFeatures"
QT_MOC_LITERAL(20, 275, 22), // "zoomToSelectedFeatures"
QT_MOC_LITERAL(21, 298, 9), // "saveEdits"
QT_MOC_LITERAL(22, 308, 13), // "toggleEditing"
QT_MOC_LITERAL(23, 322, 5), // "state"
QT_MOC_LITERAL(24, 328, 23), // "onCollapsedStateChanged"
QT_MOC_LITERAL(25, 352, 9), // "collapsed"
QT_MOC_LITERAL(26, 362, 15), // "showContextMenu"
QT_MOC_LITERAL(27, 378, 14), // "QgsActionMenu*"
QT_MOC_LITERAL(28, 393, 4), // "menu"
QT_MOC_LITERAL(29, 398, 3), // "fid"
QT_MOC_LITERAL(30, 402, 18), // "mapToolDeactivated"
QT_MOC_LITERAL(31, 421, 12), // "onKeyPressed"
QT_MOC_LITERAL(32, 434, 10), // "QKeyEvent*"
QT_MOC_LITERAL(33, 445, 1), // "e"
QT_MOC_LITERAL(34, 447, 21), // "onDigitizingCompleted"
QT_MOC_LITERAL(35, 469, 10), // "QgsFeature"
QT_MOC_LITERAL(36, 480, 7), // "feature"
QT_MOC_LITERAL(37, 488, 24), // "onLinkFeatureDlgAccepted"
QT_MOC_LITERAL(38, 513, 8), // "viewMode"
QT_MOC_LITERAL(39, 522, 21), // "QgsDualView::ViewMode"
QT_MOC_LITERAL(40, 544, 9), // "showLabel"
QT_MOC_LITERAL(41, 554, 14), // "visibleButtons"
QT_MOC_LITERAL(42, 569, 35) // "QgsAttributeEditorRelation::B..."

    },
    "QgsRelationEditorWidget\0parentFormValueChanged\0"
    "\0attribute\0newValue\0setViewMode\0mode\0"
    "updateButtons\0addFeature\0QgsGeometry\0"
    "geometry\0addFeatureGeometry\0"
    "duplicateFeature\0linkFeature\0deleteFeature\0"
    "QgsFeatureId\0featureid\0deleteSelectedFeatures\0"
    "unlinkFeature\0unlinkSelectedFeatures\0"
    "zoomToSelectedFeatures\0saveEdits\0"
    "toggleEditing\0state\0onCollapsedStateChanged\0"
    "collapsed\0showContextMenu\0QgsActionMenu*\0"
    "menu\0fid\0mapToolDeactivated\0onKeyPressed\0"
    "QKeyEvent*\0e\0onDigitizingCompleted\0"
    "QgsFeature\0feature\0onLinkFeatureDlgAccepted\0"
    "viewMode\0QgsDualView::ViewMode\0showLabel\0"
    "visibleButtons\0QgsAttributeEditorRelation::Buttons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelationEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       3,  176, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  129,    2, 0x0a /* Public */,
       5,    1,  134,    2, 0x08 /* Private */,
       7,    0,  137,    2, 0x08 /* Private */,
       8,    1,  138,    2, 0x08 /* Private */,
       8,    0,  141,    2, 0x28 /* Private | MethodCloned */,
      11,    0,  142,    2, 0x08 /* Private */,
      12,    0,  143,    2, 0x08 /* Private */,
      13,    0,  144,    2, 0x08 /* Private */,
      14,    1,  145,    2, 0x08 /* Private */,
      14,    0,  148,    2, 0x28 /* Private | MethodCloned */,
      17,    0,  149,    2, 0x08 /* Private */,
      18,    1,  150,    2, 0x08 /* Private */,
      18,    0,  153,    2, 0x28 /* Private | MethodCloned */,
      19,    0,  154,    2, 0x08 /* Private */,
      20,    0,  155,    2, 0x08 /* Private */,
      21,    0,  156,    2, 0x08 /* Private */,
      22,    1,  157,    2, 0x08 /* Private */,
      24,    1,  160,    2, 0x08 /* Private */,
      26,    2,  163,    2, 0x08 /* Private */,
      30,    0,  168,    2, 0x08 /* Private */,
      31,    1,  169,    2, 0x08 /* Private */,
      34,    1,  172,    2, 0x08 /* Private */,
      37,    0,  175,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 15,   28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void,

 // properties: name, type, flags
      38, 0x80000000 | 39, 0x0009510b,
      40, QMetaType::Bool, 0x00095103,
      41, 0x80000000 | 42, 0x0009510b,

       0        // eod
};

void QgsRelationEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelationEditorWidget *_t = static_cast<QgsRelationEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parentFormValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->setViewMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateButtons(); break;
        case 3: _t->addFeature((*reinterpret_cast< const QgsGeometry(*)>(_a[1]))); break;
        case 4: _t->addFeature(); break;
        case 5: _t->addFeatureGeometry(); break;
        case 6: _t->duplicateFeature(); break;
        case 7: _t->linkFeature(); break;
        case 8: _t->deleteFeature((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 9: _t->deleteFeature(); break;
        case 10: _t->deleteSelectedFeatures(); break;
        case 11: _t->unlinkFeature((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 12: _t->unlinkFeature(); break;
        case 13: _t->unlinkSelectedFeatures(); break;
        case 14: _t->zoomToSelectedFeatures(); break;
        case 15: _t->saveEdits(); break;
        case 16: _t->toggleEditing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onCollapsedStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->showContextMenu((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 19: _t->mapToolDeactivated(); break;
        case 20: _t->onKeyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 21: _t->onDigitizingCompleted((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 22: _t->onLinkFeatureDlgAccepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsGeometry >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsActionMenu* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeature >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QgsRelationEditorWidget *_t = static_cast<QgsRelationEditorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QgsDualView::ViewMode*>(_v) = _t->viewMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showLabel(); break;
        case 2: *reinterpret_cast< QgsAttributeEditorRelation::Buttons*>(_v) = _t->visibleButtons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QgsRelationEditorWidget *_t = static_cast<QgsRelationEditorWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewMode(*reinterpret_cast< QgsDualView::ViewMode*>(_v)); break;
        case 1: _t->setShowLabel(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setVisibleButtons(*reinterpret_cast< QgsAttributeEditorRelation::Buttons*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QgsRelationEditorWidget[] = {
        &QgsDualView::staticMetaObject,
    &QgsAttributeEditorRelation::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QgsRelationEditorWidget::staticMetaObject = {
    { &QgsCollapsibleGroupBox::staticMetaObject, qt_meta_stringdata_QgsRelationEditorWidget.data,
      qt_meta_data_QgsRelationEditorWidget,  qt_static_metacall, qt_meta_extradata_QgsRelationEditorWidget, nullptr}
};


const QMetaObject *QgsRelationEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRelationEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRelationEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsCollapsibleGroupBox::qt_metacast(_clname);
}

int QgsRelationEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCollapsibleGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
