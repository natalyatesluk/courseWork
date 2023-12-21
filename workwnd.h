#ifndef WORKWND_H
#define WORKWND_H

#include <QWidget>
#include "sqldbmaneger.h"
#include "question.h"
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

public slots:
    void closeQstn();

private:
    Ui::WorkWnd *ui;
    DBManager *db;
    Question *qstn;
signals:
    void updateTime(WorkTime *time,QString id,int page);
    void deleteTime(QString id, QString table_name);
};

#endif // WORKWND_H
