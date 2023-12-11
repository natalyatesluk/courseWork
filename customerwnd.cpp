#include "customerwnd.h"
#include "ui_customerwnd.h"

CustomerWnd::CustomerWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomerWnd)
{
    ui->setupUi(this);
}

CustomerWnd::~CustomerWnd()
{
    delete ui;
}
