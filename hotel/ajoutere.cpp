#include "ajoutere.h"
#include "ui_ajoutere.h"

ajouterE::ajouterE(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterE)
{
    ui->setupUi(this);
}

ajouterE::~ajouterE()
{
    delete ui;
}

void ajouterE::on_pushButton_clicked()
{
    ajouterE::close();
}

void ajouterE::on_pushButton_2_clicked()
{
    QString id = ui->lineEdit_id->text();
    QString type = ui->lineEdit_type->text();
    QString dispo = ui->lineEdit_dispo->text();
    QString tarif = ui->lineEdit_tarif->text();
    QString places = ui->lineEdit_places->text();
    QSqlQuery query;

        if (query.exec("INSERT INTO ENTITE (ide,type,availability,tarif,places) VALUES ('"+id+"','"+type+"','"+dispo+"','"+tarif+"','"+places+"' )"))

{
           QMessageBox msgBox;
           msgBox.setText("entité ajouter avec succès!");
           msgBox.exec();

 }
        else
        {
             QMessageBox::warning(this,"erreur"," invalide");

    }
}
