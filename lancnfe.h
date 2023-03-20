#ifndef LANCNFE_H
#define LANCNFE_H

#include <QWidget>

namespace Ui {
class Lancnfe;
}

class Lancnfe : public QWidget
{
    Q_OBJECT

public:
    explicit Lancnfe(QWidget *parent = nullptr);
    ~Lancnfe();

private:
    Ui::Lancnfe *ui;
};

#endif // LANCNFE_H
