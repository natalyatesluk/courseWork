#ifndef QUESTION_H
#define QUESTION_H

#include <QWidget>
#include <QDialog>
#include "master.h"
#include "sqldbmaneger.h"
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
    SqlDBManeger * db;
    QString idQstn;
    QString table_name;
    int page;
    Master *master;
    Customer *customer;
public slots:
    void updateMasters(Master *master,QString id, int page);
    void deleteItem(QString id, QString table_name);
    void updateBody(QString area,QString id,int page);
     void updateCustomer(Customer *customer,QString id,int page);
    void updateTime(WorkTime *time,QString id,int page);
private slots:
    void on_updatePb_clicked();
    void on_updatePb_2_clicked();
    void on_deletePb_clicked();

    void on_updateBodyPb_clicked();

    void on_updateCusPb_clicked();

    void on_updateTimePb_clicked();

signals:
    void closeWnd();
};

#endif // QUESTION_H
