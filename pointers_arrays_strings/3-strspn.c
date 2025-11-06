#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The characters to accept
 *
 * Return: Number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
