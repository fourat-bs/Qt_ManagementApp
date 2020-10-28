#ifndef AJOUTERR_H
#define AJOUTERR_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class ajouterr;
}

class ajouterr : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterr(QWidget *parent = nullptr);
    ~ajouterr();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ajouterr *ui;
};

#endif // AJOUTERR_H
