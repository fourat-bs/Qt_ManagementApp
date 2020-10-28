#ifndef SUPPRIMERE_H
#define SUPPRIMERE_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class supprimere;
}

class supprimere : public QDialog
{
    Q_OBJECT

public:
    explicit supprimere(QWidget *parent = nullptr);
    ~supprimere();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::supprimere *ui;
};

#endif // SUPPRIMERE_H
