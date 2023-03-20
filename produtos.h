#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <QWidget>

namespace Ui {
class Produtos;
}

class Produtos : public QWidget
{
    Q_OBJECT

public:
    explicit Produtos(QWidget *parent = nullptr);
    ~Produtos();

private:
    Ui::Produtos *ui;
};

#endif // PRODUTOS_H
