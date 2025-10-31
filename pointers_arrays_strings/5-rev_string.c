#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1; /* Position of last character */

	/* Swap characters from start and end moving towards center */
	while (start < end)
	{
		/* Swap characters */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move pointers towards center */
		start++;
		end--;
	}
}
