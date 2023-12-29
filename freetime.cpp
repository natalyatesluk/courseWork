#include "freetime.h"

FreeTime::FreeTime(FreeTime &free)
{
    this->date = free.date;
    this->time = free.time;
    this->masterId = free.masterId;
    this->masterStr= free.masterStr;
}
