/****************************************************************************
** Meta object code from reading C++ file 'qgsdualview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/attributetable/qgsdualview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdualview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsDualView_t {
    QByteArrayData data[80];
    char stringdata0[1213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDualView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDualView_t qt_meta_stringdata_QgsDualView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsDualView"
QT_MOC_LITERAL(1, 12, 24), // "displayExpressionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "expression"
QT_MOC_LITERAL(4, 49, 13), // "filterChanged"
QT_MOC_LITERAL(5, 63, 19), // "filterExpressionSet"
QT_MOC_LITERAL(6, 83, 28), // "QgsAttributeForm::FilterType"
QT_MOC_LITERAL(7, 112, 4), // "type"
QT_MOC_LITERAL(8, 117, 15), // "formModeChanged"
QT_MOC_LITERAL(9, 133, 31), // "QgsAttributeEditorContext::Mode"
QT_MOC_LITERAL(10, 165, 4), // "mode"
QT_MOC_LITERAL(11, 170, 25), // "showContextMenuExternally"
QT_MOC_LITERAL(12, 196, 14), // "QgsActionMenu*"
QT_MOC_LITERAL(13, 211, 4), // "menu"
QT_MOC_LITERAL(14, 216, 12), // "QgsFeatureId"
QT_MOC_LITERAL(15, 229, 3), // "fid"
QT_MOC_LITERAL(16, 233, 23), // "setCurrentEditSelection"
QT_MOC_LITERAL(17, 257, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(18, 271, 4), // "fids"
QT_MOC_LITERAL(19, 276, 15), // "saveEditChanges"
QT_MOC_LITERAL(20, 292, 21), // "openConditionalStyles"
QT_MOC_LITERAL(21, 314, 19), // "setMultiEditEnabled"
QT_MOC_LITERAL(22, 334, 7), // "enabled"
QT_MOC_LITERAL(23, 342, 16), // "toggleSearchMode"
QT_MOC_LITERAL(24, 359, 15), // "copyCellContent"
QT_MOC_LITERAL(25, 375, 14), // "cancelProgress"
QT_MOC_LITERAL(26, 390, 22), // "parentFormValueChanged"
QT_MOC_LITERAL(27, 413, 9), // "attribute"
QT_MOC_LITERAL(28, 423, 5), // "value"
QT_MOC_LITERAL(29, 429, 37), // "featureListAboutToChangeEditS..."
QT_MOC_LITERAL(30, 467, 5), // "bool&"
QT_MOC_LITERAL(31, 473, 2), // "ok"
QT_MOC_LITERAL(32, 476, 38), // "featureListCurrentEditSelecti..."
QT_MOC_LITERAL(33, 515, 10), // "QgsFeature"
QT_MOC_LITERAL(34, 526, 4), // "feat"
QT_MOC_LITERAL(35, 531, 24), // "previewExpressionBuilder"
QT_MOC_LITERAL(36, 556, 20), // "previewColumnChanged"
QT_MOC_LITERAL(37, 577, 8), // "QAction*"
QT_MOC_LITERAL(38, 586, 13), // "previewAction"
QT_MOC_LITERAL(39, 600, 23), // "viewWillShowContextMenu"
QT_MOC_LITERAL(40, 624, 6), // "QMenu*"
QT_MOC_LITERAL(41, 631, 11), // "QModelIndex"
QT_MOC_LITERAL(42, 643, 7), // "atIndex"
QT_MOC_LITERAL(43, 651, 25), // "widgetWillShowContextMenu"
QT_MOC_LITERAL(44, 677, 18), // "showViewHeaderMenu"
QT_MOC_LITERAL(45, 696, 5), // "point"
QT_MOC_LITERAL(46, 702, 15), // "organizeColumns"
QT_MOC_LITERAL(47, 718, 18), // "tableColumnResized"
QT_MOC_LITERAL(48, 737, 6), // "column"
QT_MOC_LITERAL(49, 744, 5), // "width"
QT_MOC_LITERAL(50, 750, 10), // "hideColumn"
QT_MOC_LITERAL(51, 761, 12), // "resizeColumn"
QT_MOC_LITERAL(52, 774, 14), // "autosizeColumn"
QT_MOC_LITERAL(53, 789, 24), // "previewExpressionChanged"
QT_MOC_LITERAL(54, 814, 19), // "onSortColumnChanged"
QT_MOC_LITERAL(55, 834, 22), // "updateSelectedFeatures"
QT_MOC_LITERAL(56, 857, 13), // "extentChanged"
QT_MOC_LITERAL(57, 871, 27), // "featureFormAttributeChanged"
QT_MOC_LITERAL(58, 899, 16), // "attributeChanged"
QT_MOC_LITERAL(59, 916, 8), // "progress"
QT_MOC_LITERAL(60, 925, 1), // "i"
QT_MOC_LITERAL(61, 927, 6), // "cancel"
QT_MOC_LITERAL(62, 934, 8), // "finished"
QT_MOC_LITERAL(63, 943, 20), // "zoomToCurrentFeature"
QT_MOC_LITERAL(64, 964, 19), // "panToCurrentFeature"
QT_MOC_LITERAL(65, 984, 19), // "flashCurrentFeature"
QT_MOC_LITERAL(66, 1004, 21), // "rebuildFullLayerCache"
QT_MOC_LITERAL(67, 1026, 25), // "panZoomGroupButtonToggled"
QT_MOC_LITERAL(68, 1052, 16), // "QAbstractButton*"
QT_MOC_LITERAL(69, 1069, 6), // "button"
QT_MOC_LITERAL(70, 1076, 7), // "checked"
QT_MOC_LITERAL(71, 1084, 18), // "flashButtonClicked"
QT_MOC_LITERAL(72, 1103, 7), // "clicked"
QT_MOC_LITERAL(73, 1111, 8), // "ViewMode"
QT_MOC_LITERAL(74, 1120, 14), // "AttributeTable"
QT_MOC_LITERAL(75, 1135, 15), // "AttributeEditor"
QT_MOC_LITERAL(76, 1151, 25), // "FeatureListBrowsingAction"
QT_MOC_LITERAL(77, 1177, 8), // "NoAction"
QT_MOC_LITERAL(78, 1186, 12), // "PanToFeature"
QT_MOC_LITERAL(79, 1199, 13) // "ZoomToFeature"

    },
    "QgsDualView\0displayExpressionChanged\0"
    "\0expression\0filterChanged\0filterExpressionSet\0"
    "QgsAttributeForm::FilterType\0type\0"
    "formModeChanged\0QgsAttributeEditorContext::Mode\0"
    "mode\0showContextMenuExternally\0"
    "QgsActionMenu*\0menu\0QgsFeatureId\0fid\0"
    "setCurrentEditSelection\0QgsFeatureIds\0"
    "fids\0saveEditChanges\0openConditionalStyles\0"
    "setMultiEditEnabled\0enabled\0"
    "toggleSearchMode\0copyCellContent\0"
    "cancelProgress\0parentFormValueChanged\0"
    "attribute\0value\0featureListAboutToChangeEditSelection\0"
    "bool&\0ok\0featureListCurrentEditSelectionChanged\0"
    "QgsFeature\0feat\0previewExpressionBuilder\0"
    "previewColumnChanged\0QAction*\0"
    "previewAction\0viewWillShowContextMenu\0"
    "QMenu*\0QModelIndex\0atIndex\0"
    "widgetWillShowContextMenu\0showViewHeaderMenu\0"
    "point\0organizeColumns\0tableColumnResized\0"
    "column\0width\0hideColumn\0resizeColumn\0"
    "autosizeColumn\0previewExpressionChanged\0"
    "onSortColumnChanged\0updateSelectedFeatures\0"
    "extentChanged\0featureFormAttributeChanged\0"
    "attributeChanged\0progress\0i\0cancel\0"
    "finished\0zoomToCurrentFeature\0"
    "panToCurrentFeature\0flashCurrentFeature\0"
    "rebuildFullLayerCache\0panZoomGroupButtonToggled\0"
    "QAbstractButton*\0button\0checked\0"
    "flashButtonClicked\0clicked\0ViewMode\0"
    "AttributeTable\0AttributeEditor\0"
    "FeatureListBrowsingAction\0NoAction\0"
    "PanToFeature\0ZoomToFeature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDualView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       2,  304, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  204,    2, 0x06 /* Public */,
       4,    0,  207,    2, 0x06 /* Public */,
       5,    2,  208,    2, 0x06 /* Public */,
       8,    1,  213,    2, 0x06 /* Public */,
      11,    2,  216,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  221,    2, 0x0a /* Public */,
      19,    0,  224,    2, 0x0a /* Public */,
      20,    0,  225,    2, 0x0a /* Public */,
      21,    1,  226,    2, 0x0a /* Public */,
      23,    1,  229,    2, 0x0a /* Public */,
      24,    0,  232,    2, 0x0a /* Public */,
      25,    0,  233,    2, 0x0a /* Public */,
      26,    2,  234,    2, 0x0a /* Public */,
      29,    1,  239,    2, 0x08 /* Private */,
      32,    1,  242,    2, 0x08 /* Private */,
      35,    0,  245,    2, 0x08 /* Private */,
      36,    2,  246,    2, 0x08 /* Private */,
      39,    2,  251,    2, 0x08 /* Private */,
      43,    2,  256,    2, 0x08 /* Private */,
      44,    1,  261,    2, 0x08 /* Private */,
      46,    0,  264,    2, 0x08 /* Private */,
      47,    2,  265,    2, 0x08 /* Private */,
      50,    0,  270,    2, 0x08 /* Private */,
      51,    0,  271,    2, 0x08 /* Private */,
      52,    0,  272,    2, 0x08 /* Private */,
      53,    1,  273,    2, 0x08 /* Private */,
      54,    0,  276,    2, 0x08 /* Private */,
      55,    0,  277,    2, 0x08 /* Private */,
      56,    0,  278,    2, 0x08 /* Private */,
      57,    3,  279,    2, 0x08 /* Private */,
      59,    2,  286,    2, 0x08 /* Private */,
      62,    0,  291,    2, 0x08 /* Private */,
      63,    0,  292,    2, 0x08 /* Private */,
      64,    0,  293,    2, 0x08 /* Private */,
      65,    0,  294,    2, 0x08 /* Private */,
      66,    0,  295,    2, 0x08 /* Private */,
      67,    2,  296,    2, 0x08 /* Private */,
      71,    1,  301,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   27,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37, QMetaType::QString,   38,    3,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 41,   13,   42,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 41,   13,   42,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,   27,   28,   58,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 30,   60,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 68, QMetaType::Bool,   69,   70,
    QMetaType::Void, QMetaType::Bool,   72,

 // enums: name, flags, count, data
      73, 0x0,    2,  312,
      76, 0x0,    3,  316,

 // enum data: key, value
      74, uint(QgsDualView::AttributeTable),
      75, uint(QgsDualView::AttributeEditor),
      77, uint(QgsDualView::NoAction),
      78, uint(QgsDualView::PanToFeature),
      79, uint(QgsDualView::ZoomToFeature),

       0        // eod
};

void QgsDualView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDualView *_t = static_cast<QgsDualView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayExpressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->filterChanged(); break;
        case 2: _t->filterExpressionSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsAttributeForm::FilterType(*)>(_a[2]))); break;
        case 3: _t->formModeChanged((*reinterpret_cast< QgsAttributeEditorContext::Mode(*)>(_a[1]))); break;
        case 4: _t->showContextMenuExternally((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< QgsFeatureId(*)>(_a[2]))); break;
        case 5: _t->setCurrentEditSelection((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 6: { bool _r = _t->saveEditChanges();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->openConditionalStyles(); break;
        case 8: _t->setMultiEditEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleSearchMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->copyCellContent(); break;
        case 11: _t->cancelProgress(); break;
        case 12: _t->parentFormValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 13: _t->featureListAboutToChangeEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->featureListCurrentEditSelectionChanged((*reinterpret_cast< const QgsFeature(*)>(_a[1]))); break;
        case 15: _t->previewExpressionBuilder(); break;
        case 16: _t->previewColumnChanged((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->viewWillShowContextMenu((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 18: _t->widgetWillShowContextMenu((*reinterpret_cast< QgsActionMenu*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 19: _t->showViewHeaderMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 20: _t->organizeColumns(); break;
        case 21: _t->tableColumnResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->hideColumn(); break;
        case 23: _t->resizeColumn(); break;
        case 24: _t->autosizeColumn(); break;
        case 25: _t->previewExpressionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->onSortColumnChanged(); break;
        case 27: _t->updateSelectedFeatures(); break;
        case 28: _t->extentChanged(); break;
        case 29: _t->featureFormAttributeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->finished(); break;
        case 32: _t->zoomToCurrentFeature(); break;
        case 33: _t->panToCurrentFeature(); break;
        case 34: _t->flashCurrentFeature(); break;
        case 35: _t->rebuildFullLayerCache(); break;
        case 36: _t->panZoomGroupButtonToggled((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->flashButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsActionMenu* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeature >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndex >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndex >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsActionMenu* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QgsDualView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::displayExpressionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QgsDualView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::filterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QgsDualView::*)(const QString & , QgsAttributeForm::FilterType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::filterExpressionSet)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QgsDualView::*)(QgsAttributeEditorContext::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::formModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QgsDualView::*)(QgsActionMenu * , QgsFeatureId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QgsDualView::showContextMenuExternally)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsDualView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_QgsDualView.data,
      qt_meta_data_QgsDualView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsDualView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDualView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDualView.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int QgsDualView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void QgsDualView::displayExpressionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsDualView::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QgsDualView::filterExpressionSet(const QString & _t1, QgsAttributeForm::FilterType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsDualView::formModeChanged(QgsAttributeEditorContext::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsDualView::showContextMenuExternally(QgsActionMenu * _t1, QgsFeatureId _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QgsAttributeTableAction_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableAction_t qt_meta_stringdata_QgsAttributeTableAction = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsAttributeTableAction"
QT_MOC_LITERAL(1, 24, 7), // "execute"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11) // "featureForm"

    },
    "QgsAttributeTableAction\0execute\0\0"
    "featureForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsAttributeTableAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableAction *_t = static_cast<QgsAttributeTableAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        case 1: _t->featureForm(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeTableAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QgsAttributeTableAction.data,
      qt_meta_data_QgsAttributeTableAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QgsAttributeTableAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_QgsAttributeTableMapLayerAction_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAttributeTableMapLayerAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAttributeTableMapLayerAction_t qt_meta_stringdata_QgsAttributeTableMapLayerAction = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsAttributeTableMapLayerAction"
QT_MOC_LITERAL(1, 32, 7), // "execute"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsAttributeTableMapLayerAction\0execute\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAttributeTableMapLayerAction[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsAttributeTableMapLayerAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAttributeTableMapLayerAction *_t = static_cast<QgsAttributeTableMapLayerAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->execute(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsAttributeTableMapLayerAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_QgsAttributeTableMapLayerAction.data,
      qt_meta_data_QgsAttributeTableMapLayerAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsAttributeTableMapLayerAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAttributeTableMapLayerAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAttributeTableMapLayerAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int QgsAttributeTableMapLayerAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
