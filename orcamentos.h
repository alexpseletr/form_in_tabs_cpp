#ifndef ORCAMENTOS_H
#define ORCAMENTOS_H

#include <QWidget>

namespace Ui {
class Orcamentos;
}

class Orcamentos : public QWidget
{
    Q_OBJECT

public:
    explicit Orcamentos(QWidget *parent = nullptr);
    ~Orcamentos();

private:
    Ui::Orcamentos *ui;
};

#endif // ORCAMENTOS_H
