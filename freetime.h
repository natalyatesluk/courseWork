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
public:
   FreeTime() : date(), time(), masterId(0) {}
   FreeTime(QDate date, QTime time, int master):date(date), time(time), masterId(master){}
   ~FreeTime() {}
   FreeTime(FreeTime &free);

   QDate getDate(){return this->date;}
   void setDate(QDate date){this->date=date;}

   QTime getTime(){return this->time;}
   void setTime(QTime time){this->time=time;}

   int getMaster(){return this->masterId;}
   void setMaster(int master){this->masterId=master;}

};

#endif // FREETIME_H
