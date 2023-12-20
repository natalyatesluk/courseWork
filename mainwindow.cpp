#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_regitstPb_clicked()
{
    this->hide();
    registerWnd= new Regitration();
    connect(registerWnd, &Regitration::mainWnd, this, &MainWindow::mainWnd);
    registerWnd->show();
}


void MainWindow::on_loginPb_clicked()
{
    logWnd = new Login();
    connect(logWnd, &Login::home, this, &MainWindow::home);
    connect(logWnd, &Login::customer, this, &MainWindow::homeCust);
    logWnd->show();
}

void MainWindow::home(QString username)
{
    this->username=username;
    homeWnd = new HomeWnd();
    connect(this, &MainWindow::usernameSignsl, homeWnd, &HomeWnd::username);
    emit usernameSignsl(username);
    homeWnd->show();
    logWnd->close();
    this->close();
}

void MainWindow::homeCust(QString username)
{
    this->username=username;
    homeCustWnd = new HomeCustomer();
    connect(this, &MainWindow::usernameSignsl, homeCustWnd, &HomeCustomer::username);
    emit usernameSignsl(username);
    homeCustWnd->show();
    logWnd->close();
    this->close();
}

void MainWindow::mainWnd()
{
    this->show();
    registerWnd->close();
}

