/********************************************************************************
** Form generated from reading UI file 'qgsmessagelogviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESSAGELOGVIEWER_H
#define UI_QGSMESSAGELOGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsMessageLogViewer
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QLabel *emptyLabel;

    void setupUi(QDialog *QgsMessageLogViewer)
    {
        if (QgsMessageLogViewer->objectName().isEmpty())
            QgsMessageLogViewer->setObjectName(QStringLiteral("QgsMessageLogViewer"));
        QgsMessageLogViewer->resize(623, 255);
        QgsMessageLogViewer->setModal(true);
        verticalLayout = new QVBoxLayout(QgsMessageLogViewer);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QgsMessageLogViewer);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);

        verticalLayout->addWidget(tabWidget);

        emptyLabel = new QLabel(QgsMessageLogViewer);
        emptyLabel->setObjectName(QStringLiteral("emptyLabel"));
        emptyLabel->setEnabled(false);
        emptyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(emptyLabel);


        retranslateUi(QgsMessageLogViewer);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsMessageLogViewer);
    } // setupUi

    void retranslateUi(QDialog *QgsMessageLogViewer)
    {
        QgsMessageLogViewer->setWindowTitle(QApplication::translate("QgsMessageLogViewer", "QGIS Log", nullptr));
        emptyLabel->setText(QApplication::translate("QgsMessageLogViewer", "Message log empty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMessageLogViewer: public Ui_QgsMessageLogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESSAGELOGVIEWER_H
