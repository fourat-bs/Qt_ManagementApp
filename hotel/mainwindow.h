#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "welcome.h"
#include <QMainWindow>
#include "connexion.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    welcome *Welcome;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
