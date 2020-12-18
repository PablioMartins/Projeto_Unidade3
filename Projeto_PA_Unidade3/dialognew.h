#ifndef DIALOGNEW_H
#define DIALOGNEW_H

#include <QDialog>

namespace Ui {
class DialogNew;
}
/**
 * @brief The DialogNew class é responsável pela caixa de dialogo para criação de uma nova
 * escultura, com novos parametros de tamanho.
 */
class DialogNew : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief DialogNew e o construtor da classe
     * @param parent informa de quem a classe é parente
     */
    explicit DialogNew(QWidget *parent = nullptr);

    /**
      * @brief ~DialogNew e o destrutor da classe
      */
    ~DialogNew();

    /**
     * @brief lerdimX é a função responsável por retornar o novo tamanho na dimensão "X"
     * @return o novo tamanho na direção "X"
     */
    int lerdimX();

    /**
     * @brief lerdimY é a função responsável por retornar o novo tamanho na dimensão "Y"
     * @return o novo tamanho na direção "Y"
     */
    int lerdimY();

    /**
     * @brief lerdimZ é a função responsável por retornar o novo tamanho na dimensão "Z"
     * @return o novo tamanho na direção "Y"
     */
    int lerdimZ();

private:
    /**
     * @brief ui váriavel de classe responsável por interagir com os elementos presentes
     * na janela do diálogo
     */
    Ui::DialogNew *ui;
};

#endif // DIALOGNEW_H
