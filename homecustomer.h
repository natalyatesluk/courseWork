#ifndef HOMECUSTOMER_H
#define HOMECUSTOMER_H

#include <QWidget>
#include <sqldbmaneger.h>
#include <sketch.h>
class DBManager;
namespace Ui {
class HomeCustomer;
}

class HomeCustomer : public QWidget
{
    Q_OBJECT

public:
    explicit HomeCustomer(QWidget *parent = nullptr);
    ~HomeCustomer();
public slots:
    void username(QString name);

private slots:
    void on_mastersPb_clicked();
    void on_freePb_clicked();

    void on_homePb_clicked();

    void on_homeTPb_clicked();
    void on_changePb_clicked();
    void on_changeMenPb_clicked();

    void on_changeWomenPb_clicked();
    void on_sketchPb_clicked();


    void on_nextPb_clicked();

    void on_backPb_clicked();



    void on_homeSPb_clicked();

private:
    Ui::HomeCustomer *ui;
    DBManager *db;
    Sketch *sketch;
    int currentIndexStckW;
    void loadImageFromByteArray(Sketch *sketch,QString statusSkt);
    void updateImage();

};

#endif // HOMECUSTOMER_H
