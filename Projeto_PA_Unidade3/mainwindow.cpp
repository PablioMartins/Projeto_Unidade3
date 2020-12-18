#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QDebug>
#include "dialognew.h"
#include "dialogsalvar.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_new,
            SIGNAL(clicked(bool)),
            this,
            SLOT(NewSculptor()));


    dimX = dimY = dimZ = 10;
    e = new sculptor(dimX, dimY, dimZ);
    setVOXEL();

    //Barra de cordenada
    ui->barraZ->setMaximum(dimZ-1);

    //cores
    ui->SliderR->setMaximum(255);
    ui->SliderG->setMaximum(255);
    ui->SliderA->setMaximum(255);

    //barras de ajuste
    ui->lineBoxX->setText("1");
    ui->lineBoxY->setText("1");
    ui->lineBoxZ->setText("1");
    ui->lineRadius->setText("1");
    ui->lineRadiusEllipX->setText("1");
    ui->lineRadiusEllipY->setText("1");
    ui->lineRadiusEllipZ->setText("1");

    updatecolor();
    ui->gridsculptor->loadMatrix(e->PlotXY(0));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NewSculptor()
{
    DialogNew d;

    if(d.exec() == QDialog::Accepted){
        //...Receber informações do dimX, dimY, dimZ

        dimX = d.lerdimX();
        dimY = d.lerdimY();
        dimZ = d.lerdimZ();

        if(e != 0){
            delete  e;
        }
        e = new sculptor(dimX, dimY, dimZ);

        updatecolor();
        ui->barraZ->setMaximum(dimZ-1);
        ui->gridsculptor->loadMatrix(e->PlotXY(0));

    }

}

void MainWindow::drawObject(int horizClick, int vertiClick)
{
    switch (OBJETO) {
    case 0: {
            update();
            e->putVoxel(horizClick, vertiClick, ui->barraZ->value());
            ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 1:{
            update();
            e->cutVoxel(horizClick, vertiClick, ui->barraZ->value());
            ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 2:{
            update();
            int _px, _py, _pz;

            _px = ui->lineBoxX->text().split(" ")[0].toInt();
            _py = ui->lineBoxY->text().split(" ")[0].toInt();
            _pz = ui->lineBoxZ->text().split(" ")[0].toInt();

            e->putBox(horizClick, horizClick + _px,
                      vertiClick, vertiClick + _py,
                      ui->barraZ->value(), ui->barraZ->value() + _pz);

            ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 3:{
            update();

                int _cx, _cy, _cz;

                _cx = ui->lineBoxX->text().split(" ")[0].toInt();
                _cy = ui->lineBoxY->text().split(" ")[0].toInt();
                _cz = ui->lineBoxZ->text().split(" ")[0].toInt();

                e->cutBox(horizClick, horizClick + _cx,
                          vertiClick, vertiClick + _cy,
                          ui->barraZ->value(), ui->barraZ->value() + _cz);

                ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 4:{
        update();
                int raio;
                raio = ui->lineRadius->text().split(" ")[0].toInt();
                e->putSphere(horizClick, vertiClick, ui->barraZ->value(), raio);

                ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 5:{
        update();
                int raio;
                raio = ui->lineRadius->text().split(" ")[0].toInt();
                e->cutSphere(horizClick, vertiClick, ui->barraZ->value(), raio);

                ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 6:{
        update();
                int _a, _b, _c;
                _a = ui->lineRadiusEllipX->text().split(" ")[0].toInt();
                _b = ui->lineRadiusEllipY->text().split(" ")[0].toInt();
                _c = ui->lineRadiusEllipZ->text().split(" ")[0].toInt();

                e->putEllipsoid(horizClick, vertiClick, ui->barraZ->value(),_a, _b, _c);

                ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    case 7:{
        update();
                int _a, _b, _c;
                _a = ui->lineRadiusEllipX->text().split(" ")[0].toInt();
                _b = ui->lineRadiusEllipY->text().split(" ")[0].toInt();
                _c = ui->lineRadiusEllipZ->text().split(" ")[0].toInt();

                e->cutEllipsoid(horizClick, vertiClick, ui->barraZ->value(),_a, _b, _c);

                ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
        break;
    }
    }
}

void MainWindow::updatecolor()
{
    e->setColor(ui->SliderR->value(),
                ui->SliderG->value(),
                ui->SliderB->value(),
                ui->SliderA->value());
}

void MainWindow::setPlanoZ()
{
    ui->gridsculptor->loadMatrix(e->PlotXY(ui->barraZ->value()));
}

void MainWindow::setVOXEL()
{
    OBJETO = 0;
    ui->tabWidget->setVisible(false);
}

void MainWindow::setCVOXEL()
{
    OBJETO = 1;
    ui->tabWidget->setVisible(false);

}

void MainWindow::setBOX()
{
    OBJETO = 2;
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setVisible(true);
}

void MainWindow::setCBOX()
{
    OBJETO = 3;
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setVisible(true);
}

void MainWindow::setSPHERE()
{
    OBJETO = 4;
    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->setVisible(true);
}

void MainWindow::setCSPHERE()
{
    OBJETO = 5;
    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->setVisible(true);
}

void MainWindow::setELLIPSOID()
{
    OBJETO = 6;
    ui->tabWidget->setCurrentIndex(2);
    ui->tabWidget->setVisible(true);
}

void MainWindow::setCELLIPSOID()
{
    OBJETO = 7;
    ui->tabWidget->setCurrentIndex(2);
    ui->tabWidget->setVisible(true);
}


void MainWindow::Salvar()
{
    DialogSalvar _salvar;

    _salvar.exec();
    if(_salvar.exec() == QDialog::Accepted){
        e->writeOFF(_salvar.getNome());
    }
}




