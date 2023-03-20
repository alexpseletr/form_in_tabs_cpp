#ifndef CONTAS_H
#define CONTAS_H

#include <QWidget>

namespace Ui {
class Contas;
}

class Contas : public QWidget
{
    Q_OBJECT

public:
    explicit Contas(QWidget *parent = nullptr);
    ~Contas();

private:
    Ui::Contas *ui;
};

#endif // CONTAS_H
