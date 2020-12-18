#include "gridsculptor.h"
#include "gridsculptor.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QTimerEvent>
#include <QMouseEvent>

//dbug
#include <QDebug>

GridSculptor::GridSculptor(QWidget *parent) : QWidget(parent)
{           
    nlinhas = 20;
    ncolunas = 20;
    largTela = rect().width();
    altTela = rect().height();
    largCelula = largTela/ncolunas;
    altCelula = altTela/nlinhas;
    if(altCelula > largCelula){
        dimCelula = largCelula;
    }else{
        dimCelula = altCelula;
    }
}

void GridSculptor::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    largTela = rect().width();
    altTela = rect().height();
    largCelula = largTela/ncolunas;
    altCelula = altTela/nlinhas;
    if(altCelula > largCelula){
        dimCelula = largCelula;
    }else{
        dimCelula = altCelula;
    }
    borderh = (largTela - ncolunas*dimCelula)/2;
    borderv = (altTela - nlinhas*dimCelula)/2;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width()-1,height()-1);

    for(uint i = 0; i < v.size(); i++){
        for(uint j = 0; j < v[i].size(); j++){
            if(v[i][j].isOn == true){
                painter.save();
                brush.setColor(QColor(v[i][j].r,v[i][j].g,v[i][j].b));
                painter.setBrush(brush);

                painter.drawRect(i*dimCelula+borderh,
                                 j*dimCelula+borderv,
                                 dimCelula, dimCelula);
                painter.restore();

            } else {
                brush.setColor(QColor(255,255,255));
                painter.setBrush(brush);
                painter.drawRect(i*dimCelula+borderh,
                                 j*dimCelula+borderv,
                                 dimCelula, dimCelula);
            }

        }

    }


}


void GridSculptor::mousePressEvent(QMouseEvent *event)
{
    int posh, posv;
    QRect ret;
    ret = rect();

    ret.adjust(borderh, borderv, -borderh, -borderv);

    if(ret.contains(event->pos())){
        posh = (event->pos().x()-borderh)*ncolunas/ret.width();
        posv = (event->pos().y()-borderv)*nlinhas/ret.height();
        emit updatePos(posh, posv);

    }

}


void GridSculptor::loadMatrix(std::vector<std::vector<Voxel> > mat)
{
    nlinhas = mat.size();
    ncolunas = mat[0].size();
    v = mat;
    repaint();
}



