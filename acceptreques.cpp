#include "acceptreques.h"
#include "ui_acceptreques.h"
#include "sqldbmaneger.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>


AcceptReques::AcceptReques(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AcceptReques)
{
    ui->setupUi(this);
    setModal(true);
    db= SqlDBManeger::getInstance();
    body = new BodyWnd();
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
    ui->acceptStkW->setCurrentIndex(0);

     connect(body,&BodyWnd::closeWnd,this, &AcceptReques::closeBody);
}

AcceptReques::~AcceptReques()
{
    delete ui;
}

void AcceptReques::acceptReque( QString id, QString name_sketch, QString name_master)
{
    this->id = id;
    price= db->searchSketchPrice(name_sketch);
    QSqlQuery query;
    query.prepare("SELECT name, surename, number, area FROM application WHERE id=:id");
    query.bindValue(":id", id);
    if (query.exec() && query.next()) {
         nameCust = query.value("name").toString();
        qDebug()<<nameCust;
        surenameCust = query.value("surename").toString();
         qDebug()<<surenameCust;
        numberCust = query.value("number").toString();
         qDebug()<<numberCust;
         areaCust = query.value("area").toString();
         qDebug()<<areaCust;
    }
    else
           qDebug() << "Error updating time: " << query.lastError().text();
    nameMaster=name_master;
}

void AcceptReques::closeBody()
{
    ui->bodyCb->clear();
    ((QSqlRelationalTableModel*)ui->bodyCb->model())->select();;
}

void AcceptReques::on_accepPB_clicked()
{
    ui->nameLE->setText(nameCust);
    ui->surenameLE->setText(surenameCust);
    ui->numberLE->setText(numberCust);
    ui->wantArea->setText("Client wants a tattoo on his " +areaCust);
    ui->mastersCb->setCurrentText(nameMaster);
    ui->priceLE->setText(QString::number(price));
    ui->acceptStkW->setCurrentIndex(1);
    if(db->serchCustomer(nameCust,surenameCust))
    {
         ui->buttonStkw->setCurrentIndex(1);
    }
    else
          ui->buttonStkw->setCurrentIndex(0);
}


void AcceptReques::on_addPb_clicked()
{
    QString name = ui->nameLE->text();
    QString surename = ui->surenameLE->text();
    QString number = ui->numberLE->text();
    QString priceStr = ui->priceLE->text();
    QString master = ui->mastersCb->currentText();
    qDebug() << "Selected Master: " << master;

    int id_master = db->searchMasterId(master);
    qDebug() << "ID Master: " << id_master;

    QString areaBody= ui->bodyCb->currentText();
    qDebug() << "Selected Body: " << areaBody;

    int id_body = db->searchBodyId(areaBody);
    qDebug() << "ID Body: " << id_body;

    if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!priceStr.isEmpty())
    {
          Customer *customer= new Customer(name,surename,number, priceStr.toFloat(),id_master,id_body);
          db->inserIntoTableCustomers(*customer);
          modelCust->select();
          proxyCustModel->invalidate();
          delete customer;
          customer=nullptr;
          db->deleteItem(id,TABLE_APPLICATION);
          emit closeWnd(true);
    }
    else
          QMessageBox::critical(this,"Problem","There are empty lines here");
}


void AcceptReques::on_updatePb_clicked()
{
    QString name = ui->nameLE->text();
    QString surename = ui->surenameLE->text();
    QString number = ui->numberLE->text();
    QString priceStr = ui->priceLE->text();
    QString master = ui->mastersCb->currentText();
    int customerId = db->searchCustomerId(name);
    qDebug() << "Selected Master: " << master;

    int id_master = db->searchMasterId(master);
    qDebug() << "ID Master: " << id_master;

    QString areaBody= ui->bodyCb->currentText();
    qDebug() << "Selected Body: " << areaBody;

    int id_body = db->searchBodyId(areaBody);
    qDebug() << "ID Body: " << id_body;

    if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!priceStr.isEmpty())
    {
          Customer* customer= new Customer(name,surename,number,priceStr.toFloat(), id_master,id_body);
          db->updateCustomer(*customer,QString::number(customerId));
          modelCust->select();
          delete customer;
          customer=nullptr;
          db->deleteItem(id,TABLE_APPLICATION);
          emit closeWnd(true);
    }
    else
    QMessageBox::critical(this,"Problem","There are empty lines here");
}


void AcceptReques::on_refusePb_clicked()
{
    db->deleteItem(id,TABLE_APPLICATION);
}


void AcceptReques::on_searchLE_textChanged(const QString &arg1)
{
    proxyCustModel->setFilterFixedString(arg1);
}


void AcceptReques::on_bodyPb_clicked()
{
    body->show();
}

