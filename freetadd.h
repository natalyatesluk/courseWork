#ifndef FREETADD_H
#define FREETADD_H

#include <QWidget>
#include <sqldbmaneger.h>
#include <freetime.h>
#include <quesfortime.h>
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
public slots:
    void closeQstn();
private:
    Ui::FreeTAdd *ui;
    SqlDBManeger *db;
    FreeTime *timeObg;
    QuesForTime *question;
signals:
    void transfer(FreeTime *time, QString id);
    void deleteTime(QString id);
};

#endif // FREETADD_H
