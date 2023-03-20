#include "nfe.h"
#include "ui_nfe.h"

Nfe::Nfe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nfe)
{
    ui->setupUi(this);
}

Nfe::~Nfe()
{
    delete ui;
}
