#ifndef SUPPRIMERR_H
#define SUPPRIMERR_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class supprimerr;
}

class supprimerr : public QDialog
{
    Q_OBJECT

public:
    explicit supprimerr(QWidget *parent = nullptr);
    ~supprimerr();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::supprimerr *ui;
};

#endif // SUPPRIMERR_H
