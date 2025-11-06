#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The characters to search for
 *
 * Return: Pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
