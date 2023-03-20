#include "lancnfe.h"
#include "ui_lancnfe.h"

Lancnfe::Lancnfe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lancnfe)
{
    ui->setupUi(this);
}

Lancnfe::~Lancnfe()
{
    delete ui;
}
