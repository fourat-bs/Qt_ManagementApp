#ifndef AFFENTITE_H
#define AFFENTITE_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class affentite;
}

class affentite : public QDialog
{
    Q_OBJECT

public:
    explicit affentite(QWidget *parent = nullptr);
    ~affentite();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::affentite *ui;

};

#endif // AFFENTITE_H
