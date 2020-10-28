#include "connexion.h"

connexion::connexion(){}
bool connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("hotel");
db.setUserName("fourat");
db.setPassword("fourat");

if (db.open())
  test=true;
    return  test;
}

