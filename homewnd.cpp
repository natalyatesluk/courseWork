#include "homewnd.h"
#include "ui_homewnd.h"

HomeWnd::HomeWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeWnd)
{
    ui->setupUi(this);
    masterWnd = new MastersWnd();
}

HomeWnd::~HomeWnd()
{
    delete ui;
}

void HomeWnd::on_mastersPb_clicked()
{
    masterWnd->show();
}

