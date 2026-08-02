#include "header.h"

//function to check if input is integer or character
int character_or_integer(char input)
{
    if ((input >='a' && input <= 'z') || (input >='A' && input <= 'B'))
    return 1;
    else if (input >= '0' && input <= '9')
    return 0;
}
