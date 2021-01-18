/********************************************************************************
** Form generated from reading UI file 'qgsprocessingdxflayerdetailswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGDXFLAYERDETAILSWIDGETBASE_H
#define UI_QGSPROCESSINGDXFLAYERDETAILSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsfieldcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingDxfLayerDetailsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *mButtonBox;
    QgsFieldComboBox *mFieldsComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsProcessingDxfLayerDetailsWidget)
    {
        if (QgsProcessingDxfLayerDetailsWidget->objectName().isEmpty())
            QgsProcessingDxfLayerDetailsWidget->setObjectName(QStringLiteral("QgsProcessingDxfLayerDetailsWidget"));
        QgsProcessingDxfLayerDetailsWidget->resize(393, 71);
        gridLayout = new QGridLayout(QgsProcessingDxfLayerDetailsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QgsProcessingDxfLayerDetailsWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsProcessingDxfLayerDetailsWidget);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 2, 2, 1, 1);

        mFieldsComboBox = new QgsFieldComboBox(QgsProcessingDxfLayerDetailsWidget);
        mFieldsComboBox->setObjectName(QStringLiteral("mFieldsComboBox"));

        gridLayout->addWidget(mFieldsComboBox, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 3);


        retranslateUi(QgsProcessingDxfLayerDetailsWidget);

        QMetaObject::connectSlotsByName(QgsProcessingDxfLayerDetailsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingDxfLayerDetailsWidget)
    {
        label->setText(QApplication::translate("QgsProcessingDxfLayerDetailsWidget", "Attribute", nullptr));
        Q_UNUSED(QgsProcessingDxfLayerDetailsWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingDxfLayerDetailsWidget: public Ui_QgsProcessingDxfLayerDetailsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGDXFLAYERDETAILSWIDGETBASE_H
