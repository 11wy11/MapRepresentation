/********************************************************************************
** Form generated from reading UI file 'widget_svgmarker.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGMARKER_H
#define UI_WIDGET_SVGMARKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspropertyoverridebutton.h"
#include "qgsratiolockbutton.h"
#include "qgssvgselectorwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgMarker
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QgsPropertyOverrideButton *mFillColorDDBtn;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mHorizontalAnchorDDBtn;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QgsPropertyOverrideButton *mHeightDDBtn;
    QgsDoubleSpinBox *spinWidth;
    QLabel *label_11;
    QgsDoubleSpinBox *spinHeight;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QLabel *label_13;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QgsColorButton *mChangeStrokeColorButton;
    QLabel *label_9;
    QgsPropertyOverrideButton *mStrokeColorDDBtn;
    QComboBox *mHorizontalAnchorComboBox;
    QHBoxLayout *horizontalLayout_5;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QgsUnitSelectionWidget *mStrokeWidthUnitWidget;
    QLabel *label_6;
    QgsColorButton *mChangeColorButton;
    QgsPropertyOverrideButton *mStrokeWidthDDBtn;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QgsDoubleSpinBox *spinOffsetX;
    QLabel *label_8;
    QgsDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPropertyOverrideButton *mVerticalAnchorDDBtn;
    QgsPropertyOverrideButton *mAngleDDBtn;
    QLabel *mStrokeColorLabel;
    QLabel *mStrokeWidthLabel;
    QgsSvgSelectorWidget *mSvgSelectorWidget;
    QgsPropertyOverrideButton *mOffsetDDBtn;
    QLabel *label_3;
    QComboBox *mVerticalAnchorComboBox;
    QLabel *mAnchorPointLabel;

    void setupUi(QWidget *WidgetSvgMarker)
    {
        if (WidgetSvgMarker->objectName().isEmpty())
            WidgetSvgMarker->setObjectName(QStringLiteral("WidgetSvgMarker"));
        WidgetSvgMarker->resize(445, 729);
        WidgetSvgMarker->setWindowTitle(QStringLiteral("Form"));
        gridLayout_2 = new QGridLayout(WidgetSvgMarker);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(WidgetSvgMarker);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        mFillColorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mFillColorDDBtn->setObjectName(QStringLiteral("mFillColorDDBtn"));

        gridLayout_2->addWidget(mFillColorDDBtn, 1, 2, 1, 1);

        spinAngle = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout_2->addWidget(spinAngle, 5, 1, 1, 1);

        mHorizontalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mHorizontalAnchorDDBtn->setObjectName(QStringLiteral("mHorizontalAnchorDDBtn"));

        gridLayout_2->addWidget(mHorizontalAnchorDDBtn, 8, 2, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(WidgetSvgMarker);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        mWidthDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 0, 3, 1, 1);

        mHeightDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mHeightDDBtn->setObjectName(QStringLiteral("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 1, 3, 1, 1);

        spinWidth = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);
        spinWidth->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(spinWidth, 0, 1, 1, 1);

        label_11 = new QLabel(WidgetSvgMarker);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        spinHeight = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinHeight->setObjectName(QStringLiteral("spinHeight"));
        sizePolicy.setHeightForWidth(spinHeight->sizePolicy().hasHeightForWidth());
        spinHeight->setSizePolicy(sizePolicy);
        spinHeight->setDecimals(6);
        spinHeight->setMaximum(100000);
        spinHeight->setSingleStep(0.2);
        spinHeight->setValue(1);
        spinHeight->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(spinHeight, 1, 1, 1, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(WidgetSvgMarker);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 0, 2, 2, 1);

        label_13 = new QLabel(WidgetSvgMarker);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mSizeUnitWidget->setObjectName(QStringLiteral("mSizeUnitWidget"));
        mSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_3->addWidget(mSizeUnitWidget, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout_3, 0, 1, 1, 2);

        mChangeStrokeColorButton = new QgsColorButton(WidgetSvgMarker);
        mChangeStrokeColorButton->setObjectName(QStringLiteral("mChangeStrokeColorButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mChangeStrokeColorButton->sizePolicy().hasHeightForWidth());
        mChangeStrokeColorButton->setSizePolicy(sizePolicy2);
        mChangeStrokeColorButton->setMinimumSize(QSize(120, 0));
        mChangeStrokeColorButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(mChangeStrokeColorButton, 3, 1, 1, 1);

        label_9 = new QLabel(WidgetSvgMarker);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        mStrokeColorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mStrokeColorDDBtn->setObjectName(QStringLiteral("mStrokeColorDDBtn"));

        gridLayout_2->addWidget(mStrokeColorDDBtn, 3, 2, 1, 1);

        mHorizontalAnchorComboBox = new QComboBox(WidgetSvgMarker);
        mHorizontalAnchorComboBox->addItem(QString());
        mHorizontalAnchorComboBox->addItem(QString());
        mHorizontalAnchorComboBox->addItem(QString());
        mHorizontalAnchorComboBox->setObjectName(QStringLiteral("mHorizontalAnchorComboBox"));

        gridLayout_2->addWidget(mHorizontalAnchorComboBox, 8, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mStrokeWidthSpinBox = new QgsDoubleSpinBox(WidgetSvgMarker);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mStrokeWidthSpinBox->sizePolicy().hasHeightForWidth());
        mStrokeWidthSpinBox->setSizePolicy(sizePolicy3);
        mStrokeWidthSpinBox->setDecimals(6);
        mStrokeWidthSpinBox->setMaximum(1e+09);
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setValue(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        horizontalLayout_5->addWidget(mStrokeWidthSpinBox);

        mStrokeWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mStrokeWidthUnitWidget->setObjectName(QStringLiteral("mStrokeWidthUnitWidget"));
        mStrokeWidthUnitWidget->setMinimumSize(QSize(0, 0));
        mStrokeWidthUnitWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(mStrokeWidthUnitWidget);


        gridLayout_2->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        label_6 = new QLabel(WidgetSvgMarker);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        mChangeColorButton = new QgsColorButton(WidgetSvgMarker);
        mChangeColorButton->setObjectName(QStringLiteral("mChangeColorButton"));
        sizePolicy4.setHeightForWidth(mChangeColorButton->sizePolicy().hasHeightForWidth());
        mChangeColorButton->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(mChangeColorButton, 1, 1, 1, 1);

        mStrokeWidthDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mStrokeWidthDDBtn->setObjectName(QStringLiteral("mStrokeWidthDDBtn"));

        gridLayout_2->addWidget(mStrokeWidthDDBtn, 4, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(WidgetSvgMarker);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        spinOffsetX = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinOffsetX->setObjectName(QStringLiteral("spinOffsetX"));
        sizePolicy3.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy3);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-1e+08);
        spinOffsetX->setMaximum(1e+08);
        spinOffsetX->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetX, 0, 1, 1, 1);

        label_8 = new QLabel(WidgetSvgMarker);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        spinOffsetY = new QgsDoubleSpinBox(WidgetSvgMarker);
        spinOffsetY->setObjectName(QStringLiteral("spinOffsetY"));
        sizePolicy3.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy3);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-1e+08);
        spinOffsetY->setMaximum(1e+08);
        spinOffsetY->setSingleStep(0.2);

        gridLayout->addWidget(spinOffsetY, 1, 1, 1, 1);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mOffsetUnitWidget->setObjectName(QStringLiteral("mOffsetUnitWidget"));
        mOffsetUnitWidget->setMinimumSize(QSize(0, 0));
        mOffsetUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOffsetUnitWidget, 0, 2, 2, 1);


        gridLayout_2->addLayout(gridLayout, 6, 1, 1, 1);

        mVerticalAnchorDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mVerticalAnchorDDBtn->setObjectName(QStringLiteral("mVerticalAnchorDDBtn"));

        gridLayout_2->addWidget(mVerticalAnchorDDBtn, 7, 2, 1, 1);

        mAngleDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mAngleDDBtn->setObjectName(QStringLiteral("mAngleDDBtn"));

        gridLayout_2->addWidget(mAngleDDBtn, 5, 2, 1, 1);

        mStrokeColorLabel = new QLabel(WidgetSvgMarker);
        mStrokeColorLabel->setObjectName(QStringLiteral("mStrokeColorLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mStrokeColorLabel->sizePolicy().hasHeightForWidth());
        mStrokeColorLabel->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(mStrokeColorLabel, 3, 0, 1, 1);

        mStrokeWidthLabel = new QLabel(WidgetSvgMarker);
        mStrokeWidthLabel->setObjectName(QStringLiteral("mStrokeWidthLabel"));

        gridLayout_2->addWidget(mStrokeWidthLabel, 4, 0, 1, 1);

        mSvgSelectorWidget = new QgsSvgSelectorWidget(WidgetSvgMarker);
        mSvgSelectorWidget->setObjectName(QStringLiteral("mSvgSelectorWidget"));

        gridLayout_2->addWidget(mSvgSelectorWidget, 9, 0, 1, 3);

        mOffsetDDBtn = new QgsPropertyOverrideButton(WidgetSvgMarker);
        mOffsetDDBtn->setObjectName(QStringLiteral("mOffsetDDBtn"));

        gridLayout_2->addWidget(mOffsetDDBtn, 6, 2, 1, 1);

        label_3 = new QLabel(WidgetSvgMarker);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        mVerticalAnchorComboBox = new QComboBox(WidgetSvgMarker);
        mVerticalAnchorComboBox->addItem(QString());
        mVerticalAnchorComboBox->addItem(QString());
        mVerticalAnchorComboBox->addItem(QString());
        mVerticalAnchorComboBox->setObjectName(QStringLiteral("mVerticalAnchorComboBox"));

        gridLayout_2->addWidget(mVerticalAnchorComboBox, 7, 1, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetSvgMarker);
        mAnchorPointLabel->setObjectName(QStringLiteral("mAnchorPointLabel"));

        gridLayout_2->addWidget(mAnchorPointLabel, 7, 0, 2, 1);

        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mFillColorDDBtn);
        QWidget::setTabOrder(mFillColorDDBtn, mChangeStrokeColorButton);
        QWidget::setTabOrder(mChangeStrokeColorButton, mStrokeColorDDBtn);
        QWidget::setTabOrder(mStrokeColorDDBtn, mStrokeWidthSpinBox);
        QWidget::setTabOrder(mStrokeWidthSpinBox, mStrokeWidthUnitWidget);
        QWidget::setTabOrder(mStrokeWidthUnitWidget, mStrokeWidthDDBtn);
        QWidget::setTabOrder(mStrokeWidthDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mAngleDDBtn);
        QWidget::setTabOrder(mAngleDDBtn, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mOffsetDDBtn);
        QWidget::setTabOrder(mOffsetDDBtn, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mVerticalAnchorDDBtn);
        QWidget::setTabOrder(mVerticalAnchorDDBtn, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mHorizontalAnchorDDBtn);

        retranslateUi(WidgetSvgMarker);

        QMetaObject::connectSlotsByName(WidgetSvgMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgMarker)
    {
        label_4->setText(QApplication::translate("WidgetSvgMarker", "Offset", nullptr));
        mFillColorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        spinAngle->setSuffix(QApplication::translate("WidgetSvgMarker", " \302\260", nullptr));
        mHorizontalAnchorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        label_10->setText(QApplication::translate("WidgetSvgMarker", "Width", nullptr));
        mWidthDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        mHeightDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        label_11->setText(QApplication::translate("WidgetSvgMarker", "Height", nullptr));
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("WidgetSvgMarker", "Lock aspect ratio", nullptr));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("WidgetSvgMarker", "Unit", nullptr));
        mChangeStrokeColorButton->setText(QString());
        label_9->setText(QApplication::translate("WidgetSvgMarker", "Size", nullptr));
        mStrokeColorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        mHorizontalAnchorComboBox->setItemText(0, QApplication::translate("WidgetSvgMarker", "Left", nullptr));
        mHorizontalAnchorComboBox->setItemText(1, QApplication::translate("WidgetSvgMarker", "HCenter", nullptr));
        mHorizontalAnchorComboBox->setItemText(2, QApplication::translate("WidgetSvgMarker", "Right", nullptr));

        mStrokeWidthSpinBox->setSpecialValueText(QApplication::translate("WidgetSvgMarker", "No stroke", nullptr));
        label_6->setText(QApplication::translate("WidgetSvgMarker", "Fill color", nullptr));
        mStrokeWidthDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        label_7->setText(QApplication::translate("WidgetSvgMarker", "x", nullptr));
        spinOffsetX->setPrefix(QString());
        label_8->setText(QApplication::translate("WidgetSvgMarker", "y", nullptr));
        spinOffsetY->setPrefix(QString());
        mVerticalAnchorDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        mAngleDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        mStrokeColorLabel->setText(QApplication::translate("WidgetSvgMarker", "Stroke color", nullptr));
        mStrokeWidthLabel->setText(QApplication::translate("WidgetSvgMarker", "Stroke width", nullptr));
        mOffsetDDBtn->setText(QApplication::translate("WidgetSvgMarker", "\342\200\246", nullptr));
        label_3->setText(QApplication::translate("WidgetSvgMarker", "Rotation", nullptr));
        mVerticalAnchorComboBox->setItemText(0, QApplication::translate("WidgetSvgMarker", "Top", nullptr));
        mVerticalAnchorComboBox->setItemText(1, QApplication::translate("WidgetSvgMarker", "VCenter", nullptr));
        mVerticalAnchorComboBox->setItemText(2, QApplication::translate("WidgetSvgMarker", "Bottom", nullptr));

        mAnchorPointLabel->setText(QApplication::translate("WidgetSvgMarker", "Anchor point", nullptr));
        Q_UNUSED(WidgetSvgMarker);
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgMarker: public Ui_WidgetSvgMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGMARKER_H
