#include "regitration.h"
#include "ui_regitration.h"
#include <QMessageBox>
#include <QCryptographicHash>
Regitration::Regitration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Regitration)
{
    ui->setupUi(this);
    sqlDBM = new SqlDBManeger;
    sqlDBM->connectToDataBase();
    ui->registrationStWdg->setCurrentIndex(0);
}

Regitration::~Regitration()
{
    delete ui;
}

void Regitration::on_checksysLE_clicked()
{
    QString system = ui->systempassLE->text();
    if(!system.isEmpty())
    {
        if(system==SYSTEM_PASSWORD)
        {
            QMessageBox::about(this, "Entrance to system","System password entered correctly");
            sqlDBM->createTablesAccount();
            ui->registrationStWdg->setCurrentIndex(2);
            connect(ui->registrationPb, &QPushButton::clicked, this, [this]() {
             QString name= ui->nameLE->text();
             QString number= ui->numberLE->text();
             QString password = ui->passworLE->text();
            if(!name.isEmpty()&&!number.isEmpty()&&!password.isEmpty())
                 {
                 bool nameExists = sqlDBM->nameCheck(name);
                     if (!nameExists) {
                        QMessageBox::critical(this, "Problem", "This name already exists");
                    }
                     else {
                            QCryptographicHash hash(QCryptographicHash::Md5);
                            hash.addData(password.toUtf8());
                            QByteArray hashedData = hash.result();
                            QString hashedDataString = hashedData.toHex();
                            sqlDBM->inserIntoTableReg(name, hashedDataString, number);
                            QMessageBox::about(this, "Entrance to system", "Registration was successful");
                            sqlDBM->closeDataBase();
                            emit mainWnd();
                            }
                  }});
        }
        else
        { QMessageBox::critical(this,"Problem","System password entered incorrectly");}
    }
    else{QMessageBox::critical(this,"Problem","Empty string");}
}


//void Regitration::on_registration_clicked()
//{
//    QString name= ui->nameLE->text();
//    QString number= ui->numberLE->text();
//    QString password = ui->passworLE->text();
//    if(!name.isEmpty()&&!number.isEmpty()&&!password.isEmpty())
//    {
//        bool nameExists = sqlDBM->nameCheck(name);
//        if (!nameExists) {
//            QMessageBox::critical(this, "Problem", "This name already exists");
//        } else {
//            QCryptographicHash hash(QCryptographicHash::Md5);
//            hash.addData(password.toUtf8());
//            QByteArray hashedData = hash.result();
//            QString hashedDataString = hashedData.toHex();

//            sqlDBM->inserIntoTableReg(name, hashedDataString, number);
//            QMessageBox::about(this, "Entrance to system", "Registration was successful");
//            sqlDBM->closeDataBase();
//        }
//    }
//}


void Regitration::on_adminPb_clicked()
{
     ui->registrationStWdg->setCurrentIndex(1);
}


void Regitration::on_customerPb_clicked()
{
     sqlDBM->createTablesAccountCustomer();
     ui->registrationStWdg->setCurrentIndex(2);

     connect(ui->registrationPb, &QPushButton::clicked, this, [this]()
             {
                 QString name= ui->nameLE->text();
                 QString number= ui->numberLE->text();
                 QString password = ui->passworLE->text();
                 if(!name.isEmpty() && !number.isEmpty() && !password.isEmpty())
                 {
                     bool nameExists = sqlDBM->nameCheckCustomer(name);
                     if (!nameExists) {
                         QMessageBox::critical(this, "Problem", "This name already exists");
                     } else {
                         QCryptographicHash hash(QCryptographicHash::Md5);
                         hash.addData(password.toUtf8());
                         QByteArray hashedData = hash.result();
                         QString hashedDataString = hashedData.toHex();

                         sqlDBM->inserIntoTableRegCust(name, hashedDataString, number);
                         QMessageBox::about(this, "Entrance to system", "Registration was successful");
                         sqlDBM->closeDataBase();
                          emit mainWnd();
                     }
                 }
             });
}



