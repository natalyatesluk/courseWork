#ifndef APPLICATION_H
#define APPLICATION_H

#include <QWidget>
#include "acceptreques.h"
#include "freetime.h"
#include "quesfortime.h"
#include <QSqlQueryModel>

class QWidget;
class DBManager;
namespace Ui {
class Application;
}

class Application : public QWidget
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = nullptr);
    ~Application();

private slots:
    void on_appTv_doubleClicked(const QModelIndex &index);

private:
    Ui::Application *ui;
    DBManager*db;
    AcceptReques *accept;
    QuesForTime *qstn;
     int row;
    QSqlQueryModel *modelApp;
signals:
    void acceptReque( QString id,QString name_sketch, QString name_master);
    void transfer(FreeTime *time, QString id,int page);
public slots:
    void closeAccept(bool result);
    void closeTime();

};

#endif // APPLICATION_H
