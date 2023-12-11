#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"

class Customer : public Person
{
private:
    QString master;
    QString areaBody;
public:
    Customer():Person(),master("/0"),areaBody("/0"){}
    Customer(QString name, QString surename,int phoneNumber, float price,QString master,QString areaBody)
        :Person(name,surename,phoneNumber,price),master(master),areaBody(areaBody){}
    ~ Customer();
    Customer(Customer&customer);

    QString getMaster(){return master;}
    void setMaster(QString master){this->master=master;}

    QString getAreaBody(){return areaBody;}
    void setAreaBody(QString areaBody){this->areaBody=areaBody;}
};

#endif // CUSTOMER_H
