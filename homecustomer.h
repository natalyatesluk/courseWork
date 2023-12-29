#ifndef HOMECUSTOMER_H
#define HOMECUSTOMER_H

#include <QWidget>
#include <sqldbmaneger.h>
#include <sketch.h>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>
#include "question.h"
#include <QVector>

class QWidget;
class QSqlRelationalTableModel;
class QSortFilterProxyModel;
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
    void updateTableMasters();
    void updateTableTime();
    void closeQst(QString sketchId);
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

    void on_searchLETime_textChanged(const QString &arg1);

    void on_searchLEMaster_textChanged(const QString &arg1);

    void on_selectPb_clicked();

    void on_exitPB_clicked();

private:
    Ui::HomeCustomer *ui;
    DBManager *db;
    Sketch *sketch;
    QSortFilterProxyModel *proxyMasterModel;
    QSqlTableModel *modelMaster;
    QSqlRelationalTableModel *modelFree;
    QSortFilterProxyModel *proxyFreeModel;
    int currentIndexImages;
    void loadImageFromByteArray(Sketch *sketch,QString statusSkt);
    void updateImage();
    Question *qstn;
    QVector<Sketch*> sketchesV;
//    QVector<QString*> statusV;
    QString sketchId;
signals:
    void submitApp(int page,QString namestk);
    void exittHome();
};

#endif // HOMECUSTOMER_H
