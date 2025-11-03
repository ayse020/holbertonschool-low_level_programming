#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			;
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			if (result > (2147483647 - (*s - '0')) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}
	return (result * sign);
}
