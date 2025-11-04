#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1; /* Flag to indicate if next char should be capitalized */

	while (str[i] != '\0')
	{
		/* Check for word separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			/* Capitalize lowercase letters */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
