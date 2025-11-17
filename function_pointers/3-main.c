#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: 0 on success, error codes on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*op_func)(int, int);

    /* Check if number of arguments is correct */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Convert arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Get the appropriate function for the operator */
    op_func = get_op_func(argv[2]);

    /* Check if operator is valid */
    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* Check for division by zero */
    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* Perform the operation and print result */
    result = op_func(num1, num2);
    printf("%d\n", result);

    return (0);
}
