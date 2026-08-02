#include "header.h"

//function to change letter to uppercase
char change_to_upper(char letter)
{
 if (letter >= 'a' && letter <= 'z') 
       letter = letter - 32;
return letter;
}

//function to calculate the number of letters in between
int characters_in_between(char letter1, char letter2)
{
   letter1 = change_to_upper(letter1);
   letter2 = change_to_upper(letter2);

    if (letter2 > letter1)
    return letter2 - letter1 - 1;

    else if (letter1 > letter2)
    return letter1 - letter2 - 1;

    else
    return 0;

}