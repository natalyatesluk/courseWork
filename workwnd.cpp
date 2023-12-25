#include "workwnd.h"
#include "ui_workwnd.h"

WorkWnd::WorkWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkWnd)
{
    ui->setupUi(this);
    db = SqlDBManeger::getInstance();

    modelWork = new QSqlRelationalTableModel(this, db->getDB());
    proxyWorkModel = new QSortFilterProxyModel(modelWork);
    modelWork->setTable(TABLE_WORKTIME);
    modelWork->setRelation(modelWork->fieldIndex(TABLE_MASTERid),QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelWork->setRelation(modelWork->fieldIndex(TABLE_CUSTOMERid),QSqlRelation(TABLE_CUSTOMER, ID, TABLE_NAME));
    proxyWorkModel->setSourceModel(modelWork);
    proxyWorkModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyWorkModel->setFilterKeyColumn(-1);
    ui->workTv->setModel(proxyWorkModel);
    ui->workTv->horizontalHeader()->setStretchLastSection(true);
    ui->workTv->setEditTriggers(QAbstractItemView::NoEditTriggers);
    modelWork->select();

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
      modelWork->select();
}



void WorkWnd::on_searchLE_textChanged(const QString &arg1)
{
    proxyWorkModel->setFilterFixedString(arg1);
}

