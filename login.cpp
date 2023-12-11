#include "login.h"
#include "ui_login.h"
#include "regitration.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include "mainwindow.h"
Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    sqlDBM = new SqlDBManeger;
    sqlDBM->connectToDataBase();
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginPB_clicked()
{
    QString name= ui->nameLE->text();
    QString system= ui->systmpassLE->text();
    QString password = ui->passworLE->text();
    if(!name.isEmpty()&&!system.isEmpty()&&!password.isEmpty())
    {
        if(system!=SYSTEM_PASSWORD)
        { QMessageBox::critical(this,"Problem","System password entered incorrectly");}
        else {
            QCryptographicHash hash(QCryptographicHash::Md5);
            hash.addData(password.toUtf8());
            QByteArray hashedData = hash.result();
            QString hashedDataString = hashedData.toHex();
            bool check= sqlDBM->login(name,hashedDataString);
            if(check)
            {
               QMessageBox::about(this, "Login", "Login successful");
                emit home();
            }
            else  { QMessageBox::critical(this,"Problem","Data does not match");}
        }
    }
    else{QMessageBox::critical(this,"Problem","Empty string");}
}

