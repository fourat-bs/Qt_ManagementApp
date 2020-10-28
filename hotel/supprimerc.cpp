#include "supprimerc.h"
#include "ui_supprimerc.h"
supprimerc::supprimerc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimerc)
{
    ui->setupUi(this);
}

supprimerc::~supprimerc()
{
    delete ui;
}

void supprimerc::on_pushButton_2_clicked()
{
  supprimerc::close();
}

void supprimerc::on_pushButton_clicked()
{
    QString cin1 = ui->lineEdit_suppc->text();
    QSqlQuery query;

        if (query.exec("DELETE FROM PERSONNE WHERE CIN='"+cin1+"'"))
        {

           QMessageBox msgBox;
           msgBox.setText("client supprimer avec succès !");
           msgBox.exec();

        }
        else
        {
             QMessageBox::warning(this,"erreur","CIN invalide");

    }
}

