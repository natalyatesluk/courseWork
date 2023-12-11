#include "person.h"
Person::Person(Person &person)
{
    this->name=person.name;
    this->surename=person.surename;
    this->phoneNumber=person.phoneNumber;
    this->price=person.price;
}
