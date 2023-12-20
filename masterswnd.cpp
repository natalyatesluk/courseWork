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
    sqlDBM = new SqlDBManeger();
    sqlDBM->connectToDataBase();
    QSqlTableModel *qSqlModel = new QSqlTableModel(nullptr, sqlDBM->getDB());
    qSqlModel->setTable(TABLE_MASTER);
    qSqlModel->select();
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(qSqlModel);
    ui->mastersTv->setModel(proxyModel);
    qus= new Question();
    connect(this, &MastersWnd::update, qus, &Question::updateMasters);
    connect(this, &MastersWnd::deleteMaster, qus, &Question::deleteItem);
    connect(ui->searchLE, &QLineEdit::textChanged, this, &MastersWnd::on_searchLE_textChanged);
    connect(proxyModel, &QSortFilterProxyModel::rowsAboutToBeInserted, this, &MastersWnd::onRowsAboutToBeInserted);

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
         //sqlDBM->updateList(ui->mastersTv, TABLE_MASTER);
         delete master;
         master=nullptr;
     }
     else
         QMessageBox::critical(this,"Problem","There are empty lines here");
}


void MastersWnd::closeQuestion()
{
     qus->close();
     //sqlDBM->updateList(ui->mastersTv, TABLE_MASTER);
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

void MastersWnd::onRowsAboutToBeInserted(const QModelIndex &parent, int start, int end)
{
     Q_UNUSED(parent);
     Q_UNUSED(start);
     Q_UNUSED(end);

     // Оновіть фільтр, коли дані додаються або змінюються
     proxyModel->invalidate();
}




void MastersWnd::on_searchLE_textChanged(const QString &text)
{
     proxyModel->setFilterRegularExpression(QRegularExpression(text.toLower()));
     proxyModel->invalidate();
}

bool MastersWnd::filterAcceptsRow(int source_row, const QModelIndex &source_parent)
{
         QString searchText = ui->searchLE->text().toLower();

     for (int col = 0; col < proxyModel->sourceModel()->columnCount(source_parent); ++col)
     {
         QModelIndex sourceIndex = proxyModel->sourceModel()->index(source_row, col, source_parent);
         QString data = proxyModel->sourceModel()->data(sourceIndex).toString().toLower();

         if (data.contains(searchText))
         {
             return true;
         }
     }

     return false;

}

