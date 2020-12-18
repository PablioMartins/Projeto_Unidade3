#ifndef GRIDSCULPTOR_H
#define GRIDSCULPTOR_H

#include <QWidget>
#include <QDialog>
#include "sculptor.h"
#include <iostream>
#include <QTimerEvent>
#include <QMouseEvent>
#include <vector>

/**
 * @brief The GridSculptor class é a classe responsável por representar grficamente a
 * matriz 3d do sculptor sendo amostrada como fatias do planaZ
 */
class GridSculptor : public QWidget
{
    Q_OBJECT
private:
    /**
     * @brief nlinhas é o número de linhas da matriz do sculptor no plano XY
     */
    int nlinhas;
    /**
     * @brief ncolunas é o número de colunas da matriz do sculptor do plano XY
     */
    int ncolunas;

    /**
     * @brief largTela é a largura da janela que será representada a matriz
     */
    float largTela;

    /**
     * @brief altTela é a altura da janela que será representada a matriz
     */
    float altTela;

    /**
     * @brief largCelula é a lagura das células da matriz calculada apartir da largura
     * da tela
     */
    float largCelula;

    /**
     * @brief altCelula é a altura das células da matriz caljculada apartir da altura
     * da tela
     */
    float altCelula;

    /**
     * @brief dimCelula recebe o menor varlor entre as variáveis largCelula e altCelula
     */
    float dimCelula;

    /**
     * @brief borderh borda horizontal da matriz
     */
    float borderh;

    /**
     * @brief borderv borda vertical da matriz
     */
    float borderv;

    /**
     * @brief v é um plano da matriz do sculptor que será representada na tela
     */
    std::vector < std::vector <Voxel> > v;

public:
    /**
     * @brief GridSculptor é o construtor da classe
     * @param parent informa de quem a classe é parente
     */
    explicit GridSculptor (QWidget *parent = nullptr);

    /**
     * @brief paintEvent é responsavel pelo desenho na tela
     */
    void paintEvent(QPaintEvent *event);

    /**
     * @brief mousePressEvent é a função responsável por captar os as ações no mouse e enviar o sinal "updatePos"
     * @param event é o evento fornecido pelo mouse
     */
    void mousePressEvent(QMouseEvent *event);

signals:
    /**
     * @brief updatePos é o sinal enviado com as informações da posição do "click"
     */
    void updatePos(int, int);

public slots:
    /**
     * @brief loadMatrix é a função responsável por carregar a matriz do sculptor
     * @param mat é a matriz a ser carregada e desenhada
     */
    void loadMatrix(std::vector<std::vector<Voxel>> mat);
};

#endif // GRIDSCULPTOR_H
