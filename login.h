#ifndef LOGIN_H
#define LOGIN_H


#include <sqldbmaneger.h>
#include <QDialog>
#include <QWidget>

class QWidget;
class QDialog;

class DBManager;

namespace Ui {
class Login;
}

class Login : public QDialog
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
    DBManager *sqlDBM;
signals:
    void home(QString username);
    void customer(QString username);
};

#endif // LOGIN_H
