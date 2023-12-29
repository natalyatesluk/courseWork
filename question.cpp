#include "question.h"
#include "ui_question.h"
#include "sqldbmaneger.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QDebug>

Question::Question(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question)
{
    ui->setupUi(this);
    setModal(true);
    db= SqlDBManeger::getInstance();
    ui->questionSt->setCurrentIndex(0);


    modelApp = new QSqlRelationalTableModel(this, db->getDB());
    proxyAppModel = new QSortFilterProxyModel(this);
    modelApp->setTable(TABLE_APPLICATION);
    masterIndex = modelApp->fieldIndex(TABLE_MASTERid);
    timeIndex = modelApp->fieldIndex(DATE_ID);
    modelApp->setRelation(masterIndex, QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelApp->setRelation(timeIndex, QSqlRelation(TABLE_FREETIME, ID, TABLE_DATE));
    modelApp->setRelation(timeIndex, QSqlRelation(TABLE_FREETIME, ID, TABLE_TIME));


    modelApp->select();

    ui->masterCb->setModel(modelApp->relationModel(masterIndex));
    ui->masterCb->setModelColumn(modelApp->relationModel(masterIndex)->fieldIndex(TABLE_NAME));


//    ui->dateCb->setModel(modelApp->relationModel(timeIndex));
//    ui->dateCb->setModelColumn(modelApp->relationModel(timeIndex)->fieldIndex(TABLE_DATE));


}

Question::~Question()
{
    delete ui;
}

void Question::updateMasters(Master *master, QString id, int page)
{
    this->page= page;
    idQstn = id;
    ui->nameLE->setText(master->getName());
    ui->surenameLE->setText(master->getSurename());
    ui->numberLE->setText(master->getPhoneNumber());
    ui->priceLE->setText(QString::number(master->getPrice()));
    ui->doneWorkLE->setText(QString::number(master->getworkDone()));
}

void Question::deleteItem(QString id, QString table_name)
{
    idQstn= id;
    this->table_name=table_name;
}

void Question::updateBody(QString area,QString id, int page)
{
    this->page=page;
    idQstn= id;
    ui->areaLE->setText(area);
}

void Question::updateCustomer(Customer *customer, QString id, int page)
{
    this->page= page;
    idQstn = id;
    ui->nameCusLE->setText(customer->getName());
    ui->surenameCusLE->setText(customer->getSurename());
    ui->numberCusLE->setText(customer->getPhoneNumber());
    ui->priceCusLE->setText(QString::number(customer->getPrice()));
//    ui->areaBodyLE->setText(QString::number(customer->getAreaBody()));
//    ui->masterLE->setText(QString::number(customer->getMaster()));
    QSqlRelationalTableModel* modelCust = new QSqlRelationalTableModel(this, db->getDB());
    modelCust->setTable("customers");
    int masterIx = modelCust->fieldIndex(TABLE_MASTERid);
    int bodyIndex = modelCust->fieldIndex(TABLE_CUSTOMER_BODY);
    modelCust->setRelation(modelCust->fieldIndex(TABLE_MASTERid), QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelCust->setRelation(modelCust->fieldIndex(TABLE_CUSTOMER_BODY), QSqlRelation(TABLE_BODY, ID, TABLE_BODY_AREA));
    modelCust->select();

    if (modelCust) {
        ui->masterCusCb->setModel(modelCust->relationModel(masterIx));
        ui->masterCusCb->setModelColumn(modelCust->relationModel(masterIx)->fieldIndex(TABLE_NAME));

        ui->bodyCusCb->setModel(modelCust->relationModel(bodyIndex));
        ui->bodyCusCb->setModelColumn(modelCust->relationModel(bodyIndex)->fieldIndex(TABLE_BODY_AREA));
    } else {
        qDebug() << "Error: modelCust is null.";
    }
    ui->masterCusCb->setCurrentText(customer->getStrMaster());
    ui->bodyCusCb->setCurrentText(customer->getStrBody());
}

void Question::updateTime(WorkTime *time, QString id, int page)
{
    this->page= page;
    idQstn =id;
    ui->dateLE->setText(time->getDate().toString("yyyy-MM-dd"));
    ui->timeLE->setText(time->getTime().toString("hh:mm"));
//    ui->masterTimLE->setText(QString::number(time->getMaster()));
//    ui->customerLE->setText(QString::number(time->getCustomr()));
    QSqlRelationalTableModel *modelWork = new QSqlRelationalTableModel(this, db->getDB());

    modelWork->setTable(TABLE_WORKTIME);
    int masterIndex = modelWork->fieldIndex(TABLE_MASTERid);
    int customerIndex = modelWork->fieldIndex(TABLE_CUSTOMERid);

    modelWork->setRelation(masterIndex,QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelWork->setRelation(customerIndex,QSqlRelation(TABLE_CUSTOMER, ID, TABLE_NAME));
    if (modelWork) {
        ui->masterTimCb->setModel(modelWork->relationModel(masterIndex));
        ui->masterTimCb->setModelColumn(modelWork->relationModel(masterIndex)->fieldIndex(TABLE_NAME));

        ui->customerCb->setModel(modelWork->relationModel(customerIndex));
        ui->customerCb->setModelColumn(modelWork->relationModel(customerIndex)->fieldIndex(TABLE_NAME));
    } else {
        qDebug() << "Error: modelFree is null.";
    }
    ui->masterTimCb->setCurrentText(time->getMasterStr());
    ui->customerCb->setCurrentText(time->getCustomrStr());
}

void Question::addScetch(QByteArray &image, int page)
{
    this->image= image;
    ui->questionSt->setCurrentIndex(page);
}

void Question::submitApp(int page,QString namestk)
{

        this->namestk = namestk;
        ui->questionSt->setCurrentIndex(page);

}

void Question::on_updatePb_clicked()
{
     ui->questionSt->setCurrentIndex(page);
}


void Question::on_updatePb_2_clicked()
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
        db->updateMasters(*master, idQstn);
        emit closeWnd();
    }
    else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}


void Question::on_deletePb_clicked()
{
    db->deleteItem(idQstn,table_name);
     emit closeWnd();
}


void Question::on_updateBodyPb_clicked()
{
     QString area=ui->areaLE->text();
     if(!area.isEmpty())
     {
        db->updateBody(area, idQstn);
        emit closeWnd();
     }
     else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}


void Question::on_updateCusPb_clicked()
{

     QString name = ui->nameCusLE->text();
     QString surename = ui->surenameCusLE->text();
     QString number = ui->numberCusLE->text();
     QString price = ui->priceCusLE->text();
     QString master = ui->masterCusCb->currentText();
     qDebug() << "Selected Master: " << master;

     int id_master = db->searchMasterId(master);
     qDebug() << "ID Master: " << id_master;

     QString areaBody= ui->bodyCusCb->currentText();
     qDebug() << "Selected Body: " << areaBody;

     int id_body = db->searchBodyId(areaBody);
     qDebug() << "ID Body: " << id_body;


     if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!price.isEmpty()
         &&!areaBody.isEmpty()&&!master.isEmpty())
     {
        customer= new Customer(name,surename,number,price.toFloat(), id_master,id_body);
        db->updateCustomer(*customer,idQstn);
        emit closeWnd();
     }
     else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}


void Question::on_updateTimePb_clicked()
{
     QString date= ui->dateLE->text();
     QString time= ui->timeLE->text();

     QString masterId = ui->masterTimCb->currentText();
     qDebug() << "Selected Master: " << masterId;

     int id_master = db->searchMasterId(masterId);
     qDebug() << "ID Master: " << id_master;
     QString customerId = ui->customerCb->currentText();
     qDebug() << "Selected Customer: " << customerId;

     int id_customer = db->searchCustomerId(customerId);
     qDebug() << "ID Customer: " << id_customer;

//     QString master= ui->masterTimLE->text();
//     QString customer= ui->customerLE->text();

     if(!masterId.isEmpty()&&!time.isEmpty()&&!date.isEmpty()&&!customerId.isEmpty())
     {
        WorkTime *work= new WorkTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),
                                      id_master,id_customer);
        db->updateWork(*work,idQstn);
        emit closeWnd();
        delete work;
        work = nullptr;
     }
     else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}


void Question::on_addPb_clicked()
{
     QString name = ui->nameSktLE->text();
     QString price = ui->priceSktLE->text();
     if(!name.isEmpty()&&!price.isEmpty())
     {
        Sketch *sketch= new Sketch(image,name,price.toFloat());
        db->inserIntoTableSketch(*sketch);
        QMessageBox::about(this, "Add","Added picture");
          emit closeWndSketch(sketch);
        delete sketch;
        sketch = nullptr;
     }
}


void Question::on_submitApliPb_clicked()
{
     QString id_sketch = db->searchSketchId(namestk);
     qDebug() << "ID Sketch: " << id_sketch;

     QString date = ui->dateCb->currentText();
     QString time = ui->timeCb->currentText();
     qDebug() << "Selected Date: " << date;
     qDebug() << "Selected Time: " << time;

     QString id_time = db->serchIdTime(date, time);
     qDebug() << "ID Time: " << id_time;

     QString master = ui->masterCb->currentText();
     qDebug() << "Selected Master: " << master;

     int id_master = db->searchMasterId(master);
     qDebug() << "ID Master: " << id_master;

     QString name = ui->nameAplLE->text();
     QString surename = ui->surenameAplLE->text();
     QString number = ui->numberAplLE->text();
     QString areaBody = ui->bodyAplLE->text();

     if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()
         &&!areaBody.isEmpty())
     {

     Customer * customer = new Customer(name,surename,number,id_master,areaBody);
     db->inserIntoTableApp(id_time,id_sketch,*customer);
     QMessageBox::about(this,"Graete!","Your application was sent.");
     emit closeWndStr(id_sketch);
     }
     else
           QMessageBox::critical(this,"Problem","There are empty lines here");


}

void Question::on_dateCb_currentTextChanged(const QString &arg1)
{
    QSqlTableModel* modelFree = new QSqlTableModel(this, db->getDB());
     modelFree->setTable(TABLE_FREETIME);
     QSortFilterProxyModel* proxyFree = new QSortFilterProxyModel(this);
     proxyFree->setSourceModel(modelFree);
     proxyFree->setFilterKeyColumn(-1);
     modelFree->select();
     proxyFree->setFilterFixedString(arg1);
     ui->timeCb->setModel(proxyFree);
     ui->timeCb->setModelColumn(2);
}



//void Question::on_timeCb_currentIndexChanged(int index)
//{
//     qDebug()<<index;
//}

void Question::on_masterCb_currentTextChanged(const QString &arg1)
{
     QSqlRelationalTableModel* modelFreeM = new QSqlRelationalTableModel(this, db->getDB());
     QSortFilterProxyModel* proxyFreeModel = new QSortFilterProxyModel(modelFreeM);
     modelFreeM->setTable(TABLE_FREETIME);
     modelFreeM->setRelation(modelFreeM->fieldIndex(TABLE_MASTERid),QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
     proxyFreeModel->setSourceModel(modelFreeM);
     proxyFreeModel->setFilterKeyColumn(-1);
     modelFreeM->select();
     qDebug()<<arg1;
     proxyFreeModel->setFilterFixedString(arg1);
     ui->dateCb->setModel(proxyFreeModel);
     ui->dateCb->setModelColumn(1);
}

