#ifndef HOMECUSTOMER_H
#define HOMECUSTOMER_H

#include <QWidget>
#include <sqldbmaneger.h>
class DBManager;
namespace Ui {
class HomeCustomer;
}

class HomeCustomer : public QWidget
{
    Q_OBJECT

public:
    explicit HomeCustomer(QWidget *parent = nullptr);
    ~HomeCustomer();
public slots:
    void username(QString name);

private slots:
    void on_mastersPb_clicked();
    void on_freePb_clicked();

    void on_homePb_clicked();

    void on_homeTPb_clicked();
    void on_changePb_clicked();
    void on_changeMenPb_clicked();

    void on_changeWomenPb_clicked();

private:
    Ui::HomeCustomer *ui;
    SqlDBManeger *db;
};

#endif // HOMECUSTOMER_H
