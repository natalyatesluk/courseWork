#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
private:
    QString name;
    QString surename;
    QString phoneNumber;
    float price;

public:
    Person():name("/0"),surename("/0"), phoneNumber("/0"),price(0.0){}
    Person(QString name, QString surename,QString phoneNumber, float price ):
        name(name),surename(surename),phoneNumber(phoneNumber),price(price){}
    ~Person(){}
    Person(Person& person);

    QString getName(){return name;}
    void setName(QString name){this->name=name;}

    QString getSurename(){return surename;}
    void setSurename(QString surename){this->surename=surename;}

    QString getPhoneNumber(){return phoneNumber;}
    void setPhoneNumber(QString phoneNumber){this->phoneNumber=phoneNumber;}

    float getPrice(){return price;}
    void setPrice(float price){this->price=price;}
};


#endif // PERSON_H
