#include "contas.h"
#include "ui_contas.h"

Contas::Contas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Contas)
{
    ui->setupUi(this);
}

Contas::~Contas()
{
    delete ui;
}
