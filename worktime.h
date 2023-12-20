#ifndef WORKTIME_H
#define WORKTIME_H
#include "freetime.h"

class WorkTime : public FreeTime
{
private:
    int customerId;
public:
    WorkTime():FreeTime(), customerId(0){}
    WorkTime(QDate date,QTime time, int masterId, int customerId):
        FreeTime(date,time,masterId),customerId(customerId){}
    WorkTime(WorkTime &time);
    ~WorkTime(){}

    int getCustomr(){return customerId;}
    void setCustomer(int customerId){this->customerId=customerId;}
};

#endif // WORKTIME_H
