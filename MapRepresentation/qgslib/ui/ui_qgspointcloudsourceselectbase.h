/********************************************************************************
** Form generated from reading UI file 'qgspointcloudsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDSOURCESELECTBASE_H
#define UI_QGSPOINTCLOUDSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *fileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsFileWidget *mFileWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPointCloudSourceSelectBase)
    {
        if (QgsPointCloudSourceSelectBase->objectName().isEmpty())
            QgsPointCloudSourceSelectBase->setObjectName(QStringLiteral("QgsPointCloudSourceSelectBase"));
        QgsPointCloudSourceSelectBase->resize(351, 119);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsPointCloudSourceSelectBase->setWindowIcon(icon);
        QgsPointCloudSourceSelectBase->setSizeGripEnabled(true);
        QgsPointCloudSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsPointCloudSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fileGroupBox = new QGroupBox(QgsPointCloudSourceSelectBase);
        fileGroupBox->setObjectName(QStringLiteral("fileGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(fileGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(fileGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        horizontalLayout->addWidget(mFileWidget);


        verticalLayout->addWidget(fileGroupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsPointCloudSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(QgsPointCloudSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPointCloudSourceSelectBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsPointCloudSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPointCloudSourceSelectBase)
    {
        QgsPointCloudSourceSelectBase->setWindowTitle(QApplication::translate("QgsPointCloudSourceSelectBase", "Add Point Cloud Layer(s)", nullptr));
        fileGroupBox->setTitle(QApplication::translate("QgsPointCloudSourceSelectBase", "Source", nullptr));
        label->setText(QApplication::translate("QgsPointCloudSourceSelectBase", "Point cloud dataset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudSourceSelectBase: public Ui_QgsPointCloudSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDSOURCESELECTBASE_H
