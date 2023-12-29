#include "sqldbmaneger.h"
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QMessageBox>
#include <QDate>
#include <QDebug>
#include<QMessageBox>
#include <QApplication>

SqlDBManeger* SqlDBManeger::instance = nullptr;

SqlDBManeger::SqlDBManeger() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DB_NAME);
    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
    } else {
        qDebug() << "Connected to the database!";
    }

}
SqlDBManeger* SqlDBManeger::getInstance() {
    if (instance == nullptr) {
        instance = new SqlDBManeger();
    }
    return instance;
}

void SqlDBManeger::connectToDataBase() {
    if (QFile(DB_NAME).exists()) {
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

QSqlDatabase SqlDBManeger::getDB() {
    return db;
}






bool SqlDBManeger::restoreDataBase() {
    if (this->openDataBase()) {
        if (!this->createTablesAccount()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Failed to restore database";
        return false;
    }
}

bool SqlDBManeger::openDataBase() {
    if (db.open()) {
        return true;
    } else
        return false;
}

void SqlDBManeger::closeDataBase() {
    db.close();
}

bool SqlDBManeger::createTablesAccount()
{
    QSqlQuery queryAccount;
    if (!queryAccount.exec("CREATE TABLE " TABLE_ACCOUNT " ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    TABLE_ACCOUNT_NAME             " VARCHAR(255)    NOT NULL,"
                    TABLE_NUMBER            " VARCHAR(255)    NOT NULL,"
                    TABLE_ACCOUNT_PASS              " VARCHAR(255)    NOT NULL"
                    " )"
                    )) {
        qDebug() << "DataBase: error of create " << TABLE_ACCOUNT;
        qDebug() << queryAccount.lastError().text();
        return false;
    } else
        return true;
}

bool SqlDBManeger::createTablesAccountCustomer()
{
    QSqlQuery queryAccount;
    if (!queryAccount.exec("CREATE TABLE " TABLE_ACCOUNT_CUSTOMER " ("
                           "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                           TABLE_ACCOUNT_NAME             " VARCHAR(255)    NOT NULL,"
                           TABLE_NUMBER            " VARCHAR(255)    NOT NULL,"
                           TABLE_ACCOUNT_PASS              " VARCHAR(255)    NOT NULL"
                           " )"
                           )) {
        qDebug() << "DataBase: error of create " << TABLE_ACCOUNT_CUSTOMER;
        qDebug() << queryAccount.lastError().text();
        return false;
    } else
        return true;
}

bool SqlDBManeger::createTablesMasters()
{
    QSqlQuery queryMaster;
    if (!queryMaster.exec("CREATE TABLE " TABLE_MASTER "("
                          ID                        " INTEGER PRIMARY KEY AUTOINCREMENT,"
                          TABLE_NAME         " VARCHAR(250) NOT NULL,"
                          TABLE_SURENAME     " VARCHAR(250) NOT NULL,"
                          TABLE_NUMBER       " VARCHAR(250) NOT NULL,"
                          TABLE_MASTER_PRICE        " DECIMAL(5,3) NOT NULL,"
                          TABLE_MASTER_WORKS        " INTEGER NOT NULL );"))
    {
        qDebug() << "DataBase: error of create " << TABLE_MASTER;
        qDebug() << queryMaster.lastError().text();
        return false;
    } else {
        return true;
    }
}

bool SqlDBManeger::createTableBody()
{
    QSqlQuery queryBody;
    if (!queryBody.exec("CREATE TABLE " TABLE_BODY " ("
                           ID                    " INTEGER PRIMARY KEY AUTOINCREMENT, "
                           TABLE_BODY_AREA       " VARCHAR(255)    NOT NULL )"
                           )) {
        qDebug() << "DataBase: error of create " << TABLE_BODY;
        qDebug() << queryBody.lastError().text();
        return false;
    } else
        return true;
}

bool SqlDBManeger::createTableCustomer()
{
    QSqlQuery queryCustomer;
    if (!queryCustomer.exec("CREATE TABLE " TABLE_CUSTOMER "("
                            ID                         " INTEGER PRIMARY KEY AUTOINCREMENT,"
                            TABLE_NAME                 " VARCHAR(250) NOT NULL,"
                            TABLE_SURENAME             " VARCHAR(250) NOT NULL,"
                            TABLE_NUMBER               " VARCHAR(250) NOT NULL,"
                            TABLE_CUSTOMER_PRICE       " DECIMAL(5,3) NOT NULL,"
                            TABLE_CUSTOMER_BODY        " INTEGER NOT NULL, "
                            TABLE_MASTERid      " INTEGER NOT NULL,"
                            "FOREIGN KEY(" TABLE_CUSTOMER_BODY ") REFERENCES "
                            TABLE_BODY "(" ID "),"
                            "FOREIGN KEY(" TABLE_MASTERid ") REFERENCES "
                            TABLE_MASTER "(" ID "));"))
    {
        qDebug() << "Error creating Customer table: " << queryCustomer.lastError().text();
        return false;
    }
    else
    {
        qDebug() << "Customer table created successfully.";
        return true;
    }

}

bool SqlDBManeger::createTableFreeTime()
{
    QSqlQuery queryFree;
    if (!queryFree.exec("CREATE TABLE " TABLE_FREETIME "("
                            ID                         " INTEGER PRIMARY KEY AUTOINCREMENT,"
                            TABLE_DATE                 " DATE NOT NULL,"
                            TABLE_TIME                 " TIME NOT NULL,"
                            TABLE_MASTERid             " INTEGER NOT NULL,"
                            "FOREIGN KEY(" TABLE_MASTERid ") REFERENCES "
                            TABLE_MASTER "(" ID "));"))
    {
        qDebug() << "Error creating Free time table: " << queryFree.lastError().text();
        return false;
    }
    else
    {
        qDebug() << "Free time table created successfully.";
        return true;
    }
}

bool SqlDBManeger::createTableWorkTime()
{
    QSqlQuery queryWork;
    if (!queryWork.exec("CREATE TABLE " TABLE_WORKTIME "("
                        ID                         " INTEGER PRIMARY KEY AUTOINCREMENT,"
                        TABLE_DATE                 " DATE NOT NULL,"
                        TABLE_TIME                 " TIME NOT NULL,"
                        TABLE_MASTERid             " INTEGER NOT NULL,"
                        TABLE_CUSTOMERid          " INTEGER NOT NULL,"
                        "FOREIGN KEY(" TABLE_MASTERid ") REFERENCES "
                        TABLE_MASTER "(" ID "),"
                        "FOREIGN KEY(" TABLE_CUSTOMERid ") REFERENCES "
                        TABLE_CUSTOMER "(" ID "));"))
    {
        qDebug() << "Error creating Work time table: " << queryWork.lastError().text();
        return false;
    }
    else
    {
        qDebug() << "Work time table created successfully.";
         return true;
    }
}

bool SqlDBManeger::createTableSketch()
{
    QSqlQuery queryScetch;
    if (!queryScetch.exec("CREATE TABLE " TABLE_SKETCH "("
                        ID                         " INTEGER PRIMARY KEY AUTOINCREMENT,"
                        TABLE_SKETCH               " BLOB NOT NULL,"
                        TABLE_NAME                 " TIME NOT NULL,"
                        TABLE_SKETCH_PRICE       " DECIMAL(5,3) NOT NULL,"
                        TABLE_STATUS             " VARCHAR(250) NOT NULL)"))
    {
         qDebug() << "Error creating Sketch table: " << queryScetch.lastError().text();
         return false;
    }
    else
    {
         qDebug() << "Sketch table created successfully.";
         return true;
    }
}

bool SqlDBManeger::createAppTable()
{
    QSqlQuery queryApp;
    if (!queryApp.exec("CREATE TABLE " TABLE_APPLICATION "("
                          ID                        " INTEGER PRIMARY KEY AUTOINCREMENT,"
                          DATE_ID                   " INTEGER,"
                          TABLE_MASTERid            " INTEGER,"
                          SKETCH_ID                  " INTEGER,"
                          TABLE_NAME                 " VARCHAR(250) NOT NULL,"
                          TABLE_SURENAME             " VARCHAR(250) NOT NULL,"
                          TABLE_NUMBER               " VARCHAR(250) NOT NULL,"
                         TABLE_BODY_AREA             " VARCHAR(255) NOT NULL, "
                          "FOREIGN KEY(" DATE_ID ") REFERENCES " TABLE_FREETIME "(" ID "),"
                          "FOREIGN KEY(" TABLE_MASTERid ") REFERENCES " TABLE_MASTER "(" ID "),"
                          "FOREIGN KEY(" SKETCH_ID ") REFERENCES " TABLE_SKETCH "(" ID "))"))
    {
         qDebug() << "Error creating Sketch table: " << queryApp.lastError().text();
         return false;
    }
    else
    {
         qDebug() << "Sketch table created successfully.";
         return true;
    }

}

bool SqlDBManeger::inserIntoTableReg(const QString name, QString password, QString number)
{
     QSqlQuery queryAccount;
    queryAccount.prepare("INSERT INTO " TABLE_ACCOUNT "("
                          TABLE_ACCOUNT_NAME " ,"
                          TABLE_NUMBER " ,"
                          TABLE_ACCOUNT_PASS " )"
                  "VALUES (:Name, :Number, :Password)");
     queryAccount.bindValue(":Name", name);
     queryAccount.bindValue(":Number", number);
     queryAccount.bindValue(":Password", password);
    if (!queryAccount.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT;
        qDebug() << queryAccount.lastError().text();
        qDebug() << queryAccount.lastQuery();
        return false;
    } else
        return true;
}

bool SqlDBManeger::inserIntoTableRegCust(const QString name, QString password, QString number)
{
    QSqlQuery queryAccount;
    queryAccount.prepare("INSERT INTO " TABLE_ACCOUNT_CUSTOMER "("
                         TABLE_ACCOUNT_NAME " ,"
                         TABLE_NUMBER " ,"
                         TABLE_ACCOUNT_PASS " )"
                         "VALUES (:Name, :Number, :Password)");
    queryAccount.bindValue(":Name", name);
    queryAccount.bindValue(":Number", number);
    queryAccount.bindValue(":Password", password);
    if (!queryAccount.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT_CUSTOMER;
        qDebug() << queryAccount.lastError().text();
        qDebug() << queryAccount.lastQuery();
        return false;
    } else
        return true;
}

bool SqlDBManeger::inserIntoTableMasters( Master &master)
{
     QSqlQuery queryMaster;
    queryMaster.prepare("INSERT INTO " TABLE_MASTER "("
                        TABLE_NAME     " ,"
                        TABLE_SURENAME " ,"
                        TABLE_NUMBER   " ,"
                        TABLE_MASTER_PRICE    " ,"
                        TABLE_MASTER_WORKS    " )"
                         "VALUES (:Name, :Surename, :Number, :Price, :Works)");
    queryMaster.bindValue(":Name",master.getName());
    queryMaster.bindValue(":Surename", master.getSurename());
    queryMaster.bindValue(":Number", master.getPhoneNumber());
    queryMaster.bindValue(":Price", QString::number(master.getPrice()));
    queryMaster.bindValue(":Works", QString::number(master.getworkDone()));
    if (!queryMaster.exec()) {
        qDebug() << "error insert into " << TABLE_MASTER;
        qDebug() << queryMaster.lastError().text();
        qDebug() << queryMaster.lastQuery();
        return false;
    } else
        return true;
}

bool SqlDBManeger::inserIntoTableCustomers(Customer &customer)
{
    QSqlQuery queryCustomer;
    queryCustomer.prepare("INSERT INTO " TABLE_CUSTOMER "("
                        TABLE_NAME     " ,"
                        TABLE_SURENAME " ,"
                        TABLE_NUMBER   " ,"
                        TABLE_CUSTOMER_PRICE " ,"
                        TABLE_CUSTOMER_BODY ","
                        TABLE_MASTERid " )"
                        "VALUES (:Name, :Surename, :Number, :Price, :Body, :Master)");
    queryCustomer.bindValue(":Name",customer.getName());
    queryCustomer.bindValue(":Surename", customer.getSurename());
    queryCustomer.bindValue(":Number", customer.getPhoneNumber());
    queryCustomer.bindValue(":Price", QString::number(customer.getPrice()));
    queryCustomer.bindValue(":Body", QString::number(customer.getAreaBody()));
    queryCustomer.bindValue(":Master", QString::number(customer.getMaster()));

    if (!queryCustomer.exec()) {
        qDebug() << "error insert into " << TABLE_CUSTOMER;
        qDebug() << queryCustomer.lastError().text();
        qDebug() << queryCustomer.lastQuery();
        return false;
    } else
        return true;
}

bool SqlDBManeger::inserIntoTableBody(const QString area)
{
    QSqlQuery queryBody;
    queryBody.prepare("INSERT INTO " TABLE_BODY "("
                        TABLE_BODY_AREA " )"
                        "VALUES (:Area)");
    queryBody.bindValue(":Area",area);
    if (!queryBody.exec()) {
        qDebug() << "error insert into " << TABLE_BODY;
        qDebug() << queryBody.lastError().text();
        qDebug() << queryBody.lastQuery();
        return false;
    } else

        return true;
}

bool SqlDBManeger::inserIntoTableFree(FreeTime &time)
{
    QSqlQuery queryFree;
    queryFree.prepare("INSERT INTO " TABLE_FREETIME "("
                            TABLE_DATE     " ,"
                          TABLE_TIME " ,"
                          TABLE_MASTERid " )"
                          "VALUES (:Date, :Time, :Master)");
    queryFree.bindValue(":Date", time.getDate().toString("yyyy-MM-dd"));
    queryFree.bindValue(":Time", time.getTime().toString("hh:mm"));
    queryFree.bindValue(":Master", QString::number(time.getMaster()));

    if (!queryFree.exec()) {
        qDebug() << "error insert into " << TABLE_FREETIME;
        qDebug() << queryFree.lastError().text();
        qDebug() << queryFree.lastQuery();
        return false;
    } else
        return true;
}

bool SqlDBManeger::inserIntoTableWork(WorkTime &time)
{
    QSqlQuery queryWork;
    queryWork.prepare("INSERT INTO " TABLE_WORKTIME "("
                      TABLE_DATE     " ,"
                      TABLE_TIME " ,"
                      TABLE_MASTERid ","
                      TABLE_CUSTOMERid " )"
                      "VALUES (:Date, :Time, :Master, :Customer)");
    queryWork.bindValue(":Date", time.getDate().toString("yyyy-MM-dd"));
    queryWork.bindValue(":Time", time.getTime().toString("hh:mm"));
    queryWork.bindValue(":Master", QString::number(time.getMaster()));
     queryWork.bindValue(":Customer", QString::number(time.getCustomr()));

    if (!queryWork.exec()) {
        qDebug() << "error insert into " << TABLE_WORKTIME;
        qDebug() << queryWork.lastError().text();
        qDebug() << queryWork.lastQuery();
        return false;
    } else
        return true;
}

bool SqlDBManeger::inserIntoTableSketch(Sketch &data)
{
    QSqlQuery querySketch;
    querySketch.prepare("INSERT INTO " TABLE_SKETCH "("
                        TABLE_SKETCH               ","
                        TABLE_NAME                 ","
                        TABLE_SKETCH_PRICE         ","
                        TABLE_STATUS " ) "
                        "VALUES (:SketchData, :SketchName, :SketchPrice, :Status )");

    querySketch.bindValue(":SketchData", data.getImage());
    querySketch.bindValue(":SketchName", data.getName());
    querySketch.bindValue(":SketchPrice", data.getPrice());
     querySketch.bindValue(":Status", STATUS);

    if (!querySketch.exec()) {
        qDebug() << "Error inserting into " << TABLE_SKETCH;
        qDebug() << querySketch.lastError().text();
        qDebug() << querySketch.lastQuery();
        return false;
    } else {
        qDebug() << "Insert into Sketch table successful.";
        return true;
    }
}

bool SqlDBManeger::inserIntoTableApp(QString date_id,  QString sketch_id, Customer &customer)
{
    QSqlQuery queryApp;
    queryApp.prepare("INSERT INTO " TABLE_APPLICATION "("
                        DATE_ID", "
                        TABLE_MASTERid", "
                        SKETCH_ID", "
                        TABLE_NAME", "
                        TABLE_SURENAME", "
                        TABLE_NUMBER","
                        TABLE_BODY_AREA")"
                        "VALUES (:DateId, :MasterId, :SketchId, :Name, :Surename, :Number, :BodyArea)");

    queryApp.bindValue(":DateId", date_id);
    queryApp.bindValue(":MasterId", customer.getMaster());
    queryApp.bindValue(":SketchId", sketch_id);
    queryApp.bindValue(":Name", customer.getName());
    queryApp.bindValue(":Surename", customer.getSurename());
    queryApp.bindValue(":Number", customer.getPhoneNumber());
    queryApp.bindValue(":BodyArea", customer.getStrBody());

    if (!queryApp.exec()) {
        qDebug() << "Error inserting data into " << TABLE_APPLICATION << ": " << queryApp.lastError().text();
        return false;
    } else {
        qDebug() << "Data inserted into " << TABLE_APPLICATION << " successfully.";
        return true;
    }

}


bool SqlDBManeger:: nameCheck(QString name)
{
    QSqlQuery queryAccount;
    queryAccount.prepare("SELECT * FROM " TABLE_ACCOUNT " WHERE " TABLE_ACCOUNT_NAME " = :Name");
    queryAccount.bindValue(":Name", name);
    queryAccount.exec();
    if (!queryAccount.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT;
        qDebug() << queryAccount.lastError().text();
        qDebug() << queryAccount.lastQuery();
    }
    int count=0;
    while(queryAccount.next())
    {
        count++;
    }
    if (count > 0) {
        return false;
    } else {
        return true;
    }

}



bool SqlDBManeger::nameCheckCustomer(QString name)
{
    QSqlQuery queryAccount;
    queryAccount.prepare("SELECT * FROM " TABLE_ACCOUNT_CUSTOMER " WHERE " TABLE_ACCOUNT_NAME " = :Name");
    queryAccount.bindValue(":Name", name);
    queryAccount.exec();
    if (!queryAccount.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT_CUSTOMER;
        qDebug() << queryAccount.lastError().text();
        qDebug() << queryAccount.lastQuery();
    }
    int count=0;
    while(queryAccount.next())
    {
        count++;
    }
    if (count > 0) {
        return false;
    } else {
        return true;
    }
}

bool SqlDBManeger::login(QString name, QString password)
{
    QSqlQuery queryAccount;
    queryAccount.prepare("SELECT * FROM " TABLE_ACCOUNT " WHERE " TABLE_ACCOUNT_NAME " = :Name AND " TABLE_ACCOUNT_PASS
                         "= :Password");
    queryAccount.bindValue(":Name", name);
    queryAccount.bindValue(":Password", password);
    queryAccount.exec();
    if (!queryAccount.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT;
        qDebug() << queryAccount.lastError().text();
        qDebug() << queryAccount.lastQuery();
    }
    if(queryAccount.next()) { return true;}
    else  {return false;}
}

bool SqlDBManeger::loginCustomer(QString name, QString password)
{
    QSqlQuery queryAccount;
    queryAccount.prepare("SELECT * FROM " TABLE_ACCOUNT_CUSTOMER " WHERE " TABLE_ACCOUNT_NAME " = :Name AND " TABLE_ACCOUNT_PASS
                         "= :Password");
    queryAccount.bindValue(":Name", name);
    queryAccount.bindValue(":Password", password);
    queryAccount.exec();
    if (!queryAccount.exec()) {
        qDebug() << "error insert into " << TABLE_ACCOUNT_CUSTOMER;
        qDebug() << queryAccount.lastError().text();
        qDebug() << queryAccount.lastQuery();
    }
    if(queryAccount.next()) { return true;}
    else  {return false;}
}

bool SqlDBManeger::updateMasters(Master &master, QString id)
{
    QSqlQuery queryMaster;

    queryMaster.prepare("UPDATE " TABLE_MASTER " SET " TABLE_NAME" = :Name, "
                  TABLE_SURENAME " = :Surename, " TABLE_NUMBER " = :Number, "
                  TABLE_MASTER_PRICE " = :Price, " TABLE_MASTER_WORKS" = :Works WHERE " ID" = :Id");

    queryMaster.bindValue(":Id", id);
    queryMaster.bindValue(":Name",master.getName());
    queryMaster.bindValue(":Surename", master.getSurename());
    queryMaster.bindValue(":Number", master.getPhoneNumber());
    queryMaster.bindValue(":Price", QString::number(master.getPrice()));
    queryMaster.bindValue(":Works", QString::number(master.getworkDone()));

    if (queryMaster.exec()) {
        return true;
    } else {
        qDebug() << "Error updating master: " << queryMaster.lastError().text();
        return false;
    }
}

bool SqlDBManeger::updateBody(QString area, QString id)
{
    QSqlQuery queryBody;
    queryBody.prepare("UPDATE " TABLE_BODY " SET " TABLE_BODY_AREA" = :Area WHERE " ID" = :Id");

    queryBody.bindValue(":Id", id);
    queryBody.bindValue(":Area",area);

    if (queryBody.exec()) {
        return true;
    } else {
        qDebug() << "Error updating area of body: " << queryBody.lastError().text();
        return false;
    }
}

bool SqlDBManeger::updateCustomer(Customer &customer, QString id)
{
    QSqlQuery queryCustomer;

    queryCustomer.prepare("UPDATE " TABLE_CUSTOMER " SET " TABLE_NAME" = :Name, "
                        TABLE_SURENAME " = :Surename, " TABLE_NUMBER " = :Number, "
                        TABLE_CUSTOMER_PRICE " = :Price, " TABLE_CUSTOMER_BODY" = :Body,"
                        TABLE_MASTERid" = :Master WHERE " ID" = :Id");
    queryCustomer.bindValue(":Id", id);
    queryCustomer.bindValue(":Name",customer.getName());
    queryCustomer.bindValue(":Surename", customer.getSurename());
    queryCustomer.bindValue(":Number", customer.getPhoneNumber());
    queryCustomer.bindValue(":Price", QString::number(customer.getPrice()));
    queryCustomer.bindValue(":Body", QString::number(customer.getAreaBody()));
    queryCustomer.bindValue(":Master", QString::number(customer.getMaster()));

    if (queryCustomer.exec()) {
        return true;
    } else {
        qDebug() << "Error updating customer: " << queryCustomer.lastError().text();
        return false;
    }
}

bool SqlDBManeger::updateWork(WorkTime &work, QString id)
{
    QSqlQuery queryWork;

    queryWork.prepare("UPDATE " TABLE_WORKTIME " SET " TABLE_DATE" = :Date, "
                          TABLE_TIME " = :Time, " TABLE_MASTERid " = :Master, "
                          TABLE_CUSTOMERid " = :Customer WHERE " ID" = :Id");
    queryWork.bindValue(":Id", id);
    queryWork.bindValue(":Date", work.getDate().toString("yyyy-MM-dd"));
    queryWork.bindValue(":Time", work.getTime().toString("hh:mm"));
    queryWork.bindValue(":Master", QString::number(work.getMaster()));
    queryWork.bindValue(":Customer", QString::number(work.getCustomr()));

    if (queryWork.exec()) {
        return true;
    } else {
        qDebug() << "Error updating time: " << queryWork.lastError().text();
        return false;
    }
}


bool SqlDBManeger::deleteItem(QString id, QString table_name)
{
    QSqlQuery query;

    query.prepare("DELETE FROM  " +table_name+ " WHERE " ID " = :Id");
    query.bindValue(":Id", id);
    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error delete: " << query.lastError().text();
        return false;
    }
}

QString SqlDBManeger::serchIdTime(QString &date, QString &time)
{
    QSqlQuery query;

    query.prepare("SELECT id FROM free_time WHERE date = :date AND time = :time");
    query.bindValue(":date", date);
    query.bindValue(":time", time);

    if (query.exec() && query.next()) {
        QString id = query.value(0).toString();
        //qDebug() << id;
        return id;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given date and time.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return QString();
}

int SqlDBManeger::searchMasterId(QString &master)
{
    QSqlQuery query;

    query.prepare("SELECT id FROM " TABLE_MASTER " WHERE name = :master");
    query.bindValue(":master", master);


    if (query.exec() && query.next()) {
        int id = query.value(0).toInt();
        qDebug() << id;
        return id;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given master.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return -1;
}

int SqlDBManeger::searchCustomerId(QString &customer)
{
    QSqlQuery query;

    query.prepare("SELECT id FROM " TABLE_CUSTOMER " WHERE name = :customer");
    query.bindValue(":customer", customer);


    if (query.exec() && query.next()) {
        int id = query.value(0).toInt();
        qDebug() << id;
        return id;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given customer.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return -1;
}

QString SqlDBManeger::searchSketchId(QString name)
{
    QSqlQuery query;

    query.prepare("SELECT id FROM " TABLE_SKETCH " WHERE name = :name");
    query.bindValue(":name", name);


    if (query.exec() && query.next()) {
        QString id = query.value(0).toString();
        qDebug() << id;
        return id;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given sketch.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return QString();
}

float SqlDBManeger::searchSketchPrice(QString name)
{
    QSqlQuery query;

    query.prepare("SELECT price FROM " TABLE_SKETCH " WHERE name = :name");
    query.bindValue(":name", name);


    if (query.exec() && query.next()) {
        float price = query.value(0).toFloat();
        qDebug() << price;
        return price;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given sketch.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return -1.1;
}

bool SqlDBManeger::updateStatusSketch(QString id)
{
    QSqlQuery querySketch;

    querySketch.prepare("UPDATE " TABLE_SKETCH " SET " TABLE_STATUS" = :Status "
                         " WHERE " ID" = :Id");
    querySketch.bindValue(":Id", id);
    querySketch.bindValue(":Status", "booked");


    if (querySketch.exec()) {
        return true;
    } else {
        qDebug() << "Error updating time: " << querySketch.lastError().text();
        return false;
    }
}

int SqlDBManeger::searchBodyId(QString area)
{
    QSqlQuery query;

    query.prepare("SELECT id FROM " TABLE_BODY " WHERE area = :area");
    query.bindValue(":area", area);


    if (query.exec() && query.next()) {
        int id = query.value(0).toInt();
        return id;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given sketch.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return -1;
}

bool SqlDBManeger::serchCustomer(QString name, QString surename)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM " TABLE_CUSTOMER " WHERE " TABLE_SURENAME " = :Surename "
                  "AND " TABLE_NAME "= :Name");
    query.bindValue(":Name", name);
    query.bindValue(":Surename", surename);
    query.exec();
    if (!query.exec()) {
        qDebug() << "error insert into " << TABLE_CUSTOMER;
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }
    if(query.next()) { return true;}
    else  {return false;}
}

QString SqlDBManeger::searchStatusSketch(QString id)
{
    QSqlQuery query;

    query.prepare("SELECT status FROM " TABLE_SKETCH " WHERE id = :id");
    query.bindValue(":id", id);


    if (query.exec() && query.next()) {
        QString status = query.value(0).toString();
        qDebug() << status;
        return status;
    } else {
        if (!query.next()) {
            qDebug() << "No record found for the given sketch.";
        }
        QString problem = query.lastError().text();
        QMessageBox::critical(qApp->activeWindow(), "Problem", problem);
    }
    return QString();
}







