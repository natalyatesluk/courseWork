#include "sqldbmaneger.h"
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QMessageBox>
#include <QDate>
#include <QDebug>

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

// Метод для отримання обробника підключення до БД
QSqlDatabase SqlDBManeger::getDB() {
    return db;
}


// Метод відновлення бази даних
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

// Метод закриття бази даних
void SqlDBManeger::closeDataBase() {
    db.close();
}

bool SqlDBManeger::createTablesAccount()
{
    QSqlQuery queryAccount;
    if (!queryAccount.exec("CREATE TABLE " TABLE_ACCOUNT " ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    TABLE_ACCOUNT_NAME             " VARCHAR(255)    NOT NULL,"
                    TABLE_ACCOUNT_NUMBER            " VARCHAR(255)    NOT NULL,"
                    TABLE_ACCOUNT_PASS              " VARCHAR(255)    NOT NULL"
                    " )"
                    )) {
        qDebug() << "DataBase: error of create " << TABLE_ACCOUNT;
        qDebug() << queryAccount.lastError().text();
        return false;
    } else
        return true;
}

bool SqlDBManeger::createTablesMasters()
{
    QSqlQuery queryMaster;
    if (!queryMaster.exec("CREATE TABLE " TABLE_MASTER "("
                          ID                        " INT AUTO_INCREMENT PRIMARY KEY,"
                          TABLE_MASTER_NAME         " VARCHAR(250) NOT NULL,"
                          TABLE_MASTER_SURENAME     " VARCHAR(250) NOT NULL,"
                          TABLE_MASTER_NUMBER       " VARCHAR(250) NOT NULL,"
                          TABLE_MASTER_PRICE        " DECIMAL(5,3) NOT NULL,"
                          TABLE_MASTER_WORKS        " INT NOT NULL,"
                          TABLE_MASTER_ADRESS       " VARCHAR(250) NOT NULL );"))
    {
        qDebug() << "DataBase: error of create " << TABLE_MASTER;
        qDebug() << queryMaster.lastError().text();
        return false;
    } else {
        return true;
    }
}


bool SqlDBManeger::inserIntoTableReg(const QString name, QString password, QString number)
{
     QSqlQuery queryAccount;
    queryAccount.prepare("INSERT INTO " TABLE_ACCOUNT "("
                          TABLE_ACCOUNT_NAME " ,"
                          TABLE_ACCOUNT_NUMBER " ,"
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
//    if (count == 1) {
//        return true;
//    } else {
//        return false;
//    }
}

