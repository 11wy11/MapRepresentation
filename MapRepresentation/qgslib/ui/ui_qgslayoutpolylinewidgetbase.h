/********************************************************************************
** Form generated from reading UI file 'qgslayoutpolylinewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLAYOUTPOLYLINEWIDGETBASE_H
#define UI_QGSLAYOUTPOLYLINEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsscrollarea.h"
#include "qgssymbolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLayoutPolylineWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QgsScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QgsSymbolButton *mLineStyleButton;
    QgsCollapsibleGroupBoxBasic *mArrowMarkersGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QgsDoubleSpinBox *mStrokeWidthSpinBox;
    QLabel *label_2;
    QLabel *label_6;
    QgsDoubleSpinBox *mArrowHeadWidthSpinBox;
    QgsColorButton *mArrowHeadStrokeColorButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mEndMarkerLineEdit;
    QToolButton *mEndMarkerToolButton;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mRadioStartNoMarker;
    QRadioButton *mRadioStartArrow;
    QRadioButton *mRadioStartSVG;
    QLabel *label;
    QgsColorButton *mArrowHeadFillColorButton;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mStartMarkerLineEdit;
    QToolButton *mStartMarkerToolButton;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *mRadioEndNoMarker;
    QRadioButton *mRadioEndArrow;
    QRadioButton *mRadioEndSvg;
    QLabel *label_4;
    QLabel *mStartMarkerLabel;
    QLabel *mStartMarkerLabel_2;

    void setupUi(QWidget *QgsLayoutPolylineWidgetBase)
    {
        if (QgsLayoutPolylineWidgetBase->objectName().isEmpty())
            QgsLayoutPolylineWidgetBase->setObjectName(QStringLiteral("QgsLayoutPolylineWidgetBase"));
        QgsLayoutPolylineWidgetBase->resize(334, 402);
        QgsLayoutPolylineWidgetBase->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsLayoutPolylineWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(QgsLayoutPolylineWidgetBase);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QStringLiteral("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_3);

        scrollArea = new QgsScrollArea(QgsLayoutPolylineWidgetBase);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -83, 318, 459));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mLineStyleButton = new QgsSymbolButton(groupBox);
        mLineStyleButton->setObjectName(QStringLiteral("mLineStyleButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLineStyleButton->sizePolicy().hasHeightForWidth());
        mLineStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mLineStyleButton, 0, 0, 1, 1);


        mainLayout->addWidget(groupBox);

        mArrowMarkersGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mArrowMarkersGroupBox->setObjectName(QStringLiteral("mArrowMarkersGroupBox"));
        mArrowMarkersGroupBox->setFocusPolicy(Qt::StrongFocus);
        mArrowMarkersGroupBox->setProperty("syncGroup", QVariant(QStringLiteral("composeritem")));
        mArrowMarkersGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mArrowMarkersGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(mArrowMarkersGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 7, 0, 1, 1);

        mStrokeWidthSpinBox = new QgsDoubleSpinBox(mArrowMarkersGroupBox);
        mStrokeWidthSpinBox->setObjectName(QStringLiteral("mStrokeWidthSpinBox"));
        mStrokeWidthSpinBox->setSingleStep(0.2);
        mStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mStrokeWidthSpinBox, 9, 1, 1, 1);

        label_2 = new QLabel(mArrowMarkersGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 10, 0, 1, 1);

        label_6 = new QLabel(mArrowMarkersGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 2);

        mArrowHeadWidthSpinBox = new QgsDoubleSpinBox(mArrowMarkersGroupBox);
        mArrowHeadWidthSpinBox->setObjectName(QStringLiteral("mArrowHeadWidthSpinBox"));
        mArrowHeadWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mArrowHeadWidthSpinBox, 10, 1, 1, 1);

        mArrowHeadStrokeColorButton = new QgsColorButton(mArrowMarkersGroupBox);
        mArrowHeadStrokeColorButton->setObjectName(QStringLiteral("mArrowHeadStrokeColorButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mArrowHeadStrokeColorButton->sizePolicy().hasHeightForWidth());
        mArrowHeadStrokeColorButton->setSizePolicy(sizePolicy2);
        mArrowHeadStrokeColorButton->setMinimumSize(QSize(120, 0));
        mArrowHeadStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mArrowHeadStrokeColorButton, 7, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mEndMarkerLineEdit = new QLineEdit(mArrowMarkersGroupBox);
        mEndMarkerLineEdit->setObjectName(QStringLiteral("mEndMarkerLineEdit"));

        horizontalLayout_2->addWidget(mEndMarkerLineEdit);

        mEndMarkerToolButton = new QToolButton(mArrowMarkersGroupBox);
        mEndMarkerToolButton->setObjectName(QStringLiteral("mEndMarkerToolButton"));

        horizontalLayout_2->addWidget(mEndMarkerToolButton);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mRadioStartNoMarker = new QRadioButton(mArrowMarkersGroupBox);
        mRadioStartNoMarker->setObjectName(QStringLiteral("mRadioStartNoMarker"));

        horizontalLayout_3->addWidget(mRadioStartNoMarker);

        mRadioStartArrow = new QRadioButton(mArrowMarkersGroupBox);
        mRadioStartArrow->setObjectName(QStringLiteral("mRadioStartArrow"));

        horizontalLayout_3->addWidget(mRadioStartArrow);

        mRadioStartSVG = new QRadioButton(mArrowMarkersGroupBox);
        mRadioStartSVG->setObjectName(QStringLiteral("mRadioStartSVG"));

        horizontalLayout_3->addWidget(mRadioStartSVG);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        label = new QLabel(mArrowMarkersGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 9, 0, 1, 1);

        mArrowHeadFillColorButton = new QgsColorButton(mArrowMarkersGroupBox);
        mArrowHeadFillColorButton->setObjectName(QStringLiteral("mArrowHeadFillColorButton"));
        sizePolicy2.setHeightForWidth(mArrowHeadFillColorButton->sizePolicy().hasHeightForWidth());
        mArrowHeadFillColorButton->setSizePolicy(sizePolicy2);
        mArrowHeadFillColorButton->setMinimumSize(QSize(120, 0));
        mArrowHeadFillColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mArrowHeadFillColorButton, 8, 1, 1, 1);

        label_7 = new QLabel(mArrowMarkersGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mStartMarkerLineEdit = new QLineEdit(mArrowMarkersGroupBox);
        mStartMarkerLineEdit->setObjectName(QStringLiteral("mStartMarkerLineEdit"));

        horizontalLayout->addWidget(mStartMarkerLineEdit);

        mStartMarkerToolButton = new QToolButton(mArrowMarkersGroupBox);
        mStartMarkerToolButton->setObjectName(QStringLiteral("mStartMarkerToolButton"));

        horizontalLayout->addWidget(mStartMarkerToolButton);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mRadioEndNoMarker = new QRadioButton(mArrowMarkersGroupBox);
        mRadioEndNoMarker->setObjectName(QStringLiteral("mRadioEndNoMarker"));

        horizontalLayout_4->addWidget(mRadioEndNoMarker);

        mRadioEndArrow = new QRadioButton(mArrowMarkersGroupBox);
        mRadioEndArrow->setObjectName(QStringLiteral("mRadioEndArrow"));

        horizontalLayout_4->addWidget(mRadioEndArrow);

        mRadioEndSvg = new QRadioButton(mArrowMarkersGroupBox);
        mRadioEndSvg->setObjectName(QStringLiteral("mRadioEndSvg"));

        horizontalLayout_4->addWidget(mRadioEndSvg);


        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 2);

        label_4 = new QLabel(mArrowMarkersGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 8, 0, 1, 1);

        mStartMarkerLabel = new QLabel(mArrowMarkersGroupBox);
        mStartMarkerLabel->setObjectName(QStringLiteral("mStartMarkerLabel"));

        gridLayout_2->addWidget(mStartMarkerLabel, 3, 0, 1, 1);

        mStartMarkerLabel_2 = new QLabel(mArrowMarkersGroupBox);
        mStartMarkerLabel_2->setObjectName(QStringLiteral("mStartMarkerLabel_2"));

        gridLayout_2->addWidget(mStartMarkerLabel_2, 6, 0, 1, 1);


        mainLayout->addWidget(mArrowMarkersGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mLineStyleButton);

        retranslateUi(QgsLayoutPolylineWidgetBase);

        QMetaObject::connectSlotsByName(QgsLayoutPolylineWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLayoutPolylineWidgetBase)
    {
        label_3->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Polyline", nullptr));
        groupBox->setTitle(QApplication::translate("QgsLayoutPolylineWidgetBase", "Main Properties", nullptr));
        mLineStyleButton->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Line Style\342\200\246", nullptr));
        mArrowMarkersGroupBox->setTitle(QApplication::translate("QgsLayoutPolylineWidgetBase", "Line Markers", nullptr));
        label_5->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Arrow stroke color", nullptr));
        mStrokeWidthSpinBox->setPrefix(QString());
        mStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutPolylineWidgetBase", " mm", nullptr));
        label_2->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Arrow head width", nullptr));
        label_6->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Start marker", nullptr));
        mArrowHeadWidthSpinBox->setPrefix(QString());
        mArrowHeadWidthSpinBox->setSuffix(QApplication::translate("QgsLayoutPolylineWidgetBase", " mm", nullptr));
        mArrowHeadStrokeColorButton->setText(QString());
        mEndMarkerToolButton->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "\342\200\246", nullptr));
        mRadioStartNoMarker->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "None", nullptr));
        mRadioStartArrow->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Arrow", nullptr));
        mRadioStartSVG->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "SVG", nullptr));
        label->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Arrow stroke width", nullptr));
        mArrowHeadFillColorButton->setText(QString());
        label_7->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "End marker", nullptr));
        mStartMarkerToolButton->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "\342\200\246", nullptr));
        mRadioEndNoMarker->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "None", nullptr));
        mRadioEndArrow->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Arrow", nullptr));
        mRadioEndSvg->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "SVG", nullptr));
        label_4->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "Arrow fill color", nullptr));
        mStartMarkerLabel->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "SVG path", nullptr));
        mStartMarkerLabel_2->setText(QApplication::translate("QgsLayoutPolylineWidgetBase", "SVG path", nullptr));
        Q_UNUSED(QgsLayoutPolylineWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayoutPolylineWidgetBase: public Ui_QgsLayoutPolylineWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLAYOUTPOLYLINEWIDGETBASE_H
