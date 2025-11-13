#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Subtract 1 to exclude the program name itself */
	printf("%d\n", argc - 1);

	/* Mark argv as unused to avoid compiler warnings */
	(void)argv;

	return (0);
}
