#include "supprimere.h"
#include "ui_supprimere.h"
supprimere::supprimere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimere)
{
    ui->setupUi(this);
}

supprimere::~supprimere()
{
    delete ui;
}

void supprimere::on_pushButton_2_clicked()
{
   supprimere::close();
}

void supprimere::on_pushButton_clicked()
{
    QString id = ui->lineEdit_suppe->text();
    QSqlQuery query;
        if (query.exec("DELETE FROM ENTITE WHERE ide='"+id+"'"))
        {

           QMessageBox msgBox;
           msgBox.setText("entité supprimer avec succès !");
           msgBox.exec();

        }
        else
        {
             QMessageBox::warning(this,"erreur","ide invalide");

    }
}
