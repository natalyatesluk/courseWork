#ifndef BODYWND_H
#define BODYWND_H

#include <QWidget>
#include <sqldbmaneger.h>
#include "question.h"
#include <QSortFilterProxyModel>
#include <QSqlTableModel>
class QSqlTableModel;
class DBManager;

namespace Ui {
class BodyWnd;
}

class BodyWnd : public QWidget
{
    Q_OBJECT

public:
    explicit BodyWnd(QWidget *parent = nullptr);
    ~BodyWnd();

private slots:
    void on_addPb_clicked();

    void on_bodyTv_doubleClicked(const QModelIndex &index);

private:
    Ui::BodyWnd *ui;
    DBManager *db;
    Question *ques;
    QSortFilterProxyModel *proxyBodyModel;
    QSqlTableModel *bodyModel;
public slots:
    void closeQuestion();
    void updateTable();
signals:
    void update(QString area, QString id,int page);
    void deleteBody(QString id,QString table_name);
};

#endif // BODYWND_H
