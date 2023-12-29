#ifndef QUESFORTIME_H
#define QUESFORTIME_H

#include <QDialog>
#include <QWidget>
#include <freetime.h>
#include <worktime.h>
#include <sqldbmaneger.h>

class QWidget;
class QDialog;
namespace Ui {
class QuesForTime;
}

class QuesForTime : public QDialog
{
    Q_OBJECT

public:
    explicit QuesForTime(QWidget *parent = nullptr);
    ~QuesForTime();
public slots:
   void  transferToWork(FreeTime *time, QString id,int page);
    void deleteTime(QString id);

private:
    Ui::QuesForTime *ui;
    QString idQstn;
    WorkTime *work;
    DBManager *db;

signals:
    void closeWnd();
    //void updateTable();

private slots:
    void on_choisTransPb_clicked();
    void on_transferPb_clicked();
    void on_deletePb_clicked();
};

#endif // QUESFORTIME_H
