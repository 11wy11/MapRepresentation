/********************************************************************************
** Form generated from reading UI file 'qgssymbollevelsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLLEVELSDIALOGBASE_H
#define UI_QGSSYMBOLLEVELSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include "qgspanelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolLevelsDialogBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *chkEnable;
    QLabel *label;
    QTableWidget *tableLevels;

    void setupUi(QgsPanelWidget *QgsSymbolLevelsDialogBase)
    {
        if (QgsSymbolLevelsDialogBase->objectName().isEmpty())
            QgsSymbolLevelsDialogBase->setObjectName(QStringLiteral("QgsSymbolLevelsDialogBase"));
        QgsSymbolLevelsDialogBase->resize(406, 337);
        gridLayout = new QGridLayout(QgsSymbolLevelsDialogBase);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        chkEnable = new QCheckBox(QgsSymbolLevelsDialogBase);
        chkEnable->setObjectName(QStringLiteral("chkEnable"));

        gridLayout->addWidget(chkEnable, 0, 0, 1, 1);

        label = new QLabel(QgsSymbolLevelsDialogBase);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tableLevels = new QTableWidget(QgsSymbolLevelsDialogBase);
        tableLevels->setObjectName(QStringLiteral("tableLevels"));
        tableLevels->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableLevels->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableLevels, 2, 0, 1, 1);


        retranslateUi(QgsSymbolLevelsDialogBase);

        QMetaObject::connectSlotsByName(QgsSymbolLevelsDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsSymbolLevelsDialogBase)
    {
        QgsSymbolLevelsDialogBase->setWindowTitle(QApplication::translate("QgsSymbolLevelsDialogBase", "Symbol Levels", nullptr));
        chkEnable->setText(QApplication::translate("QgsSymbolLevelsDialogBase", "Enable symbol levels", nullptr));
        label->setText(QApplication::translate("QgsSymbolLevelsDialogBase", "Define the order in which the symbol layers are rendered. The numbers in the cells define in which rendering pass the layer will be drawn.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolLevelsDialogBase: public Ui_QgsSymbolLevelsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLLEVELSDIALOGBASE_H