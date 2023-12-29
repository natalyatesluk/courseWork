#include "workwnd.h"
#include "ui_workwnd.h"
#include "sqldbmaneger.h"

WorkWnd::WorkWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkWnd)
{
    ui->setupUi(this);
    db = SqlDBManeger::getInstance();
    db->connectToDataBase();

    modelWork = new QSqlRelationalTableModel(this, db->getDB());
    proxyWorkModel = new QSortFilterProxyModel(this);
    modelWork->setTable(TABLE_WORKTIME);
    masterIndex = modelWork->fieldIndex(TABLE_MASTERid);
    customerIndex = modelWork->fieldIndex(TABLE_CUSTOMERid);

    modelWork->setRelation(masterIndex,QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelWork->setRelation(customerIndex,QSqlRelation(TABLE_CUSTOMER, ID, TABLE_NAME));
    modelWork->setHeaderData(masterIndex, Qt::Horizontal, tr("master"));
    modelWork->setHeaderData(customerIndex, Qt::Horizontal, tr("customer"));
    modelWork->select();

    proxyWorkModel->setSourceModel(modelWork);
    proxyWorkModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyWorkModel->setFilterKeyColumn(-1);
    ui->workTv->setModel(proxyWorkModel);
    ui->workTv->horizontalHeader()->setStretchLastSection(true);
    ui->workTv->setEditTriggers(QAbstractItemView::NoEditTriggers);


    qstn= new Question;
    connect(this, &WorkWnd::updateTime, qstn, &Question::updateTime);
    connect(this, &WorkWnd::deleteTime, qstn, &Question::deleteItem);
    //connect(questForTime, &QuesForTime::updateTable, this, &WorkWnd::updateTable);
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
    QString masterId =ui->workTv->model()->data(ui->workTv->model()->index(row, 3)).toString();
    QString customerId =ui->workTv->model()->data(ui->workTv->model()->index(row, 4)).toString();
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
    delete qstn;
    qstn= nullptr;
    qstn = new Question();
}

void WorkWnd::updateTable()
{
    qDebug() << "Before updating the model in WorkWnd";
    modelWork->select();
    qDebug() << "After updating the model in WorkWnd";
}



void WorkWnd::on_searchLE_textChanged(const QString &arg1)
{
    proxyWorkModel->setFilterFixedString(arg1);
}

