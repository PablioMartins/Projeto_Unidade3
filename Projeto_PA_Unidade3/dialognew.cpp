#include "dialognew.h"
#include "ui_dialognew.h"

DialogNew::DialogNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNew)
{
    ui->setupUi(this);
}

DialogNew::~DialogNew()
{
    delete ui;
}

int DialogNew::lerdimX()
{
    return ui->lineEdit_X->text().split(" ")[0].toInt();
}

int DialogNew::lerdimY()
{
    return ui->lineEdit_Y->text().split(" ")[0].toInt();
}

int DialogNew::lerdimZ()
{
    return ui->lineEdit_Z->text().split(" ")[0].toInt();
}
