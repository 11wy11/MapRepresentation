/****************************************************************************
** Meta object code from reading C++ file 'qgslabelobstaclesettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/gui/labeling/qgslabelobstaclesettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslabelobstaclesettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QgsLabelObstacleSettingsWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLabelObstacleSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLabelObstacleSettingsWidget_t qt_meta_stringdata_QgsLabelObstacleSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QgsLabelObstacleSettingsWidget"

    },
    "QgsLabelObstacleSettingsWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLabelObstacleSettingsWidget[] = {

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

void QgsLabelObstacleSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QgsLabelObstacleSettingsWidget::staticMetaObject = {
    { &QgsLabelSettingsWidgetBase::staticMetaObject, qt_meta_stringdata_QgsLabelObstacleSettingsWidget.data,
      qt_meta_data_QgsLabelObstacleSettingsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QgsLabelObstacleSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLabelObstacleSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLabelObstacleSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QgsLabelSettingsWidgetBase::qt_metacast(_clname);
}

int QgsLabelObstacleSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLabelSettingsWidgetBase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
