#ifndef MASTER_H
#define MASTER_H
#include "person.h"

class Master :public Person
{
private:
    int workDone;
public:
    Master():Person(), workDone(0){}
    Master(QString name, QString surename,QString phoneNumber, float price, int workDone)
        :Person(name,surename,phoneNumber,price),workDone(workDone){}
    ~Master(){}
    Master(Master& master);

    int getworkDone(){return workDone;}
    void setworkDone(int workDone){this->workDone=workDone;}
};
#endif // MASTER_H
