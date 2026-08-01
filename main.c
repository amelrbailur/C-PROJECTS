#include <stdio.h>
#include "header.h" 

int main() 
{
    char word[] = "hello how are you"; 
    
    // Call function and print the modified string
    printf("%s\n", change_case(word)); 
    
    return 0; 
}