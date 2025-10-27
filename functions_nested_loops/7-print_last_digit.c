#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to process
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;
    
    /* Son rəqəmi tapmaq üçün 10-a bölməkdən qalığı götürürük */
    last_digit = n % 10;
    
    /* Əgər ədəd mənfidirsə, son rəqəmi müsbət et */
    if (last_digit < 0)
    {
        last_digit = -last_digit;
    }
    
    /* Rəqəmi çap et */
    _putchar(last_digit + '0');
    
    /* Son rəqəmi qaytar */
    return (last_digit);
}
