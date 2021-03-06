/********************************************************************************
** Form generated from reading UI file 'qgslightswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLIGHTSWIDGET_H
#define UI_QGSLIGHTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscolorbutton.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLightsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QListView *mLightsListView;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAddLight;
    QToolButton *btnRemoveLight;
    QSpacerItem *verticalSpacer;
    QStackedWidget *mStackedWidget;
    QWidget *page_2;
    QWidget *page;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsDoubleSpinBox *spinPositionX;
    QLabel *label_9;
    QgsDoubleSpinBox *spinIntensity;
    QLabel *label_7;
    QgsDoubleSpinBox *spinPositionY;
    QLabel *label_2;
    QgsDoubleSpinBox *spinPositionZ;
    QgsColorButton *btnColor;
    QgsDoubleSpinBox *spinA0;
    QgsDoubleSpinBox *spinA1;
    QgsDoubleSpinBox *spinA2;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QHBoxLayout *directionLightLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_12;
    QDoubleSpinBox *spinBoxAzimuth;
    QWidget *directionCmpassWidget;
    QDial *dialAzimuth;
    QLabel *altitudeSpinBox;
    QDoubleSpinBox *spinBoxAltitude;
    QSlider *sliderAltitude;
    QSpacerItem *horizontalSpacer;
    QgsDoubleSpinBox *spinDirectionalIntensity;
    QLabel *label_16;
    QgsColorButton *btnDirectionalColor;
    QLabel *label_11;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QLabel *labelY;
    QLabel *label_10;
    QLabel *label_17;
    QLabel *labelX;
    QLabel *labelZ;

    void setupUi(QWidget *QgsLightsWidget)
    {
        if (QgsLightsWidget->objectName().isEmpty())
            QgsLightsWidget->setObjectName(QStringLiteral("QgsLightsWidget"));
        QgsLightsWidget->resize(425, 633);
        QgsLightsWidget->setWindowTitle(QStringLiteral("Form"));
        verticalLayout = new QVBoxLayout(QgsLightsWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        mLightsListView = new QListView(QgsLightsWidget);
        mLightsListView->setObjectName(QStringLiteral("mLightsListView"));

        horizontalLayout_2->addWidget(mLightsListView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        btnAddLight = new QToolButton(QgsLightsWidget);
        btnAddLight->setObjectName(QStringLiteral("btnAddLight"));
        btnAddLight->setPopupMode(QToolButton::InstantPopup);

        verticalLayout_2->addWidget(btnAddLight);

        btnRemoveLight = new QToolButton(QgsLightsWidget);
        btnRemoveLight->setObjectName(QStringLiteral("btnRemoveLight"));

        verticalLayout_2->addWidget(btnRemoveLight);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        mStackedWidget = new QStackedWidget(QgsLightsWidget);
        mStackedWidget->setObjectName(QStringLiteral("mStackedWidget"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        mStackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spinPositionX = new QgsDoubleSpinBox(page);
        spinPositionX->setObjectName(QStringLiteral("spinPositionX"));
        spinPositionX->setDecimals(1);
        spinPositionX->setMinimum(-1e+07);
        spinPositionX->setMaximum(1e+07);

        gridLayout->addWidget(spinPositionX, 0, 1, 1, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        spinIntensity = new QgsDoubleSpinBox(page);
        spinIntensity->setObjectName(QStringLiteral("spinIntensity"));
        spinIntensity->setDecimals(2);
        spinIntensity->setMaximum(999999);
        spinIntensity->setSingleStep(0.1);

        gridLayout->addWidget(spinIntensity, 5, 1, 1, 1);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        spinPositionY = new QgsDoubleSpinBox(page);
        spinPositionY->setObjectName(QStringLiteral("spinPositionY"));
        spinPositionY->setDecimals(1);
        spinPositionY->setMinimum(-1e+07);
        spinPositionY->setMaximum(1e+07);

        gridLayout->addWidget(spinPositionY, 1, 1, 2, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 2, 1);

        spinPositionZ = new QgsDoubleSpinBox(page);
        spinPositionZ->setObjectName(QStringLiteral("spinPositionZ"));
        spinPositionZ->setDecimals(1);
        spinPositionZ->setMinimum(-1e+07);
        spinPositionZ->setMaximum(1e+07);

        gridLayout->addWidget(spinPositionZ, 3, 1, 1, 1);

        btnColor = new QgsColorButton(page);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(btnColor, 4, 1, 1, 1);

        spinA0 = new QgsDoubleSpinBox(page);
        spinA0->setObjectName(QStringLiteral("spinA0"));
        spinA0->setMaximum(9);
        spinA0->setSingleStep(0.1);

        gridLayout->addWidget(spinA0, 7, 1, 1, 1);

        spinA1 = new QgsDoubleSpinBox(page);
        spinA1->setObjectName(QStringLiteral("spinA1"));
        spinA1->setMaximum(9);
        spinA1->setSingleStep(0.1);

        gridLayout->addWidget(spinA1, 8, 1, 1, 1);

        spinA2 = new QgsDoubleSpinBox(page);
        spinA2->setObjectName(QStringLiteral("spinA2"));
        spinA2->setMaximum(9);
        spinA2->setSingleStep(0.1);

        gridLayout->addWidget(spinA2, 9, 1, 1, 1);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 2);

        mStackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 7, 0, 1, 1);

        directionLightLayout = new QHBoxLayout();
        directionLightLayout->setObjectName(QStringLiteral("directionLightLayout"));
        directionLightLayout->setContentsMargins(-1, 11, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        directionLightLayout->addItem(horizontalSpacer_2);

        label_12 = new QLabel(page_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        directionLightLayout->addWidget(label_12);

        spinBoxAzimuth = new QDoubleSpinBox(page_3);
        spinBoxAzimuth->setObjectName(QStringLiteral("spinBoxAzimuth"));
        spinBoxAzimuth->setMaximum(360);

        directionLightLayout->addWidget(spinBoxAzimuth);

        directionCmpassWidget = new QWidget(page_3);
        directionCmpassWidget->setObjectName(QStringLiteral("directionCmpassWidget"));

        directionLightLayout->addWidget(directionCmpassWidget);

        dialAzimuth = new QDial(page_3);
        dialAzimuth->setObjectName(QStringLiteral("dialAzimuth"));
        dialAzimuth->setMinimum(0);
        dialAzimuth->setValue(0);
        dialAzimuth->setSliderPosition(0);
        dialAzimuth->setWrapping(true);
        dialAzimuth->setNotchTarget(10);
        dialAzimuth->setNotchesVisible(true);

        directionLightLayout->addWidget(dialAzimuth);

        altitudeSpinBox = new QLabel(page_3);
        altitudeSpinBox->setObjectName(QStringLiteral("altitudeSpinBox"));

        directionLightLayout->addWidget(altitudeSpinBox);

        spinBoxAltitude = new QDoubleSpinBox(page_3);
        spinBoxAltitude->setObjectName(QStringLiteral("spinBoxAltitude"));
        spinBoxAltitude->setMinimum(-90);
        spinBoxAltitude->setMaximum(90);

        directionLightLayout->addWidget(spinBoxAltitude);

        sliderAltitude = new QSlider(page_3);
        sliderAltitude->setObjectName(QStringLiteral("sliderAltitude"));
        sliderAltitude->setMinimum(0);
        sliderAltitude->setMaximum(90);
        sliderAltitude->setTracking(true);
        sliderAltitude->setOrientation(Qt::Vertical);
        sliderAltitude->setTickPosition(QSlider::NoTicks);
        sliderAltitude->setTickInterval(2);

        directionLightLayout->addWidget(sliderAltitude);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        directionLightLayout->addItem(horizontalSpacer);


        gridLayout_3->addLayout(directionLightLayout, 1, 0, 1, 2);

        spinDirectionalIntensity = new QgsDoubleSpinBox(page_3);
        spinDirectionalIntensity->setObjectName(QStringLiteral("spinDirectionalIntensity"));
        spinDirectionalIntensity->setDecimals(2);
        spinDirectionalIntensity->setMaximum(999999);
        spinDirectionalIntensity->setSingleStep(0.1);

        gridLayout_3->addWidget(spinDirectionalIntensity, 7, 1, 1, 1);

        label_16 = new QLabel(page_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 6, 0, 1, 1);

        btnDirectionalColor = new QgsColorButton(page_3);
        btnDirectionalColor->setObjectName(QStringLiteral("btnDirectionalColor"));
        sizePolicy.setHeightForWidth(btnDirectionalColor->sizePolicy().hasHeightForWidth());
        btnDirectionalColor->setSizePolicy(sizePolicy);
        btnDirectionalColor->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(btnDirectionalColor, 6, 1, 1, 1);

        label_11 = new QLabel(page_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 0, -1, -1);
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 0, 2, 1, 1);

        labelY = new QLabel(page_3);
        labelY->setObjectName(QStringLiteral("labelY"));

        gridLayout_5->addWidget(labelY, 0, 3, 1, 1);

        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 0, 4, 1, 1);

        label_17 = new QLabel(page_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 0, 0, 1, 1);

        labelX = new QLabel(page_3);
        labelX->setObjectName(QStringLiteral("labelX"));

        gridLayout_5->addWidget(labelX, 0, 1, 1, 1);

        labelZ = new QLabel(page_3);
        labelZ->setObjectName(QStringLiteral("labelZ"));

        gridLayout_5->addWidget(labelZ, 0, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 2, 1, 1, 1);

        mStackedWidget->addWidget(page_3);

        verticalLayout->addWidget(mStackedWidget);

        QWidget::setTabOrder(spinPositionX, spinPositionY);
        QWidget::setTabOrder(spinPositionY, spinPositionZ);
        QWidget::setTabOrder(spinPositionZ, btnColor);
        QWidget::setTabOrder(btnColor, spinIntensity);
        QWidget::setTabOrder(spinIntensity, spinA0);
        QWidget::setTabOrder(spinA0, spinA1);
        QWidget::setTabOrder(spinA1, spinA2);
        QWidget::setTabOrder(spinA2, btnDirectionalColor);
        QWidget::setTabOrder(btnDirectionalColor, spinDirectionalIntensity);

        retranslateUi(QgsLightsWidget);

        mStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsLightsWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLightsWidget)
    {
        btnAddLight->setText(QApplication::translate("QgsLightsWidget", "...", nullptr));
        btnRemoveLight->setText(QApplication::translate("QgsLightsWidget", "...", nullptr));
        label_3->setText(QApplication::translate("QgsLightsWidget", "Z", nullptr));
        label_9->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">2</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">0</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("QgsLightsWidget", "Y", nullptr));
        label_4->setText(QApplication::translate("QgsLightsWidget", "Intensity", nullptr));
        label_8->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">1</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("QgsLightsWidget", "Color", nullptr));
        label->setText(QApplication::translate("QgsLightsWidget", "X", nullptr));
        label_6->setText(QApplication::translate("QgsLightsWidget", "<html><head/><body><p>Attenuation (A<span style=\" vertical-align:sub;\">0</span>+A<span style=\" vertical-align:sub;\">1</span>&times;D+A<span style=\" vertical-align:sub;\">2</span>&times;D<span style=\" vertical-align:super;\">2</span>)</p></body></html>", nullptr));
        label_14->setText(QApplication::translate("QgsLightsWidget", "Intensity", nullptr));
        label_12->setText(QApplication::translate("QgsLightsWidget", "Azimuth", nullptr));
        spinBoxAzimuth->setSuffix(QApplication::translate("QgsLightsWidget", "\302\260", nullptr));
        altitudeSpinBox->setText(QApplication::translate("QgsLightsWidget", "Altitude", nullptr));
        spinBoxAltitude->setSuffix(QApplication::translate("QgsLightsWidget", "\302\260", nullptr));
        label_16->setText(QApplication::translate("QgsLightsWidget", "Color", nullptr));
        label_11->setText(QApplication::translate("QgsLightsWidget", "Light Direction", nullptr));
        label_13->setText(QApplication::translate("QgsLightsWidget", "Y", nullptr));
        labelY->setText(QApplication::translate("QgsLightsWidget", "--", nullptr));
        label_10->setText(QApplication::translate("QgsLightsWidget", "Z", nullptr));
        label_17->setText(QApplication::translate("QgsLightsWidget", "X", nullptr));
        labelX->setText(QApplication::translate("QgsLightsWidget", "--", nullptr));
        labelZ->setText(QApplication::translate("QgsLightsWidget", "--", nullptr));
        Q_UNUSED(QgsLightsWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsLightsWidget: public Ui_QgsLightsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLIGHTSWIDGET_H
