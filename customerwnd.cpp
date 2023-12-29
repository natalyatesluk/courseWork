#include "customerwnd.h"
#include "ui_customerwnd.h"
#include <QMessageBox>

CustomerWnd::CustomerWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWnd)
{
    ui->setupUi(this);
    db=  SqlDBManeger::getInstance();
    qstn= new Question();
    body= new BodyWnd();


    modelCust = new QSqlRelationalTableModel(this, db->getDB());
    proxyCustModel = new QSortFilterProxyModel(this);

    modelCust->setTable("customers");
    modelCust->select();
    masterIndex = modelCust->fieldIndex(TABLE_MASTERid);
    bodyIndex = modelCust->fieldIndex(TABLE_CUSTOMER_BODY);
    modelCust->setRelation(modelCust->fieldIndex(TABLE_MASTERid), QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelCust->setRelation(modelCust->fieldIndex(TABLE_CUSTOMER_BODY), QSqlRelation(TABLE_BODY, ID, TABLE_BODY_AREA));
    modelCust->select();
    qDebug() << "Master Relation Model: " << modelCust->relationModel(masterIndex);
    qDebug() << "Body Relation Model: " << modelCust->relationModel(bodyIndex);

    if (modelCust) {
        ui->mastersCb->setModel(modelCust->relationModel(masterIndex));
        ui->mastersCb->setModelColumn(modelCust->relationModel(masterIndex)->fieldIndex(TABLE_NAME));

        ui->bodyCb->setModel(modelCust->relationModel(bodyIndex));
        ui->bodyCb->setModelColumn(modelCust->relationModel(bodyIndex)->fieldIndex(TABLE_BODY_AREA));
    } else {
        qDebug() << "Error: modelCust is null.";
    }
    modelCust->setHeaderData(masterIndex, Qt::Horizontal, tr("master"));
    modelCust->setHeaderData(bodyIndex, Qt::Horizontal, tr("area body"));

    proxyCustModel->setSourceModel(modelCust);
    proxyCustModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyCustModel->setFilterKeyColumn(-1);

    ui->customerTv->setModel(proxyCustModel);
    ui->customerTv->horizontalHeader()->setStretchLastSection(true);
    ui->customerTv->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(this, &CustomerWnd::update, qstn, &Question::updateCustomer);
    connect(this, &CustomerWnd::deleteCustomer, qstn, &Question::deleteItem);
    connect(body, &BodyWnd::closeWnd, this, &CustomerWnd::closeBody);

}

CustomerWnd::~CustomerWnd()
{
    delete ui;
}

void CustomerWnd::closeQuestion()
{
    qstn->close();
    modelCust->select();
    delete qstn;
    qstn= nullptr;
    qstn = new Question();
}

void CustomerWnd::closeBody()
{
    ui->bodyCb->clear();
    ((QSqlRelationalTableModel*)ui->bodyCb->model())->select();
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
    QString master = ui->mastersCb->currentText();
    qDebug() << "Selected Master: " << master;

    int id_master = db->searchMasterId(master);
    qDebug() << "ID Master: " << id_master;

    QString areaBody= ui->bodyCb->currentText();
    qDebug() << "Selected Body: " << areaBody;

    int id_body = db->searchBodyId(areaBody);
    qDebug() << "ID Body: " << id_body;

    if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!price.isEmpty())
    {
        customer= new Customer(name,surename,number, price.toFloat(),id_master,id_body);
        db->inserIntoTableCustomers(*customer);
        modelCust->select();
        proxyCustModel->invalidate();
        delete customer;
        customer=nullptr;
        ui->nameLE->clear();
        ui->surenameLE->clear();
        ui->numberLE->clear();
        ui->priceLE->clear();
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
    QString areaBody = ui->customerTv->model()->data(ui->customerTv->model()->index(row, 5)).toString();
    QString master =  ui->customerTv->model()->data(ui->customerTv->model()->index(row, 6)).toString();


    Customer *selectedCustomer= new Customer(name, surename, number, price,master, areaBody);
    const int page=3;
    emit update(selectedCustomer, id,page);
    emit deleteCustomer(id,TABLE_CUSTOMER);
    qstn->show();
    connect(qstn, &Question::closeWnd, this, &CustomerWnd::closeQuestion);
    delete selectedCustomer;
    selectedCustomer= nullptr;
}



void CustomerWnd::on_searchLE_textChanged(const QString &arg1)
{
    proxyCustModel->setFilterFixedString(arg1);
}

