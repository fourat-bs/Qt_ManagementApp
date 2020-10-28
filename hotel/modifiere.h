#ifndef MODIFIERE_H
#define MODIFIERE_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class modifiere;
}

class modifiere : public QDialog
{
    Q_OBJECT

public:
    explicit modifiere(QWidget *parent = nullptr);
    ~modifiere();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::modifiere *ui;
};

#endif // MODIFIERE_H
