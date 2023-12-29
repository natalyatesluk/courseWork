#include "application.h"
#include "ui_application.h"
#include "sqldbmaneger.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
Application::Application(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Application)
{
    ui->setupUi(this);
    db= SqlDBManeger::getInstance();

    QSqlQuery query;
    query.prepare("SELECT a.id, f.time, f.date, m.name, s.name FROM application a "
                  "JOIN masters m ON a.master_id = m.id "
                  "JOIN free_time f ON f.id = a.date_id "
                  "JOIN sketches s ON s.id = a.sketch_id");
    if (!query.exec()) {
        qDebug() << "Query execution failed.";
        return;
    }


    QSqlQueryModel *modelApp = new QSqlQueryModel(this);
    modelApp->setQuery(query);

    ui->appTv->setModel(modelApp);
    ui->appTv->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->appTv->setColumnHidden(0, true);

    ui->appTv->horizontalHeader()->setStretchLastSection(true);
     accept = new AcceptReques();
    qstn = new QuesForTime();
    connect(this,&Application::acceptReque, accept, &AcceptReques::acceptReque);
    connect(this, &Application::transfer, qstn, &QuesForTime::transferToWork);

}

Application::~Application()
{
    delete ui;
}

void Application::on_appTv_doubleClicked(const QModelIndex &index)
{
    row = index.row();

    QString id =ui->appTv->model()->data(ui->appTv->model()->index(row, 0)).toString();
    QString nameMaster = ui->appTv->model()->data(ui->appTv->model()->index(row, 3)).toString();
    QString nameSketch = ui->appTv->model()->data(ui->appTv->model()->index(row, 4)).toString();
    emit acceptReque(id,nameSketch,nameMaster);
    accept->show();
    connect(accept,&AcceptReques::closeWnd, this, &Application::closeAccept);
    QSqlQuery query;
    query.prepare("SELECT a.id, f.time, f.date, m.name, s.name FROM application a "
                  "JOIN masters m ON a.master_id = m.id "
                  "JOIN free_time f ON f.id = a.date_id "
                  "JOIN sketches s ON s.id = a.sketch_id");
    if (!query.exec()) {
        qDebug() << "Query execution failed.";
        return;
    }


    modelApp = new QSqlQueryModel(this);
    modelApp->setQuery(query);

    ui->appTv->setModel(modelApp);
    ui->appTv->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->appTv->setColumnHidden(0, true);

    ui->appTv->horizontalHeader()->setStretchLastSection(true);

}

void Application::closeAccept(bool result)
{
    accept->close();
    delete accept;
    accept = nullptr;
    accept = new AcceptReques();
    if(result)
    {
        QString time=  ui->appTv->model()->data(ui->appTv->model()->index(row, 1)).toString();
        QString date = ui->appTv->model()->data(ui->appTv->model()->index(row, 2)).toString();
        QString nameMaster = ui->appTv->model()->data(ui->appTv->model()->index(row, 3)).toString();
        QString date_id= db->serchIdTime(date,time);
        FreeTime * free=new  FreeTime(QDate::fromString(date, "yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),nameMaster);
        qstn->show();
        emit transfer(free,date_id, 1);
        connect(qstn, &QuesForTime::closeWnd, this, &Application::closeTime);
        delete free;
        free=nullptr;
        ui->appTv->setModel(modelApp);
    }
}

void Application::closeTime()
{
    qstn->close();
}

