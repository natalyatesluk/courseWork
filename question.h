#ifndef QUESTION_H
#define QUESTION_H

#include <QWidget>
#include <QDialog>
#include "master.h"
#include "sketch.h"
#include "customer.h"
#include "worktime.h"
#include <QSqlTableModel>
#include <QSortFilterProxyModel>
#include <QSqlRelationalTableModel>

class QWidget;
class QDialog;
class QSortFilterProxyModel;
class QSqlRelationalTableModel;
class DBManager;
namespace Ui {
class Question;
}

class Question : public QDialog
{
    Q_OBJECT

public:
    explicit Question(QWidget *parent = nullptr);
    ~Question();

private:
    Ui::Question *ui;
    DBManager * db;
    QString idQstn=0;
    QString table_name;
    int page=0;
    Master *master;
    Customer *customer;
    QByteArray image;
    QSqlRelationalTableModel *modelApp;
    QSortFilterProxyModel *proxyAppModel;
    int masterIndex=0, timeIndex=0;
    QString namestk;
    //QSqlTableModel * modelFree;
    //QSortFilterProxyModel * proxyFree;
    //QSqlTableModel *modelFree;

public slots:
    void updateMasters(Master *master,QString id, int page);
    void deleteItem(QString id, QString table_name);
    void updateBody(QString area,QString id,int page);
    void updateCustomer(Customer *customer,QString id,int page);
    void updateTime(WorkTime *time,QString id,int page);
    void addScetch( QByteArray &image,int page);
    void submitApp(int page,QString nameskt);
private slots:
    void on_updatePb_clicked();
    void on_updatePb_2_clicked();
    void on_deletePb_clicked();

    void on_updateBodyPb_clicked();

    void on_updateCusPb_clicked();

    void on_updateTimePb_clicked();

    void on_addPb_clicked();

    void on_submitApliPb_clicked();

    void on_dateCb_currentTextChanged(const QString &arg1);

    //void on_timeCb_currentIndexChanged(int index);

//    void on_masterCb_currentTextChanged( QString &arg1);

//    void on_masterCb_textActivated( QString &arg1);

    void on_masterCb_currentTextChanged(const QString &arg1);

signals:
    void closeWnd();
    void closeWndSketch(Sketch *sketch);
    void closeWndStr(QString value);
};

#endif // QUESTION_H
