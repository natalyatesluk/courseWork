#include "question.h"
#include "ui_question.h"
#include "sqldbmaneger.h"
#include "masterswnd.h"
#include <QMessageBox>


Question::Question(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question)
{
    ui->setupUi(this);
    db= new SqlDBManeger();
    ui->questionSt->setCurrentIndex(0);

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
    ui->areaBodyLE->setText(QString::number(customer->getAreaBody()));
    ui->masterLE->setText(QString::number(customer->getMaster()));
}

void Question::updateTime(WorkTime *time, QString id, int page)
{
    this->page= page;
    idQstn =id;
    ui->dateLE->setText(time->getDate().toString("yyyy-MM-dd"));
    ui->timeLE->setText(time->getTime().toString("hh:mm"));
    ui->masterTimLE->setText(QString::number(time->getMaster()));
    ui->customerLE->setText(QString::number(time->getCustomr()));

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
     QString areaBody = ui->areaBodyLE->text();
     QString master = ui->masterLE->text();

     if(!name.isEmpty()&&!surename.isEmpty()&&!number.isEmpty()&&!price.isEmpty()
         &&!areaBody.isEmpty()&&!master.isEmpty())
     {
        customer= new Customer(name,surename,number,price.toFloat(), areaBody.toInt(), master.toInt());
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
     QString master= ui->masterTimLE->text();
     QString customer= ui->customerLE->text();
     if(!master.isEmpty()&&!time.isEmpty()&&!date.isEmpty()&&!customer.isEmpty())
     {
        WorkTime *work= new WorkTime(QDate::fromString(date,"yyyy-MM-dd"),QTime::fromString(time,"hh:mm"),
                                      master.toInt(),customer.toInt());
        db->updateWork(*work,idQstn);
        emit closeWnd();
        delete work;
        work = nullptr;
     }
     else
        QMessageBox::critical(this,"Problem","There are empty lines here");
}

