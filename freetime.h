#ifndef FREETIME_H
#define FREETIME_H
#include <QDate>
#include <QTime>

class FreeTime
{
private:
    QDate date;
    QTime time;
    int masterId;
    QString masterStr;
public:
    FreeTime() : date(), time(), masterId(0),masterStr(QString()) {}
   FreeTime(QDate date, QTime time, int master):date(date), time(time), masterId(master),masterStr(QString()){}
     FreeTime(QDate date, QTime time, QString master):date(date), time(time),masterId(0), masterStr(master){}
   ~FreeTime() {}
   FreeTime(FreeTime &free);

   QDate getDate(){return this->date;}
   void setDate(QDate date){this->date=date;}

   QTime getTime(){return this->time;}
   void setTime(QTime time){this->time=time;}

   int getMaster(){return this->masterId;}
   void setMaster(int master){this->masterId=master;}

   QString getMasterStr(){return this->masterStr;}
   void setMasterStr(QString master){this->masterStr=master;}

};

#endif // FREETIME_H
