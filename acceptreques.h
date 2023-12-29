#ifndef ACCEPTREQUES_H
#define ACCEPTREQUES_H

#include <QDialog>
#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>
#include "bodywnd.h"
class QDialog;
class QWidget;
class DBManager;
namespace Ui {
class AcceptReques;
}

class AcceptReques : public QDialog
{
    Q_OBJECT

public:
    explicit AcceptReques(QWidget *parent = nullptr);
    ~AcceptReques();

private:
    Ui::AcceptReques *ui;
    DBManager *db;
    QString nameCust;
    QString surenameCust;
    QString numberCust;
    QString areaCust;
    float price;
    QString nameMaster;
    QString id;
    QSqlRelationalTableModel *modelCust;
    QSortFilterProxyModel *proxyCustModel;
    int masterIndex;
    int bodyIndex;
    BodyWnd *body;

public slots:
    void acceptReque( QString id,QString name_sketch, QString name_master);
    void closeBody();
private slots:
    void on_accepPB_clicked();
    void on_addPb_clicked();
    void on_updatePb_clicked();
    void on_refusePb_clicked();

    void on_searchLE_textChanged(const QString &arg1);

    void on_bodyPb_clicked();

signals:
    void closeWnd(bool result);
};

#endif // ACCEPTREQUES_H
