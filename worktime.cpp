#include "worktime.h"

WorkTime::WorkTime(WorkTime &time): FreeTime(time)
{
    this->customerId= time.customerId;
}
