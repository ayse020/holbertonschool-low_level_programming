#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Custom printf implementation
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char *str;
    char c;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
            {
                va_end(args);
                return (-1);
            }

            if (*format == 'c')
            {
                c = (char)va_arg(args, int);
                count += _putchar(c);
            }
            else if (*format == 's')
            {
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(null)";
                while (*str)
                {
                    count += _putchar(*str);
                    str++;
                }
            }
            else if (*format == '%')
            {
                count += _putchar('%');
            }
            else
            {
                count += _putchar('%');
                count += _putchar(*format);
            }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (count);
}
