#ifndef DBMANEGER_H
#define DBMANEGER_H
#include <QSqlDatabase>
#include <QTableView>
#include "master.h"
#include "customer.h"
#include "freetime.h"
#include "worktime.h"
#include "sketch.h"

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
    virtual bool inserIntoTableApp(QString date_id,  QString sketch_id, Customer &customer)=0;
    virtual  bool inserIntoTableSketch( Sketch &data )=0;
    virtual bool nameCheck(QString name)=0;
    virtual bool nameCheckCustomer(QString name)=0;

    virtual bool login(QString name, QString password)=0;
    virtual bool loginCustomer(QString name, QString password)=0;

   virtual bool updateMasters(Master &master, QString id)=0;
   virtual bool updateBody(QString area, QString id)=0;
   virtual bool updateCustomer(Customer &customer, QString id)=0;
   virtual  bool updateWork(WorkTime &work,QString id)=0;
   virtual bool deleteItem(QString id,QString table_name)=0;
   virtual QString serchIdTime(QString &date, QString &time)=0;
   virtual int searchMasterId(QString &master)=0;
   virtual int searchCustomerId(QString &customer)=0;
   virtual QString searchSketchId(QString name)=0;
   virtual bool updateStatusSketch(QString id)=0;
   virtual  int searchBodyId(QString area)=0;
   virtual  float searchSketchPrice(QString name)=0;
   virtual bool serchCustomer(QString name,QString surename)=0;
   virtual  QString searchStatusSketch(QString id)=0;

};

#endif // DBMANEGER_H
