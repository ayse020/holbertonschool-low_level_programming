#include "main.h"

/**
 * _strcpy - Copies a string from src to dest including the null byte
 * @dest: Destination buffer where the string will be copied to
 * @src: Source string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* Copy each character from src to dest until null terminator */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Add the terminating null byte */
    dest[i] = '\0';

    /* Return pointer to dest */
    return (dest);
}
