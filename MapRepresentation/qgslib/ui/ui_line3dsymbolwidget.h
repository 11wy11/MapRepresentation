/********************************************************************************
** Form generated from reading UI file 'line3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINE3DSYMBOLWIDGET_H
#define UI_LINE3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgsmaterialwidget.h"

QT_BEGIN_NAMESPACE

class Ui_Line3DSymbolWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelHeight;
    QgsDoubleSpinBox *spinHeight;
    QLabel *labelExtrusion;
    QgsDoubleSpinBox *spinExtrusion;
    QLabel *labelClamping;
    QComboBox *cboAltClamping;
    QLabel *labelBinding;
    QComboBox *cboAltBinding;
    QLabel *labelWidth;
    QgsDoubleSpinBox *spinWidth;
    QCheckBox *chkSimpleLines;
    QgsCollapsibleGroupBox *groupShading;
    QGridLayout *gridLayout;
    QgsMaterialWidget *widgetMaterial;

    void setupUi(QWidget *Line3DSymbolWidget)
    {
        if (Line3DSymbolWidget->objectName().isEmpty())
            Line3DSymbolWidget->setObjectName(QStringLiteral("Line3DSymbolWidget"));
        Line3DSymbolWidget->resize(382, 264);
        Line3DSymbolWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(Line3DSymbolWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelHeight = new QLabel(Line3DSymbolWidget);
        labelHeight->setObjectName(QStringLiteral("labelHeight"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelHeight);

        spinHeight = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        spinHeight->setMinimum(-99999);
        spinHeight->setMaximum(99999);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinHeight);

        labelExtrusion = new QLabel(Line3DSymbolWidget);
        labelExtrusion->setObjectName(QStringLiteral("labelExtrusion"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelExtrusion);

        spinExtrusion = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinExtrusion->setObjectName(QStringLiteral("spinExtrusion"));
        spinExtrusion->setMaximum(99999);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinExtrusion);

        labelClamping = new QLabel(Line3DSymbolWidget);
        labelClamping->setObjectName(QStringLiteral("labelClamping"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelClamping);

        cboAltClamping = new QComboBox(Line3DSymbolWidget);
        cboAltClamping->addItem(QString());
        cboAltClamping->addItem(QString());
        cboAltClamping->addItem(QString());
        cboAltClamping->setObjectName(QStringLiteral("cboAltClamping"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cboAltClamping);

        labelBinding = new QLabel(Line3DSymbolWidget);
        labelBinding->setObjectName(QStringLiteral("labelBinding"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelBinding);

        cboAltBinding = new QComboBox(Line3DSymbolWidget);
        cboAltBinding->addItem(QString());
        cboAltBinding->addItem(QString());
        cboAltBinding->setObjectName(QStringLiteral("cboAltBinding"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cboAltBinding);

        labelWidth = new QLabel(Line3DSymbolWidget);
        labelWidth->setObjectName(QStringLiteral("labelWidth"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelWidth);

        spinWidth = new QgsDoubleSpinBox(Line3DSymbolWidget);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        spinWidth->setMaximum(99999);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinWidth);


        verticalLayout->addLayout(formLayout);

        chkSimpleLines = new QCheckBox(Line3DSymbolWidget);
        chkSimpleLines->setObjectName(QStringLiteral("chkSimpleLines"));

        verticalLayout->addWidget(chkSimpleLines);

        groupShading = new QgsCollapsibleGroupBox(Line3DSymbolWidget);
        groupShading->setObjectName(QStringLiteral("groupShading"));
        gridLayout = new QGridLayout(groupShading);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetMaterial = new QgsMaterialWidget(groupShading);
        widgetMaterial->setObjectName(QStringLiteral("widgetMaterial"));
        widgetMaterial->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(widgetMaterial, 3, 0, 1, 2);


        verticalLayout->addWidget(groupShading);

        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, spinExtrusion);
        QWidget::setTabOrder(spinExtrusion, cboAltClamping);
        QWidget::setTabOrder(cboAltClamping, cboAltBinding);

        retranslateUi(Line3DSymbolWidget);

        QMetaObject::connectSlotsByName(Line3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *Line3DSymbolWidget)
    {
        labelHeight->setText(QApplication::translate("Line3DSymbolWidget", "Height", nullptr));
        labelExtrusion->setText(QApplication::translate("Line3DSymbolWidget", "Extrusion", nullptr));
        labelClamping->setText(QApplication::translate("Line3DSymbolWidget", "Altitude clamping", nullptr));
        cboAltClamping->setItemText(0, QApplication::translate("Line3DSymbolWidget", "Absolute", nullptr));
        cboAltClamping->setItemText(1, QApplication::translate("Line3DSymbolWidget", "Relative", nullptr));
        cboAltClamping->setItemText(2, QApplication::translate("Line3DSymbolWidget", "Terrain", nullptr));

        labelBinding->setText(QApplication::translate("Line3DSymbolWidget", "Altitude binding", nullptr));
        cboAltBinding->setItemText(0, QApplication::translate("Line3DSymbolWidget", "Vertex", nullptr));
        cboAltBinding->setItemText(1, QApplication::translate("Line3DSymbolWidget", "Centroid", nullptr));

        labelWidth->setText(QApplication::translate("Line3DSymbolWidget", "Width", nullptr));
        chkSimpleLines->setText(QApplication::translate("Line3DSymbolWidget", "Render as simple 3D lines", nullptr));
        groupShading->setTitle(QApplication::translate("Line3DSymbolWidget", "Shading", nullptr));
        Q_UNUSED(Line3DSymbolWidget);
    } // retranslateUi

};

namespace Ui {
    class Line3DSymbolWidget: public Ui_Line3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINE3DSYMBOLWIDGET_H
