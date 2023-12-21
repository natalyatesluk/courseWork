#ifndef QUESFORTIME_H
#define QUESFORTIME_H

#include <QWidget>
#include <freetime.h>
#include <worktime.h>
#include <sqldbmaneger.h>
namespace Ui {
class QuesForTime;
}

class QuesForTime : public QWidget
{
    Q_OBJECT

public:
    explicit QuesForTime(QWidget *parent = nullptr);
    ~QuesForTime();
public slots:
    void transferToWork(FreeTime *time,QString id);
    void deleteTime(QString id);

private:
    Ui::QuesForTime *ui;
    QString idQstn;
    WorkTime *work;
    DBManager *db;
signals:
    void closeWnd();

private slots:
    void on_choisTransPb_clicked();
    void on_transferPb_clicked();
    void on_deletePb_clicked();
};

#endif // QUESFORTIME_H
