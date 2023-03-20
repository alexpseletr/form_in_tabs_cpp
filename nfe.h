#ifndef NFE_H
#define NFE_H

#include <QWidget>

namespace Ui {
class Nfe;
}

class Nfe : public QWidget
{
    Q_OBJECT

public:
    explicit Nfe(QWidget *parent = nullptr);
    ~Nfe();

private:
    Ui::Nfe *ui;
};

#endif // NFE_H
