#ifndef AJOUTERE_H
#define AJOUTERE_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class ajouterE;
}

class ajouterE : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterE(QWidget *parent = nullptr);
    ~ajouterE();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ajouterE *ui;
};

#endif // AJOUTERE_H
