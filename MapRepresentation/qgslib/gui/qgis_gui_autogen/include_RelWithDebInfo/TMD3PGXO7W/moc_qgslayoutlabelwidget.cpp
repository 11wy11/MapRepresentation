/****************************************************************************
** Meta object code from reading C++ file 'qgslayoutlabelwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/layout/qgslayoutlabelwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayoutlabelwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLayoutLabelWidget_t {
    QByteArrayData data[20];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayoutLabelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayoutLabelWidget_t qt_meta_stringdata_QgsLayoutLabelWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsLayoutLabelWidget"
QT_MOC_LITERAL(1, 21, 26), // "mHtmlCheckBox_stateChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 1), // "i"
QT_MOC_LITERAL(4, 51, 21), // "mTextEdit_textChanged"
QT_MOC_LITERAL(5, 73, 31), // "mInsertExpressionButton_clicked"
QT_MOC_LITERAL(6, 105, 34), // "mMarginXDoubleSpinBox_valueCh..."
QT_MOC_LITERAL(7, 140, 1), // "d"
QT_MOC_LITERAL(8, 142, 34), // "mMarginYDoubleSpinBox_valueCh..."
QT_MOC_LITERAL(9, 177, 29), // "mFontColorButton_colorChanged"
QT_MOC_LITERAL(10, 207, 13), // "newLabelColor"
QT_MOC_LITERAL(11, 221, 26), // "mCenterRadioButton_clicked"
QT_MOC_LITERAL(12, 248, 24), // "mLeftRadioButton_clicked"
QT_MOC_LITERAL(13, 273, 25), // "mRightRadioButton_clicked"
QT_MOC_LITERAL(14, 299, 23), // "mTopRadioButton_clicked"
QT_MOC_LITERAL(15, 323, 26), // "mBottomRadioButton_clicked"
QT_MOC_LITERAL(16, 350, 26), // "mMiddleRadioButton_clicked"
QT_MOC_LITERAL(17, 377, 19), // "setGuiElementValues"
QT_MOC_LITERAL(18, 397, 11), // "fontChanged"
QT_MOC_LITERAL(19, 409, 14) // "justifyClicked"

    },
    "QgsLayoutLabelWidget\0mHtmlCheckBox_stateChanged\0"
    "\0i\0mTextEdit_textChanged\0"
    "mInsertExpressionButton_clicked\0"
    "mMarginXDoubleSpinBox_valueChanged\0d\0"
    "mMarginYDoubleSpinBox_valueChanged\0"
    "mFontColorButton_colorChanged\0"
    "newLabelColor\0mCenterRadioButton_clicked\0"
    "mLeftRadioButton_clicked\0"
    "mRightRadioButton_clicked\0"
    "mTopRadioButton_clicked\0"
    "mBottomRadioButton_clicked\0"
    "mMiddleRadioButton_clicked\0"
    "setGuiElementValues\0fontChanged\0"
    "justifyClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayoutLabelWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       8,    1,   97,    2, 0x08 /* Private */,
       9,    1,  100,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayoutLabelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayoutLabelWidget *_t = static_cast<QgsLayoutLabelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mHtmlCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mTextEdit_textChanged(); break;
        case 2: _t->mInsertExpressionButton_clicked(); break;
        case 3: _t->mMarginXDoubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->mMarginYDoubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->mFontColorButton_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->mCenterRadioButton_clicked(); break;
        case 7: _t->mLeftRadioButton_clicked(); break;
        case 8: _t->mRightRadioButton_clicked(); break;
        case 9: _t->mTopRadioButton_clicked(); break;
        case 10: _t->mBottomRadioButton_clicked(); break;
        case 11: _t->mMiddleRadioButton_clicked(); break;
        case 12: _t->setGuiElementValues(); break;
        case 13: _t->fontChanged(); break;
        case 14: _t->justifyClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QgsLayoutLabelWidget::staticMetaObject = {
    { &QgsLayoutItemBaseWidget::staticMetaObject, qt_meta_stringdata_QgsLayoutLabelWidget.data,
      qt_meta_data_QgsLayoutLabelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLayoutLabelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayoutLabelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayoutLabelWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLayoutItemBaseWidget::qt_metacast(_clname);
}

int QgsLayoutLabelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayoutItemBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
