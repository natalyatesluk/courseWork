#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "person.h"

class Customer : public Person
{
private:
    int master;
    int areaBody;
public:
    Customer():Person(),master(0),areaBody(0){}
    Customer(QString name, QString surename,QString phoneNumber, float price,int master,int areaBody)
        :Person(name,surename,phoneNumber,price),master(master),areaBody(areaBody){}
    ~Customer(){}
    Customer(Customer&customer);

    int getMaster(){return master;}
    void setMaster(int master){this->master=master;}

    int getAreaBody(){return areaBody;}
    void setAreaBody(int areaBody){this->areaBody=areaBody;}
};

#endif // CUSTOMER_H
