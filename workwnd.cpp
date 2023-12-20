#include "workwnd.h"
#include "ui_workwnd.h"

WorkWnd::WorkWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkWnd)
{
    ui->setupUi(this);
    db = new SqlDBManeger();
    db->connectToDataBase();
    db->updateList(ui->workTv, TABLE_WORKTIME);
    qstn= new Question;
    connect(this, &WorkWnd::updateTime, qstn, &Question::updateTime);
    connect(this, &WorkWnd::deleteTime, qstn, &Question::deleteItem);
}

WorkWnd::~WorkWnd()
{
    delete ui;
}

void WorkWnd::on_workTv_doubleClicked(const QModelIndex &index)
{
    int row = index.row();
    QString id=  ui->workTv->model()->data(ui->workTv->model()->index(row, 0)).toString();
    QString date=  ui->workTv->model()->data(ui->workTv->model()->index(row, 1)).toString();
    QString time= ui->workTv->model()->data(ui->workTv->model()->index(row, 2)).toString();
    int masterId =ui->workTv->model()->data(ui->workTv->model()->index(row, 3)).toInt();
    int customerId =ui->workTv->model()->data(ui->workTv->model()->index(row, 4)).toInt();
    WorkTime *work= new WorkTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),
                                  masterId,customerId);
    const int page =4;
    emit updateTime(work,id,page);
    emit deleteTime(id,TABLE_WORKTIME);
    qstn->show();
    connect(qstn, &Question::closeWnd, this, &WorkWnd::closeQstn);
}

void WorkWnd::closeQstn()
{
    qstn->close();
    db->updateList(ui->workTv, TABLE_WORKTIME);
}

