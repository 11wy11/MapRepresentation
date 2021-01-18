/********************************************************************************
** Form generated from reading UI file 'qgslayoutmarkerwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTMARKERWIDGETBASE_H
#define UI_QGSLAYOUTMARKERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsdoublespinbox.h"
#include "qgslayoutitemcombobox.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutMarkerWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QgsSymbolButton *mShapeStyleButton;
    QgsCollapsibleGroupBoxBasic *mRotationGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QComboBox *mNorthTypeComboBox;
    QCheckBox *mRotationFromMapCheckBox;
    QgsDoubleSpinBox *mNorthOffsetSpinBox;
    QLabel *label_7;
    QgsLayoutItemComboBox *mMapComboBox;

    void setupUi(QWidget *QgsLayoutMarkerWidgetBase)
    {
        if (QgsLayoutMarkerWidgetBase->objectName().isEmpty())
            QgsLayoutMarkerWidgetBase->setObjectName(QStringLiteral("QgsLayoutMarkerWidgetBase"));
        QgsLayoutMarkerWidgetBase->resize(308, 272);
        QgsLayoutMarkerWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsLayoutMarkerWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QgsLayoutMarkerWidgetBase);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_2);

        scrollArea = new QgsScrollArea(QgsLayoutMarkerWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 306, 247));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mShapeStyleButton = new QgsSymbolButton(groupBox);
        mShapeStyleButton->setObjectName(QStringLiteral("mShapeStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mShapeStyleButton->sizePolicy().hasHeightForWidth());
        mShapeStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mShapeStyleButton, 0, 1, 1, 1);


        mainLayout->addWidget(groupBox);

        mRotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mRotationGroupBox->setObjectName(QStringLiteral("mRotationGroupBox"));
        mRotationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mRotationGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mRotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mRotationGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(mRotationGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        mNorthTypeComboBox = new QComboBox(mRotationGroupBox);
        mNorthTypeComboBox->setObjectName(QStringLiteral("mNorthTypeComboBox"));

        gridLayout_2->addWidget(mNorthTypeComboBox, 1, 1, 1, 1);

        mRotationFromMapCheckBox = new QCheckBox(mRotationGroupBox);
        mRotationFromMapCheckBox->setObjectName(QStringLiteral("mRotationFromMapCheckBox"));

        gridLayout_2->addWidget(mRotationFromMapCheckBox, 0, 0, 1, 1);

        mNorthOffsetSpinBox = new QgsDoubleSpinBox(mRotationGroupBox);
        mNorthOffsetSpinBox->setObjectName(QStringLiteral("mNorthOffsetSpinBox"));
        mNorthOffsetSpinBox->setWrapping(true);
        mNorthOffsetSpinBox->setMinimum(-360);
        mNorthOffsetSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mNorthOffsetSpinBox, 2, 1, 1, 1);

        label_7 = new QLabel(mRotationGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        mMapComboBox = new QgsLayoutItemComboBox(mRotationGroupBox);
        mMapComboBox->setObjectName(QStringLiteral("mMapComboBox"));

        gridLayout_2->addWidget(mMapComboBox, 0, 1, 1, 1);


        mainLayout->addWidget(mRotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(groupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mShapeStyleButton);

        retranslateUi(QgsLayoutMarkerWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutMarkerWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutMarkerWidgetBase)
    {
        label_2->setText(QApplication::translate("QgsLayoutMarkerWidgetBase", "Marker", nullptr));
        groupBox->setTitle(QApplication::translate("QgsLayoutMarkerWidgetBase", "Main Properties", nullptr));
        label->setText(QApplication::translate("QgsLayoutMarkerWidgetBase", "Symbol", nullptr));
        mShapeStyleButton->setText(QApplication::translate("QgsLayoutMarkerWidgetBase", "Change\342\200\246", nullptr));
        mRotationGroupBox->setTitle(QApplication::translate("QgsLayoutMarkerWidgetBase", "Marker Rotation", nullptr));
        label_8->setText(QApplication::translate("QgsLayoutMarkerWidgetBase", "Offset", nullptr));
        mRotationFromMapCheckBox->setText(QApplication::translate("QgsLayoutMarkerWidgetBase", "Sync with map", nullptr));
        mNorthOffsetSpinBox->setSuffix(QApplication::translate("QgsLayoutMarkerWidgetBase", " \302\260", nullptr));
        label_7->setText(QApplication::translate("QgsLayoutMarkerWidgetBase", "North alignment", nullptr));
        Q_UNUSED(QgsLayoutMarkerWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutMarkerWidgetBase: public Ui_QgsLayoutMarkerWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTMARKERWIDGETBASE_H
