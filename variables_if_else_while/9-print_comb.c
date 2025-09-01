#include <stdio.h>

/**
 * main - Tək-rəqəmli ədədlərin bütün mümkün birləşmələrini çap edir
 *
 * Return: Həmişə 0 (Uğurlu)
 */
int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar(number + '0');
        
        if (number != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}
