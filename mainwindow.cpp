#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aplicativos.h"
#include "cadastro.h"
#include "contas.h"
#include "email.h"
#include "lancnfe.h"
#include "nfe.h"
#include "orcamentos.h"
#include "produtos.h"
#include<string>
using namespace std;

int i;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showMaximized();
    i=ui->tabWidget->count();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_cadastro_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Cadastro";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Cadastro,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_pushButto_contas_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Contas";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Contas,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}

void MainWindow::on_pushButton_LancNfe_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Lanc.Nfe";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Lancnfe,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}


void MainWindow::on_pushButton_produtos_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Produtos";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Produtos,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}


void MainWindow::on_pushButton_oecamentos_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Orçamentos";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Orcamentos,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}


void MainWindow::on_pushButton_email_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Email";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Email,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}


void MainWindow::on_pushButton_aplicativos_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="Aplicativos";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Aplicativos,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}


void MainWindow::on_pushButton_Nfe_clicked()
{
    bool testa;
       int indice=0;
       char tabname[30]="NFe";
       testa = false;
       for(int j=0;j<ui->tabWidget->count();j++){
           if (ui->tabWidget->tabText(j)== tabname){
               testa= true;
               indice=j;
           }else
           {
               indice=ui->tabWidget->count();
           }
       }
       if (testa==false){
        ui->tabWidget->addTab(new Nfe,tabname);


       }
   ui->tabWidget->setCurrentIndex(indice);
}

