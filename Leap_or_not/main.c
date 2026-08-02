#include <stdio.h>
#include "header.h"

int main()
{
    int year = 2000;
    int leap_or_not_flag;
    leap_or_not_flag = leap_or_not(year);

    // call function and print odd or even 
    if(leap_or_not_flag)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
    return 0; 
}