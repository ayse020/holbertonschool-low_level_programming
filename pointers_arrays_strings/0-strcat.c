#include "main.h"

/**
 * _strcat - İki sətri birləşdirir
 * @dest: Birləşdirilmiş sətirin yazılacağı hədəf
 * @src: Əlavə ediləcək mənbə sətir
 *
 * Return: Hədəf sətirin ünvanı (dest)
 */
char *_strcat(char *dest, char *src)
{
    char *original_dest = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return (original_dest);
}
