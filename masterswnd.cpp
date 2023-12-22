#include "masterswnd.h"
#include "ui_masterswnd.h"
#include <QMessageBox>
#include "question.h"
#include <QSqlRecord>
#include "master.h"
#include <QRegularExpression>

MastersWnd::MastersWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MastersWnd)
{
    ui->setupUi(this);
    sqlDBM =  SqlDBManeger::getInstance();
    sqlDBM->connectToDataBase();
    qSqlModel = new QSqlTableModel(this, sqlDBM->getDB());
    proxyModel = new QSortFilterProxyModel(this);
    updateTable();
    qus= new Question();
    connect(this, &MastersWnd::update, qus, &Question::updateMasters);
    connect(this, &MastersWnd::deleteMaster, qus, &Question::deleteItem);

}

MastersWnd::~MastersWnd()
{
    delete ui;
}

void MastersWnd::on_addPb_clicked()
{
    QString name = ui->nameLE->text();
    QString surename = ui->surenameLE->text();
    QString number = ui->numberLE->text();
     QString price = ui->priceLE->text();
     QString workDone = ui->doneWorkLE->text();

     if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!price.isEmpty()
         &&!workDone.isEmpty())
     {
         master= new Master(name,surename,number,price.toFloat(), workDone.toInt());
         sqlDBM->inserIntoTableMasters(*master);
         updateTable();
         delete master;
         master=nullptr;
     }
     else
         QMessageBox::critical(this,"Problem","There are empty lines here");
}


void MastersWnd::closeQuestion()
{
     qus->close();
     updateTable();
}

void MastersWnd::updateTable()
{
     qSqlModel->setTable(TABLE_MASTER);
     qSqlModel->select();
     proxyModel->setSourceModel(qSqlModel);
     proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
     proxyModel->setFilterKeyColumn(-1);
     ui->mastersTv->setModel(proxyModel);
     ui->mastersTv->horizontalHeader()->setStretchLastSection(true);
     ui->mastersTv->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

void MastersWnd::on_mastersTv_doubleClicked(const QModelIndex &index)
{
     int row = index.row();

     QString id=  ui->mastersTv->model()->data(ui->mastersTv->model()->index(row, 0)).toString();
     QString name = ui->mastersTv->model()->data(ui->mastersTv->model()->index(row, 1)).toString();
     QString surename = ui->mastersTv->model()->data(ui->mastersTv->model()->index(row, 2)).toString();
     QString number = ui->mastersTv->model()->data(ui->mastersTv->model()->index(row, 3)).toString();
     float price = ui->mastersTv->model()->data(ui->mastersTv->model()->index(row, 4)).toFloat();
     int workDone = ui->mastersTv->model()->data(ui->mastersTv->model()->index(row, 5)).toInt();


     Master *selectedMaster= new Master(name, surename, number, price, workDone);
     const int page=2;
     emit update(selectedMaster, id,page);
     emit deleteMaster(id,TABLE_MASTER);
     qus->show();
     connect(qus, &Question::closeWnd, this, &MastersWnd::closeQuestion);
}

void MastersWnd::on_searchLE_textChanged(const QString &arg1)
{
     proxyModel->setFilterFixedString(arg1);
}

