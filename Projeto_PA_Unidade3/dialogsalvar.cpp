#include "dialogsalvar.h"
#include "ui_dialogsalvar.h"

DialogSalvar::DialogSalvar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSalvar)
{
    ui->setupUi(this);
}

DialogSalvar::~DialogSalvar()
{
    delete ui;
}

char* DialogSalvar::getNome()
{
    QString aux;
    aux = ui->Nome->text();
    aux += ".OFF";
    QByteArray ba = aux.toLocal8Bit();

    char *_nome = ba.data();
    return _nome;
}
