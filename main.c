#include <stdio.h>
#include "header.h" 

int main() 
{
    char word[] = "hello"; 
    
    // Call function and print the modified string
    printf("%s\n", change_case(word)); 
    
    return 0; 
}