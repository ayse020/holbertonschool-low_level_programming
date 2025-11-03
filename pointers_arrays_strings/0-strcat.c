#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *original_dest = dest;

    /* Move to the end of dest string */
    while (*dest != '\0')
    {
        dest++;
    }

    /* Copy src to the end of dest */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add terminating null byte */
    *dest = '\0';

    return (original_dest);
}
