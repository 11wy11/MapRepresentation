/********************************************************************************
** Form generated from reading UI file 'qgspostgresprojectstoragedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOSTGRESPROJECTSTORAGEDIALOG_H
#define UI_QGSPOSTGRESPROJECTSTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsPostgresProjectStorageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *mCboConnection;
    QLabel *label_2;
    QComboBox *mCboSchema;
    QLabel *label_3;
    QComboBox *mCboProject;
    QLabel *mLblProjectsNotAllowed;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPostgresProjectStorageDialog)
    {
        if (QgsPostgresProjectStorageDialog->objectName().isEmpty())
            QgsPostgresProjectStorageDialog->setObjectName(QStringLiteral("QgsPostgresProjectStorageDialog"));
        QgsPostgresProjectStorageDialog->resize(552, 442);
        verticalLayout = new QVBoxLayout(QgsPostgresProjectStorageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QgsPostgresProjectStorageDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mCboConnection = new QComboBox(QgsPostgresProjectStorageDialog);
        mCboConnection->setObjectName(QStringLiteral("mCboConnection"));

        gridLayout->addWidget(mCboConnection, 0, 1, 1, 1);

        label_2 = new QLabel(QgsPostgresProjectStorageDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mCboSchema = new QComboBox(QgsPostgresProjectStorageDialog);
        mCboSchema->setObjectName(QStringLiteral("mCboSchema"));

        gridLayout->addWidget(mCboSchema, 1, 1, 1, 1);

        label_3 = new QLabel(QgsPostgresProjectStorageDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        mCboProject = new QComboBox(QgsPostgresProjectStorageDialog);
        mCboProject->setObjectName(QStringLiteral("mCboProject"));

        gridLayout->addWidget(mCboProject, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        mLblProjectsNotAllowed = new QLabel(QgsPostgresProjectStorageDialog);
        mLblProjectsNotAllowed->setObjectName(QStringLiteral("mLblProjectsNotAllowed"));
        mLblProjectsNotAllowed->setAlignment(Qt::AlignCenter);
        mLblProjectsNotAllowed->setWordWrap(true);

        verticalLayout->addWidget(mLblProjectsNotAllowed);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsPostgresProjectStorageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsPostgresProjectStorageDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPostgresProjectStorageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsPostgresProjectStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsPostgresProjectStorageDialog)
    {
        label->setText(QApplication::translate("QgsPostgresProjectStorageDialog", "Connection", nullptr));
        label_2->setText(QApplication::translate("QgsPostgresProjectStorageDialog", "Schema", nullptr));
        label_3->setText(QApplication::translate("QgsPostgresProjectStorageDialog", "Project", nullptr));
        mLblProjectsNotAllowed->setText(QApplication::translate("QgsPostgresProjectStorageDialog", "Storage of QGIS projects is not enabled for this database connection.", nullptr));
        Q_UNUSED(QgsPostgresProjectStorageDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsPostgresProjectStorageDialog: public Ui_QgsPostgresProjectStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOSTGRESPROJECTSTORAGEDIALOG_H
