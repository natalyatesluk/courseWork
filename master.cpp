#include "master.h"

Master::Master(Master &master):Person(master)
{
    this->workDone=master.workDone;
    this->adress=master.adress;
}
