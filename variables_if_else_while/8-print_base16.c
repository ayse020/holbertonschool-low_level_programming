#include <stdio.h>

/**
 * main - Hexadecimal sayıları kiçik hərflərlə çap edir
 *
 * Return: Həmişə 0 (Uğurlu)
 */
int main(void)
{
    char digit;

    /* 0-9 rəqəmlərini çap et */
    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }

    /* a-f hərflərini çap et */
    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit);
    }

    /* Yeni sətir əlavə et */
    putchar('\n');

    return (0);
}
