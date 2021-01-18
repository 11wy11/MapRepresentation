/********************************************************************************
** Form generated from reading UI file 'qgsfieldcalculatorbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDCALCULATORBASE_H
#define UI_QGSFIELDCALCULATORBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsexpressionbuilderwidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldCalculatorBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mOnlyUpdateSelectedCheckBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *mInfoIcon;
    QLabel *mEditModeAutoTurnOnLabel;
    QLabel *mOnlyVirtualFieldsInfoLabel;
    QGroupBox *mUpdateExistingGroupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *mExistingFieldComboBox;
    QgsExpressionBuilderWidget *builder;
    QDialogButtonBox *mButtonBox;
    QGroupBox *mNewFieldGroupBox;
    QGridLayout *gridLayout1;
    QgsSpinBox *mOutputFieldPrecisionSpinBox;
    QLabel *mFieldNameLabel;
    QLabel *mOutputFieldWidthLabel;
    QComboBox *mOutputFieldTypeComboBox;
    QgsSpinBox *mOutputFieldWidthSpinBox;
    QLineEdit *mOutputFieldNameLineEdit;
    QLabel *mOutputFieldTypeLabel;
    QLabel *mOutputFieldPrecisionLabel;
    QCheckBox *mCreateVirtualFieldCheckbox;

    void setupUi(QDialog *QgsFieldCalculatorBase)
    {
        if (QgsFieldCalculatorBase->objectName().isEmpty())
            QgsFieldCalculatorBase->setObjectName(QStringLiteral("QgsFieldCalculatorBase"));
        QgsFieldCalculatorBase->resize(681, 624);
        gridLayout = new QGridLayout(QgsFieldCalculatorBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mOnlyUpdateSelectedCheckBox = new QCheckBox(QgsFieldCalculatorBase);
        mOnlyUpdateSelectedCheckBox->setObjectName(QStringLiteral("mOnlyUpdateSelectedCheckBox"));

        gridLayout->addWidget(mOnlyUpdateSelectedCheckBox, 0, 0, 1, 1);

        widget = new QWidget(QgsFieldCalculatorBase);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mInfoIcon = new QLabel(widget);
        mInfoIcon->setObjectName(QStringLiteral("mInfoIcon"));
        mInfoIcon->setMinimumSize(QSize(64, 64));
        mInfoIcon->setMaximumSize(QSize(64, 64));

        gridLayout_2->addWidget(mInfoIcon, 0, 0, 1, 1);

        mEditModeAutoTurnOnLabel = new QLabel(widget);
        mEditModeAutoTurnOnLabel->setObjectName(QStringLiteral("mEditModeAutoTurnOnLabel"));
        mEditModeAutoTurnOnLabel->setWordWrap(true);

        gridLayout_2->addWidget(mEditModeAutoTurnOnLabel, 0, 1, 1, 1);

        mOnlyVirtualFieldsInfoLabel = new QLabel(widget);
        mOnlyVirtualFieldsInfoLabel->setObjectName(QStringLiteral("mOnlyVirtualFieldsInfoLabel"));
        mOnlyVirtualFieldsInfoLabel->setWordWrap(true);

        gridLayout_2->addWidget(mOnlyVirtualFieldsInfoLabel, 1, 1, 1, 1);


        gridLayout->addWidget(widget, 3, 0, 1, 2);

        mUpdateExistingGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mUpdateExistingGroupBox->setObjectName(QStringLiteral("mUpdateExistingGroupBox"));
        mUpdateExistingGroupBox->setFlat(true);
        mUpdateExistingGroupBox->setCheckable(true);
        mUpdateExistingGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(mUpdateExistingGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 9, 3, 0);
        mExistingFieldComboBox = new QComboBox(mUpdateExistingGroupBox);
        mExistingFieldComboBox->setObjectName(QStringLiteral("mExistingFieldComboBox"));

        verticalLayout->addWidget(mExistingFieldComboBox);


        gridLayout->addWidget(mUpdateExistingGroupBox, 1, 1, 1, 1);

        builder = new QgsExpressionBuilderWidget(QgsFieldCalculatorBase);
        builder->setObjectName(QStringLiteral("builder"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(builder->sizePolicy().hasHeightForWidth());
        builder->setSizePolicy(sizePolicy);
        builder->setAutoFillBackground(false);

        gridLayout->addWidget(builder, 2, 0, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsFieldCalculatorBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy1);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 7, 0, 1, 2);

        mNewFieldGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mNewFieldGroupBox->setObjectName(QStringLiteral("mNewFieldGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mNewFieldGroupBox->sizePolicy().hasHeightForWidth());
        mNewFieldGroupBox->setSizePolicy(sizePolicy2);
        mNewFieldGroupBox->setFlat(true);
        mNewFieldGroupBox->setCheckable(true);
        mNewFieldGroupBox->setChecked(true);
        gridLayout1 = new QGridLayout(mNewFieldGroupBox);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout1->setVerticalSpacing(3);
        gridLayout1->setContentsMargins(3, 9, 3, 0);
        mOutputFieldPrecisionSpinBox = new QgsSpinBox(mNewFieldGroupBox);
        mOutputFieldPrecisionSpinBox->setObjectName(QStringLiteral("mOutputFieldPrecisionSpinBox"));
        mOutputFieldPrecisionSpinBox->setValue(2);

        gridLayout1->addWidget(mOutputFieldPrecisionSpinBox, 5, 3, 1, 1);

        mFieldNameLabel = new QLabel(mNewFieldGroupBox);
        mFieldNameLabel->setObjectName(QStringLiteral("mFieldNameLabel"));

        gridLayout1->addWidget(mFieldNameLabel, 3, 0, 1, 1);

        mOutputFieldWidthLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldWidthLabel->setObjectName(QStringLiteral("mOutputFieldWidthLabel"));

        gridLayout1->addWidget(mOutputFieldWidthLabel, 5, 0, 1, 1);

        mOutputFieldTypeComboBox = new QComboBox(mNewFieldGroupBox);
        mOutputFieldTypeComboBox->setObjectName(QStringLiteral("mOutputFieldTypeComboBox"));

        gridLayout1->addWidget(mOutputFieldTypeComboBox, 4, 1, 1, 3);

        mOutputFieldWidthSpinBox = new QgsSpinBox(mNewFieldGroupBox);
        mOutputFieldWidthSpinBox->setObjectName(QStringLiteral("mOutputFieldWidthSpinBox"));
        mOutputFieldWidthSpinBox->setMinimum(0);
        mOutputFieldWidthSpinBox->setValue(15);

        gridLayout1->addWidget(mOutputFieldWidthSpinBox, 5, 1, 1, 1);

        mOutputFieldNameLineEdit = new QLineEdit(mNewFieldGroupBox);
        mOutputFieldNameLineEdit->setObjectName(QStringLiteral("mOutputFieldNameLineEdit"));

        gridLayout1->addWidget(mOutputFieldNameLineEdit, 3, 1, 1, 3);

        mOutputFieldTypeLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldTypeLabel->setObjectName(QStringLiteral("mOutputFieldTypeLabel"));

        gridLayout1->addWidget(mOutputFieldTypeLabel, 4, 0, 1, 1);

        mOutputFieldPrecisionLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldPrecisionLabel->setObjectName(QStringLiteral("mOutputFieldPrecisionLabel"));

        gridLayout1->addWidget(mOutputFieldPrecisionLabel, 5, 2, 1, 1);

        mCreateVirtualFieldCheckbox = new QCheckBox(mNewFieldGroupBox);
        mCreateVirtualFieldCheckbox->setObjectName(QStringLiteral("mCreateVirtualFieldCheckbox"));

        gridLayout1->addWidget(mCreateVirtualFieldCheckbox, 2, 0, 1, 4);


        gridLayout->addWidget(mNewFieldGroupBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mFieldNameLabel->setBuddy(mOutputFieldNameLineEdit);
        mOutputFieldWidthLabel->setBuddy(mOutputFieldWidthSpinBox);
        mOutputFieldTypeLabel->setBuddy(mOutputFieldTypeComboBox);
        mOutputFieldPrecisionLabel->setBuddy(mOutputFieldPrecisionSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOnlyUpdateSelectedCheckBox, mNewFieldGroupBox);
        QWidget::setTabOrder(mNewFieldGroupBox, mCreateVirtualFieldCheckbox);
        QWidget::setTabOrder(mCreateVirtualFieldCheckbox, mOutputFieldNameLineEdit);
        QWidget::setTabOrder(mOutputFieldNameLineEdit, mOutputFieldTypeComboBox);
        QWidget::setTabOrder(mOutputFieldTypeComboBox, mOutputFieldWidthSpinBox);
        QWidget::setTabOrder(mOutputFieldWidthSpinBox, mOutputFieldPrecisionSpinBox);
        QWidget::setTabOrder(mOutputFieldPrecisionSpinBox, mUpdateExistingGroupBox);
        QWidget::setTabOrder(mUpdateExistingGroupBox, mExistingFieldComboBox);
        QWidget::setTabOrder(mExistingFieldComboBox, mButtonBox);

        retranslateUi(QgsFieldCalculatorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFieldCalculatorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFieldCalculatorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFieldCalculatorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFieldCalculatorBase)
    {
        QgsFieldCalculatorBase->setWindowTitle(QApplication::translate("QgsFieldCalculatorBase", "Field Calculator", nullptr));
        mOnlyUpdateSelectedCheckBox->setText(QApplication::translate("QgsFieldCalculatorBase", "Only update selected features", nullptr));
        mInfoIcon->setText(QString());
        mEditModeAutoTurnOnLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "You are editing information on this layer but the layer is currently not in edit mode. If you click OK, edit mode will automatically be turned on.", nullptr));
        mOnlyVirtualFieldsInfoLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "This layer does not support adding new provider fields. You can only add virtual fields.", nullptr));
        mUpdateExistingGroupBox->setTitle(QApplication::translate("QgsFieldCalculatorBase", "Update existing field", nullptr));
        mNewFieldGroupBox->setTitle(QApplication::translate("QgsFieldCalculatorBase", "Create a new field", nullptr));
#ifndef QT_NO_TOOLTIP
        mOutputFieldPrecisionSpinBox->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "Maximum number of digits after the decimal place. For example 123.45 requires a field precision of 2.", nullptr));
#endif // QT_NO_TOOLTIP
        mFieldNameLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field name", nullptr));
#ifndef QT_NO_TOOLTIP
        mOutputFieldWidthLabel->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "Total length of field (including the number of digits after the decimal place for decimal fields).<br>For example 123.45 requires a decimal field length of 5, and 123456 requires an integer field length of 6.", nullptr));
#endif // QT_NO_TOOLTIP
        mOutputFieldWidthLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field length", nullptr));
#ifndef QT_NO_TOOLTIP
        mOutputFieldWidthSpinBox->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "Total length of field (including the number of digits after the decimal place for decimal fields).<br>For example 123.45 requires a decimal field length of 5, and 123456 requires an integer field length of 6.", nullptr));
#endif // QT_NO_TOOLTIP
        mOutputFieldTypeLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field type", nullptr));
#ifndef QT_NO_TOOLTIP
        mOutputFieldPrecisionLabel->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "Maximum number of digits after the decimal place. For example 123.45 requires a field precision of 2.", nullptr));
#endif // QT_NO_TOOLTIP
        mOutputFieldPrecisionLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Precision", nullptr));
#ifndef QT_NO_TOOLTIP
        mCreateVirtualFieldCheckbox->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "<p>A virtual field will be recalculated every time it is used. Its definition will be saved in the project file. It will not be saved in the dataprovider and therefore its values not be available in other software.</p>", nullptr));
#endif // QT_NO_TOOLTIP
        mCreateVirtualFieldCheckbox->setText(QApplication::translate("QgsFieldCalculatorBase", "Create virtual field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsFieldCalculatorBase: public Ui_QgsFieldCalculatorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCALCULATORBASE_H
