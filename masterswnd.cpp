#include "masterswnd.h"
#include "ui_masterswnd.h"

MastersWnd::MastersWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MastersWnd)
{
    ui->setupUi(this);
    sqlDBM = new SqlDBManeger();
    sqlDBM->connectToDataBase();
}

MastersWnd::~MastersWnd()
{
    delete ui;
}
