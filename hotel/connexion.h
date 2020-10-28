#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include<QDebug>
#include<QMessageBox>
class connexion
{
public:
    connexion();
    bool createconnect();
};

#endif // CONNEXION_H
