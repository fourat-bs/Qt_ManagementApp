#include "modifiere.h"
#include "ui_modifiere.h"

modifiere::modifiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifiere)
{
    ui->setupUi(this);
}

modifiere::~modifiere()
{
    delete ui;
}

void modifiere::on_pushButton_2_clicked()
{

     modifiere::close();
}

void modifiere::on_pushButton_clicked()
{
    QString id = ui->lineEdit_id->text();
    QString dispo = ui->lineEdit_dispo->text();
    QString tarif = ui->lineEdit_tarif->text();
    QString places = ui->spinBox->text();

    QSqlQuery query;

        if (query.exec("UPDATE ENTITE SET availability= '"+dispo+"',tarif = '"+tarif+"',places = '"+places+"' WHERE IDE = '"+id+"' "))

{
           QMessageBox msgBox;
           msgBox.setText("entité modifier avec succès!");
           msgBox.exec();

 }
        else
        {
             QMessageBox::warning(this,"erreur"," invalide");

    }
}
