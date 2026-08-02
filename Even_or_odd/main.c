#include <stdio.h>
#include "header.h"

int main()
{
    int number = 26;
    int even_or_odd_flag;
    even_or_odd_flag = even_or_odd(number);

    // call function and print odd or even 
    if(even_or_odd_flag)
    printf("Even");
    else
    printf("Odd");
    return 0; 
}