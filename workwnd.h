#ifndef WORKWND_H
#define WORKWND_H

#include <QWidget>
#include "sqldbmaneger.h"
#include "question.h"
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>

class DBManager;
namespace Ui {
class WorkWnd;
}

class WorkWnd : public QWidget
{
    Q_OBJECT

public:
    explicit WorkWnd(QWidget *parent = nullptr);
    ~WorkWnd();

private slots:

    void on_workTv_doubleClicked(const QModelIndex &index);

    void on_searchLE_textChanged(const QString &arg1);

public slots:
    void closeQstn();
    void updateTable();

private:
    Ui::WorkWnd *ui;
    DBManager *db;
    Question *qstn;
    QSqlRelationalTableModel *modelWork;
    QSortFilterProxyModel *proxyWorkModel;
signals:
    void updateTime(WorkTime *time,QString id,int page);
    void deleteTime(QString id, QString table_name);
};

#endif // WORKWND_H
