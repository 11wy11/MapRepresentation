/********************************************************************************
** Form generated from reading UI file 'qgslayoutnewitemproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTNEWITEMPROPERTIES_H
#define UI_QGSLAYOUTNEWITEMPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsdoublespinbox.h"
#include "qgslayoutunitscombobox.h"
#include "qgsratiolockbutton.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutNewItemPropertiesDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QRadioButton *mUpperLeftRadioButton;
    QRadioButton *mUpperMiddleRadioButton;
    QRadioButton *mUpperRightRadioButton;
    QRadioButton *mMiddleLeftRadioButton;
    QRadioButton *mMiddleRadioButton;
    QRadioButton *mMiddleRightRadioButton;
    QRadioButton *mLowerRightRadioButton;
    QRadioButton *mLowerMiddleRadioButton;
    QRadioButton *mLowerLeftRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QgsDoubleSpinBox *mYPosSpin;
    QLabel *mHeightLabel;
    QgsDoubleSpinBox *mWidthSpin;
    QgsLayoutUnitsComboBox *mSizeUnitsComboBox;
    QLabel *mWidthLabel;
    QLabel *mYLabel;
    QLabel *mXLabel;
    QgsLayoutUnitsComboBox *mPosUnitsComboBox;
    QHBoxLayout *_2;
    QgsRatioLockButton *mLockAspectRatio;
    QgsDoubleSpinBox *mHeightSpin;
    QgsDoubleSpinBox *mXPosSpin;
    QHBoxLayout *horizontalLayout;
    QgsSpinBox *mPageSpin;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;

    void setupUi(QDialog *QgsLayoutNewItemPropertiesDialog)
    {
        if (QgsLayoutNewItemPropertiesDialog->objectName().isEmpty())
            QgsLayoutNewItemPropertiesDialog->setObjectName(QStringLiteral("QgsLayoutNewItemPropertiesDialog"));
        QgsLayoutNewItemPropertiesDialog->resize(525, 278);
        gridLayout_4 = new QGridLayout(QgsLayoutNewItemPropertiesDialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_2 = new QGroupBox(QgsLayoutNewItemPropertiesDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mUpperLeftRadioButton = new QRadioButton(groupBox_2);
        mUpperLeftRadioButton->setObjectName(QStringLiteral("mUpperLeftRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mUpperLeftRadioButton->sizePolicy().hasHeightForWidth());
        mUpperLeftRadioButton->setSizePolicy(sizePolicy);
        mUpperLeftRadioButton->setChecked(true);

        gridLayout->addWidget(mUpperLeftRadioButton, 0, 0, 1, 1);

        mUpperMiddleRadioButton = new QRadioButton(groupBox_2);
        mUpperMiddleRadioButton->setObjectName(QStringLiteral("mUpperMiddleRadioButton"));
        sizePolicy.setHeightForWidth(mUpperMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mUpperMiddleRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mUpperMiddleRadioButton, 0, 1, 1, 1);

        mUpperRightRadioButton = new QRadioButton(groupBox_2);
        mUpperRightRadioButton->setObjectName(QStringLiteral("mUpperRightRadioButton"));
        sizePolicy.setHeightForWidth(mUpperRightRadioButton->sizePolicy().hasHeightForWidth());
        mUpperRightRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mUpperRightRadioButton, 0, 2, 1, 1);

        mMiddleLeftRadioButton = new QRadioButton(groupBox_2);
        mMiddleLeftRadioButton->setObjectName(QStringLiteral("mMiddleLeftRadioButton"));
        sizePolicy.setHeightForWidth(mMiddleLeftRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleLeftRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mMiddleLeftRadioButton, 1, 0, 1, 1);

        mMiddleRadioButton = new QRadioButton(groupBox_2);
        mMiddleRadioButton->setObjectName(QStringLiteral("mMiddleRadioButton"));
        sizePolicy.setHeightForWidth(mMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mMiddleRadioButton, 1, 1, 1, 1);

        mMiddleRightRadioButton = new QRadioButton(groupBox_2);
        mMiddleRightRadioButton->setObjectName(QStringLiteral("mMiddleRightRadioButton"));
        sizePolicy.setHeightForWidth(mMiddleRightRadioButton->sizePolicy().hasHeightForWidth());
        mMiddleRightRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mMiddleRightRadioButton, 1, 2, 1, 1);

        mLowerRightRadioButton = new QRadioButton(groupBox_2);
        mLowerRightRadioButton->setObjectName(QStringLiteral("mLowerRightRadioButton"));
        sizePolicy.setHeightForWidth(mLowerRightRadioButton->sizePolicy().hasHeightForWidth());
        mLowerRightRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLowerRightRadioButton, 2, 2, 1, 1);

        mLowerMiddleRadioButton = new QRadioButton(groupBox_2);
        mLowerMiddleRadioButton->setObjectName(QStringLiteral("mLowerMiddleRadioButton"));
        sizePolicy.setHeightForWidth(mLowerMiddleRadioButton->sizePolicy().hasHeightForWidth());
        mLowerMiddleRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLowerMiddleRadioButton, 2, 1, 1, 1);

        mLowerLeftRadioButton = new QRadioButton(groupBox_2);
        mLowerLeftRadioButton->setObjectName(QStringLiteral("mLowerLeftRadioButton"));
        sizePolicy.setHeightForWidth(mLowerLeftRadioButton->sizePolicy().hasHeightForWidth());
        mLowerLeftRadioButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLowerLeftRadioButton, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLayoutNewItemPropertiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(QgsLayoutNewItemPropertiesDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mYPosSpin = new QgsDoubleSpinBox(groupBox);
        mYPosSpin->setObjectName(QStringLiteral("mYPosSpin"));
        mYPosSpin->setDecimals(3);
        mYPosSpin->setMinimum(-1e+07);
        mYPosSpin->setMaximum(1e+07);
        mYPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mYPosSpin, 2, 1, 1, 3);

        mHeightLabel = new QLabel(groupBox);
        mHeightLabel->setObjectName(QStringLiteral("mHeightLabel"));

        gridLayout_3->addWidget(mHeightLabel, 4, 0, 1, 1);

        mWidthSpin = new QgsDoubleSpinBox(groupBox);
        mWidthSpin->setObjectName(QStringLiteral("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(1e+07);
        mWidthSpin->setValue(100);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 3, 1, 1, 2);

        mSizeUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mSizeUnitsComboBox->setObjectName(QStringLiteral("mSizeUnitsComboBox"));

        gridLayout_3->addWidget(mSizeUnitsComboBox, 3, 4, 2, 1);

        mWidthLabel = new QLabel(groupBox);
        mWidthLabel->setObjectName(QStringLiteral("mWidthLabel"));

        gridLayout_3->addWidget(mWidthLabel, 3, 0, 1, 1);

        mYLabel = new QLabel(groupBox);
        mYLabel->setObjectName(QStringLiteral("mYLabel"));

        gridLayout_3->addWidget(mYLabel, 2, 0, 1, 1);

        mXLabel = new QLabel(groupBox);
        mXLabel->setObjectName(QStringLiteral("mXLabel"));

        gridLayout_3->addWidget(mXLabel, 1, 0, 1, 1);

        mPosUnitsComboBox = new QgsLayoutUnitsComboBox(groupBox);
        mPosUnitsComboBox->setObjectName(QStringLiteral("mPosUnitsComboBox"));

        gridLayout_3->addWidget(mPosUnitsComboBox, 1, 4, 2, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(groupBox);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        _2->addWidget(mLockAspectRatio);


        gridLayout_3->addLayout(_2, 3, 3, 2, 1);

        mHeightSpin = new QgsDoubleSpinBox(groupBox);
        mHeightSpin->setObjectName(QStringLiteral("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(1e+07);
        mHeightSpin->setValue(100);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 4, 1, 1, 2);

        mXPosSpin = new QgsDoubleSpinBox(groupBox);
        mXPosSpin->setObjectName(QStringLiteral("mXPosSpin"));
        mXPosSpin->setDecimals(3);
        mXPosSpin->setMinimum(-1e+07);
        mXPosSpin->setMaximum(1e+07);
        mXPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mXPosSpin, 1, 1, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mPageSpin = new QgsSpinBox(groupBox);
        mPageSpin->setObjectName(QStringLiteral("mPageSpin"));
        mPageSpin->setMinimumSize(QSize(100, 0));
        mPageSpin->setMinimum(1);
        mPageSpin->setMaximum(9999);

        horizontalLayout->addWidget(mPageSpin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(4, 1);

        verticalLayout->addLayout(gridLayout_3);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_4->setColumnStretch(0, 1);
        QWidget::setTabOrder(mPageSpin, mXPosSpin);
        QWidget::setTabOrder(mXPosSpin, mYPosSpin);
        QWidget::setTabOrder(mYPosSpin, mPosUnitsComboBox);
        QWidget::setTabOrder(mPosUnitsComboBox, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mSizeUnitsComboBox);
        QWidget::setTabOrder(mSizeUnitsComboBox, mUpperLeftRadioButton);
        QWidget::setTabOrder(mUpperLeftRadioButton, mUpperMiddleRadioButton);
        QWidget::setTabOrder(mUpperMiddleRadioButton, mUpperRightRadioButton);
        QWidget::setTabOrder(mUpperRightRadioButton, mMiddleLeftRadioButton);
        QWidget::setTabOrder(mMiddleLeftRadioButton, mMiddleRadioButton);
        QWidget::setTabOrder(mMiddleRadioButton, mMiddleRightRadioButton);
        QWidget::setTabOrder(mMiddleRightRadioButton, mLowerLeftRadioButton);
        QWidget::setTabOrder(mLowerLeftRadioButton, mLowerMiddleRadioButton);
        QWidget::setTabOrder(mLowerMiddleRadioButton, mLowerRightRadioButton);

        retranslateUi(QgsLayoutNewItemPropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLayoutNewItemPropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLayoutNewItemPropertiesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLayoutNewItemPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLayoutNewItemPropertiesDialog)
    {
        QgsLayoutNewItemPropertiesDialog->setWindowTitle(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "New Item Properties", nullptr));
        groupBox_2->setTitle(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Reference Point", nullptr));
        mUpperLeftRadioButton->setText(QString());
        mUpperMiddleRadioButton->setText(QString());
        mUpperRightRadioButton->setText(QString());
        mMiddleLeftRadioButton->setText(QString());
        mMiddleRadioButton->setText(QString());
        mMiddleRightRadioButton->setText(QString());
        mLowerRightRadioButton->setText(QString());
        mLowerMiddleRadioButton->setText(QString());
        mLowerLeftRadioButton->setText(QString());
        groupBox->setTitle(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Position and Size", nullptr));
        mYPosSpin->setSuffix(QString());
        mHeightLabel->setText(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Height", nullptr));
        mWidthSpin->setSuffix(QString());
        mWidthLabel->setText(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Width", nullptr));
        mYLabel->setText(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Y", nullptr));
        mXLabel->setText(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "X", nullptr));
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_NO_TOOLTIP
        mHeightSpin->setSuffix(QString());
        mXPosSpin->setSuffix(QString());
        label->setText(QApplication::translate("QgsLayoutNewItemPropertiesDialog", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutNewItemPropertiesDialog: public Ui_QgsLayoutNewItemPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTNEWITEMPROPERTIES_H
