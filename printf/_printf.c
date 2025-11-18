#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing directives
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    
    if (format == NULL)
        return (-1);
    
    va_start(args, format);
    
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                return (-1);
                
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                count += _putchar(c);
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
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
