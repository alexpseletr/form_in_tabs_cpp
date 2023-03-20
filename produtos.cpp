#include "produtos.h"
#include "ui_produtos.h"

Produtos::Produtos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Produtos)
{
    ui->setupUi(this);
}

Produtos::~Produtos()
{
    delete ui;
}
