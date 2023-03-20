#include "aplicativos.h"
#include "ui_aplicativos.h"

Aplicativos::Aplicativos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Aplicativos)
{
    ui->setupUi(this);
}

Aplicativos::~Aplicativos()
{
    delete ui;
}
