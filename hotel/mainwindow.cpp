#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text() ;
    QString pass = ui->lineEdit_2->text() ;
    QSqlQuery query;
    query.exec("SELECT * FROM EMPLOYEE WHERE IDEMP='"+username+"'and password='"+pass+"' ");
    if (query.next())
    {
        Welcome = new welcome(this);
        Welcome->show();
    }
    else {
         QMessageBox::warning(this,"login","ID ou mot de passe incorrecte");
    }
}
