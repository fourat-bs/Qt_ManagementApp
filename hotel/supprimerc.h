#ifndef SUPPRIMERC_H
#define SUPPRIMERC_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class supprimerc;
}

class supprimerc : public QDialog
{
    Q_OBJECT

public:
    explicit supprimerc(QWidget *parent = nullptr);
    ~supprimerc();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::supprimerc *ui;
};

#endif // SUPPRIMERC_H
