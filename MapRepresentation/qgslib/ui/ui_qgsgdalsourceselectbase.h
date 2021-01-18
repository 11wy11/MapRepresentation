/********************************************************************************
** Form generated from reading UI file 'qgsgdalsourceselectbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGDALSOURCESELECTBASE_H
#define UI_QGSGDALSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "auth/qgsauthsettingswidget.h"
#include "qgsfilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGdalSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *srcGroupBox;
    QHBoxLayout *horizontalLayout1;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcProtocol;
    QSpacerItem *horizontalSpacer;
    QGroupBox *fileGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QgsFileWidget *mFileWidget;
    QGroupBox *protocolGroupBox;
    QGridLayout *gridLayout_21;
    QComboBox *cmbProtocolTypes;
    QLabel *label_2;
    QLabel *labelProtocolURI;
    QLineEdit *protocolURI;
    QLabel *labelBucket;
    QLineEdit *mBucket;
    QLabel *labelKey;
    QLineEdit *mKey;
    QLabel *mAuthWarning;
    QGroupBox *mAuthGroupBox;
    QVBoxLayout *verticalLayout_3;
    QgsAuthSettingsWidget *mAuthSettingsProtocol;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGdalSourceSelectBase)
    {
        if (QgsGdalSourceSelectBase->objectName().isEmpty())
            QgsGdalSourceSelectBase->setObjectName(QStringLiteral("QgsGdalSourceSelectBase"));
        QgsGdalSourceSelectBase->resize(355, 229);
        QIcon icon;
        icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        QgsGdalSourceSelectBase->setWindowIcon(icon);
        QgsGdalSourceSelectBase->setSizeGripEnabled(true);
        QgsGdalSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsGdalSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        srcGroupBox = new QGroupBox(QgsGdalSourceSelectBase);
        srcGroupBox->setObjectName(QStringLiteral("srcGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(srcGroupBox->sizePolicy().hasHeightForWidth());
        srcGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout1 = new QHBoxLayout(srcGroupBox);
        horizontalLayout1->setSpacing(6);
        horizontalLayout1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        radioSrcFile = new QRadioButton(srcGroupBox);
        radioSrcFile->setObjectName(QStringLiteral("radioSrcFile"));

        horizontalLayout1->addWidget(radioSrcFile);

        radioSrcProtocol = new QRadioButton(srcGroupBox);
        radioSrcProtocol->setObjectName(QStringLiteral("radioSrcProtocol"));

        horizontalLayout1->addWidget(radioSrcProtocol);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer);


        verticalLayout->addWidget(srcGroupBox);

        fileGroupBox = new QGroupBox(QgsGdalSourceSelectBase);
        fileGroupBox->setObjectName(QStringLiteral("fileGroupBox"));
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(fileGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(fileGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mFileWidget = new QgsFileWidget(fileGroupBox);
        mFileWidget->setObjectName(QStringLiteral("mFileWidget"));

        horizontalLayout->addWidget(mFileWidget);


        verticalLayout->addWidget(fileGroupBox);

        protocolGroupBox = new QGroupBox(QgsGdalSourceSelectBase);
        protocolGroupBox->setObjectName(QStringLiteral("protocolGroupBox"));
        sizePolicy.setHeightForWidth(protocolGroupBox->sizePolicy().hasHeightForWidth());
        protocolGroupBox->setSizePolicy(sizePolicy);
        protocolGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_21 = new QGridLayout(protocolGroupBox);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        cmbProtocolTypes = new QComboBox(protocolGroupBox);
        cmbProtocolTypes->setObjectName(QStringLiteral("cmbProtocolTypes"));

        gridLayout_21->addWidget(cmbProtocolTypes, 0, 1, 1, 1);

        label_2 = new QLabel(protocolGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_21->addWidget(label_2, 0, 0, 1, 1);

        labelProtocolURI = new QLabel(protocolGroupBox);
        labelProtocolURI->setObjectName(QStringLiteral("labelProtocolURI"));

        gridLayout_21->addWidget(labelProtocolURI, 1, 0, 1, 1);

        protocolURI = new QLineEdit(protocolGroupBox);
        protocolURI->setObjectName(QStringLiteral("protocolURI"));

        gridLayout_21->addWidget(protocolURI, 1, 1, 1, 1);

        labelBucket = new QLabel(protocolGroupBox);
        labelBucket->setObjectName(QStringLiteral("labelBucket"));

        gridLayout_21->addWidget(labelBucket, 2, 0, 1, 1);

        mBucket = new QLineEdit(protocolGroupBox);
        mBucket->setObjectName(QStringLiteral("mBucket"));

        gridLayout_21->addWidget(mBucket, 2, 1, 1, 1);

        labelKey = new QLabel(protocolGroupBox);
        labelKey->setObjectName(QStringLiteral("labelKey"));

        gridLayout_21->addWidget(labelKey, 3, 0, 1, 1);

        mKey = new QLineEdit(protocolGroupBox);
        mKey->setObjectName(QStringLiteral("mKey"));

        gridLayout_21->addWidget(mKey, 3, 1, 1, 1);

        mAuthWarning = new QLabel(protocolGroupBox);
        mAuthWarning->setObjectName(QStringLiteral("mAuthWarning"));
        mAuthWarning->setWordWrap(true);
        mAuthWarning->setOpenExternalLinks(true);

        gridLayout_21->addWidget(mAuthWarning, 4, 0, 1, 2);

        mAuthGroupBox = new QGroupBox(protocolGroupBox);
        mAuthGroupBox->setObjectName(QStringLiteral("mAuthGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mAuthGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        mAuthSettingsProtocol = new QgsAuthSettingsWidget(mAuthGroupBox);
        mAuthSettingsProtocol->setObjectName(QStringLiteral("mAuthSettingsProtocol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAuthSettingsProtocol->sizePolicy().hasHeightForWidth());
        mAuthSettingsProtocol->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(mAuthSettingsProtocol);


        gridLayout_21->addWidget(mAuthGroupBox, 5, 0, 1, 2);


        verticalLayout->addWidget(protocolGroupBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGdalSourceSelectBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelProtocolURI->setBuddy(protocolURI);
        labelBucket->setBuddy(mBucket);
        labelKey->setBuddy(mKey);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsGdalSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGdalSourceSelectBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGdalSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGdalSourceSelectBase)
    {
        QgsGdalSourceSelectBase->setWindowTitle(QApplication::translate("QgsGdalSourceSelectBase", "Add Raster Layer(s)", nullptr));
        srcGroupBox->setTitle(QApplication::translate("QgsGdalSourceSelectBase", "Source Type", nullptr));
        radioSrcFile->setText(QApplication::translate("QgsGdalSourceSelectBase", "F&ile", nullptr));
        radioSrcProtocol->setText(QApplication::translate("QgsGdalSourceSelectBase", "Protoco&l: HTTP(S), cloud, etc.", nullptr));
        fileGroupBox->setTitle(QApplication::translate("QgsGdalSourceSelectBase", "Source", nullptr));
        label->setText(QApplication::translate("QgsGdalSourceSelectBase", "Raster dataset(s)", nullptr));
        protocolGroupBox->setTitle(QApplication::translate("QgsGdalSourceSelectBase", "Protocol", nullptr));
        label_2->setText(QApplication::translate("QgsGdalSourceSelectBase", "Type", nullptr));
        labelProtocolURI->setText(QApplication::translate("QgsGdalSourceSelectBase", "&URI", nullptr));
        labelBucket->setText(QApplication::translate("QgsGdalSourceSelectBase", "Bucket or container", nullptr));
        labelKey->setText(QApplication::translate("QgsGdalSourceSelectBase", "Object key", nullptr));
        mAuthWarning->setText(QApplication::translate("QgsGdalSourceSelectBase", "\342\200\246", nullptr));
        mAuthGroupBox->setTitle(QApplication::translate("QgsGdalSourceSelectBase", "Authentication", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QgsGdalSourceSelectBase: public Ui_QgsGdalSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGDALSOURCESELECTBASE_H
