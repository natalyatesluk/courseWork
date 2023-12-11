#ifndef SQLDBMANEGER_H
#define SQLDBMANEGER_H
#include <QSqlDatabase>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include "dbmaneger.h"

#define DB_NAME "D:/my/coursework/course/tattoStudio.db"
#define TABLE_ACCOUNT "account"
#define TABLE_ACCOUNT_NAME "username"
#define TABLE_ACCOUNT_NUMBER "number "
#define TABLE_ACCOUNT_PASS "passwrod"
#define TABLE_MASTER "masters"
#define ID "id"
#define TABLE_MASTER_NAME "name"
#define TABLE_MASTER_SURENAME "surename"
#define TABLE_MASTER_NUMBER "number "
#define TABLE_MASTER_PRICE "starting_price"
#define TABLE_MASTER_WORKS "done_works"
#define TABLE_MASTER_ADRESS "adress"
class SqlDBManeger : public DBManager {

public:

    static SqlDBManeger* getInstance();


    void connectToDataBase() override;


    QSqlDatabase getDB() override;


    bool inserIntoTableReg(const QString name, QString password, QString number) override;
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTablesAccount();
    bool createTablesMasters();
    SqlDBManeger();
    bool nameCheck(QString name);
    bool login(QString name, QString password);
private:
    // Обробник підключення до БД, через який буде виконуватись робота із БД
    QSqlDatabase db;

    static SqlDBManeger* instance;

};

#endif // SQLDBMANEGER_H
