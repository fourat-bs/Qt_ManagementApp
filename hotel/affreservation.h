#ifndef AFFRESERVATION_H
#define AFFRESERVATION_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class affreservation;
}

class affreservation : public QDialog
{
    Q_OBJECT

public:
    explicit affreservation(QWidget *parent = nullptr);
    ~affreservation();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::affreservation *ui;
};

#endif // AFFRESERVATION_H
