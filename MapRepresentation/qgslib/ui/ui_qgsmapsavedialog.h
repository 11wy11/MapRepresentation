/********************************************************************************
** Form generated from reading UI file 'qgsmapsavedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPSAVEDIALOG_H
#define UI_QGSMAPSAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsratiolockbutton.h"
#include "qgsscalewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapSaveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *mSaveWorldFile;
    QCheckBox *mExportMetadataCheckBox;
    QgsScaleWidget *mScaleWidget;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBoxBasic *mGeoPDFGroupBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *mGeoPDFOptionsStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *mGeoPdfUnavailableReason;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QComboBox *mGeoPdfFormatComboBox;
    QLabel *label;
    QCheckBox *mExportGeoPdfFeaturesCheckBox;
    QgsCollapsibleGroupBox *mAdvancedPdfSettings;
    QGridLayout *gridLayout_3;
    QLabel *mTextExportLabel;
    QComboBox *mTextRenderFormatComboBox;
    QCheckBox *mSimplifyGeometriesCheckbox;
    QCheckBox *mSaveAsRaster;
    QLabel *label_4;
    QCheckBox *mDrawAnnotations;
    QCheckBox *mDrawDecorations;
    QLabel *label_3;
    QGridLayout *gridLayout_4;
    QgsSpinBox *mOutputWidthSpinBox;
    QHBoxLayout *hboxLayout;
    QgsRatioLockButton *mLockAspectRatio;
    QgsSpinBox *mOutputHeightSpinBox;
    QgsSpinBox *mResolutionSpinBox;
    QLabel *label_1;
    QLabel *mInfo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMapSaveDialog)
    {
        if (QgsMapSaveDialog->objectName().isEmpty())
            QgsMapSaveDialog->setObjectName(QStringLiteral("QgsMapSaveDialog"));
        QgsMapSaveDialog->resize(600, 629);
        verticalLayout = new QVBoxLayout(QgsMapSaveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(QgsMapSaveDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mSaveWorldFile = new QCheckBox(QgsMapSaveDialog);
        mSaveWorldFile->setObjectName(QStringLiteral("mSaveWorldFile"));
        mSaveWorldFile->setChecked(true);

        gridLayout->addWidget(mSaveWorldFile, 7, 0, 1, 2);

        mExportMetadataCheckBox = new QCheckBox(QgsMapSaveDialog);
        mExportMetadataCheckBox->setObjectName(QStringLiteral("mExportMetadataCheckBox"));
        mExportMetadataCheckBox->setChecked(true);

        gridLayout->addWidget(mExportMetadataCheckBox, 8, 0, 1, 2);

        mScaleWidget = new QgsScaleWidget(QgsMapSaveDialog);
        mScaleWidget->setObjectName(QStringLiteral("mScaleWidget"));

        gridLayout->addWidget(mScaleWidget, 1, 1, 1, 1);

        mExtentGroupBox = new QgsExtentGroupBox(QgsMapSaveDialog);
        mExtentGroupBox->setObjectName(QStringLiteral("mExtentGroupBox"));
        mExtentGroupBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(mExtentGroupBox, 0, 0, 1, 2);

        mGeoPDFGroupBox = new QgsCollapsibleGroupBoxBasic(QgsMapSaveDialog);
        mGeoPDFGroupBox->setObjectName(QStringLiteral("mGeoPDFGroupBox"));
        mGeoPDFGroupBox->setCheckable(true);
        mGeoPDFGroupBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(mGeoPDFGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mGeoPDFOptionsStackedWidget = new QStackedWidget(mGeoPDFGroupBox);
        mGeoPDFOptionsStackedWidget->setObjectName(QStringLiteral("mGeoPDFOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mGeoPdfUnavailableReason = new QLabel(page);
        mGeoPdfUnavailableReason->setObjectName(QStringLiteral("mGeoPdfUnavailableReason"));

        verticalLayout_3->addWidget(mGeoPdfUnavailableReason);

        mGeoPDFOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeoPdfFormatComboBox = new QComboBox(page_2);
        mGeoPdfFormatComboBox->setObjectName(QStringLiteral("mGeoPdfFormatComboBox"));

        gridLayout_2->addWidget(mGeoPdfFormatComboBox, 1, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        mExportGeoPdfFeaturesCheckBox = new QCheckBox(page_2);
        mExportGeoPdfFeaturesCheckBox->setObjectName(QStringLiteral("mExportGeoPdfFeaturesCheckBox"));
        mExportGeoPdfFeaturesCheckBox->setChecked(true);

        gridLayout_2->addWidget(mExportGeoPdfFeaturesCheckBox, 2, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);
        mGeoPDFOptionsStackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(mGeoPDFOptionsStackedWidget);


        gridLayout->addWidget(mGeoPDFGroupBox, 9, 0, 1, 2);

        mAdvancedPdfSettings = new QgsCollapsibleGroupBox(QgsMapSaveDialog);
        mAdvancedPdfSettings->setObjectName(QStringLiteral("mAdvancedPdfSettings"));
        gridLayout_3 = new QGridLayout(mAdvancedPdfSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mTextExportLabel = new QLabel(mAdvancedPdfSettings);
        mTextExportLabel->setObjectName(QStringLiteral("mTextExportLabel"));

        gridLayout_3->addWidget(mTextExportLabel, 2, 0, 1, 1);

        mTextRenderFormatComboBox = new QComboBox(mAdvancedPdfSettings);
        mTextRenderFormatComboBox->setObjectName(QStringLiteral("mTextRenderFormatComboBox"));

        gridLayout_3->addWidget(mTextRenderFormatComboBox, 2, 1, 1, 1);

        mSimplifyGeometriesCheckbox = new QCheckBox(mAdvancedPdfSettings);
        mSimplifyGeometriesCheckbox->setObjectName(QStringLiteral("mSimplifyGeometriesCheckbox"));
        mSimplifyGeometriesCheckbox->setChecked(true);

        gridLayout_3->addWidget(mSimplifyGeometriesCheckbox, 1, 0, 1, 2);

        mSaveAsRaster = new QCheckBox(mAdvancedPdfSettings);
        mSaveAsRaster->setObjectName(QStringLiteral("mSaveAsRaster"));
        mSaveAsRaster->setVisible(true);
        mSaveAsRaster->setChecked(false);

        gridLayout_3->addWidget(mSaveAsRaster, 0, 0, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);

        gridLayout->addWidget(mAdvancedPdfSettings, 10, 0, 1, 2);

        label_4 = new QLabel(QgsMapSaveDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        mDrawAnnotations = new QCheckBox(QgsMapSaveDialog);
        mDrawAnnotations->setObjectName(QStringLiteral("mDrawAnnotations"));
        mDrawAnnotations->setChecked(true);

        gridLayout->addWidget(mDrawAnnotations, 6, 0, 1, 2);

        mDrawDecorations = new QCheckBox(QgsMapSaveDialog);
        mDrawDecorations->setObjectName(QStringLiteral("mDrawDecorations"));
        mDrawDecorations->setChecked(true);

        gridLayout->addWidget(mDrawDecorations, 5, 0, 1, 2);

        label_3 = new QLabel(QgsMapSaveDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(6);
        mOutputWidthSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mOutputWidthSpinBox->setObjectName(QStringLiteral("mOutputWidthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOutputWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutputWidthSpinBox->setSizePolicy(sizePolicy);
        mOutputWidthSpinBox->setMinimum(1);
        mOutputWidthSpinBox->setMaximum(99999);
        mOutputWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mOutputWidthSpinBox, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 0, 2);
        mLockAspectRatio = new QgsRatioLockButton(QgsMapSaveDialog);
        mLockAspectRatio->setObjectName(QStringLiteral("mLockAspectRatio"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLockAspectRatio->sizePolicy().hasHeightForWidth());
        mLockAspectRatio->setSizePolicy(sizePolicy1);
        mLockAspectRatio->setContentsMargins(13, -1, -1, -1);

        hboxLayout->addWidget(mLockAspectRatio);


        gridLayout_4->addLayout(hboxLayout, 0, 1, 2, 1);

        mOutputHeightSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mOutputHeightSpinBox->setObjectName(QStringLiteral("mOutputHeightSpinBox"));
        mOutputHeightSpinBox->setMinimum(1);
        mOutputHeightSpinBox->setMaximum(99999);
        mOutputHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_4->addWidget(mOutputHeightSpinBox, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 3, 1, 2, 1);

        mResolutionSpinBox = new QgsSpinBox(QgsMapSaveDialog);
        mResolutionSpinBox->setObjectName(QStringLiteral("mResolutionSpinBox"));
        mResolutionSpinBox->setMinimum(1);
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mResolutionSpinBox, 2, 1, 1, 1);

        label_1 = new QLabel(QgsMapSaveDialog);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout->addWidget(label_1, 1, 0, 1, 1);

        mInfo = new QLabel(QgsMapSaveDialog);
        mInfo->setObjectName(QStringLiteral("mInfo"));
        mInfo->setWordWrap(true);
        mInfo->setOpenExternalLinks(false);

        gridLayout->addWidget(mInfo, 11, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsMapSaveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mExtentGroupBox, mResolutionSpinBox);
        QWidget::setTabOrder(mResolutionSpinBox, mOutputWidthSpinBox);
        QWidget::setTabOrder(mOutputWidthSpinBox, mLockAspectRatio);
        QWidget::setTabOrder(mLockAspectRatio, mOutputHeightSpinBox);
        QWidget::setTabOrder(mOutputHeightSpinBox, mDrawDecorations);
        QWidget::setTabOrder(mDrawDecorations, mDrawAnnotations);
        QWidget::setTabOrder(mDrawAnnotations, mSaveWorldFile);
        QWidget::setTabOrder(mSaveWorldFile, mGeoPDFGroupBox);
        QWidget::setTabOrder(mGeoPDFGroupBox, mGeoPdfFormatComboBox);
        QWidget::setTabOrder(mGeoPdfFormatComboBox, mExportMetadataCheckBox);
        QWidget::setTabOrder(mExportMetadataCheckBox, mExportGeoPdfFeaturesCheckBox);
        QWidget::setTabOrder(mExportGeoPdfFeaturesCheckBox, mSaveAsRaster);
        QWidget::setTabOrder(mSaveAsRaster, mSimplifyGeometriesCheckbox);
        QWidget::setTabOrder(mSimplifyGeometriesCheckbox, mTextRenderFormatComboBox);

        retranslateUi(QgsMapSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMapSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMapSaveDialog, SLOT(reject()));

        mGeoPDFOptionsStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsMapSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMapSaveDialog)
    {
        QgsMapSaveDialog->setWindowTitle(QApplication::translate("QgsMapSaveDialog", "Save Map as Image", nullptr));
        label_2->setText(QApplication::translate("QgsMapSaveDialog", "Resolution", nullptr));
        mSaveWorldFile->setText(QApplication::translate("QgsMapSaveDialog", "Append georeference information (embedded or via world file)", nullptr));
        mExportMetadataCheckBox->setText(QApplication::translate("QgsMapSaveDialog", "Export RDF metadata (title, author, etc.)", nullptr));
        mExtentGroupBox->setTitle(QApplication::translate("QgsMapSaveDialog", "Extent", nullptr));
        mGeoPDFGroupBox->setTitle(QApplication::translate("QgsMapSaveDialog", "Create Geospatial PDF (GeoPDF)", nullptr));
        mGeoPdfUnavailableReason->setText(QString());
        label->setText(QApplication::translate("QgsMapSaveDialog", "Format", nullptr));
        mExportGeoPdfFeaturesCheckBox->setText(QApplication::translate("QgsMapSaveDialog", "Include vector feature information", nullptr));
        mAdvancedPdfSettings->setTitle(QApplication::translate("QgsMapSaveDialog", "Advanced Settings", nullptr));
        mTextExportLabel->setText(QApplication::translate("QgsMapSaveDialog", "Text export", nullptr));
        mSimplifyGeometriesCheckbox->setText(QApplication::translate("QgsMapSaveDialog", "Simplify geometries to reduce output file size", nullptr));
#ifndef QT_NO_TOOLTIP
        mSaveAsRaster->setToolTip(QApplication::translate("QgsMapSaveDialog", "Advanced effects such as blend modes or vector layer transparency cannot be exported as vectors.\n"
"Rasterizing the map is recommended when such effects are used.", nullptr));
#endif // QT_NO_TOOLTIP
        mSaveAsRaster->setText(QApplication::translate("QgsMapSaveDialog", "Rasterize map", nullptr));
        label_4->setText(QApplication::translate("QgsMapSaveDialog", "Output height", nullptr));
        mDrawAnnotations->setText(QApplication::translate("QgsMapSaveDialog", "Draw annotations", nullptr));
        mDrawDecorations->setText(QApplication::translate("QgsMapSaveDialog", "Draw active decorations", nullptr));
        label_3->setText(QApplication::translate("QgsMapSaveDialog", "Output width", nullptr));
        mOutputWidthSpinBox->setSuffix(QApplication::translate("QgsMapSaveDialog", " px", nullptr));
        mOutputWidthSpinBox->setPrefix(QString());
#ifndef QT_NO_TOOLTIP
        mLockAspectRatio->setToolTip(QApplication::translate("QgsMapSaveDialog", "Lock aspect ratio (including while drawing extent onto canvas)", nullptr));
#endif // QT_NO_TOOLTIP
        mOutputHeightSpinBox->setSuffix(QApplication::translate("QgsMapSaveDialog", " px", nullptr));
        mOutputHeightSpinBox->setPrefix(QString());
        mResolutionSpinBox->setSuffix(QApplication::translate("QgsMapSaveDialog", " dpi", nullptr));
        mResolutionSpinBox->setPrefix(QString());
        label_1->setText(QApplication::translate("QgsMapSaveDialog", "Scale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsMapSaveDialog: public Ui_QgsMapSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPSAVEDIALOG_H
