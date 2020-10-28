#include "affclient.h"
#include "ui_affclient.h"
affclient::affclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affclient)
{
    ui->setupUi(this);
}

affclient::~affclient()
{
    delete ui;
}

void affclient::on_pushButton_2_clicked()
{
    affclient::close();
}

void affclient::on_pushButton_clicked()
{
    QString id = ui->lineEdit_id->text();
    QSqlQuery query;
    query.exec("SELECT cin,nom,prenom,adresse,tele FROM PERSONNE WHERE CIN='"+id+"'");
        if (query.next())
        {
           QString cin = query.value(0).toString();
           QString nom = query.value(1).toString();
           QString prenom = query.value(2).toString();
           QString adresse = query.value(3).toString();
           QString tele = query.value(4).toString();
           QString txt="cin: "+cin+"\n"+"nom: "+nom+"\n"+"prenom: "+prenom+"\n"+"adresse: "+adresse+"\n"+"GSM: "+tele;
           QMessageBox msgBox;
           msgBox.setText(txt);
           msgBox.exec();

        }
        else
        {
             QMessageBox::warning(this,"erreur","CIN invalide");

    }
}
