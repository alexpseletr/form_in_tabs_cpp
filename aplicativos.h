#ifndef APLICATIVOS_H
#define APLICATIVOS_H

#include <QWidget>

namespace Ui {
class Aplicativos;
}

class Aplicativos : public QWidget
{
    Q_OBJECT

public:
    explicit Aplicativos(QWidget *parent = nullptr);
    ~Aplicativos();

private:
    Ui::Aplicativos *ui;
};

#endif // APLICATIVOS_H
