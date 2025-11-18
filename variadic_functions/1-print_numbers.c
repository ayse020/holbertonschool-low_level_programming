#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a given string
 * @separator: The string to print between numbers
 * @n: The number of integers passed to the function
 * @...: Variable number of integers to print
 *
 * Description: If separator is NULL, it doesn't print it.
 *              Always prints a new line at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    /* Initialize variable arguments */
    va_start(args, n);

    /* Loop through all numbers */
    for (i = 0; i < n; i++)
    {
        /* Print the current number */
        printf("%d", va_arg(args, int));

        /* Print separator if not NULL and not last number */
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    /* Clean up variable arguments */
    va_end(args);

    /* Print new line at the end */
    printf("\n");
}
