#include <stdio.h>

int main(void)
{
    char letter;
    
    /* Kiçik hərflər */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    
    /* Böyük hərflər */
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
    
    /* Yeni sətir */
    putchar('\n');
    
    return (0);
}
