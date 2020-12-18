/********************************************************************************
** Form generated from reading UI file 'dialognew.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEW_H
#define UI_DIALOGNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogNew
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_X;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Y;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Z;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogNew)
    {
        if (DialogNew->objectName().isEmpty())
            DialogNew->setObjectName(QString::fromUtf8("DialogNew"));
        DialogNew->resize(267, 156);
        gridLayout = new QGridLayout(DialogNew);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogNew);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_X = new QLineEdit(DialogNew);
        lineEdit_X->setObjectName(QString::fromUtf8("lineEdit_X"));

        horizontalLayout->addWidget(lineEdit_X);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DialogNew);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Y = new QLineEdit(DialogNew);
        lineEdit_Y->setObjectName(QString::fromUtf8("lineEdit_Y"));

        horizontalLayout_2->addWidget(lineEdit_Y);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(DialogNew);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Z = new QLineEdit(DialogNew);
        lineEdit_Z->setObjectName(QString::fromUtf8("lineEdit_Z"));

        horizontalLayout_3->addWidget(lineEdit_Z);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogNew);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(DialogNew);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNew, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNew, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNew);
    } // setupUi

    void retranslateUi(QDialog *DialogNew)
    {
        DialogNew->setWindowTitle(QCoreApplication::translate("DialogNew", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogNew", "Tamanho em X:", nullptr));
        label_2->setText(QCoreApplication::translate("DialogNew", "Tamanho em Y:", nullptr));
        label_3->setText(QCoreApplication::translate("DialogNew", "Tamanho em Z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogNew: public Ui_DialogNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEW_H
