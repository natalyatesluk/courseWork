#include "customerwnd.h"
#include "ui_customerwnd.h"
#include <QMessageBox>

CustomerWnd::CustomerWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWnd)
{
    ui->setupUi(this);
    db= new SqlDBManeger();
    db->updateList(ui->customerTv, TABLE_CUSTOMER);
    qstn= new Question();
    body= new BodyWnd();
    customer=nullptr;
    connect(this, &CustomerWnd::update, qstn, &Question::updateCustomer);
      connect(this, &CustomerWnd::deleteCustomer, qstn, &Question::deleteItem);

}

CustomerWnd::~CustomerWnd()
{
    delete ui;
}

void CustomerWnd::closeQuestion()
{
    qstn->close();
    db->updateList(ui->customerTv, TABLE_CUSTOMER);
}

void CustomerWnd::on_bodyPb_clicked()
{
    body->show();
}


void CustomerWnd::on_addPb_clicked()
{
    QString name = ui->nameLE->text();
    QString surename = ui->surenameLE->text();
    QString number = ui->numberLE->text();
    QString price = ui->priceLE->text();
    QString areaBody = ui->bodyLE->text();
    QString master = ui->masterLE->text();

    if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!price.isEmpty()
        &&!areaBody.isEmpty()&&!master.isEmpty())
    {
        customer= new Customer(name,surename,number,price.toFloat(), areaBody.toInt(), master.toInt());
        db->inserIntoTableCustomers(*customer);
        db->updateList(ui->customerTv, TABLE_CUSTOMER);
    }
    else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}


void CustomerWnd::on_customerTv_doubleClicked(const QModelIndex &index)
{
    int row = index.row();

    QString id=  ui->customerTv->model()->data(ui->customerTv->model()->index(row, 0)).toString();
    QString name = ui->customerTv->model()->data(ui->customerTv->model()->index(row, 1)).toString();
    QString surename = ui->customerTv->model()->data(ui->customerTv->model()->index(row, 2)).toString();
    QString number = ui->customerTv->model()->data(ui->customerTv->model()->index(row, 3)).toString();
    float price = ui->customerTv->model()->data(ui->customerTv->model()->index(row, 4)).toFloat();
    int areaBody = ui->customerTv->model()->data(ui->customerTv->model()->index(row, 5)).toInt();
    int master =  ui->customerTv->model()->data(ui->customerTv->model()->index(row, 6)).toInt();


    Customer *selectedCustomer= new Customer(name, surename, number, price, areaBody,master);
    const int page=3;
    emit update(selectedCustomer, id,page);
    emit deleteCustomer(id,TABLE_CUSTOMER);
    qstn->show();
    connect(qstn, &Question::closeWnd, this, &CustomerWnd::closeQuestion);
    delete selectedCustomer;
    selectedCustomer= nullptr;
}

