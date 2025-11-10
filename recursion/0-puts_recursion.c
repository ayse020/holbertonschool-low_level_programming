#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
    /* Base case: end of string */
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    
    /* Recursive case: print current character and call function with next character */
    _putchar(*s);
    _puts_recursion(s + 1);
}
