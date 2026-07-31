#include "header.h"

// fucntion to calculate length of the word
int length_of_string(char* word) 
{
    int i;
    for(i = 0; word[i] != '\0' ; i++); // empty loop body 
    
    return i; // Returns total length of word
}

// fucntion to convert lowercase letters to uppercase and vice versa
char* change_case(char* word) 
{
    int length = length_of_string(word);
    
    for(int i = 0; i < length ; i++) {
        // convert lowercase to uppercase
        if(word[i] >= 'a' && word[i] <= 'z') 
        {
            word[i] = word[i] - 32;
        } 
        // convert uppercase to lowercase
        else if(word[i] >= 'A' && word[i] <= 'Z') 
        {
            word[i] = word[i] + 32;
        }
    }
    return word;
}
