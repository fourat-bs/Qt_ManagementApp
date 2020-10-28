#include "supprimerr.h"
#include "ui_supprimerr.h"

supprimerr::supprimerr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimerr)
{
    ui->setupUi(this);
}

supprimerr::~supprimerr()
{
    delete ui;
}

void supprimerr::on_pushButton_2_clicked()
{
    supprimerr::close();
}

void supprimerr::on_pushButton_clicked()
{
    QString idc = ui->lineEdit1->text();
    QString ide = ui->lineEdit2->text();
    QSqlQuery query;

        if (query.exec("DELETE FROM reservation WHERE idC='"+idc+"' and  idE='"+ide+"'"))
        {

           QMessageBox msgBox;
           msgBox.setText("réservation supprimer avec succès ");
           msgBox.exec();

        }
        else
        {
             QMessageBox::warning(this,"erreur"," ID client ou ID entité invalide");

    }
}
