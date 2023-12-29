#ifndef CUSTOMERWND_H
#define CUSTOMERWND_H

#include <QWidget>
#include <sqldbmaneger.h>
#include "question.h"
#include "bodywnd.h"
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>

class QWidget;
class QSqlRelationalTableModel;
class QSortFilterProxyModel;
class DBManager;
namespace Ui {
class CustomerWnd;
}

class CustomerWnd : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWnd(QWidget *parent = nullptr);
    ~CustomerWnd();

private:
    Ui::CustomerWnd *ui;
    DBManager *db;
    Question *qstn;
    BodyWnd *body;
    Customer *customer;
    QSqlRelationalTableModel *modelCust;
    QSortFilterProxyModel *proxyCustModel;
    int masterIndex;
    int bodyIndex;
public slots:
    void closeQuestion();
    void closeBody();
signals:
    void update(Customer *customer, QString id,int page);
    void deleteCustomer(QString id,QString table_anme);

private slots:
    void on_bodyPb_clicked();
    void on_addPb_clicked();
    void on_customerTv_doubleClicked(const QModelIndex &index);
    void on_searchLE_textChanged(const QString &arg1);
};

#endif // CUSTOMERWND_H
