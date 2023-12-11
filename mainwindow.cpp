#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    registerWnd= new Regitration();
    logWnd = new Login();
    connect(logWnd, &Login::home, this, &MainWindow::home);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_regitstPb_clicked()
{
    registerWnd->show();
}


void MainWindow::on_loginPb_clicked()
{
    logWnd->show();
}

void MainWindow::home()
{
    ui->label->hide();
    ui->loginPb->hide();
    ui->regitstPb->hide();
    homeWnd= new HomeWnd(this);
    homeWnd->show();
    logWnd->close();
}

