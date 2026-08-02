#include <stdio.h>
#include "header.h" 

int main() 
{
    float temperature=32;
    
    // call function and print temperature in fahrenheit
    printf("%f\n",convert_celsius_to_fahrenheit(temperature)); 
    
    return 0; 
}