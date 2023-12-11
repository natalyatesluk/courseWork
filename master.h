#ifndef MASTER_H
#define MASTER_H
#include "person.h"

class Master :public Person
{
private:
    int workDone;
    QString adress;
public:
    Master():Person(), workDone(0), adress("/0"){}
    Master(QString name, QString surename,int phoneNumber, float price, int workDone,QString adress)
        :Person(name,surename,phoneNumber,price),workDone(workDone),adress(adress){}
    ~Master();
    Master(Master& master);

    int getworkDone(){return workDone;}
    void setworkDone(int workDone){this->workDone=workDone;}

    QString getAdress(){return adress;}
    void setAdress(QString adress){this->adress=adress;}
};
#endif // MASTER_H
