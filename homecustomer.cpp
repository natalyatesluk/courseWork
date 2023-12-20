#include "homecustomer.h"
#include "ui_homecustomer.h"

HomeCustomer::HomeCustomer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeCustomer)
{
    ui->setupUi(this);
    ui->homeCusStckW->setCurrentIndex(0);
    ui->avatarStckW->setCurrentIndex(0);
    db= new SqlDBManeger();

}

HomeCustomer::~HomeCustomer()
{
    delete ui;
}

void HomeCustomer::on_changePb_clicked()
{
    ui->avatarStckW->setCurrentIndex(1);
}

void HomeCustomer::username(QString name)
{
    ui->usernameLb->setText(name);
}


void HomeCustomer::on_changeMenPb_clicked()
{
    QPixmap* men = new QPixmap(ui->mAvatarlb->pixmap().copy());
    if(men)
        ui->activeAvatarLb->setPixmap(*men);
    ui->avatarStckW->setCurrentIndex(0);
    delete men;
}


void HomeCustomer::on_changeWomenPb_clicked()
{
    QPixmap* women = new QPixmap(ui->wAvatarLb->pixmap().copy());
    if(women)
        ui->activeAvatarLb->setPixmap(*women);
    ui->avatarStckW->setCurrentIndex(0);
    delete women;
}

void HomeCustomer::on_mastersPb_clicked()
{
    db->updateList(ui->masterTv,TABLE_MASTER);
    ui->homeCusStckW->setCurrentIndex(1);
}


void HomeCustomer::on_freePb_clicked()
{
    ui->homeCusStckW->setCurrentIndex(2);
    db->updateList(ui->timeTv, TABLE_FREETIME);
}


void HomeCustomer::on_homePb_clicked()
{
     ui->homeCusStckW->setCurrentIndex(0);
}


void HomeCustomer::on_homeTPb_clicked()
{
      ui->homeCusStckW->setCurrentIndex(0);
}

