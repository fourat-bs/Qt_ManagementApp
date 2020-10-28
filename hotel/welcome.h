#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>
#include "ajouterc.h"
#include "ajoutere.h"
#include "ajouterr.h"
#include "affentite.h"
#include "affclient.h"
#include "affreservation.h"
#include "modifierc.h"
#include "modifiere.h"
#include "modifierr.h"
#include "supprimerc.h"
#include "supprimere.h"
#include "supprimerr.h"
namespace Ui {
class welcome;
}

class welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = nullptr);
    ~welcome();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::welcome *ui;
    ajouterC * ajtc;
    ajouterr * ajtr;
    ajouterE * ajte;
    affentite * affe;
    affclient * affc;
    affreservation * affr;
    modifierc * mdfc;
    modifiere * mdfe;
    modifierr * mdfr;
    supprimerc * sprc;
    supprimere * spre;
    supprimerr * sprr;

};

#endif // WELCOME_H
