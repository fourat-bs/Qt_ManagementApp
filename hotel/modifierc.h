#ifndef MODIFIERC_H
#define MODIFIERC_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class modifierc;
}

class modifierc : public QDialog
{
    Q_OBJECT

public:
    explicit modifierc(QWidget *parent = nullptr);
    ~modifierc();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::modifierc *ui;
};

#endif // MODIFIERC_H
