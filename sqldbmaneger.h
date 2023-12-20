#ifndef SQLDBMANEGER_H
#define SQLDBMANEGER_H
#include <QSqlDatabase>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include "dbmaneger.h"
#include <QTableView>
#include <QSqlTableModel>
#include<QStandardItemModel>

#define DB_NAME "D:/my/coursework/course/tattoStudio.db"
#define TABLE_ACCOUNT "account"
#define TABLE_ACCOUNT_NAME "username"
#define TABLE_NUMBER "number "
#define TABLE_ACCOUNT_PASS "passwrod"
#define TABLE_ACCOUNT_CUSTOMER "account_customer"
#define TABLE_MASTER "masters"
#define ID "id"
#define TABLE_NAME "name"
#define TABLE_SURENAME "surename"
#define TABLE_MASTER_PRICE "starting_price"
#define TABLE_MASTER_WORKS "done_works"
#define TABLE_BODY "areas_body"
#define TABLE_BODY_AREA "area"
#define TABLE_CUSTOMER "customers"
#define TABLE_CUSTOMER_PRICE "price_tatto"
#define TABLE_MASTERid "master_id"
#define TABLE_CUSTOMER_BODY "areaBodyId"
#define TABLE_FREETIME "free_time"
#define TABLE_DATE "date"
#define TABLE_TIME "time"
#define TABLE_CUSTOMERid "customer_id"
#define TABLE_WORKTIME "work_time"

class SqlDBManeger : public DBManager {

public:

    static SqlDBManeger* getInstance();


    void connectToDataBase() override;


    QSqlDatabase getDB() override;

    QStandardItemModel* updateList(QTableView *tableView,QString name_table);

    bool inserIntoTableReg(const QString name, QString password, QString number) override;
    bool inserIntoTableRegCust(const QString name, QString password, QString number) override;
    bool inserIntoTableMasters( Master &master ) override;
    bool inserIntoTableCustomers( Customer &customer ) override;
    bool inserIntoTableBody(const QString area) override;
    bool inserIntoTableFree( FreeTime &time ) override;
    bool inserIntoTableWork( WorkTime &time ) override;

    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();

    bool createTablesAccount();
    bool createTablesAccountCustomer();
    bool createTablesMasters();
    bool createTableBody();
    bool createTableCustomer();
    bool createTableFreeTime();
    bool createTableWorkTime();

    SqlDBManeger();

    bool nameCheck(QString name);
    bool nameCheckCustomer(QString name);

    bool login(QString name, QString password);
    bool loginCustomer(QString name, QString password);

    bool updateMasters(Master &master, QString id);
    bool updateBody(QString area, QString id);
    bool updateCustomer(Customer &customer, QString id);
    bool updateWork(WorkTime &work,QString id);
    bool deleteItem(QString id,QString table_name);

private:
    QSqlDatabase db;

    static SqlDBManeger* instance;

};

#endif // SQLDBMANEGER_H
