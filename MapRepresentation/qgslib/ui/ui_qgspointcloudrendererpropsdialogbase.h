/********************************************************************************
** Form generated from reading UI file 'qgspointcloudrendererpropsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTCLOUDRENDERERPROPSDIALOGBASE_H
#define UI_QGSPOINTCLOUDRENDERERPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgsdoublespinbox.h"
#include "qgsopacitywidget.h"
#include "qgspanelwidget.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointCloudRendererPropsDialogBase
{
public:
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *mainStack;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *mLayerRenderingGroupBox_2;
    QGridLayout *gridLayout_2;
    QgsDoubleSpinBox *mPointSizeSpinBox;
    QgsUnitSelectionWidget *mPointSizeUnitWidget;
    QLabel *lblTransparency_4;
    QGroupBox *mLayerRenderingGroupBox;
    QGridLayout *gridLayout;
    QLabel *lblTransparency;
    QLabel *lblBlend;
    QgsDoubleSpinBox *mMaxErrorSpinBox;
    QLabel *lblTransparency_2;
    QgsUnitSelectionWidget *mMaxErrorUnitWidget;
    QgsOpacityWidget *mOpacityWidget;
    QgsBlendModeComboBox *mBlendModeComboBox;

    void setupUi(QgsPanelWidget *QgsPointCloudRendererPropsDialogBase)
    {
        if (QgsPointCloudRendererPropsDialogBase->objectName().isEmpty())
            QgsPointCloudRendererPropsDialogBase->setObjectName(QStringLiteral("QgsPointCloudRendererPropsDialogBase"));
        QgsPointCloudRendererPropsDialogBase->resize(371, 501);
        verticalLayout_5 = new QVBoxLayout(QgsPointCloudRendererPropsDialogBase);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        mainStack = new QStackedWidget(QgsPointCloudRendererPropsDialogBase);
        mainStack->setObjectName(QStringLiteral("mainStack"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cboRenderers = new QComboBox(page);
        cboRenderers->setObjectName(QStringLiteral("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QStringLiteral("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        verticalLayout_2->addWidget(stackedWidget);

        mLayerRenderingGroupBox_2 = new QGroupBox(page);
        mLayerRenderingGroupBox_2->setObjectName(QStringLiteral("mLayerRenderingGroupBox_2"));
        mLayerRenderingGroupBox_2->setFlat(true);
        mLayerRenderingGroupBox_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(mLayerRenderingGroupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 3, -1);
        mPointSizeSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox_2);
        mPointSizeSpinBox->setObjectName(QStringLiteral("mPointSizeSpinBox"));
        mPointSizeSpinBox->setDecimals(6);
        mPointSizeSpinBox->setMaximum(1e+11);

        gridLayout_2->addWidget(mPointSizeSpinBox, 0, 1, 1, 2);

        mPointSizeUnitWidget = new QgsUnitSelectionWidget(mLayerRenderingGroupBox_2);
        mPointSizeUnitWidget->setObjectName(QStringLiteral("mPointSizeUnitWidget"));
        mPointSizeUnitWidget->setMinimumSize(QSize(0, 0));
        mPointSizeUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mPointSizeUnitWidget, 0, 3, 1, 1);

        lblTransparency_4 = new QLabel(mLayerRenderingGroupBox_2);
        lblTransparency_4->setObjectName(QStringLiteral("lblTransparency_4"));

        gridLayout_2->addWidget(lblTransparency_4, 0, 0, 1, 1);


        verticalLayout_2->addWidget(mLayerRenderingGroupBox_2);

        mLayerRenderingGroupBox = new QGroupBox(page);
        mLayerRenderingGroupBox->setObjectName(QStringLiteral("mLayerRenderingGroupBox"));
        mLayerRenderingGroupBox->setFlat(true);
        mLayerRenderingGroupBox->setCheckable(false);
        gridLayout = new QGridLayout(mLayerRenderingGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 3, -1);
        lblTransparency = new QLabel(mLayerRenderingGroupBox);
        lblTransparency->setObjectName(QStringLiteral("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 1, 0, 1, 1);

        lblBlend = new QLabel(mLayerRenderingGroupBox);
        lblBlend->setObjectName(QStringLiteral("lblBlend"));

        gridLayout->addWidget(lblBlend, 2, 0, 1, 1);

        mMaxErrorSpinBox = new QgsDoubleSpinBox(mLayerRenderingGroupBox);
        mMaxErrorSpinBox->setObjectName(QStringLiteral("mMaxErrorSpinBox"));
        mMaxErrorSpinBox->setDecimals(6);
        mMaxErrorSpinBox->setMaximum(1e+11);

        gridLayout->addWidget(mMaxErrorSpinBox, 0, 1, 1, 2);

        lblTransparency_2 = new QLabel(mLayerRenderingGroupBox);
        lblTransparency_2->setObjectName(QStringLiteral("lblTransparency_2"));

        gridLayout->addWidget(lblTransparency_2, 0, 0, 1, 1);

        mMaxErrorUnitWidget = new QgsUnitSelectionWidget(mLayerRenderingGroupBox);
        mMaxErrorUnitWidget->setObjectName(QStringLiteral("mMaxErrorUnitWidget"));
        mMaxErrorUnitWidget->setMinimumSize(QSize(0, 0));
        mMaxErrorUnitWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mMaxErrorUnitWidget, 0, 3, 1, 1);

        mOpacityWidget = new QgsOpacityWidget(mLayerRenderingGroupBox);
        mOpacityWidget->setObjectName(QStringLiteral("mOpacityWidget"));
        mOpacityWidget->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mOpacityWidget, 1, 1, 1, 3);

        mBlendModeComboBox = new QgsBlendModeComboBox(mLayerRenderingGroupBox);
        mBlendModeComboBox->setObjectName(QStringLiteral("mBlendModeComboBox"));
        sizePolicy.setHeightForWidth(mBlendModeComboBox->sizePolicy().hasHeightForWidth());
        mBlendModeComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mBlendModeComboBox, 2, 1, 1, 3);


        verticalLayout_2->addWidget(mLayerRenderingGroupBox);


        verticalLayout_4->addLayout(verticalLayout_2);

        mainStack->addWidget(page);

        verticalLayout_5->addWidget(mainStack);

        QWidget::setTabOrder(cboRenderers, mOpacityWidget);

        retranslateUi(QgsPointCloudRendererPropsDialogBase);

        QMetaObject::connectSlotsByName(QgsPointCloudRendererPropsDialogBase);
    } // setupUi

    void retranslateUi(QgsPanelWidget *QgsPointCloudRendererPropsDialogBase)
    {
        QgsPointCloudRendererPropsDialogBase->setWindowTitle(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Renderer Settings", nullptr));
        label->setText(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "This renderer doesn't implement a graphical interface.", nullptr));
        mLayerRenderingGroupBox_2->setTitle(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Point Symbol", nullptr));
        lblTransparency_4->setText(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Point size", nullptr));
        mLayerRenderingGroupBox->setTitle(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Layer Rendering", nullptr));
        lblTransparency->setText(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Opacity", nullptr));
        lblBlend->setText(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Blending mode", nullptr));
        lblTransparency_2->setText(QApplication::translate("QgsPointCloudRendererPropsDialogBase", "Maximum error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsPointCloudRendererPropsDialogBase: public Ui_QgsPointCloudRendererPropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTCLOUDRENDERERPROPSDIALOGBASE_H
