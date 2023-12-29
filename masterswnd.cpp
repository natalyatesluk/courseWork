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
    db =  SqlDBManeger::getInstance();

    modelMaster = new QSqlTableModel(this, db->getDB());
    proxyMasterModel = new QSortFilterProxyModel(this);
    modelMaster->setTable(TABLE_MASTER);
    proxyMasterModel->setSourceModel(modelMaster);
    proxyMasterModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyMasterModel->setFilterKeyColumn(-1);
    ui->mastersTv->setModel(proxyMasterModel);
    ui->mastersTv->horizontalHeader()->setStretchLastSection(true);
    ui->mastersTv->setEditTriggers(QAbstractItemView::NoEditTriggers);
    modelMaster->select();

    qus= new Question();
    connect(this, &MastersWnd::update, qus, &Question::updateMasters);
    connect(this, &MastersWnd::deleteMaster, qus, &Question::deleteItem);
    connect(qus, &Question::closeWnd, this, &MastersWnd::closeQuestion);

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
         db->inserIntoTableMasters(*master);
         modelMaster->select();
         delete master;
         master=nullptr;
         ui->nameLE->clear();
         ui->surenameLE->clear();
         ui->numberLE->clear();
         ui->priceLE->clear();
        ui->doneWorkLE->clear();
     }
     else
         QMessageBox::critical(this,"Problem","There are empty lines here");
}


void MastersWnd::closeQuestion()
{
     qus->close();
     modelMaster->select();
     delete qus;
     qus= nullptr;
     qus = new Question();
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

}

void MastersWnd::on_searchLE_textChanged(const QString &arg1)
{
     proxyMasterModel->setFilterFixedString(arg1);
}

