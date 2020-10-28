#include "ajouterr.h"
#include "ui_ajouterr.h"

ajouterr::ajouterr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterr)
{
    ui->setupUi(this);
}

ajouterr::~ajouterr()
{
    delete ui;
}

void ajouterr::on_pushButton_2_clicked()
{
    ajouterr::close();
}

void ajouterr::on_pushButton_clicked()
{
    QString idc = ui->lineEdit_1->text();
    QString ide = ui->lineEdit_2->text();
    QString dd = ui->dateEdit_1->text();
    QString df = ui->dateEdit_2->text();
    QSqlQuery query;

        if (query.exec("INSERT INTO RESERVATION (IDC,IDE,DATEDEBUT,DATEFIN) VALUES "
                       "('"+idc+"','"+ide+"',to_date('"+dd+"','DD/MM/YYYY'),to_date('"+df+"','DD/MM/YYYY'))"))

{
           QMessageBox msgBox;
           msgBox.setText("reservation créer avec succès!");
           msgBox.exec();

 }
        else
        {
             QMessageBox::warning(this,"erreur"," invalide");

    }
}
