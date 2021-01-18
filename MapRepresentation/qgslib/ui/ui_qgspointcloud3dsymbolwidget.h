/********************************************************************************
** Form generated from reading UI file 'qgspointcloud3dsymbolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUD3DSYMBOLWIDGET_H
#define UI_QGSPOINTCLOUD3DSYMBOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloud3DSymbolWidget
{
public:
    QGridLayout *gridLayout;
    QgsDoubleSpinBox *mPointSizeSpinBox;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsPointCloud3DSymbolWidget)
    {
        if (QgsPointCloud3DSymbolWidget->objectName().isEmpty())
            QgsPointCloud3DSymbolWidget->setObjectName(QStringLiteral("QgsPointCloud3DSymbolWidget"));
        QgsPointCloud3DSymbolWidget->resize(400, 300);
        gridLayout = new QGridLayout(QgsPointCloud3DSymbolWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mPointSizeSpinBox = new QgsDoubleSpinBox(QgsPointCloud3DSymbolWidget);
        mPointSizeSpinBox->setObjectName(QStringLiteral("mPointSizeSpinBox"));
        mPointSizeSpinBox->setMaximum(10);
        mPointSizeSpinBox->setValue(2);

        gridLayout->addWidget(mPointSizeSpinBox, 0, 1, 1, 1);

        label = new QLabel(QgsPointCloud3DSymbolWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 2);


        retranslateUi(QgsPointCloud3DSymbolWidget);

        QMetaObject::connectSlotsByName(QgsPointCloud3DSymbolWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsPointCloud3DSymbolWidget)
    {
        label->setText(QApplication::translate("QgsPointCloud3DSymbolWidget", "Point size", nullptr));
        Q_UNUSED(QgsPointCloud3DSymbolWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloud3DSymbolWidget: public Ui_QgsPointCloud3DSymbolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUD3DSYMBOLWIDGET_H
