#include "main.h"

/**
 * _strncpy - Copies a string up to n characters
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy up to n characters from src to dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* If we copied less than n characters, fill the rest with null bytes */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
