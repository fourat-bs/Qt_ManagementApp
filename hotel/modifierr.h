#ifndef MODIFIERR_H
#define MODIFIERR_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class modifierr;
}

class modifierr : public QDialog
{
    Q_OBJECT

public:
    explicit modifierr(QWidget *parent = nullptr);
    ~modifierr();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::modifierr *ui;
};

#endif // MODIFIERR_H
