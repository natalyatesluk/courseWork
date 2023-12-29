#ifndef HOMEWND_H
#define HOMEWND_H

#include <QWidget>

class QWidget;
class CustomerWnd;
class MastersWnd;
class FreeTAdd;
class WorkWnd;
class ScketchWnd;
class Application;
class MainWindow;
namespace Ui {
class HomeWnd;
}

class HomeWnd :  public QWidget
{
    Q_OBJECT

public:
     explicit HomeWnd(QWidget *parent = nullptr);
    ~HomeWnd();

private slots:
    void on_mastersPb_clicked();

    void on_homePb_clicked();

    void on_customerPb_clicked();

    void on_freePb_clicked();

    void on_pushButton_clicked();

    void on_changePb_clicked();
    void on_changeMenPb_clicked();

    void on_changeWomenPb_clicked();



    void on_sketchPb_clicked();


    void on_appPb_clicked();



    void on_exitePb_clicked();

public slots:
    void username(QString name);


private:
    Ui::HomeWnd *ui;
    MastersWnd *masterWnd;
    CustomerWnd *customerWnd;
    FreeTAdd *freeWnd;
    WorkWnd *workWnd;
    ScketchWnd *sketchWnd;
    Application *appWnd;
signals:
    void exittHome();
};

#endif // HOMEWND_H
