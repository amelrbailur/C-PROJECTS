#include <stdio.h>
#include "header.h" 

int main() 
{
    char letter1='A';
    char letter2='d';
    
    // call function and print number of letters in between letter1 and letter2
    printf("%d\n", characters_in_between(letter1,letter2)); 
    
    return 0; 
}