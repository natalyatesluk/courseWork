#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regitration.h"
#include "login.h"
#include "homewnd.h"
#include "homecustomer.h"

class QMainWindow;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_regitstPb_clicked();
    void on_loginPb_clicked();

private:
    Ui::MainWindow *ui;
    Regitration *registerWnd;
    Login *logWnd;
    HomeWnd *homeWnd;
    HomeCustomer *homeCustWnd;
    QString username;
public slots:
    void home(QString username);
    void homeCust(QString username);
    void mainWnd();
    void exitHome();
    void exitHomeCust();
signals:
    void usernameSignsl(QString name);

};
#endif // MAINWINDOW_H
