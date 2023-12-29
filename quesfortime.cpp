#include "quesfortime.h"
#include "ui_quesfortime.h"
#include <QMessageBox>


QuesForTime::QuesForTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuesForTime)
{
    ui->setupUi(this);
    setModal(true);
    ui->questionStckW->setCurrentIndex(0);
    db= SqlDBManeger::getInstance();
}

QuesForTime::~QuesForTime()
{
    delete ui;
}

void QuesForTime::transferToWork(FreeTime *time, QString id,int page)
{
    ui->questionStckW->setCurrentIndex(page);
    idQstn =id;
    ui->dateLE->setText(time->getDate().toString("yyyy-MM-dd"));
    ui->timeLE->setText(time->getTime().toString("hh:mm"));
    QSqlRelationalTableModel *modelWork = new QSqlRelationalTableModel(this, db->getDB());

    modelWork->setTable(TABLE_WORKTIME);
    int masterIndex = modelWork->fieldIndex(TABLE_MASTERid);
    int customerIndex = modelWork->fieldIndex(TABLE_CUSTOMERid);

    modelWork->setRelation(masterIndex,QSqlRelation(TABLE_MASTER, ID, TABLE_NAME));
    modelWork->setRelation(customerIndex,QSqlRelation(TABLE_CUSTOMER, ID, TABLE_NAME));
    if (modelWork) {
        ui->mastersCb->setModel(modelWork->relationModel(masterIndex));
        ui->mastersCb->setModelColumn(modelWork->relationModel(masterIndex)->fieldIndex(TABLE_NAME));

        ui->customersCb->setModel(modelWork->relationModel(customerIndex));
        ui->customersCb->setModelColumn(modelWork->relationModel(customerIndex)->fieldIndex(TABLE_NAME));
    } else {
        qDebug() << "Error: modelFree is null.";
    }
    ui->mastersCb->setCurrentText(time->getMasterStr());
}
void QuesForTime::deleteTime(QString id)
{
     idQstn =id;
}

void QuesForTime::on_choisTransPb_clicked()
{
     ui->questionStckW->setCurrentIndex(1);
}


void QuesForTime::on_transferPb_clicked()
{
     QString date= ui->dateLE->text();
     QString time= ui->timeLE->text();
     QString masterId = ui->mastersCb->currentText();
     qDebug() << "Selected Master: " << masterId;

     int id_master = db->searchMasterId(masterId);
     qDebug() << "ID Master: " << id_master;
     QString customerId = ui->customersCb->currentText();
     qDebug() << "Selected Customer: " << customerId;

     int id_customer = db->searchCustomerId(customerId);
     qDebug() << "ID Customer: " << id_customer;
//     QString master= ui->masterLE->text();
//     QString customer= ui->customerLE->text();
     if(!masterId.isEmpty()&&!time.isEmpty()&&!date.isEmpty()&&!customerId.isEmpty())
     {
         WorkTime *work= new WorkTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),
                                       id_master,id_customer);
         db->inserIntoTableWork(*work);
         db->deleteItem(idQstn,TABLE_FREETIME);
         QMessageBox::about(this,"Added","Transfer to work time");
//         qDebug() << "Before updating the model in QuesForTime";
//         //emit updateTable();
//         qDebug() << "After updating the model in QuesForTime";
         emit closeWnd();
         delete work;
         work = nullptr;
     }
     else
         QMessageBox::critical(this,"Problem","There are empty lines here");

}


void QuesForTime::on_deletePb_clicked()
{
     db->deleteItem(idQstn,TABLE_FREETIME);
     emit closeWnd();
}

