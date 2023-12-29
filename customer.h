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
    QString masterUp;
public:
    Customer():Person(),master(0),areaBody(0),areaBodyApp(QString()),masterUp(QString()){}
    Customer(QString name, QString surename,QString phoneNumber, float price,int master,int areaBody)
        :Person(name,surename,phoneNumber,price),master(master),areaBody(areaBody),areaBodyApp(QString()),masterUp(QString()){}
    Customer(QString name, QString surename,QString phoneNumber, int master,QString areaBody1)
        :Person(name,surename,phoneNumber),master(master),areaBodyApp(areaBody1), areaBody(0){}
    Customer(QString name, QString surename,QString phoneNumber, float price,QString masterUp,QString areaBody1)
        :Person(name,surename,phoneNumber,price),master(0),areaBody(0),areaBodyApp(areaBody1), masterUp(masterUp){}
    ~Customer(){}
    Customer(Customer&customer);

    int getMaster(){return master;}
    void setMaster(int master){this->master=master;}

    int getAreaBody(){return areaBody;}
    void setAreaBody(int areaBody){this->areaBody=areaBody;}

    QString getStrBody(){return areaBodyApp; }
    void setStBody(QString areaBody){this->areaBodyApp=areaBody; }

    QString getStrMaster(){return masterUp; }
    void setStMaster(QString master){this->masterUp=master; }
};

#endif // CUSTOMER_H
