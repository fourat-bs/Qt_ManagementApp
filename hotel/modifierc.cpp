#include "modifierc.h"
#include "ui_modifierc.h"
modifierc::modifierc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifierc)
{
    ui->setupUi(this);
}

modifierc::~modifierc()
{
    delete ui;
}

void modifierc::on_pushButton_2_clicked()
{
   modifierc ::close();
}

void modifierc::on_pushButton_clicked()
{
    QString cin1 = ui->lineEdit_cin->text();
    QString role1="client";
    QString nom1 = ui->lineEdit_nom->text();
    QString prenom1 = ui->lineEdit_prenom->text();
    QString adresse1 = ui->lineEdit_adresse->text();
    QString tele1 = ui->lineEdit_tele->text();
    QSqlQuery query;

        if (query.exec("UPDATE PERSONNE SET nom= '"+nom1+"',prenom = '"+prenom1+"',adresse = '"+adresse1+"',tele = '"+tele1+"' WHERE cin = '"+cin1+"' "))

{
           QMessageBox msgBox;
           msgBox.setText("client modifier avec succès!");
           msgBox.exec();

 }
        else
        {
             QMessageBox::warning(this,"erreur"," invalide");

    }
}
