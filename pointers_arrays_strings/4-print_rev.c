#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 *
 * Description: This function takes a string and prints it in reverse order
 * without modifying the original string.
 */
void print_rev(char *s)
{
    int length = 0;
    int i;

    /* String-in uzunluğunu tap - Find the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Son xarakterdən başlayaraq çap et - Print from last character to first */
    for (i = length - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    /* Yeni sətir əlavə et - Add new line */
    _putchar('\n');
}
