/********************************************************************************
** Form generated from reading UI file 'qgsfractionnumericformatwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFRACTIONNUMERICFORMATWIDGETBASE_H
#define UI_QGSFRACTIONNUMERICFORMATWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "qgsfilterlineedit.h"
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFractionNumericFormatWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mUseUnicodeSupersubscriptCheckBox;
    QCheckBox *mShowThousandsCheckBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *mShowPlusCheckBox;
    QgsFilterLineEdit *mThousandsLineEdit;
    QLabel *label_2;
    QCheckBox *mUseDedicatedUnicodeCheckBox;

    void setupUi(QgsPanelWidget *QgsFractionNumericFormatWidgetBase)
    {
        if (QgsFractionNumericFormatWidgetBase->objectName().isEmpty())
            QgsFractionNumericFormatWidgetBase->setObjectName(QStringLiteral("QgsFractionNumericFormatWidgetBase"));
        QgsFractionNumericFormatWidgetBase->resize(288, 289);
        QgsFractionNumericFormatWidgetBase->setWindowTitle(QStringLiteral("Form"));
        gridLayout = new QGridLayout(QgsFractionNumericFormatWidgetBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mUseUnicodeSupersubscriptCheckBox = new QCheckBox(QgsFractionNumericFormatWidgetBase);
        mUseUnicodeSupersubscriptCheckBox->setObjectName(QStringLiteral("mUseUnicodeSupersubscriptCheckBox"));

        gridLayout->addWidget(mUseUnicodeSupersubscriptCheckBox, 0, 0, 1, 2);

        mShowThousandsCheckBox = new QCheckBox(QgsFractionNumericFormatWidgetBase);
        mShowThousandsCheckBox->setObjectName(QStringLiteral("mShowThousandsCheckBox"));
        mShowThousandsCheckBox->setChecked(true);

        gridLayout->addWidget(mShowThousandsCheckBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        mShowPlusCheckBox = new QCheckBox(QgsFractionNumericFormatWidgetBase);
        mShowPlusCheckBox->setObjectName(QStringLiteral("mShowPlusCheckBox"));

        gridLayout->addWidget(mShowPlusCheckBox, 4, 0, 1, 2);

        mThousandsLineEdit = new QgsFilterLineEdit(QgsFractionNumericFormatWidgetBase);
        mThousandsLineEdit->setObjectName(QStringLiteral("mThousandsLineEdit"));
        mThousandsLineEdit->setMaxLength(1);

        gridLayout->addWidget(mThousandsLineEdit, 5, 1, 1, 1);

        label_2 = new QLabel(QgsFractionNumericFormatWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        mUseDedicatedUnicodeCheckBox = new QCheckBox(QgsFractionNumericFormatWidgetBase);
        mUseDedicatedUnicodeCheckBox->setObjectName(QStringLiteral("mUseDedicatedUnicodeCheckBox"));

        gridLayout->addWidget(mUseDedicatedUnicodeCheckBox, 1, 0, 1, 2);

        QWidget::setTabOrder(mUseUnicodeSupersubscriptCheckBox, mUseDedicatedUnicodeCheckBox);
        QWidget::setTabOrder(mUseDedicatedUnicodeCheckBox, mShowThousandsCheckBox);
        QWidget::setTabOrder(mShowThousandsCheckBox, mShowPlusCheckBox);
        QWidget::setTabOrder(mShowPlusCheckBox, mThousandsLineEdit);

        retranslateUi(QgsFractionNumericFormatWidgetBase);

        QMetaObject::connectSlotsByName(QgsFractionNumericFormatWidgetBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsFractionNumericFormatWidgetBase)
    {
#ifndef QT_NO_TOOLTIP
        mUseUnicodeSupersubscriptCheckBox->setToolTip(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Use the unicode superscript and subscript representation of numbers, e.g. \302\271\342\201\267/\342\202\202\342\202\203", nullptr));
#endif // QT_NO_TOOLTIP
        mUseUnicodeSupersubscriptCheckBox->setText(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Use Unicode super/subscript", nullptr));
        mShowThousandsCheckBox->setText(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Show thousands separator", nullptr));
        mShowPlusCheckBox->setText(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Show plus sign", nullptr));
        mThousandsLineEdit->setPlaceholderText(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Default", nullptr));
        label_2->setText(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Thousands separator", nullptr));
#ifndef QT_NO_TOOLTIP
        mUseDedicatedUnicodeCheckBox->setToolTip(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Use dedicated Unicode characters for specific fractions (where they exist), e.g. \302\275 or \302\276", nullptr));
#endif // QT_NO_TOOLTIP
        mUseDedicatedUnicodeCheckBox->setText(QApplication::translate("QgsFractionNumericFormatWidgetBase", "Use dedicated Unicode characters", nullptr));
        Q_UNUSED(QgsFractionNumericFormatWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsFractionNumericFormatWidgetBase: public Ui_QgsFractionNumericFormatWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFRACTIONNUMERICFORMATWIDGETBASE_H
