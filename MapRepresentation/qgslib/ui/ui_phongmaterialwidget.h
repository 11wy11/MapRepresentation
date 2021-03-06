/********************************************************************************
** Form generated from reading UI file 'phongmaterialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONGMATERIALWIDGET_H
#define UI_PHONGMATERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"

QT_BEGIN_NAMESPACE

class Ui_PhongMaterialWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblShininess;
    QgsColorButton *btnSpecular;
    QgsColorButton *btnDiffuse;
    QLabel *lblSpecular;
    QLabel *lblDiffuse;
    QgsDoubleSpinBox *spinShininess;
    QLabel *lblAmbient;
    QgsColorButton *btnAmbient;
    QgsPropertyOverrideButton *mDiffuseDataDefinedButton;
    QgsPropertyOverrideButton *mAmbientDataDefinedButton;
    QgsPropertyOverrideButton *mSpecularDataDefinedButton;

    void setupUi(QWidget *PhongMaterialWidget)
    {
        if (PhongMaterialWidget->objectName().isEmpty())
            PhongMaterialWidget->setObjectName(QStringLiteral("PhongMaterialWidget"));
        PhongMaterialWidget->resize(394, 133);
        PhongMaterialWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(PhongMaterialWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblShininess = new QLabel(PhongMaterialWidget);
        lblShininess->setObjectName(QStringLiteral("lblShininess"));

        gridLayout->addWidget(lblShininess, 3, 0, 1, 1);

        btnSpecular = new QgsColorButton(PhongMaterialWidget);
        btnSpecular->setObjectName(QStringLiteral("btnSpecular"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnSpecular->sizePolicy().hasHeightForWidth());
        btnSpecular->setSizePolicy(sizePolicy);
        btnSpecular->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnSpecular, 2, 1, 1, 1);

        btnDiffuse = new QgsColorButton(PhongMaterialWidget);
        btnDiffuse->setObjectName(QStringLiteral("btnDiffuse"));
        sizePolicy.setHeightForWidth(btnDiffuse->sizePolicy().hasHeightForWidth());
        btnDiffuse->setSizePolicy(sizePolicy);
        btnDiffuse->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnDiffuse, 0, 1, 1, 1);

        lblSpecular = new QLabel(PhongMaterialWidget);
        lblSpecular->setObjectName(QStringLiteral("lblSpecular"));

        gridLayout->addWidget(lblSpecular, 2, 0, 1, 1);

        lblDiffuse = new QLabel(PhongMaterialWidget);
        lblDiffuse->setObjectName(QStringLiteral("lblDiffuse"));

        gridLayout->addWidget(lblDiffuse, 0, 0, 1, 1);

        spinShininess = new QgsDoubleSpinBox(PhongMaterialWidget);
        spinShininess->setObjectName(QStringLiteral("spinShininess"));
        spinShininess->setMaximum(1000);

        gridLayout->addWidget(spinShininess, 3, 1, 1, 1);

        lblAmbient = new QLabel(PhongMaterialWidget);
        lblAmbient->setObjectName(QStringLiteral("lblAmbient"));

        gridLayout->addWidget(lblAmbient, 1, 0, 1, 1);

        btnAmbient = new QgsColorButton(PhongMaterialWidget);
        btnAmbient->setObjectName(QStringLiteral("btnAmbient"));
        sizePolicy.setHeightForWidth(btnAmbient->sizePolicy().hasHeightForWidth());
        btnAmbient->setSizePolicy(sizePolicy);
        btnAmbient->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnAmbient, 1, 1, 1, 1);

        mDiffuseDataDefinedButton = new QgsPropertyOverrideButton(PhongMaterialWidget);
        mDiffuseDataDefinedButton->setObjectName(QStringLiteral("mDiffuseDataDefinedButton"));

        gridLayout->addWidget(mDiffuseDataDefinedButton, 0, 2, 1, 1);

        mAmbientDataDefinedButton = new QgsPropertyOverrideButton(PhongMaterialWidget);
        mAmbientDataDefinedButton->setObjectName(QStringLiteral("mAmbientDataDefinedButton"));

        gridLayout->addWidget(mAmbientDataDefinedButton, 1, 2, 1, 1);

        mSpecularDataDefinedButton = new QgsPropertyOverrideButton(PhongMaterialWidget);
        mSpecularDataDefinedButton->setObjectName(QStringLiteral("mSpecularDataDefinedButton"));

        gridLayout->addWidget(mSpecularDataDefinedButton, 2, 2, 1, 1);

        QWidget::setTabOrder(btnDiffuse, btnAmbient);
        QWidget::setTabOrder(btnAmbient, btnSpecular);
        QWidget::setTabOrder(btnSpecular, spinShininess);

        retranslateUi(PhongMaterialWidget);

        QMetaObject::connectSlotsByName(PhongMaterialWidget);
    } // setupUi

    void retranslateUi(QWidget *PhongMaterialWidget)
    {
        lblShininess->setText(QApplication::translate("PhongMaterialWidget", "Shininess", nullptr));
        lblSpecular->setText(QApplication::translate("PhongMaterialWidget", "Specular", nullptr));
        lblDiffuse->setText(QApplication::translate("PhongMaterialWidget", "Diffuse", nullptr));
        lblAmbient->setText(QApplication::translate("PhongMaterialWidget", "Ambient", nullptr));
        mDiffuseDataDefinedButton->setText(QApplication::translate("PhongMaterialWidget", "...", nullptr));
        mAmbientDataDefinedButton->setText(QApplication::translate("PhongMaterialWidget", "...", nullptr));
        mSpecularDataDefinedButton->setText(QApplication::translate("PhongMaterialWidget", "...", nullptr));
        Q_UNUSED(PhongMaterialWidget);
    } // retranslateUi

};

namespace Ui {
    class PhongMaterialWidget: public Ui_PhongMaterialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONGMATERIALWIDGET_H
