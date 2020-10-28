#ifndef AJOUTERC_H
#define AJOUTERC_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class ajouterC;
}

class ajouterC : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterC(QWidget *parent = nullptr);
    ~ajouterC();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ajouterC *ui;
};

#endif // AJOUTERC_H
