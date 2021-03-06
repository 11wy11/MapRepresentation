/********************************************************************************
** Form generated from reading UI file 'qgstransformsettingsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTRANSFORMSETTINGSDIALOGBASE_H
#define UI_QGSTRANSFORMSETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <georeferencer/qgsvalidateddoublespinbox.h>
#include "qgsfilewidget.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsTransformSettingsDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QCheckBox *mWorldFileCheckBox;
    QLabel *label_2;
    QgsFileWidget *mOutputRaster;
    QCheckBox *cbxZeroAsTrans;
    QLabel *mCompressionLabel;
    QComboBox *cmbCompressionComboBox;
    QGroupBox *cbxUserResolution;
    QGridLayout *gridLayout_3;
    QgsValidatedDoubleSpinBox *dsbVerticalRes;
    QLabel *label_4;
    QLabel *label_5;
    QgsValidatedDoubleSpinBox *dsbHorizRes;
    QCheckBox *saveGcpCheckBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QgsFileWidget *mPdfMap;
    QgsFileWidget *mPdfReport;
    QLabel *label_6;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QComboBox *cmbTransformType;
    QComboBox *cmbResampling;
    QLabel *textLabel1;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_3;
    QCheckBox *cbxLoadInQgisWhenDone;

    void setupUi(QDialog *QgsTransformSettingsDialog)
    {
        if (QgsTransformSettingsDialog->objectName().isEmpty())
            QgsTransformSettingsDialog->setObjectName(QStringLiteral("QgsTransformSettingsDialog"));
        QgsTransformSettingsDialog->resize(438, 702);
        gridLayout_2 = new QGridLayout(QgsTransformSettingsDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsTransformSettingsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mWorldFileCheckBox = new QCheckBox(groupBox_2);
        mWorldFileCheckBox->setObjectName(QStringLiteral("mWorldFileCheckBox"));

        gridLayout_5->addWidget(mWorldFileCheckBox, 3, 0, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        mOutputRaster = new QgsFileWidget(groupBox_2);
        mOutputRaster->setObjectName(QStringLiteral("mOutputRaster"));

        gridLayout_5->addWidget(mOutputRaster, 0, 1, 1, 1);

        cbxZeroAsTrans = new QCheckBox(groupBox_2);
        cbxZeroAsTrans->setObjectName(QStringLiteral("cbxZeroAsTrans"));
        cbxZeroAsTrans->setChecked(false);

        gridLayout_5->addWidget(cbxZeroAsTrans, 4, 0, 1, 2);

        mCompressionLabel = new QLabel(groupBox_2);
        mCompressionLabel->setObjectName(QStringLiteral("mCompressionLabel"));
        sizePolicy.setHeightForWidth(mCompressionLabel->sizePolicy().hasHeightForWidth());
        mCompressionLabel->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(mCompressionLabel, 1, 0, 1, 1);

        cmbCompressionComboBox = new QComboBox(groupBox_2);
        cmbCompressionComboBox->setObjectName(QStringLiteral("cmbCompressionComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbCompressionComboBox->sizePolicy().hasHeightForWidth());
        cmbCompressionComboBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(cmbCompressionComboBox, 1, 1, 1, 1);

        cbxUserResolution = new QGroupBox(groupBox_2);
        cbxUserResolution->setObjectName(QStringLiteral("cbxUserResolution"));
        cbxUserResolution->setCheckable(true);
        cbxUserResolution->setChecked(false);
        gridLayout_3 = new QGridLayout(cbxUserResolution);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, -1, 0);
        dsbVerticalRes = new QgsValidatedDoubleSpinBox(cbxUserResolution);
        dsbVerticalRes->setObjectName(QStringLiteral("dsbVerticalRes"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dsbVerticalRes->sizePolicy().hasHeightForWidth());
        dsbVerticalRes->setSizePolicy(sizePolicy2);
        dsbVerticalRes->setFrame(true);
        dsbVerticalRes->setDecimals(5);
        dsbVerticalRes->setMinimum(-999999);
        dsbVerticalRes->setMaximum(0);

        gridLayout_3->addWidget(dsbVerticalRes, 1, 1, 1, 1);

        label_4 = new QLabel(cbxUserResolution);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(cbxUserResolution);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        dsbHorizRes = new QgsValidatedDoubleSpinBox(cbxUserResolution);
        dsbHorizRes->setObjectName(QStringLiteral("dsbHorizRes"));
        dsbHorizRes->setDecimals(5);
        dsbHorizRes->setMinimum(0);
        dsbHorizRes->setMaximum(999999);

        gridLayout_3->addWidget(dsbHorizRes, 0, 1, 1, 1);


        gridLayout_5->addWidget(cbxUserResolution, 5, 0, 1, 2);

        saveGcpCheckBox = new QCheckBox(groupBox_2);
        saveGcpCheckBox->setObjectName(QStringLiteral("saveGcpCheckBox"));

        gridLayout_5->addWidget(saveGcpCheckBox, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(QgsTransformSettingsDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        mPdfMap = new QgsFileWidget(groupBox_3);
        mPdfMap->setObjectName(QStringLiteral("mPdfMap"));

        gridLayout_6->addWidget(mPdfMap, 0, 1, 1, 1);

        mPdfReport = new QgsFileWidget(groupBox_3);
        mPdfReport->setObjectName(QStringLiteral("mPdfReport"));

        gridLayout_6->addWidget(mPdfReport, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsTransformSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 8, 0, 1, 1);

        groupBox = new QGroupBox(QgsTransformSettingsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        cmbTransformType = new QComboBox(groupBox);
        cmbTransformType->setObjectName(QStringLiteral("cmbTransformType"));
        sizePolicy1.setHeightForWidth(cmbTransformType->sizePolicy().hasHeightForWidth());
        cmbTransformType->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(cmbTransformType, 0, 1, 1, 1);

        cmbResampling = new QComboBox(groupBox);
        cmbResampling->addItem(QString());
        cmbResampling->addItem(QString());
        cmbResampling->addItem(QString());
        cmbResampling->addItem(QString());
        cmbResampling->addItem(QString());
        cmbResampling->setObjectName(QStringLiteral("cmbResampling"));

        gridLayout_4->addWidget(cmbResampling, 1, 1, 1, 1);

        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textLabel1, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(groupBox);
        mCrsSelector->setObjectName(QStringLiteral("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        cbxLoadInQgisWhenDone = new QCheckBox(QgsTransformSettingsDialog);
        cbxLoadInQgisWhenDone->setObjectName(QStringLiteral("cbxLoadInQgisWhenDone"));

        gridLayout_2->addWidget(cbxLoadInQgisWhenDone, 6, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mCompressionLabel->setBuddy(cmbCompressionComboBox);
        textLabel1->setBuddy(cmbResampling);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbTransformType, cmbResampling);
        QWidget::setTabOrder(cmbResampling, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mOutputRaster);
        QWidget::setTabOrder(mOutputRaster, cmbCompressionComboBox);
        QWidget::setTabOrder(cmbCompressionComboBox, mWorldFileCheckBox);
        QWidget::setTabOrder(mWorldFileCheckBox, cbxZeroAsTrans);
        QWidget::setTabOrder(cbxZeroAsTrans, cbxUserResolution);
        QWidget::setTabOrder(cbxUserResolution, dsbHorizRes);
        QWidget::setTabOrder(dsbHorizRes, dsbVerticalRes);
        QWidget::setTabOrder(dsbVerticalRes, mPdfMap);
        QWidget::setTabOrder(mPdfMap, mPdfReport);

        retranslateUi(QgsTransformSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsTransformSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsTransformSettingsDialog, SLOT(reject()));

        cmbResampling->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsTransformSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsTransformSettingsDialog)
    {
        QgsTransformSettingsDialog->setWindowTitle(QApplication::translate("QgsTransformSettingsDialog", "Transformation Settings", nullptr));
        groupBox_2->setTitle(QApplication::translate("QgsTransformSettingsDialog", "Output Settings", nullptr));
        mWorldFileCheckBox->setText(QApplication::translate("QgsTransformSettingsDialog", "Create world file only (linear transforms)", nullptr));
        label_2->setText(QApplication::translate("QgsTransformSettingsDialog", "Output raster", nullptr));
        cbxZeroAsTrans->setText(QApplication::translate("QgsTransformSettingsDialog", "Use 0 for transparency when needed", nullptr));
        mCompressionLabel->setText(QApplication::translate("QgsTransformSettingsDialog", "Compression", nullptr));
        cbxUserResolution->setTitle(QApplication::translate("QgsTransformSettingsDialog", "Set target resolution", nullptr));
        label_4->setText(QApplication::translate("QgsTransformSettingsDialog", "Horizontal", nullptr));
        label_5->setText(QApplication::translate("QgsTransformSettingsDialog", "Vertical", nullptr));
        saveGcpCheckBox->setText(QApplication::translate("QgsTransformSettingsDialog", "Save GCP points", nullptr));
        groupBox_3->setTitle(QApplication::translate("QgsTransformSettingsDialog", "Reports", nullptr));
        label_6->setText(QApplication::translate("QgsTransformSettingsDialog", "Generate PDF report", nullptr));
        label_7->setText(QApplication::translate("QgsTransformSettingsDialog", "Generate PDF map", nullptr));
        groupBox->setTitle(QApplication::translate("QgsTransformSettingsDialog", "Transformation Parameters", nullptr));
        label->setText(QApplication::translate("QgsTransformSettingsDialog", "Transformation type", nullptr));
        cmbResampling->setItemText(0, QApplication::translate("QgsTransformSettingsDialog", "Nearest neighbour", nullptr));
        cmbResampling->setItemText(1, QApplication::translate("QgsTransformSettingsDialog", "Linear", nullptr));
        cmbResampling->setItemText(2, QApplication::translate("QgsTransformSettingsDialog", "Cubic", nullptr));
        cmbResampling->setItemText(3, QApplication::translate("QgsTransformSettingsDialog", "Cubic Spline", nullptr));
        cmbResampling->setItemText(4, QApplication::translate("QgsTransformSettingsDialog", "Lanczos", nullptr));

        textLabel1->setText(QApplication::translate("QgsTransformSettingsDialog", "Resampling method", nullptr));
        label_3->setText(QApplication::translate("QgsTransformSettingsDialog", "Target SRS", nullptr));
        cbxLoadInQgisWhenDone->setText(QApplication::translate("QgsTransformSettingsDialog", "Load in QGIS when done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsTransformSettingsDialog: public Ui_QgsTransformSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTRANSFORMSETTINGSDIALOGBASE_H
