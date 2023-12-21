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
    sqlDBM->updateList(ui->mastersTv,TABLE_MASTER);
//   proxyModel = new QSortFilterProxyModel(this);
  // proxyModel->setSourceModel(qSqlModel);
//   ui->mastersTv->setModel(proxyModel);
    qus= new Question();
    connect(this, &MastersWnd::update, qus, &Question::updateMasters);
    connect(this, &MastersWnd::deleteMaster, qus, &Question::deleteItem);
//   connect(ui->searchLE, &QLineEdit::textChanged, this, &MastersWnd::on_searchLE_textChanged);

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
         sqlDBM->updateList(ui->mastersTv, TABLE_MASTER);
         delete master;
         master=nullptr;
     }
     else
         QMessageBox::critical(this,"Problem","There are empty lines here");
}


void MastersWnd::closeQuestion()
{
     qus->close();
     sqlDBM->updateList(ui->mastersTv, TABLE_MASTER);
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






//void MastersWnd::on_searchLE_textChanged(const QString &text)
//{
//     proxyModel->setFilterRegularExpression(QRegularExpression(text.toLower()));
//     proxyModel->invalidate();
//}

//bool MastersWnd::filterAcceptsRow(int source_row, const QModelIndex &source_parent)
//{

//    QModelIndex index0 = proxyModel->sourceModel()->index(source_row, 1, source_parent);
//     QModelIndex index1 = proxyModel->sourceModel()->index(source_row, 2, source_parent);

//     QString surname = proxyModel->sourceModel()->data(index0).toString().toLower();
//     QString name = proxyModel->sourceModel()->data(index1).toString().toLower();
//     QRegularExpression regexp(ui->searchLE->text().toLower());

//     return (surname.contains(regexp) || name.contains(regexp));

//}

