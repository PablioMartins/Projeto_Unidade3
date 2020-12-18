/********************************************************************************
** Form generated from reading UI file 'dialogsalvar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSALVAR_H
#define UI_DIALOGSALVAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSalvar
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *Nome;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSalvar)
    {
        if (DialogSalvar->objectName().isEmpty())
            DialogSalvar->setObjectName(QString::fromUtf8("DialogSalvar"));
        DialogSalvar->resize(241, 88);
        verticalLayout_2 = new QVBoxLayout(DialogSalvar);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogSalvar);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Nome = new QLineEdit(DialogSalvar);
        Nome->setObjectName(QString::fromUtf8("Nome"));

        verticalLayout->addWidget(Nome);

        buttonBox = new QDialogButtonBox(DialogSalvar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DialogSalvar);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSalvar, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSalvar, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSalvar);
    } // setupUi

    void retranslateUi(QDialog *DialogSalvar)
    {
        DialogSalvar->setWindowTitle(QCoreApplication::translate("DialogSalvar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogSalvar", "Digite Um Nome", nullptr));
        Nome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogSalvar: public Ui_DialogSalvar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSALVAR_H
