#include "main.h"

void print_alphabet_x10(void)
{
    char letter;
    int i;
    
    /* Xarici döngü - 10 dəfə təkrar */
    for (i = 0; i < 10; i++)
    {
        /* Daxili döngü - a-dan z-yə qədər hərflər */
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);  /* 1-ci _putchar istifadəsi */
        }
        _putchar('\n');  /* 2-ci _putchar istifadəsi */
    }
}
