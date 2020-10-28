#ifndef AFFCLIENT_H
#define AFFCLIENT_H
#include "connexion.h"
#include <QDialog>

namespace Ui {
class affclient;
}

class affclient : public QDialog
{
    Q_OBJECT

public:
    explicit affclient(QWidget *parent = nullptr);
    ~affclient();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::affclient *ui;
};

#endif // AFFCLIENT_H
