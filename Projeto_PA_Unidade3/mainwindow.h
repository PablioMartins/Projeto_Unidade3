#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sculptor.h>
#include <gridsculptor.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class é classe pricipal do programa, é ela que interage com os componentes e
 * com o usuário
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow é o construtor da classe
     * @param parent informa de quem a classe é parente
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     *@brief ~MainWindow é o destrutor da classe
     */
    ~MainWindow();

public slots:
    /**
     * @brief NewSculptor cria uma nova escultura
     */
    void NewSculptor(void);

    /**
     * @brief drawObject desenha o objeto selecionado pelo usuario na matriz do sculptor
     * @param x é a cordenada na matriz do sculptor recebida do sinal emitido pela função "updatePos" na classe
     * GridSculptor
     * @param y é a cordenada na matriz do sculptor recebida do sinal emitido pela função "updatePos" na classe
     * GridSculptor
     */
    void drawObject(int x, int y);

    /**
     * @brief updatecolor atualiza as cores de desenho
     */
    void updatecolor();

    /**
     * @brief setPlanoZ seleciona em qual plano Z será mostrado
     */
    void setPlanoZ();

    /**
     * @brief setVOXEL seleciona o objeto do tipo Voxel para ser desenhado
     */
    void setVOXEL();

    /**
     * @brief setCVOXEL remove o objeto do tipo Voxel no desenhado
     */
    void setCVOXEL();

    /**
     * @brief setBOX seleciona o objeto do tipo Box para ser desenhado
     */
    void setBOX();

    /**
     * @brief setCBOX remove o objeto do tipo Box no desenhado
     */
    void setCBOX();

    /**
     * @brief setSPHERE seleciona o objeto do tipo Sphere para ser desenhado
     */
    void setSPHERE();

    /**
     * @brief setCSPHERE remove o objeto do tipo Sphere no desenhado
     */
    void setCSPHERE();

    /**
     * @brief setELLIPSOID seleciona o objeto do tipo Ellipsoid para ser desenhado
     */
    void setELLIPSOID();

    /**
     * @brief setCELLIPSOID remove o objeto do tipo Ellipsoid no desenhado
     */
    void setCELLIPSOID();

    /**
     * @brief Salvar salva o desenho 3d gerado em um arquivo .OFF
     */
    void Salvar();

private:
    /**
     * @brief ui váriavel de classe responsável por interagir com os elementos presentes
     * na janela principal
     */
    Ui::MainWindow *ui;

    /**
     * @brief dimX é uma variável de classe que representa o tamanho na direção "x" da matriz do sculptor
     */
    int dimX;

    /**
     * @brief dimY é uma variável de classe que representa o tamanho na direção "y" da matriz do sculptor
     */
    int dimY;

    /**
     * @brief dimZ é uma variável de classe que representa o tamanho na direção "z" da matriz do sculptor
     */
    int dimZ;

    /**
     * @brief OBJETO é uma variável de classe que codifica os tipos de objetos para o desenho
     */
    int OBJETO;

    /**
     * @brief e é o vetor tridimensional que representa a matriz 3d do sculptor
     */
    sculptor *e;
};
#endif // MAINWINDOW_H
