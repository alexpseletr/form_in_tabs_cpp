#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tabWidget_tabCloseRequested(int index);
    void on_pushButton_LancNfe_clicked();
    void on_pushButton_cadastro_clicked();
    void on_pushButto_contas_clicked();
    void on_pushButton_produtos_clicked();
    void on_pushButton_oecamentos_clicked();
    void on_pushButton_email_clicked();
    void on_pushButton_aplicativos_clicked();
    void on_pushButton_Nfe_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
