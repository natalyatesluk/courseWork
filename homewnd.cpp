#include "homewnd.h"
#include "ui_homewnd.h"
#include "masterswnd.h"
#include "customerwnd.h"
#include "freetadd.h"
#include "workwnd.h"
#include "scketchwnd.h"
#include "application.h"
#include <QPixmap>
HomeWnd::HomeWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeWnd)
{
    ui->setupUi(this);
    masterWnd = new MastersWnd();
    customerWnd = new CustomerWnd();
    freeWnd = new FreeTAdd();
    workWnd = new WorkWnd();
    appWnd = new Application();
    sketchWnd =new ScketchWnd();

    ui->stackedWidget->insertWidget(1, masterWnd);
    ui->stackedWidget->insertWidget(2, customerWnd);
    ui->stackedWidget->insertWidget(3, freeWnd);
    ui->stackedWidget->insertWidget(4, workWnd);
    ui->stackedWidget->insertWidget(5,sketchWnd);
    ui->stackedWidget->insertWidget(6,appWnd);

    ui->avatarStckW->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(0);
    ui->homePb->hide();
}

HomeWnd::~HomeWnd()
{
    delete masterWnd;
    delete customerWnd;
    delete freeWnd;
    delete ui;
}

void HomeWnd::on_mastersPb_clicked()
{
    ui->homePb->show();
    ui->stackedWidget->setCurrentIndex(1);

}


void HomeWnd::on_homePb_clicked()
{
    ui->homePb->hide();
    ui->stackedWidget->setCurrentIndex(0);
}


void HomeWnd::on_customerPb_clicked()
{
    customerWnd = new CustomerWnd();
    ui->stackedWidget->removeWidget(ui->stackedWidget->widget(2));
    ui->stackedWidget->insertWidget(2, customerWnd);
    ui->homePb->show();
    ui->stackedWidget->setCurrentIndex(2);
}


void HomeWnd::on_freePb_clicked()
{

    ui->homePb->show();
    ui->stackedWidget->insertWidget(3, freeWnd);
    ui->stackedWidget->setCurrentIndex(3);
}


void HomeWnd::on_pushButton_clicked()
{
     workWnd = new WorkWnd();
    ui->stackedWidget->removeWidget(ui->stackedWidget->widget(4));
    ui->stackedWidget->insertWidget(4, workWnd);
    ui->homePb->show();
    ui->stackedWidget->setCurrentIndex(4);
}


void HomeWnd::on_changePb_clicked()
{
    ui->avatarStckW->setCurrentIndex(1);
}

void HomeWnd::username(QString name)
{
    ui->usernameLb->setText(name);
}

void HomeWnd::on_changeMenPb_clicked()
{
  QPixmap* men = new QPixmap(ui->mAvatarlb->pixmap().copy());
    if(men)
        ui->activeAvatarLb->setPixmap(*men);
     ui->avatarStckW->setCurrentIndex(0);
    delete men;
     men= nullptr;
}


void HomeWnd::on_changeWomenPb_clicked()
{
    QPixmap* women = new QPixmap(ui->wAvatarLb->pixmap().copy());
    if(women)
    ui->activeAvatarLb->setPixmap(*women);
    ui->avatarStckW->setCurrentIndex(0);
    delete women;
    women = nullptr;
}



void HomeWnd::on_sketchPb_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->homePb->show();
}


void HomeWnd::on_appPb_clicked()
{
    appWnd = new Application();
    ui->stackedWidget->removeWidget(ui->stackedWidget->widget(6));
    ui->stackedWidget->insertWidget(6, appWnd);
    ui->homePb->show();
    ui->stackedWidget->setCurrentIndex(6);
}






void HomeWnd::on_exitePb_clicked()
{
    emit exittHome();
}

