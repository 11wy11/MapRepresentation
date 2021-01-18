/********************************************************************************
** Form generated from reading UI file 'qgsfeaturefilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFEATUREFILTERWIDGET_H
#define UI_QGSFEATUREFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFeatureFilterWidget
{
public:
    QAction *mActionApplyFilter;
    QAction *mActionFilterColumnsMenu;
    QAction *mActionEditStoredFilterExpression;
    QAction *mActionSaveAsStoredFilterExpression;
    QAction *mActionHandleStoreFilterExpression;
    QAction *mActionStoredFilterExpressions;
    QAction *mActionShowAllFilter;
    QAction *mActionAdvancedFilter;
    QAction *mActionSelectedFilter;
    QAction *mActionVisibleFilter;
    QAction *mActionEditedFilter;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *mFilterButton;
    QWidget *mFilterContainer;
    QGridLayout *mFilterLayout;
    QgsFilterLineEdit *mFilterQuery;
    QToolButton *mStoreFilterExpressionButton;
    QToolButton *mApplyFilterButton;

    void setupUi(QWidget *QgsFeatureFilterWidget)
    {
        if (QgsFeatureFilterWidget->objectName().isEmpty())
            QgsFeatureFilterWidget->setObjectName(QStringLiteral("QgsFeatureFilterWidget"));
        QgsFeatureFilterWidget->resize(1127, 29);
        QgsFeatureFilterWidget->setWindowTitle(QStringLiteral("Form"));
        mActionApplyFilter = new QAction(QgsFeatureFilterWidget);
        mActionApplyFilter->setObjectName(QStringLiteral("mActionApplyFilter"));
        mActionFilterColumnsMenu = new QAction(QgsFeatureFilterWidget);
        mActionFilterColumnsMenu->setObjectName(QStringLiteral("mActionFilterColumnsMenu"));
        mActionEditStoredFilterExpression = new QAction(QgsFeatureFilterWidget);
        mActionEditStoredFilterExpression->setObjectName(QStringLiteral("mActionEditStoredFilterExpression"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionHandleStoreFilterExpressionChecked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionEditStoredFilterExpression->setIcon(icon);
        mActionSaveAsStoredFilterExpression = new QAction(QgsFeatureFilterWidget);
        mActionSaveAsStoredFilterExpression->setObjectName(QStringLiteral("mActionSaveAsStoredFilterExpression"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionHandleStoreFilterExpressionUnchecked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveAsStoredFilterExpression->setIcon(icon1);
        mActionHandleStoreFilterExpression = new QAction(QgsFeatureFilterWidget);
        mActionHandleStoreFilterExpression->setObjectName(QStringLiteral("mActionHandleStoreFilterExpression"));
        mActionHandleStoreFilterExpression->setCheckable(true);
        mActionHandleStoreFilterExpression->setIcon(icon1);
        mActionStoredFilterExpressions = new QAction(QgsFeatureFilterWidget);
        mActionStoredFilterExpressions->setObjectName(QStringLiteral("mActionStoredFilterExpressions"));
        mActionStoredFilterExpressions->setIcon(icon);
        mActionShowAllFilter = new QAction(QgsFeatureFilterWidget);
        mActionShowAllFilter->setObjectName(QStringLiteral("mActionShowAllFilter"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowAllFilter->setIcon(icon2);
        mActionAdvancedFilter = new QAction(QgsFeatureFilterWidget);
        mActionAdvancedFilter->setObjectName(QStringLiteral("mActionAdvancedFilter"));
        mActionAdvancedFilter->setIcon(icon2);
        mActionSelectedFilter = new QAction(QgsFeatureFilterWidget);
        mActionSelectedFilter->setObjectName(QStringLiteral("mActionSelectedFilter"));
        mActionSelectedFilter->setIcon(icon2);
        mActionVisibleFilter = new QAction(QgsFeatureFilterWidget);
        mActionVisibleFilter->setObjectName(QStringLiteral("mActionVisibleFilter"));
        mActionVisibleFilter->setIcon(icon2);
        mActionEditedFilter = new QAction(QgsFeatureFilterWidget);
        mActionEditedFilter->setObjectName(QStringLiteral("mActionEditedFilter"));
        mActionEditedFilter->setIcon(icon2);
        gridLayout = new QGridLayout(QgsFeatureFilterWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mFilterButton = new QToolButton(QgsFeatureFilterWidget);
        mFilterButton->setObjectName(QStringLiteral("mFilterButton"));
        mFilterButton->setIcon(icon2);
        mFilterButton->setPopupMode(QToolButton::MenuButtonPopup);
        mFilterButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(mFilterButton);

        mFilterContainer = new QWidget(QgsFeatureFilterWidget);
        mFilterContainer->setObjectName(QStringLiteral("mFilterContainer"));
        mFilterLayout = new QGridLayout(mFilterContainer);
        mFilterLayout->setObjectName(QStringLiteral("mFilterLayout"));
        mFilterLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        mFilterLayout->setContentsMargins(0, 0, 0, 0);
        mFilterQuery = new QgsFilterLineEdit(mFilterContainer);
        mFilterQuery->setObjectName(QStringLiteral("mFilterQuery"));

        mFilterLayout->addWidget(mFilterQuery, 0, 0, 1, 1);

        mStoreFilterExpressionButton = new QToolButton(mFilterContainer);
        mStoreFilterExpressionButton->setObjectName(QStringLiteral("mStoreFilterExpressionButton"));
        mStoreFilterExpressionButton->setCheckable(false);
        mStoreFilterExpressionButton->setPopupMode(QToolButton::MenuButtonPopup);

        mFilterLayout->addWidget(mStoreFilterExpressionButton, 0, 1, 1, 1);


        horizontalLayout->addWidget(mFilterContainer);

        mApplyFilterButton = new QToolButton(QgsFeatureFilterWidget);
        mApplyFilterButton->setObjectName(QStringLiteral("mApplyFilterButton"));
        mApplyFilterButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(mApplyFilterButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(QgsFeatureFilterWidget);

        QMetaObject::connectSlotsByName(QgsFeatureFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsFeatureFilterWidget)
    {
        mActionApplyFilter->setText(QApplication::translate("QgsFeatureFilterWidget", "Apply", nullptr));
        mActionFilterColumnsMenu->setText(QApplication::translate("QgsFeatureFilterWidget", "Field Filter", nullptr));
        mActionEditStoredFilterExpression->setText(QApplication::translate("QgsFeatureFilterWidget", "Edit Expression", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEditStoredFilterExpression->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Edit the stored expression (change name or content)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSaveAsStoredFilterExpression->setText(QApplication::translate("QgsFeatureFilterWidget", "Save Expression as...", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionSaveAsStoredFilterExpression->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Save expression under defined name", nullptr));
#endif // QT_NO_TOOLTIP
        mActionHandleStoreFilterExpression->setText(QString());
#ifndef QT_NO_TOOLTIP
        mActionHandleStoreFilterExpression->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Handle expression (save or delete)", nullptr));
#endif // QT_NO_TOOLTIP
        mActionStoredFilterExpressions->setText(QApplication::translate("QgsFeatureFilterWidget", "Stored Filter Expressions", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionStoredFilterExpressions->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Stored expressions to filter features", nullptr));
#endif // QT_NO_TOOLTIP
        mActionShowAllFilter->setText(QApplication::translate("QgsFeatureFilterWidget", "Show All Features", nullptr));
        mActionAdvancedFilter->setText(QApplication::translate("QgsFeatureFilterWidget", "Advanced Filter (Expression)", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionAdvancedFilter->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Use the Expression Builder to define the filter", nullptr));
#endif // QT_NO_TOOLTIP
        mActionSelectedFilter->setText(QApplication::translate("QgsFeatureFilterWidget", "Show Selected Features", nullptr));
        mActionVisibleFilter->setText(QApplication::translate("QgsFeatureFilterWidget", "Show Features Visible On Map", nullptr));
        mActionEditedFilter->setText(QApplication::translate("QgsFeatureFilterWidget", "Show Edited and New Features", nullptr));
#ifndef QT_NO_TOOLTIP
        mActionEditedFilter->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Filter all the features which have been edited but not yet saved", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mFilterButton->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "The filter defines which features are currently shown in the list or on the table", nullptr));
#endif // QT_NO_TOOLTIP
        mFilterButton->setText(QApplication::translate("QgsFeatureFilterWidget", "Filter", nullptr));
        mStoreFilterExpressionButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mApplyFilterButton->setToolTip(QApplication::translate("QgsFeatureFilterWidget", "Filters the visible features according to the current filter selection and filter string.", nullptr));
#endif // QT_NO_TOOLTIP
        mApplyFilterButton->setText(QApplication::translate("QgsFeatureFilterWidget", "Apply", nullptr));
        Q_UNUSED(QgsFeatureFilterWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsFeatureFilterWidget: public Ui_QgsFeatureFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFEATUREFILTERWIDGET_H
