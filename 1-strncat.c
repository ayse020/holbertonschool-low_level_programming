#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string to append
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	/* Find the end of dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy at most n bytes from src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (ptr);
}
