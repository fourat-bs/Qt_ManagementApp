#include "ajouterc.h"
#include "ui_ajouterc.h"
ajouterC::ajouterC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterC)
{
    ui->setupUi(this);
}

ajouterC::~ajouterC()
{
    delete ui;
}

void ajouterC::on_pushButton_2_clicked()
{
   ajouterC::close();
}

void ajouterC::on_pushButton_clicked()
{
    QString cin = ui->lineEdit_cin->text();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString adresse = ui->lineEdit_adresse->text();
    QString tele = ui->lineEdit_tele->text();
    QSqlQuery query;

        if (query.exec("INSERT INTO PERSONNE (cin,role,nom,prenom,adresse,tele) VALUES"
                       " ('"+cin+"','client','"+nom+"','"+prenom+"','"+adresse+"','"+tele+"' )"))

{
           QMessageBox msgBox;
           msgBox.setText("client ajouter avec succès!");
           msgBox.exec();

 }
        else
        {
             QMessageBox::warning(this,"erreur"," invalide");

    }
}
