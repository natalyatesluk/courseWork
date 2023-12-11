#ifndef DBMANEGER_H
#define DBMANEGER_H
#include <QSqlDatabase>

class DBManager {
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool inserIntoTableReg(const QString name, QString password, QString number) = 0;
};
#endif // DBMANEGER_H
