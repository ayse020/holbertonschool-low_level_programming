#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
    int length = 0;
    int i = 0;
    char temp;
    
    /* Find the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }
    
    /* Swap characters from start and end moving towards center */
    while (i < length / 2)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
        i++;
    }
}
