#ifndef CADASTRO_H
#define CADASTRO_H

#include <QWidget>

namespace Ui {
class Cadastro;
}

class Cadastro : public QWidget
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();

private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H
