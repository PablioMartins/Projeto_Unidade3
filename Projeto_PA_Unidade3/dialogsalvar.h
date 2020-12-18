#ifndef DIALOGSALVAR_H
#define DIALOGSALVAR_H

#include <QDialog>

namespace Ui {
class DialogSalvar;
}
/**
 * @brief The DialogSalvar class responsável pela caixa de diálogo que recebe o nome
 * do arquivo a ser salvo.
 */
class DialogSalvar : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief DialogSalvar é o construtor da classe
     * @param parent informa de quem a classe é parente
     */
    explicit DialogSalvar(QWidget *parent = nullptr);

    /**
     *@brief ~DialogSalvar é o destrutor da classe
     */
    ~DialogSalvar();

    /**
     * @brief getNome função responsável responsével pelo retorno do nome
     * @return retorna o nome do arquivo com ".OFF"
     */
    char* getNome();

private:
    /**
     * @brief ui váriavel de classe responsável por interagir com os elementos presentes
     * na janela do diálogo
     */
    Ui::DialogSalvar *ui;
};

#endif // DIALOGSALVAR_H
