/********************************************************************************
** Form generated from reading UI file 'qgsprocessingmeshdatasettimewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROCESSINGMESHDATASETTIMEWIDGET_H
#define UI_QGSPROCESSINGMESHDATASETTIMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsProcessingMeshDatasetTimeWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonCurrentCanvasTime;
    QRadioButton *radioButtonDefinedDateTime;
    QRadioButton *radioButtonDatasetGroupTimeStep;
    QComboBox *comboBoxDatasetTimeStep;
    QDateTimeEdit *dateTimeEdit;
    QLabel *labelCurrentCanvasTime;

    void setupUi(QWidget *QgsProcessingMeshDatasetTimeWidgetBase)
    {
        if (QgsProcessingMeshDatasetTimeWidgetBase->objectName().isEmpty())
            QgsProcessingMeshDatasetTimeWidgetBase->setObjectName(QStringLiteral("QgsProcessingMeshDatasetTimeWidgetBase"));
        QgsProcessingMeshDatasetTimeWidgetBase->resize(465, 122);
        QgsProcessingMeshDatasetTimeWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsProcessingMeshDatasetTimeWidgetBase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButtonCurrentCanvasTime = new QRadioButton(QgsProcessingMeshDatasetTimeWidgetBase);
        radioButtonCurrentCanvasTime->setObjectName(QStringLiteral("radioButtonCurrentCanvasTime"));
        radioButtonCurrentCanvasTime->setChecked(true);

        horizontalLayout->addWidget(radioButtonCurrentCanvasTime);

        radioButtonDefinedDateTime = new QRadioButton(QgsProcessingMeshDatasetTimeWidgetBase);
        radioButtonDefinedDateTime->setObjectName(QStringLiteral("radioButtonDefinedDateTime"));
        radioButtonDefinedDateTime->setChecked(false);

        horizontalLayout->addWidget(radioButtonDefinedDateTime);

        radioButtonDatasetGroupTimeStep = new QRadioButton(QgsProcessingMeshDatasetTimeWidgetBase);
        radioButtonDatasetGroupTimeStep->setObjectName(QStringLiteral("radioButtonDatasetGroupTimeStep"));

        horizontalLayout->addWidget(radioButtonDatasetGroupTimeStep);


        verticalLayout->addLayout(horizontalLayout);

        comboBoxDatasetTimeStep = new QComboBox(QgsProcessingMeshDatasetTimeWidgetBase);
        comboBoxDatasetTimeStep->setObjectName(QStringLiteral("comboBoxDatasetTimeStep"));

        verticalLayout->addWidget(comboBoxDatasetTimeStep);

        dateTimeEdit = new QDateTimeEdit(QgsProcessingMeshDatasetTimeWidgetBase);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setCalendarPopup(true);
        dateTimeEdit->setTimeSpec(Qt::UTC);

        verticalLayout->addWidget(dateTimeEdit);

        labelCurrentCanvasTime = new QLabel(QgsProcessingMeshDatasetTimeWidgetBase);
        labelCurrentCanvasTime->setObjectName(QStringLiteral("labelCurrentCanvasTime"));

        verticalLayout->addWidget(labelCurrentCanvasTime);


        retranslateUi(QgsProcessingMeshDatasetTimeWidgetBase);

        QMetaObject::connectSlotsByName(QgsProcessingMeshDatasetTimeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProcessingMeshDatasetTimeWidgetBase)
    {
        radioButtonCurrentCanvasTime->setText(QApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Current canvas time", nullptr));
        radioButtonDefinedDateTime->setText(QApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Defined date/time", nullptr));
        radioButtonDatasetGroupTimeStep->setText(QApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Dataset group time step", nullptr));
        labelCurrentCanvasTime->setText(QApplication::translate("QgsProcessingMeshDatasetTimeWidgetBase", "Current canvas time", nullptr));
        Q_UNUSED(QgsProcessingMeshDatasetTimeWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProcessingMeshDatasetTimeWidgetBase: public Ui_QgsProcessingMeshDatasetTimeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROCESSINGMESHDATASETTIMEWIDGET_H
