#include "quesfortime.h"
#include "ui_quesfortime.h"
#include <QMessageBox>
QuesForTime::QuesForTime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuesForTime)
{
    ui->setupUi(this);
    ui->questionStckW->setCurrentIndex(0);
    db= SqlDBManeger::getInstance();
}

QuesForTime::~QuesForTime()
{
    delete ui;
}

void QuesForTime::transferToWork(FreeTime *time, QString id)
{
    idQstn =id;
    ui->dateLE->setText(time->getDate().toString("yyyy-MM-dd"));
    ui->timeLE->setText(time->getTime().toString("hh:mm"));
    ui->masterLE->setText(QString::number(time->getMaster()));
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
     QString master= ui->masterLE->text();
     QString customer= ui->customerLE->text();
     if(!master.isEmpty()&&!time.isEmpty()&&!date.isEmpty()&&!customer.isEmpty())
     {
         WorkTime *work= new WorkTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),
                                       master.toInt(),customer.toInt());
         db->inserIntoTableWork(*work);
         db->deleteItem(idQstn,TABLE_FREETIME);
         QMessageBox::about(this,"Added","Transfer to work time");
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

