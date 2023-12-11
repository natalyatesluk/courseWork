#include "regitration.h"
#include "ui_regitration.h"
#include <QMessageBox>
#include <QCryptographicHash>
Regitration::Regitration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Regitration)
{
    ui->setupUi(this);
    ui->enterWg->hide();
    sqlDBM = new SqlDBManeger;
    sqlDBM->connectToDataBase();
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
            ui->checksysLE->hide();
            ui->systempassLE->hide();
            QMessageBox::about(this, "Entrance to system","System password entered correctly");
            ui->enterWg->show();
            sqlDBM->createTablesAccount();
        }
        else
        { QMessageBox::critical(this,"Problem","System password entered incorrectly");}
    }
    else{QMessageBox::critical(this,"Problem","Empty string");}
}


void Regitration::on_registration_clicked()
{
    QString name= ui->nameLE->text();
    QString number= ui->numberLE->text();
    QString password = ui->passworLE->text();
    if(!name.isEmpty()&&!number.isEmpty()&&!password.isEmpty())
    {
        bool nameExists = sqlDBM->nameCheck(name);
        if (!nameExists) {
            QMessageBox::critical(this, "Problem", "This name already exists");
        } else {
            QCryptographicHash hash(QCryptographicHash::Md5);
            hash.addData(password.toUtf8());
            QByteArray hashedData = hash.result();
            QString hashedDataString = hashedData.toHex();

            sqlDBM->inserIntoTableReg(name, hashedDataString, number);
            QMessageBox::about(this, "Entrance to system", "Registration was successful");
        }
    }
}

