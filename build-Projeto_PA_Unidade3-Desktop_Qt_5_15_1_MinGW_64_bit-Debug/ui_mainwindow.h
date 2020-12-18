/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gridsculptor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNewsculp;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *button;
    QPushButton *pushButton_new;
    QPushButton *pushButton_save;
    QPushButton *pushButton_voxel;
    QPushButton *pushButton_cvoxel;
    QPushButton *pushButton_box;
    QPushButton *pushButton_cbox;
    QPushButton *pushButton_sphere;
    QPushButton *pushButton_csphere;
    QPushButton *pushButton_ellipsoid;
    QPushButton *pushButton_cellipsoid;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *WIDGETGRID;
    GridSculptor *gridsculptor;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdNumber;
    QSlider *barraZ;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSlider *SliderR;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *SliderG;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *SliderB;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSlider *SliderA;
    QTabWidget *tabWidget;
    QWidget *Box;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineBoxX;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineBoxY;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineBoxZ;
    QWidget *Sphere;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineRadius;
    QWidget *Ellipsoid;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *lineRadiusEllipX;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *lineRadiusEllipY;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *lineRadiusEllipZ;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(948, 467);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        actionNewsculp = new QAction(MainWindow);
        actionNewsculp->setObjectName(QString::fromUtf8("actionNewsculp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        button = new QHBoxLayout();
        button->setObjectName(QString::fromUtf8("button"));
        button->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_new = new QPushButton(centralwidget);
        pushButton_new->setObjectName(QString::fromUtf8("pushButton_new"));

        button->addWidget(pushButton_new);

        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        button->addWidget(pushButton_save);

        pushButton_voxel = new QPushButton(centralwidget);
        pushButton_voxel->setObjectName(QString::fromUtf8("pushButton_voxel"));

        button->addWidget(pushButton_voxel);

        pushButton_cvoxel = new QPushButton(centralwidget);
        pushButton_cvoxel->setObjectName(QString::fromUtf8("pushButton_cvoxel"));

        button->addWidget(pushButton_cvoxel);

        pushButton_box = new QPushButton(centralwidget);
        pushButton_box->setObjectName(QString::fromUtf8("pushButton_box"));

        button->addWidget(pushButton_box);

        pushButton_cbox = new QPushButton(centralwidget);
        pushButton_cbox->setObjectName(QString::fromUtf8("pushButton_cbox"));

        button->addWidget(pushButton_cbox);

        pushButton_sphere = new QPushButton(centralwidget);
        pushButton_sphere->setObjectName(QString::fromUtf8("pushButton_sphere"));

        button->addWidget(pushButton_sphere);

        pushButton_csphere = new QPushButton(centralwidget);
        pushButton_csphere->setObjectName(QString::fromUtf8("pushButton_csphere"));

        button->addWidget(pushButton_csphere);

        pushButton_ellipsoid = new QPushButton(centralwidget);
        pushButton_ellipsoid->setObjectName(QString::fromUtf8("pushButton_ellipsoid"));

        button->addWidget(pushButton_ellipsoid);

        pushButton_cellipsoid = new QPushButton(centralwidget);
        pushButton_cellipsoid->setObjectName(QString::fromUtf8("pushButton_cellipsoid"));

        button->addWidget(pushButton_cellipsoid);


        verticalLayout_7->addLayout(button);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        WIDGETGRID = new QHBoxLayout();
        WIDGETGRID->setObjectName(QString::fromUtf8("WIDGETGRID"));
        WIDGETGRID->setSizeConstraint(QLayout::SetDefaultConstraint);
        WIDGETGRID->setContentsMargins(0, 0, 0, 0);
        gridsculptor = new GridSculptor(centralwidget);
        gridsculptor->setObjectName(QString::fromUtf8("gridsculptor"));
        gridsculptor->setEnabled(true);

        WIDGETGRID->addWidget(gridsculptor);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_2->addWidget(lcdNumber);

        barraZ = new QSlider(centralwidget);
        barraZ->setObjectName(QString::fromUtf8("barraZ"));
        barraZ->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(barraZ);


        WIDGETGRID->addLayout(verticalLayout_2);

        WIDGETGRID->setStretch(0, 90);
        WIDGETGRID->setStretch(1, 10);

        horizontalLayout_5->addLayout(WIDGETGRID);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        SliderR = new QSlider(centralwidget);
        SliderR->setObjectName(QString::fromUtf8("SliderR"));
        SliderR->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(SliderR);

        horizontalLayout_4->setStretch(0, 20);
        horizontalLayout_4->setStretch(1, 80);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        SliderG = new QSlider(centralwidget);
        SliderG->setObjectName(QString::fromUtf8("SliderG"));
        SliderG->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(SliderG);

        horizontalLayout_3->setStretch(0, 20);
        horizontalLayout_3->setStretch(1, 80);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        SliderB = new QSlider(centralwidget);
        SliderB->setObjectName(QString::fromUtf8("SliderB"));
        SliderB->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(SliderB);

        horizontalLayout_2->setStretch(0, 20);
        horizontalLayout_2->setStretch(1, 80);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        SliderA = new QSlider(centralwidget);
        SliderA->setObjectName(QString::fromUtf8("SliderA"));
        SliderA->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(SliderA);

        horizontalLayout->setStretch(0, 20);
        horizontalLayout->setStretch(1, 80);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(300, 300));
        Box = new QWidget();
        Box->setObjectName(QString::fromUtf8("Box"));
        layoutWidget = new QWidget(Box);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 121, 107));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineBoxX = new QLineEdit(layoutWidget);
        lineBoxX->setObjectName(QString::fromUtf8("lineBoxX"));

        horizontalLayout_6->addWidget(lineBoxX);

        horizontalLayout_6->setStretch(0, 10);

        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineBoxY = new QLineEdit(layoutWidget);
        lineBoxY->setObjectName(QString::fromUtf8("lineBoxY"));

        horizontalLayout_7->addWidget(lineBoxY);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineBoxZ = new QLineEdit(layoutWidget);
        lineBoxZ->setObjectName(QString::fromUtf8("lineBoxZ"));

        horizontalLayout_8->addWidget(lineBoxZ);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalLayout_3->setStretch(0, 25);
        verticalLayout_3->setStretch(1, 25);
        verticalLayout_3->setStretch(2, 25);
        verticalLayout_3->setStretch(3, 25);
        tabWidget->addTab(Box, QString());
        Sphere = new QWidget();
        Sphere->setObjectName(QString::fromUtf8("Sphere"));
        layoutWidget1 = new QWidget(Sphere);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 121, 43));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lineRadius = new QLineEdit(layoutWidget1);
        lineRadius->setObjectName(QString::fromUtf8("lineRadius"));

        horizontalLayout_9->addWidget(lineRadius);

        horizontalLayout_9->setStretch(0, 20);
        horizontalLayout_9->setStretch(1, 80);

        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalLayout_4->setStretch(0, 50);
        verticalLayout_4->setStretch(1, 50);
        tabWidget->addTab(Sphere, QString());
        Ellipsoid = new QWidget();
        Ellipsoid->setObjectName(QString::fromUtf8("Ellipsoid"));
        layoutWidget2 = new QWidget(Ellipsoid);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 121, 101));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_5->addWidget(label_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        lineRadiusEllipX = new QLineEdit(layoutWidget2);
        lineRadiusEllipX->setObjectName(QString::fromUtf8("lineRadiusEllipX"));

        horizontalLayout_10->addWidget(lineRadiusEllipX);

        horizontalLayout_10->setStretch(0, 20);
        horizontalLayout_10->setStretch(1, 80);

        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);

        lineRadiusEllipY = new QLineEdit(layoutWidget2);
        lineRadiusEllipY->setObjectName(QString::fromUtf8("lineRadiusEllipY"));

        horizontalLayout_11->addWidget(lineRadiusEllipY);

        horizontalLayout_11->setStretch(0, 20);
        horizontalLayout_11->setStretch(1, 80);

        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_12->addWidget(label_14);

        lineRadiusEllipZ = new QLineEdit(layoutWidget2);
        lineRadiusEllipZ->setObjectName(QString::fromUtf8("lineRadiusEllipZ"));

        horizontalLayout_12->addWidget(lineRadiusEllipZ);

        horizontalLayout_12->setStretch(0, 20);
        horizontalLayout_12->setStretch(1, 80);

        verticalLayout_5->addLayout(horizontalLayout_12);

        verticalLayout_5->setStretch(1, 25);
        verticalLayout_5->setStretch(2, 25);
        verticalLayout_5->setStretch(3, 25);
        tabWidget->addTab(Ellipsoid, QString());

        verticalLayout_6->addWidget(tabWidget);

        verticalLayout_6->setStretch(0, 50);
        verticalLayout_6->setStretch(1, 50);

        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalLayout_5->setStretch(0, 75);
        horizontalLayout_5->setStretch(1, 25);

        verticalLayout_7->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 948, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_new, SIGNAL(clicked(bool)), actionNewsculp, SLOT(trigger()));
        QObject::connect(gridsculptor, SIGNAL(updatePos(int,int)), MainWindow, SLOT(drawObject(int,int)));
        QObject::connect(barraZ, SIGNAL(sliderReleased()), MainWindow, SLOT(setPlanoZ()));
        QObject::connect(SliderR, SIGNAL(sliderReleased()), MainWindow, SLOT(updatecolor()));
        QObject::connect(SliderG, SIGNAL(sliderReleased()), MainWindow, SLOT(updatecolor()));
        QObject::connect(SliderB, SIGNAL(sliderReleased()), MainWindow, SLOT(updatecolor()));
        QObject::connect(pushButton_voxel, SIGNAL(clicked()), MainWindow, SLOT(setVOXEL()));
        QObject::connect(pushButton_cvoxel, SIGNAL(clicked()), MainWindow, SLOT(setCVOXEL()));
        QObject::connect(pushButton_box, SIGNAL(clicked()), MainWindow, SLOT(setBOX()));
        QObject::connect(pushButton_cbox, SIGNAL(clicked()), MainWindow, SLOT(setCBOX()));
        QObject::connect(pushButton_sphere, SIGNAL(clicked()), MainWindow, SLOT(setSPHERE()));
        QObject::connect(pushButton_csphere, SIGNAL(clicked()), MainWindow, SLOT(setCSPHERE()));
        QObject::connect(pushButton_ellipsoid, SIGNAL(clicked()), MainWindow, SLOT(setELLIPSOID()));
        QObject::connect(pushButton_cellipsoid, SIGNAL(clicked()), MainWindow, SLOT(setCELLIPSOID()));
        QObject::connect(pushButton_save, SIGNAL(clicked()), MainWindow, SLOT(Salvar()));
        QObject::connect(barraZ, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNewsculp->setText(QCoreApplication::translate("MainWindow", "Newsculp", nullptr));
        pushButton_new->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_voxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        pushButton_cvoxel->setText(QCoreApplication::translate("MainWindow", "Cut Voxel", nullptr));
        pushButton_box->setText(QCoreApplication::translate("MainWindow", "Box", nullptr));
        pushButton_cbox->setText(QCoreApplication::translate("MainWindow", "Cut Box", nullptr));
        pushButton_sphere->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        pushButton_csphere->setText(QCoreApplication::translate("MainWindow", "Cut Sphere", nullptr));
        pushButton_ellipsoid->setText(QCoreApplication::translate("MainWindow", "Ellipsoid", nullptr));
        pushButton_cellipsoid->setText(QCoreApplication::translate("MainWindow", "Cut Ellipsoid", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Size Box", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Box), QCoreApplication::translate("MainWindow", "Box", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Radius Sphere", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Sphere), QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Radius Ellipsoid", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "RX", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "RY", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "RZ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Ellipsoid), QCoreApplication::translate("MainWindow", "Ellipsoid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
