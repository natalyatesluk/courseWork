#include "customer.h"
Customer::Customer(Customer &customer):Person(customer)
{
    this->master=customer.master;
    this->areaBody=customer.areaBody;
    this->areaBodyApp= customer.areaBodyApp;
}

