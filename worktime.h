#ifndef WORKTIME_H
#define WORKTIME_H
#include "freetime.h"

class WorkTime : public FreeTime
{
private:
    int customerId;
    QString customerStr;
public:
    WorkTime():FreeTime(), customerId(0){}
    WorkTime(QDate date,QTime time, int masterId, int customerId):
        FreeTime(date,time,masterId),customerId(customerId),customerStr(QString()){}
    WorkTime(QDate date,QTime time, QString masterId, QString customerStr):
        FreeTime(date,time,masterId),customerId(0),customerStr(customerStr){}
    WorkTime(WorkTime &time);
    ~WorkTime(){}

    int getCustomr(){return customerId;}
    void setCustomer(int customerId){this->customerId=customerId;}

    QString getCustomrStr(){return customerStr;}
    void setCustomerStr(QString customerId){this->customerStr=customerId;}
};

#endif // WORKTIME_H
