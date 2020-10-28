#include "affreservation.h"
#include "ui_affreservation.h"
affreservation::affreservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affreservation)
{
    ui->setupUi(this);
}

affreservation::~affreservation()
{
    delete ui;
}

void affreservation::on_pushButton_2_clicked()
{
    affreservation::close();
}


void affreservation::on_pushButton_clicked()
{
    QString idc = ui->lineEdit_idc->text();
    QString ide = ui->lineEdit_ide->text();
    QSqlQuery query;
    query.exec("SELECT idc,ide,datedebut,datefin FROM RESERVATION WHERE IDC='"+idc+"' AND IDE='"+ide+"'");
        if (query.next())
        {
           QString idc = query.value(0).toString();
           QString ide = query.value(1).toString();
           QString datedebut = query.value(2).toString();
           QString datefin = query.value(3).toString();
           QString txt=idc+"\n"+ide+"\n"+datedebut+"\n"+datefin;
           QMessageBox msgBox;
           msgBox.setText(txt);
           msgBox.exec();

        }
        else
        {
             QMessageBox::warning(this,"erreur","id client ou id entité invalide");

    }
}
