#include "affentite.h"
#include "ui_affentite.h"
affentite::affentite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affentite)
{
    ui->setupUi(this);
}

affentite::~affentite()
{
    delete ui;
}

void affentite::on_pushButton_2_clicked()
{
   affentite::close();
}

void affentite::on_pushButton_clicked()
{
    QString code = ui->lineEdit_entite->text();
    QSqlQuery query;
    query.exec("SELECT type,availability,tarif,places FROM ENTITE WHERE IDE='"+code+"'");
        if (query.next())
        {
           QString type = query.value(0).toString();
           QString disponibilite = query.value(1).toString();
           QString tarif = query.value(2).toString();
           QString places = query.value(3).toString();
           QString txt=type+"\n"+disponibilite+"\n"+tarif+"\n"+places;
           QMessageBox msgBox;
           msgBox.setText(txt);
           msgBox.exec();

        }
        else
        {
             QMessageBox::warning(this,"erreur","code invalide");

    }
}
