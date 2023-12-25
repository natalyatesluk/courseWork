#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"
#include <QString>
class Customer : public Person
{
private:
    int master;
    int areaBody;
    QString areaBodyApp;
public:
    Customer():Person(),master(0),areaBody(0),areaBodyApp(QString()){}
    Customer(QString name, QString surename,QString phoneNumber, float price,int master,int areaBody)
        :Person(name,surename,phoneNumber,price),master(master),areaBody(areaBody),areaBodyApp(QString()){}
    Customer(QString name, QString surename,QString phoneNumber, int master,QString areaBody)
        :Person(name,surename,phoneNumber),master(master),areaBodyApp(areaBody), areaBody(0){}
    ~Customer(){}
    Customer(Customer&customer);

    int getMaster(){return master;}
    void setMaster(int master){this->master=master;}

    int getAreaBody(){return areaBody;}
    void setAreaBody(int areaBody){this->areaBody=areaBody;}

    QString getStrBody(){return areaBodyApp; }
    void setStBody(QString areaBody){this->areaBodyApp=areaBody; }
};

#endif // CUSTOMER_H
