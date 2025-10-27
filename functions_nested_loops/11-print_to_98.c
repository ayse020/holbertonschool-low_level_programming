#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	/* n 98-dən kiçik və ya bərabərdirsə - ARTAN sıra */
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			/* Əgər son ədəd deyilsə, vergül və boşluq əlavə et */
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	/* n 98-dən böyükdürsə - AZALAN sıra */
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			/* Əgər son ədəd deyilsə, vergül və boşluq əlavə et */
			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	/* Hər çapdan sonra yeni sətir */
	printf("\n");
}
