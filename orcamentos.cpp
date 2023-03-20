#include "orcamentos.h"
#include "ui_orcamentos.h"

Orcamentos::Orcamentos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Orcamentos)
{
    ui->setupUi(this);
}

Orcamentos::~Orcamentos()
{
    delete ui;
}
