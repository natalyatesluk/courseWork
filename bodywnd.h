#ifndef BODYWND_H
#define BODYWND_H

#include <QWidget>
#include <sqldbmaneger.h>
#include "question.h"
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
    SqlDBManeger *db;
    Question *ques;
public slots:
    void closeQuestion();
signals:
    void update(QString area, QString id,int page);
    void deleteBody(QString id,QString table_name);
};

#endif // BODYWND_H
