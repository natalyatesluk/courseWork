// masterswnd.h

#ifndef MASTERSWND_H
#define MASTERSWND_H

#include <QWidget>
#include <QSqlDatabase>
#include <sqldbmaneger.h>
#include "question.h"
#include <QSortFilterProxyModel>

class QSqlTableModel;
class DBManager;


namespace Ui {
class MastersWnd;
}

class MastersWnd : public QWidget
{
    Q_OBJECT

public:
    explicit MastersWnd(QWidget *parent = nullptr);
    ~MastersWnd();

private slots:
    void on_addPb_clicked();
    void on_mastersTv_doubleClicked(const QModelIndex &index);
    void on_searchLE_textChanged(const QString &arg1);

private:
    Ui::MastersWnd *ui;
    DBManager *db;
    Master *master;
    Question *qus;
    QSortFilterProxyModel *proxyMasterModel;
    QSqlTableModel *modelMaster;

public slots:
    void closeQuestion();

signals:
    void update(Master *master, QString id, int page);
    void deleteMaster(QString id,QString table_name);

};

#endif // MASTERSWND_H
