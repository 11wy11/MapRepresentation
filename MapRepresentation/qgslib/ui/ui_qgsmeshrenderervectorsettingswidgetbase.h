/********************************************************************************
** Form generated from reading UI file 'qgsmeshrenderervectorsettingswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
#define UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"
#include "raster/qgscolorrampshaderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeshRendererVectorSettingsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QgsColorButton *mColorWidget;
    QComboBox *mColoringMethodComboBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *mTracesGroupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QgsSpinBox *mTracesParticlesCountSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QgsDoubleSpinBox *mTracesMaxLengthSpinBox;
    QgsUnitSelectionWidget *mTracesTailLengthMapUnitWidget;
    QgsCollapsibleGroupBox *mColorRampShaderGroupBox;
    QGridLayout *gridLayout_5;
    QPushButton *mColorRampShaderLoadButton;
    QFrame *line;
    QLabel *label_5;
    QLineEdit *mColorRampShaderMaximumEditLine;
    QLabel *label;
    QLineEdit *mColorRampShaderMinimumEditLine;
    QgsColorRampShaderWidget *mColorRampShaderWidget;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QComboBox *mSymbologyVectorComboBox;
    QGridLayout *gridLayout_3;
    QLabel *minimumMagLabel;
    QLabel *maximumMagLabel;
    QLineEdit *mMaxMagLineEdit;
    QLineEdit *mMinMagLineEdit;
    QLabel *filterByMagnitudeLabel;
    QGroupBox *mStreamlineWidget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *mStreamlinesSeedingMethodComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mStreamlinesDensityLabel;
    QgsDoubleSpinBox *mStreamlinesDensitySpinBox;
    QLabel *symbologyLabel;
    QLabel *label_6;
    QGroupBox *mDisplayVectorsOnGridGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *xSpacingLabel;
    QgsSpinBox *mXSpacingSpinBox;
    QLabel *ySpacingLabel;
    QgsSpinBox *mYSpacingSpinBox;
    QGroupBox *headOptionsGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *headWidthLabel;
    QLineEdit *mHeadWidthLineEdit;
    QLabel *percShaftLenLabel;
    QLabel *headLengthLabel;
    QLineEdit *mHeadLengthLineEdit;
    QLabel *percShaftLenLabel_2;
    QLabel *mSingleColorLabel;
    QgsDoubleSpinBox *mLineWidthSpinBox;
    QGroupBox *generalOptionsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *mShaftLengthComboBox;
    QStackedWidget *mShaftOptionsStackedWidget;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *minimumShaftLabel;
    QLineEdit *mMinimumShaftLineEdit;
    QLabel *maximumShaftLabel;
    QLineEdit *mMaximumShaftLineEdit;
    QWidget *page_2;
    QFormLayout *formLayout_2;
    QLabel *scaleByFactorOfLabel;
    QLineEdit *mScaleShaftByFactorOfLineEdit;
    QWidget *page_3;
    QFormLayout *formLayout_3;
    QLabel *LengthLabel;
    QLineEdit *mShaftLengthLineEdit;
    QWidget *mArrowWidget;
    QVBoxLayout *verticalLayout_4;

    void setupUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        if (QgsMeshRendererVectorSettingsWidgetBase->objectName().isEmpty())
            QgsMeshRendererVectorSettingsWidgetBase->setObjectName(QStringLiteral("QgsMeshRendererVectorSettingsWidgetBase"));
        QgsMeshRendererVectorSettingsWidgetBase->resize(399, 861);
        QgsMeshRendererVectorSettingsWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsMeshRendererVectorSettingsWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mColorWidget = new QgsColorButton(QgsMeshRendererVectorSettingsWidgetBase);
        mColorWidget->setObjectName(QStringLiteral("mColorWidget"));

        gridLayout->addWidget(mColorWidget, 5, 1, 1, 1);

        mColoringMethodComboBox = new QComboBox(QgsMeshRendererVectorSettingsWidgetBase);
        mColoringMethodComboBox->setObjectName(QStringLiteral("mColoringMethodComboBox"));

        gridLayout->addWidget(mColoringMethodComboBox, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 15, 0, 1, 1);

        mTracesGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mTracesGroupBox->setObjectName(QStringLiteral("mTracesGroupBox"));
        verticalLayout_6 = new QVBoxLayout(mTracesGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(mTracesGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        mTracesParticlesCountSpinBox = new QgsSpinBox(mTracesGroupBox);
        mTracesParticlesCountSpinBox->setObjectName(QStringLiteral("mTracesParticlesCountSpinBox"));
        mTracesParticlesCountSpinBox->setMaximum(1000000);
        mTracesParticlesCountSpinBox->setSingleStep(100);
        mTracesParticlesCountSpinBox->setValue(1000);

        horizontalLayout_6->addWidget(mTracesParticlesCountSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(mTracesGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        mTracesMaxLengthSpinBox = new QgsDoubleSpinBox(mTracesGroupBox);
        mTracesMaxLengthSpinBox->setObjectName(QStringLiteral("mTracesMaxLengthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTracesMaxLengthSpinBox->sizePolicy().hasHeightForWidth());
        mTracesMaxLengthSpinBox->setSizePolicy(sizePolicy);
        mTracesMaxLengthSpinBox->setMinimumSize(QSize(0, 0));
        mTracesMaxLengthSpinBox->setMaximumSize(QSize(16777215, 16777215));
        mTracesMaxLengthSpinBox->setMinimum(1);
        mTracesMaxLengthSpinBox->setMaximum(1e+14);
        mTracesMaxLengthSpinBox->setSingleStep(10);
        mTracesMaxLengthSpinBox->setValue(10);

        horizontalLayout_7->addWidget(mTracesMaxLengthSpinBox);

        mTracesTailLengthMapUnitWidget = new QgsUnitSelectionWidget(mTracesGroupBox);
        mTracesTailLengthMapUnitWidget->setObjectName(QStringLiteral("mTracesTailLengthMapUnitWidget"));

        horizontalLayout_7->addWidget(mTracesTailLengthMapUnitWidget);


        verticalLayout_6->addLayout(horizontalLayout_7);


        gridLayout->addWidget(mTracesGroupBox, 14, 0, 1, 2);

        mColorRampShaderGroupBox = new QgsCollapsibleGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mColorRampShaderGroupBox->setObjectName(QStringLiteral("mColorRampShaderGroupBox"));
        gridLayout_5 = new QGridLayout(mColorRampShaderGroupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mColorRampShaderLoadButton = new QPushButton(mColorRampShaderGroupBox);
        mColorRampShaderLoadButton->setObjectName(QStringLiteral("mColorRampShaderLoadButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mColorRampShaderLoadButton->setIcon(icon);

        gridLayout_5->addWidget(mColorRampShaderLoadButton, 0, 4, 1, 1);

        line = new QFrame(mColorRampShaderGroupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 5);

        label_5 = new QLabel(mColorRampShaderGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 0, 2, 1, 1);

        mColorRampShaderMaximumEditLine = new QLineEdit(mColorRampShaderGroupBox);
        mColorRampShaderMaximumEditLine->setObjectName(QStringLiteral("mColorRampShaderMaximumEditLine"));

        gridLayout_5->addWidget(mColorRampShaderMaximumEditLine, 0, 3, 1, 1);

        label = new QLabel(mColorRampShaderGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        mColorRampShaderMinimumEditLine = new QLineEdit(mColorRampShaderGroupBox);
        mColorRampShaderMinimumEditLine->setObjectName(QStringLiteral("mColorRampShaderMinimumEditLine"));

        gridLayout_5->addWidget(mColorRampShaderMinimumEditLine, 0, 1, 1, 1);

        mColorRampShaderWidget = new QgsColorRampShaderWidget(mColorRampShaderGroupBox);
        mColorRampShaderWidget->setObjectName(QStringLiteral("mColorRampShaderWidget"));
        mColorRampShaderWidget->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(mColorRampShaderWidget, 2, 0, 1, 5);


        gridLayout->addWidget(mColorRampShaderGroupBox, 6, 0, 1, 2);

        label_4 = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        widget = new QWidget(QgsMeshRendererVectorSettingsWidgetBase);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        mSymbologyVectorComboBox = new QComboBox(QgsMeshRendererVectorSettingsWidgetBase);
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->addItem(QString());
        mSymbologyVectorComboBox->setObjectName(QStringLiteral("mSymbologyVectorComboBox"));

        gridLayout->addWidget(mSymbologyVectorComboBox, 2, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        minimumMagLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        minimumMagLabel->setObjectName(QStringLiteral("minimumMagLabel"));

        gridLayout_3->addWidget(minimumMagLabel, 0, 1, 1, 1);

        maximumMagLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        maximumMagLabel->setObjectName(QStringLiteral("maximumMagLabel"));

        gridLayout_3->addWidget(maximumMagLabel, 1, 1, 1, 1);

        mMaxMagLineEdit = new QLineEdit(QgsMeshRendererVectorSettingsWidgetBase);
        mMaxMagLineEdit->setObjectName(QStringLiteral("mMaxMagLineEdit"));

        gridLayout_3->addWidget(mMaxMagLineEdit, 1, 2, 1, 1);

        mMinMagLineEdit = new QLineEdit(QgsMeshRendererVectorSettingsWidgetBase);
        mMinMagLineEdit->setObjectName(QStringLiteral("mMinMagLineEdit"));

        gridLayout_3->addWidget(mMinMagLineEdit, 0, 2, 1, 1);

        filterByMagnitudeLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        filterByMagnitudeLabel->setObjectName(QStringLiteral("filterByMagnitudeLabel"));

        gridLayout_3->addWidget(filterByMagnitudeLabel, 0, 0, 2, 1);


        gridLayout->addLayout(gridLayout_3, 7, 0, 1, 2);

        mStreamlineWidget = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mStreamlineWidget->setObjectName(QStringLiteral("mStreamlineWidget"));
        horizontalLayout_4 = new QHBoxLayout(mStreamlineWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mStreamlinesSeedingMethodComboBox = new QComboBox(mStreamlineWidget);
        mStreamlinesSeedingMethodComboBox->addItem(QString());
        mStreamlinesSeedingMethodComboBox->addItem(QString());
        mStreamlinesSeedingMethodComboBox->setObjectName(QStringLiteral("mStreamlinesSeedingMethodComboBox"));

        horizontalLayout_4->addWidget(mStreamlinesSeedingMethodComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mStreamlinesDensityLabel = new QLabel(mStreamlineWidget);
        mStreamlinesDensityLabel->setObjectName(QStringLiteral("mStreamlinesDensityLabel"));

        horizontalLayout->addWidget(mStreamlinesDensityLabel);

        mStreamlinesDensitySpinBox = new QgsDoubleSpinBox(mStreamlineWidget);
        mStreamlinesDensitySpinBox->setObjectName(QStringLiteral("mStreamlinesDensitySpinBox"));
        mStreamlinesDensitySpinBox->setDecimals(1);
        mStreamlinesDensitySpinBox->setValue(5);

        horizontalLayout->addWidget(mStreamlinesDensitySpinBox);

        horizontalLayout->setStretch(0, 1);

        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 2);

        gridLayout->addWidget(mStreamlineWidget, 13, 0, 1, 2);

        symbologyLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        symbologyLabel->setObjectName(QStringLiteral("symbologyLabel"));

        gridLayout->addWidget(symbologyLabel, 2, 0, 1, 1);

        label_6 = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        mDisplayVectorsOnGridGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        mDisplayVectorsOnGridGroupBox->setObjectName(QStringLiteral("mDisplayVectorsOnGridGroupBox"));
        mDisplayVectorsOnGridGroupBox->setCheckable(true);
        mDisplayVectorsOnGridGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(mDisplayVectorsOnGridGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        xSpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        xSpacingLabel->setObjectName(QStringLiteral("xSpacingLabel"));

        gridLayout_2->addWidget(xSpacingLabel, 0, 0, 1, 1);

        mXSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mXSpacingSpinBox->setObjectName(QStringLiteral("mXSpacingSpinBox"));
        mXSpacingSpinBox->setMinimum(1);
        mXSpacingSpinBox->setMaximum(8000);
        mXSpacingSpinBox->setSingleStep(10);
        mXSpacingSpinBox->setValue(10);

        gridLayout_2->addWidget(mXSpacingSpinBox, 0, 1, 1, 1);

        ySpacingLabel = new QLabel(mDisplayVectorsOnGridGroupBox);
        ySpacingLabel->setObjectName(QStringLiteral("ySpacingLabel"));

        gridLayout_2->addWidget(ySpacingLabel, 1, 0, 1, 1);

        mYSpacingSpinBox = new QgsSpinBox(mDisplayVectorsOnGridGroupBox);
        mYSpacingSpinBox->setObjectName(QStringLiteral("mYSpacingSpinBox"));
        mYSpacingSpinBox->setMinimum(1);
        mYSpacingSpinBox->setMaximum(5000);
        mYSpacingSpinBox->setSingleStep(10);
        mYSpacingSpinBox->setValue(10);

        gridLayout_2->addWidget(mYSpacingSpinBox, 1, 1, 1, 1);


        gridLayout->addWidget(mDisplayVectorsOnGridGroupBox, 10, 0, 1, 2);

        headOptionsGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        headOptionsGroupBox->setObjectName(QStringLiteral("headOptionsGroupBox"));
        gridLayout_4 = new QGridLayout(headOptionsGroupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        headWidthLabel = new QLabel(headOptionsGroupBox);
        headWidthLabel->setObjectName(QStringLiteral("headWidthLabel"));

        gridLayout_4->addWidget(headWidthLabel, 0, 0, 1, 1);

        mHeadWidthLineEdit = new QLineEdit(headOptionsGroupBox);
        mHeadWidthLineEdit->setObjectName(QStringLiteral("mHeadWidthLineEdit"));

        gridLayout_4->addWidget(mHeadWidthLineEdit, 0, 1, 1, 1);

        percShaftLenLabel = new QLabel(headOptionsGroupBox);
        percShaftLenLabel->setObjectName(QStringLiteral("percShaftLenLabel"));

        gridLayout_4->addWidget(percShaftLenLabel, 0, 2, 1, 1);

        headLengthLabel = new QLabel(headOptionsGroupBox);
        headLengthLabel->setObjectName(QStringLiteral("headLengthLabel"));

        gridLayout_4->addWidget(headLengthLabel, 1, 0, 1, 1);

        mHeadLengthLineEdit = new QLineEdit(headOptionsGroupBox);
        mHeadLengthLineEdit->setObjectName(QStringLiteral("mHeadLengthLineEdit"));

        gridLayout_4->addWidget(mHeadLengthLineEdit, 1, 1, 1, 1);

        percShaftLenLabel_2 = new QLabel(headOptionsGroupBox);
        percShaftLenLabel_2->setObjectName(QStringLiteral("percShaftLenLabel_2"));

        gridLayout_4->addWidget(percShaftLenLabel_2, 1, 2, 1, 1);


        gridLayout->addWidget(headOptionsGroupBox, 11, 0, 1, 2);

        mSingleColorLabel = new QLabel(QgsMeshRendererVectorSettingsWidgetBase);
        mSingleColorLabel->setObjectName(QStringLiteral("mSingleColorLabel"));

        gridLayout->addWidget(mSingleColorLabel, 5, 0, 1, 1);

        mLineWidthSpinBox = new QgsDoubleSpinBox(QgsMeshRendererVectorSettingsWidgetBase);
        mLineWidthSpinBox->setObjectName(QStringLiteral("mLineWidthSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLineWidthSpinBox, 3, 1, 1, 1);

        generalOptionsGroupBox = new QGroupBox(QgsMeshRendererVectorSettingsWidgetBase);
        generalOptionsGroupBox->setObjectName(QStringLiteral("generalOptionsGroupBox"));
        verticalLayout_2 = new QVBoxLayout(generalOptionsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mShaftLengthComboBox = new QComboBox(generalOptionsGroupBox);
        mShaftLengthComboBox->addItem(QString());
        mShaftLengthComboBox->addItem(QString());
        mShaftLengthComboBox->addItem(QString());
        mShaftLengthComboBox->setObjectName(QStringLiteral("mShaftLengthComboBox"));
        mShaftLengthComboBox->setMinimumSize(QSize(0, 0));
        mShaftLengthComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout_2->addWidget(mShaftLengthComboBox);

        mShaftOptionsStackedWidget = new QStackedWidget(generalOptionsGroupBox);
        mShaftOptionsStackedWidget->setObjectName(QStringLiteral("mShaftOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        minimumShaftLabel = new QLabel(page);
        minimumShaftLabel->setObjectName(QStringLiteral("minimumShaftLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumShaftLabel);

        mMinimumShaftLineEdit = new QLineEdit(page);
        mMinimumShaftLineEdit->setObjectName(QStringLiteral("mMinimumShaftLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mMinimumShaftLineEdit);

        maximumShaftLabel = new QLabel(page);
        maximumShaftLabel->setObjectName(QStringLiteral("maximumShaftLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumShaftLabel);

        mMaximumShaftLineEdit = new QLineEdit(page);
        mMaximumShaftLineEdit->setObjectName(QStringLiteral("mMaximumShaftLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mMaximumShaftLineEdit);

        mShaftOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout_2 = new QFormLayout(page_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        scaleByFactorOfLabel = new QLabel(page_2);
        scaleByFactorOfLabel->setObjectName(QStringLiteral("scaleByFactorOfLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, scaleByFactorOfLabel);

        mScaleShaftByFactorOfLineEdit = new QLineEdit(page_2);
        mScaleShaftByFactorOfLineEdit->setObjectName(QStringLiteral("mScaleShaftByFactorOfLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mScaleShaftByFactorOfLineEdit);

        mShaftOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        formLayout_3 = new QFormLayout(page_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        LengthLabel = new QLabel(page_3);
        LengthLabel->setObjectName(QStringLiteral("LengthLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, LengthLabel);

        mShaftLengthLineEdit = new QLineEdit(page_3);
        mShaftLengthLineEdit->setObjectName(QStringLiteral("mShaftLengthLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mShaftLengthLineEdit);

        mShaftOptionsStackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(mShaftOptionsStackedWidget);

        mArrowWidget = new QWidget(generalOptionsGroupBox);
        mArrowWidget->setObjectName(QStringLiteral("mArrowWidget"));
        verticalLayout_4 = new QVBoxLayout(mArrowWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(mArrowWidget);


        gridLayout->addWidget(generalOptionsGroupBox, 12, 0, 1, 2);

        QWidget::setTabOrder(mSymbologyVectorComboBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mColoringMethodComboBox);
        QWidget::setTabOrder(mColoringMethodComboBox, mColorWidget);
        QWidget::setTabOrder(mColorWidget, mColorRampShaderMinimumEditLine);
        QWidget::setTabOrder(mColorRampShaderMinimumEditLine, mColorRampShaderMaximumEditLine);
        QWidget::setTabOrder(mColorRampShaderMaximumEditLine, mColorRampShaderLoadButton);
        QWidget::setTabOrder(mColorRampShaderLoadButton, mMinMagLineEdit);
        QWidget::setTabOrder(mMinMagLineEdit, mMaxMagLineEdit);
        QWidget::setTabOrder(mMaxMagLineEdit, mDisplayVectorsOnGridGroupBox);
        QWidget::setTabOrder(mDisplayVectorsOnGridGroupBox, mXSpacingSpinBox);
        QWidget::setTabOrder(mXSpacingSpinBox, mYSpacingSpinBox);
        QWidget::setTabOrder(mYSpacingSpinBox, mHeadWidthLineEdit);
        QWidget::setTabOrder(mHeadWidthLineEdit, mHeadLengthLineEdit);
        QWidget::setTabOrder(mHeadLengthLineEdit, mShaftLengthComboBox);
        QWidget::setTabOrder(mShaftLengthComboBox, mMinimumShaftLineEdit);
        QWidget::setTabOrder(mMinimumShaftLineEdit, mMaximumShaftLineEdit);
        QWidget::setTabOrder(mMaximumShaftLineEdit, mStreamlinesSeedingMethodComboBox);
        QWidget::setTabOrder(mStreamlinesSeedingMethodComboBox, mStreamlinesDensitySpinBox);
        QWidget::setTabOrder(mStreamlinesDensitySpinBox, mTracesParticlesCountSpinBox);
        QWidget::setTabOrder(mTracesParticlesCountSpinBox, mTracesMaxLengthSpinBox);
        QWidget::setTabOrder(mTracesMaxLengthSpinBox, mTracesTailLengthMapUnitWidget);
        QWidget::setTabOrder(mTracesTailLengthMapUnitWidget, mShaftLengthLineEdit);
        QWidget::setTabOrder(mShaftLengthLineEdit, mScaleShaftByFactorOfLineEdit);

        retranslateUi(QgsMeshRendererVectorSettingsWidgetBase);

        mShaftOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsMeshRendererVectorSettingsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMeshRendererVectorSettingsWidgetBase)
    {
        mTracesGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Traces", nullptr));
        label_2->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Particles count", nullptr));
        label_3->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max tail length", nullptr));
        mColorRampShaderGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Color Ramp Shader", nullptr));
        mColorRampShaderLoadButton->setText(QString());
        label_5->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", nullptr));
        label->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", nullptr));
        label_4->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Coloring Method", nullptr));
        mSymbologyVectorComboBox->setItemText(0, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrows", nullptr));
        mSymbologyVectorComboBox->setItemText(1, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Streamlines", nullptr));
        mSymbologyVectorComboBox->setItemText(2, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Traces", nullptr));

        minimumMagLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Min", nullptr));
        maximumMagLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Max", nullptr));
        filterByMagnitudeLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Filter by magnitude", nullptr));
        mStreamlineWidget->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Streamlines Seeding Method", nullptr));
        mStreamlinesSeedingMethodComboBox->setItemText(0, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "On Mesh/Grid", nullptr));
        mStreamlinesSeedingMethodComboBox->setItemText(1, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Randomly", nullptr));

        mStreamlinesDensityLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Density", nullptr));
        mStreamlinesDensitySpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "%", nullptr));
        symbologyLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Symbology", nullptr));
        label_6->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Line width", nullptr));
        mDisplayVectorsOnGridGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Display on User Grid", nullptr));
        xSpacingLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "X Spacing", nullptr));
        mXSpacingSpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", nullptr));
        ySpacingLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Y Spacing", nullptr));
        mYSpacingSpinBox->setSuffix(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", " px", nullptr));
        headOptionsGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Head Options", nullptr));
        headWidthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Width", nullptr));
        percShaftLenLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of shaft length", nullptr));
        headLengthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", nullptr));
        percShaftLenLabel_2->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "% of shaft length", nullptr));
        mSingleColorLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Color", nullptr));
        generalOptionsGroupBox->setTitle(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Arrow Length", nullptr));
        mShaftLengthComboBox->setItemText(0, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Defined by Min and Max", nullptr));
        mShaftLengthComboBox->setItemText(1, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scaled to Magnitude", nullptr));
        mShaftLengthComboBox->setItemText(2, QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Fixed", nullptr));

        minimumShaftLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Minimum", nullptr));
        maximumShaftLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Maximum", nullptr));
        scaleByFactorOfLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Scale by a factor of", nullptr));
        LengthLabel->setText(QApplication::translate("QgsMeshRendererVectorSettingsWidgetBase", "Length", nullptr));
        Q_UNUSED(QgsMeshRendererVectorSettingsWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeshRendererVectorSettingsWidgetBase: public Ui_QgsMeshRendererVectorSettingsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESHRENDERERVECTORSETTINGSWIDGETBASE_H
