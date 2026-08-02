#include "header.h"

int leap_or_not(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 ==0;
}
