/********************************************************************************
** Form generated from reading UI file 'widget_symbolslist.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SYMBOLSLIST_H
#define UI_WIDGET_SYMBOLSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsopacitywidget.h"
#include "qgspropertyoverridebutton.h"
#include "qgsstyleitemslistwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SymbolsListWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageMarker;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QgsDoubleSpinBox *spinAngle;
    QgsPropertyOverrideButton *mRotationDDBtn;
    QLabel *label_3;
    QgsColorButton *btnMarkerColor;
    QLabel *mTransparencyLabel_2;
    QHBoxLayout *horizontalLayout_3;
    QgsOpacityWidget *mMarkerOpacityWidget;
    QgsPropertyOverrideButton *mMarkerOpacityDDBtn;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QgsDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mMarkerUnitWidget;
    QgsPropertyOverrideButton *mSizeDDBtn;
    QLabel *label_2;
    QWidget *pageLine;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_6;
    QgsDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mLineUnitWidget;
    QgsPropertyOverrideButton *mWidthDDBtn;
    QLabel *mTransparencyLabel_3;
    QHBoxLayout *horizontalLayout_4;
    QgsOpacityWidget *mLineOpacityWidget;
    QgsPropertyOverrideButton *mLineOpacityDDBtn;
    QgsColorButton *btnLineColor;
    QWidget *pageFill;
    QGridLayout *gridLayout_5;
    QgsUnitSelectionWidget *mFillUnitWidget;
    QLabel *mTransparencyLabel_4;
    QgsColorButton *btnFillColor;
    QLabel *label_8;
    QLabel *mSymbolUnitLabel_2;
    QHBoxLayout *horizontalLayout_2;
    QgsOpacityWidget *mFillOpacityWidget;
    QgsPropertyOverrideButton *mFillOpacityDDBtn;
    QgsStyleItemsListWidget *mStyleItemsListWidget;

    void setupUi(QWidget *SymbolsListWidget)
    {
        if (SymbolsListWidget->objectName().isEmpty())
            SymbolsListWidget->setObjectName(QStringLiteral("SymbolsListWidget"));
        SymbolsListWidget->resize(386, 619);
        SymbolsListWidget->setWindowTitle(QStringLiteral("Form"));
        gridLayout_4 = new QGridLayout(SymbolsListWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(SymbolsListWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(SymbolsListWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageMarker = new QWidget();
        pageMarker->setObjectName(QStringLiteral("pageMarker"));
        gridLayout_2 = new QGridLayout(pageMarker);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        spinAngle = new QgsDoubleSpinBox(pageMarker);
        spinAngle->setObjectName(QStringLiteral("spinAngle"));
        spinAngle->setWrapping(true);
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-360);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(1);

        horizontalLayout_5->addWidget(spinAngle);

        mRotationDDBtn = new QgsPropertyOverrideButton(pageMarker);
        mRotationDDBtn->setObjectName(QStringLiteral("mRotationDDBtn"));

        horizontalLayout_5->addWidget(mRotationDDBtn);


        gridLayout_2->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        label_3 = new QLabel(pageMarker);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        btnMarkerColor = new QgsColorButton(pageMarker);
        btnMarkerColor->setObjectName(QStringLiteral("btnMarkerColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMarkerColor->sizePolicy().hasHeightForWidth());
        btnMarkerColor->setSizePolicy(sizePolicy2);
        btnMarkerColor->setMinimumSize(QSize(0, 0));
        btnMarkerColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(btnMarkerColor, 0, 1, 1, 1);

        mTransparencyLabel_2 = new QLabel(pageMarker);
        mTransparencyLabel_2->setObjectName(QStringLiteral("mTransparencyLabel_2"));

        gridLayout_2->addWidget(mTransparencyLabel_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mMarkerOpacityWidget = new QgsOpacityWidget(pageMarker);
        mMarkerOpacityWidget->setObjectName(QStringLiteral("mMarkerOpacityWidget"));
        mMarkerOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mMarkerOpacityWidget);

        mMarkerOpacityDDBtn = new QgsPropertyOverrideButton(pageMarker);
        mMarkerOpacityDDBtn->setObjectName(QStringLiteral("mMarkerOpacityDDBtn"));

        horizontalLayout_3->addWidget(mMarkerOpacityDDBtn);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_7 = new QLabel(pageMarker);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        spinSize = new QgsDoubleSpinBox(pageMarker);
        spinSize->setObjectName(QStringLiteral("spinSize"));
        spinSize->setDecimals(5);
        spinSize->setMaximum(1e+08);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);
        spinSize->setProperty("showClearButton", QVariant(false));

        horizontalLayout->addWidget(spinSize);

        mMarkerUnitWidget = new QgsUnitSelectionWidget(pageMarker);
        mMarkerUnitWidget->setObjectName(QStringLiteral("mMarkerUnitWidget"));

        horizontalLayout->addWidget(mMarkerUnitWidget);

        mSizeDDBtn = new QgsPropertyOverrideButton(pageMarker);
        mSizeDDBtn->setObjectName(QStringLiteral("mSizeDDBtn"));

        horizontalLayout->addWidget(mSizeDDBtn);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        label_2 = new QLabel(pageMarker);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        stackedWidget->addWidget(pageMarker);
        pageLine = new QWidget();
        pageLine->setObjectName(QStringLiteral("pageLine"));
        gridLayout_3 = new QGridLayout(pageLine);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(pageLine);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_4 = new QLabel(pageLine);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        spinWidth = new QgsDoubleSpinBox(pageLine);
        spinWidth->setObjectName(QStringLiteral("spinWidth"));
        spinWidth->setDecimals(5);
        spinWidth->setMaximum(99999);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);
        spinWidth->setProperty("showClearButton", QVariant(false));

        horizontalLayout_6->addWidget(spinWidth);

        mLineUnitWidget = new QgsUnitSelectionWidget(pageLine);
        mLineUnitWidget->setObjectName(QStringLiteral("mLineUnitWidget"));

        horizontalLayout_6->addWidget(mLineUnitWidget);

        mWidthDDBtn = new QgsPropertyOverrideButton(pageLine);
        mWidthDDBtn->setObjectName(QStringLiteral("mWidthDDBtn"));

        horizontalLayout_6->addWidget(mWidthDDBtn);


        gridLayout_3->addLayout(horizontalLayout_6, 2, 1, 1, 1);

        mTransparencyLabel_3 = new QLabel(pageLine);
        mTransparencyLabel_3->setObjectName(QStringLiteral("mTransparencyLabel_3"));

        gridLayout_3->addWidget(mTransparencyLabel_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        mLineOpacityWidget = new QgsOpacityWidget(pageLine);
        mLineOpacityWidget->setObjectName(QStringLiteral("mLineOpacityWidget"));
        mLineOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(mLineOpacityWidget);

        mLineOpacityDDBtn = new QgsPropertyOverrideButton(pageLine);
        mLineOpacityDDBtn->setObjectName(QStringLiteral("mLineOpacityDDBtn"));

        horizontalLayout_4->addWidget(mLineOpacityDDBtn);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        btnLineColor = new QgsColorButton(pageLine);
        btnLineColor->setObjectName(QStringLiteral("btnLineColor"));
        sizePolicy2.setHeightForWidth(btnLineColor->sizePolicy().hasHeightForWidth());
        btnLineColor->setSizePolicy(sizePolicy2);
        btnLineColor->setMinimumSize(QSize(0, 0));
        btnLineColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(btnLineColor, 0, 1, 1, 1);

        stackedWidget->addWidget(pageLine);
        pageFill = new QWidget();
        pageFill->setObjectName(QStringLiteral("pageFill"));
        gridLayout_5 = new QGridLayout(pageFill);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        mFillUnitWidget = new QgsUnitSelectionWidget(pageFill);
        mFillUnitWidget->setObjectName(QStringLiteral("mFillUnitWidget"));

        gridLayout_5->addWidget(mFillUnitWidget, 2, 1, 1, 1);

        mTransparencyLabel_4 = new QLabel(pageFill);
        mTransparencyLabel_4->setObjectName(QStringLiteral("mTransparencyLabel_4"));

        gridLayout_5->addWidget(mTransparencyLabel_4, 1, 0, 1, 1);

        btnFillColor = new QgsColorButton(pageFill);
        btnFillColor->setObjectName(QStringLiteral("btnFillColor"));
        sizePolicy2.setHeightForWidth(btnFillColor->sizePolicy().hasHeightForWidth());
        btnFillColor->setSizePolicy(sizePolicy2);
        btnFillColor->setMinimumSize(QSize(0, 0));
        btnFillColor->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_5->addWidget(btnFillColor, 0, 1, 1, 1);

        label_8 = new QLabel(pageFill);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        mSymbolUnitLabel_2 = new QLabel(pageFill);
        mSymbolUnitLabel_2->setObjectName(QStringLiteral("mSymbolUnitLabel_2"));

        gridLayout_5->addWidget(mSymbolUnitLabel_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        mFillOpacityWidget = new QgsOpacityWidget(pageFill);
        mFillOpacityWidget->setObjectName(QStringLiteral("mFillOpacityWidget"));
        mFillOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(mFillOpacityWidget);

        mFillOpacityDDBtn = new QgsPropertyOverrideButton(pageFill);
        mFillOpacityDDBtn->setObjectName(QStringLiteral("mFillOpacityDDBtn"));

        horizontalLayout_2->addWidget(mFillOpacityDDBtn);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        stackedWidget->addWidget(pageFill);

        verticalLayout->addWidget(stackedWidget);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        mStyleItemsListWidget = new QgsStyleItemsListWidget(SymbolsListWidget);
        mStyleItemsListWidget->setObjectName(QStringLiteral("mStyleItemsListWidget"));

        gridLayout_4->addWidget(mStyleItemsListWidget, 2, 0, 1, 1);

        gridLayout_4->setRowStretch(2, 1);
        QWidget::setTabOrder(spinSize, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, spinSize);
        QWidget::setTabOrder(spinSize, mSizeDDBtn);
        QWidget::setTabOrder(mSizeDDBtn, spinAngle);
        QWidget::setTabOrder(spinAngle, mRotationDDBtn);
        QWidget::setTabOrder(mRotationDDBtn, spinWidth);
        QWidget::setTabOrder(spinWidth, mWidthDDBtn);

        retranslateUi(SymbolsListWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SymbolsListWidget);
    } // setupUi

    void retranslateUi(QWidget *SymbolsListWidget)
    {
        spinAngle->setSuffix(QApplication::translate("SymbolsListWidget", " \302\260", nullptr));
        mRotationDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", nullptr));
        label_3->setText(QApplication::translate("SymbolsListWidget", "Rotation", nullptr));
        btnMarkerColor->setText(QString());
        mTransparencyLabel_2->setText(QApplication::translate("SymbolsListWidget", "Opacity", nullptr));
        mMarkerOpacityDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", nullptr));
        label_7->setText(QApplication::translate("SymbolsListWidget", "Color", nullptr));
        mSizeDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", nullptr));
        label_2->setText(QApplication::translate("SymbolsListWidget", "Size", nullptr));
        label_6->setText(QApplication::translate("SymbolsListWidget", "Color", nullptr));
        label_4->setText(QApplication::translate("SymbolsListWidget", "Width", nullptr));
        mWidthDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", nullptr));
        mTransparencyLabel_3->setText(QApplication::translate("SymbolsListWidget", "Opacity", nullptr));
        mLineOpacityDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", nullptr));
        btnLineColor->setText(QString());
        mTransparencyLabel_4->setText(QApplication::translate("SymbolsListWidget", "Opacity", nullptr));
        btnFillColor->setText(QString());
        label_8->setText(QApplication::translate("SymbolsListWidget", "Color", nullptr));
        mSymbolUnitLabel_2->setText(QApplication::translate("SymbolsListWidget", "Unit", nullptr));
        mFillOpacityDDBtn->setText(QApplication::translate("SymbolsListWidget", "\342\200\246", nullptr));
        Q_UNUSED(SymbolsListWidget);
    } // retranslateUi

};

namespace Ui {
    class SymbolsListWidget: public Ui_SymbolsListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SYMBOLSLIST_H
