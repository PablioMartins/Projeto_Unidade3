/********************************************************************************
** Form generated from reading UI file 'newscult.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSCULT_H
#define UI_NEWSCULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newScult
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_getX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_getY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_getZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *newScult)
    {
        if (newScult->objectName().isEmpty())
            newScult->setObjectName(QString::fromUtf8("newScult"));
        newScult->resize(176, 129);
        verticalLayout_3 = new QVBoxLayout(newScult);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(newScult);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_getX = new QLineEdit(newScult);
        lineEdit_getX->setObjectName(QString::fromUtf8("lineEdit_getX"));

        horizontalLayout->addWidget(lineEdit_getX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(newScult);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_getY = new QLineEdit(newScult);
        lineEdit_getY->setObjectName(QString::fromUtf8("lineEdit_getY"));

        horizontalLayout_2->addWidget(lineEdit_getY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(newScult);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_getZ = new QLineEdit(newScult);
        lineEdit_getZ->setObjectName(QString::fromUtf8("lineEdit_getZ"));

        horizontalLayout_3->addWidget(lineEdit_getZ);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(newScult);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(newScult);
        QObject::connect(buttonBox, SIGNAL(accepted()), newScult, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newScult, SLOT(reject()));

        QMetaObject::connectSlotsByName(newScult);
    } // setupUi

    void retranslateUi(QDialog *newScult)
    {
        newScult->setWindowTitle(QCoreApplication::translate("newScult", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("newScult", "Tamano X:", nullptr));
        label->setText(QCoreApplication::translate("newScult", "Tamano Y:", nullptr));
        label_3->setText(QCoreApplication::translate("newScult", "Tamano Z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newScult: public Ui_newScult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSCULT_H
