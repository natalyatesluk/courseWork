#ifndef FREETADD_H
#define FREETADD_H

#include <QWidget>
#include <sqldbmaneger.h>
#include <freetime.h>
#include <quesfortime.h>
#include <QSqlRelationalTableModel>
#include <QSortFilterProxyModel>
class QSqlTableModel;
class DBManager;
namespace Ui {
class FreeTAdd;
}

class FreeTAdd : public QWidget
{
    Q_OBJECT

public:
    explicit FreeTAdd(QWidget *parent = nullptr);
    ~FreeTAdd();

private slots:
    void on_goAddPb_clicked();

    void on_showPb_clicked();

    void on_addPb_clicked();

    void on_frTimeTv_doubleClicked(const QModelIndex &index);
    void on_searchLE_textChanged(const QString &arg1);

public slots:
    void closeQstn();
    void updateTable();
private:
    Ui::FreeTAdd *ui;
    DBManager *db;
    FreeTime *timeObg;
    QuesForTime *question;
    QSqlRelationalTableModel *modelFree;
    QSortFilterProxyModel *proxyFreeModel;
signals:
    void transfer(FreeTime *time, QString id);
    void deleteTime(QString id);
};

#endif // FREETADD_H
