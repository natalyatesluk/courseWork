#ifndef DBMANEGER_H
#define DBMANEGER_H
#include <QSqlDatabase>
#include "master.h"
#include "customer.h"
#include "freetime.h"
#include "worktime.h"

class DBManager {
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool inserIntoTableReg(const QString name, QString password, QString number) = 0;
    virtual bool inserIntoTableMasters( Master &master )=0;
    virtual  bool inserIntoTableRegCust(const QString name, QString password, QString number)=0;
    virtual bool inserIntoTableCustomers( Customer &customer )=0;
    virtual  bool inserIntoTableBody(const QString area)=0;
    virtual  bool inserIntoTableFree( FreeTime &time )=0;
    virtual  bool inserIntoTableWork( WorkTime &time )=0;
};

#endif // DBMANEGER_H
