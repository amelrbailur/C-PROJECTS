#include <stdio.h>
#include "header.h"

int main()
{
    char input;

    //take input from user 
    printf("Enter a character or an integer (0-9): ");
    scanf(" %c", &input);

    // call function and print character or integer
    if(character_or_integer(input))
    {
    printf("You've entered a character.");
    }
    else
    {
    printf("You've entered a number.");
    }
}