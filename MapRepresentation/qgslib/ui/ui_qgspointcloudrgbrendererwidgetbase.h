/********************************************************************************
** Form generated from reading UI file 'qgspointcloudrgbrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDRGBRENDERERWIDGETBASE_H
#define UI_QGSPOINTCLOUDRGBRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgspointcloudattributecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudRgbRendererWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mContrastEnhancementAlgorithmLabel;
    QLabel *mRedBandLabel;
    QComboBox *mContrastEnhancementAlgorithmComboBox;
    QLabel *mRedMinLabel;
    QLabel *mRedMaxLabel;
    QLineEdit *mRedMinLineEdit;
    QgsPointCloudAttributeComboBox *mRedAttributeComboBox;
    QLabel *mBlueMinLabel;
    QLabel *mBlueMaxLabel;
    QgsPointCloudAttributeComboBox *mGreenAttributeComboBox;
    QLabel *mGreenMinLabel;
    QLabel *mGreenMaxLabel;
    QgsPointCloudAttributeComboBox *mBlueAttributeComboBox;
    QLineEdit *mRedMaxLineEdit;
    QLineEdit *mGreenMinLineEdit;
    QLabel *mBlueBandLabel;
    QLineEdit *mBlueMinLineEdit;
    QLineEdit *mBlueMaxLineEdit;
    QLabel *mGreenBandLabel;
    QLineEdit *mGreenMaxLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsPointCloudRgbRendererWidgetBase)
    {
        if (QgsPointCloudRgbRendererWidgetBase->objectName().isEmpty())
            QgsPointCloudRgbRendererWidgetBase->setObjectName(QStringLiteral("QgsPointCloudRgbRendererWidgetBase"));
        QgsPointCloudRgbRendererWidgetBase->resize(350, 345);
        QgsPointCloudRgbRendererWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsPointCloudRgbRendererWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mContrastEnhancementAlgorithmLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mContrastEnhancementAlgorithmLabel->setObjectName(QStringLiteral("mContrastEnhancementAlgorithmLabel"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmLabel, 6, 0, 1, 1);

        mRedBandLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mRedBandLabel->setObjectName(QStringLiteral("mRedBandLabel"));

        gridLayout->addWidget(mRedBandLabel, 0, 0, 1, 1);

        mContrastEnhancementAlgorithmComboBox = new QComboBox(QgsPointCloudRgbRendererWidgetBase);
        mContrastEnhancementAlgorithmComboBox->setObjectName(QStringLiteral("mContrastEnhancementAlgorithmComboBox"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmComboBox, 6, 1, 1, 4);

        mRedMinLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mRedMinLabel->setObjectName(QStringLiteral("mRedMinLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mRedMinLabel->sizePolicy().hasHeightForWidth());
        mRedMinLabel->setSizePolicy(sizePolicy);
        mRedMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMinLabel, 1, 1, 1, 1);

        mRedMaxLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mRedMaxLabel->setObjectName(QStringLiteral("mRedMaxLabel"));
        sizePolicy.setHeightForWidth(mRedMaxLabel->sizePolicy().hasHeightForWidth());
        mRedMaxLabel->setSizePolicy(sizePolicy);
        mRedMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mRedMaxLabel, 1, 3, 1, 1);

        mRedMinLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mRedMinLineEdit->setObjectName(QStringLiteral("mRedMinLineEdit"));
        mRedMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMinLineEdit, 1, 2, 1, 1);

        mRedAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudRgbRendererWidgetBase);
        mRedAttributeComboBox->setObjectName(QStringLiteral("mRedAttributeComboBox"));

        gridLayout->addWidget(mRedAttributeComboBox, 0, 1, 1, 4);

        mBlueMinLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mBlueMinLabel->setObjectName(QStringLiteral("mBlueMinLabel"));
        sizePolicy.setHeightForWidth(mBlueMinLabel->sizePolicy().hasHeightForWidth());
        mBlueMinLabel->setSizePolicy(sizePolicy);
        mBlueMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMinLabel, 5, 1, 1, 1);

        mBlueMaxLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mBlueMaxLabel->setObjectName(QStringLiteral("mBlueMaxLabel"));
        sizePolicy.setHeightForWidth(mBlueMaxLabel->sizePolicy().hasHeightForWidth());
        mBlueMaxLabel->setSizePolicy(sizePolicy);
        mBlueMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueMaxLabel, 5, 3, 1, 1);

        mGreenAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudRgbRendererWidgetBase);
        mGreenAttributeComboBox->setObjectName(QStringLiteral("mGreenAttributeComboBox"));

        gridLayout->addWidget(mGreenAttributeComboBox, 2, 1, 1, 4);

        mGreenMinLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mGreenMinLabel->setObjectName(QStringLiteral("mGreenMinLabel"));
        sizePolicy.setHeightForWidth(mGreenMinLabel->sizePolicy().hasHeightForWidth());
        mGreenMinLabel->setSizePolicy(sizePolicy);
        mGreenMinLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMinLabel, 3, 1, 1, 1);

        mGreenMaxLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mGreenMaxLabel->setObjectName(QStringLiteral("mGreenMaxLabel"));
        sizePolicy.setHeightForWidth(mGreenMaxLabel->sizePolicy().hasHeightForWidth());
        mGreenMaxLabel->setSizePolicy(sizePolicy);
        mGreenMaxLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenMaxLabel, 3, 3, 1, 1);

        mBlueAttributeComboBox = new QgsPointCloudAttributeComboBox(QgsPointCloudRgbRendererWidgetBase);
        mBlueAttributeComboBox->setObjectName(QStringLiteral("mBlueAttributeComboBox"));

        gridLayout->addWidget(mBlueAttributeComboBox, 4, 1, 1, 4);

        mRedMaxLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mRedMaxLineEdit->setObjectName(QStringLiteral("mRedMaxLineEdit"));
        mRedMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMaxLineEdit, 1, 4, 1, 1);

        mGreenMinLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mGreenMinLineEdit->setObjectName(QStringLiteral("mGreenMinLineEdit"));
        mGreenMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMinLineEdit, 3, 2, 1, 1);

        mBlueBandLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mBlueBandLabel->setObjectName(QStringLiteral("mBlueBandLabel"));
        sizePolicy.setHeightForWidth(mBlueBandLabel->sizePolicy().hasHeightForWidth());
        mBlueBandLabel->setSizePolicy(sizePolicy);
        mBlueBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mBlueBandLabel, 4, 0, 1, 1);

        mBlueMinLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mBlueMinLineEdit->setObjectName(QStringLiteral("mBlueMinLineEdit"));
        mBlueMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMinLineEdit, 5, 2, 1, 1);

        mBlueMaxLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mBlueMaxLineEdit->setObjectName(QStringLiteral("mBlueMaxLineEdit"));
        mBlueMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMaxLineEdit, 5, 4, 1, 1);

        mGreenBandLabel = new QLabel(QgsPointCloudRgbRendererWidgetBase);
        mGreenBandLabel->setObjectName(QStringLiteral("mGreenBandLabel"));
        sizePolicy.setHeightForWidth(mGreenBandLabel->sizePolicy().hasHeightForWidth());
        mGreenBandLabel->setSizePolicy(sizePolicy);
        mGreenBandLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mGreenBandLabel, 2, 0, 1, 1);

        mGreenMaxLineEdit = new QLineEdit(QgsPointCloudRgbRendererWidgetBase);
        mGreenMaxLineEdit->setObjectName(QStringLiteral("mGreenMaxLineEdit"));
        mGreenMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMaxLineEdit, 3, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(mRedAttributeComboBox, mRedMinLineEdit);
        QWidget::setTabOrder(mRedMinLineEdit, mRedMaxLineEdit);
        QWidget::setTabOrder(mRedMaxLineEdit, mGreenAttributeComboBox);
        QWidget::setTabOrder(mGreenAttributeComboBox, mGreenMinLineEdit);
        QWidget::setTabOrder(mGreenMinLineEdit, mGreenMaxLineEdit);
        QWidget::setTabOrder(mGreenMaxLineEdit, mBlueAttributeComboBox);
        QWidget::setTabOrder(mBlueAttributeComboBox, mBlueMinLineEdit);
        QWidget::setTabOrder(mBlueMinLineEdit, mBlueMaxLineEdit);
        QWidget::setTabOrder(mBlueMaxLineEdit, mContrastEnhancementAlgorithmComboBox);

        retranslateUi(QgsPointCloudRgbRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointCloudRgbRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloudRgbRendererWidgetBase)
    {
        mContrastEnhancementAlgorithmLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Contrast\n"
"enhancement", nullptr));
        mRedBandLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Red band", nullptr));
        mRedMinLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Min", nullptr));
        mRedMaxLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Max", nullptr));
        mBlueMinLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Min", nullptr));
        mBlueMaxLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Max", nullptr));
        mGreenMinLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Min", nullptr));
        mGreenMaxLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Max", nullptr));
        mBlueBandLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Blue band", nullptr));
        mGreenBandLabel->setText(QApplication::translate("QgsPointCloudRgbRendererWidgetBase", "Green band", nullptr));
        Q_UNUSED(QgsPointCloudRgbRendererWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudRgbRendererWidgetBase: public Ui_QgsPointCloudRgbRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDRGBRENDERERWIDGETBASE_H
