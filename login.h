#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <sqldbmaneger.h>
class QSqlTableModel;

class DBManager;
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginPB_clicked();

    void on_adminPb_clicked();

    void on_customerPb_clicked();

    void on_loginCustPB_clicked();

private:
    Ui::Login *ui;
    SqlDBManeger *sqlDBM;
signals:
    void home(QString username);
    void customer(QString username);
};

#endif // LOGIN_H
