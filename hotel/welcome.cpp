#include "welcome.h"
#include "ui_welcome.h"

welcome::welcome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{
    ajtc = new ajouterC(this);
    ajtc->show();
}

void welcome::on_pushButton_5_clicked()
{
    ajtr = new ajouterr(this);
    ajtr->show();
}

void welcome::on_pushButton_9_clicked()
{
    ajte = new ajouterE(this);
    ajte->show();
}

void welcome::on_pushButton_4_clicked()
{
    affe = new affentite(this);
    affe->show();
}

void welcome::on_pushButton_12_clicked()
{
    affc = new affclient(this);
    affc->show();
}

void welcome::on_pushButton_8_clicked()
{
    affr = new affreservation(this);
    affr->show();
}

void welcome::on_pushButton_2_clicked()
{
    mdfc = new modifierc(this);
    mdfc->show();
}

void welcome::on_pushButton_6_clicked()
{
   mdfr = new modifierr(this);
   mdfr->show();
}

void welcome::on_pushButton_10_clicked()
{
    mdfe = new modifiere(this);
    mdfe->show();
}

void welcome::on_pushButton_3_clicked()
{
    sprc = new supprimerc(this);
    sprc->show();
}

void welcome::on_pushButton_11_clicked()
{
    spre = new supprimere(this);
    spre->show();
}

void welcome::on_pushButton_7_clicked()
{
    sprr = new supprimerr(this);
    sprr->show();
}
