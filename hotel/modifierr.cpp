#include "modifierr.h"
#include "ui_modifierr.h"

modifierr::modifierr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifierr)
{
    ui->setupUi(this);
}

modifierr::~modifierr()
{
    delete ui;
}

void modifierr::on_pushButton_2_clicked()
{
    modifierr::close();
}

void modifierr::on_pushButton_clicked()
{
    QString idc = ui->lineEdit_idc->text();
    QString ide = ui->lineEdit_ide->text();
    QString dd = ui->dateEdit_1->text();
    QString df = ui->dateEdit_2->text();

    QSqlQuery query;

        if (query.exec("UPDATE reservation SET datedebut=to_date('"+dd+"','DD/MM/YYYY'),datefin=to_date('"+df+"','DD/MM/YYYY') "
                       "WHERE idc='"+idc+"' and ide='"+ide+"'"))

{
           QMessageBox msgBox;
           msgBox.setText("reservation modifier avec succès!");
           msgBox.exec();

 }
        else
        {
             QMessageBox::warning(this,"erreur"," invalide");

    }
}
