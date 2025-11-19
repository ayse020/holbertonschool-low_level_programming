# _printf - Custom printf Implementation

A custom implementation of the printf function in C that handles format specifiers.

## Supported Format Specifiers

- `%c` - Print a single character
- `%s` - Print a string
- `%%` - Print a percent sign

## Features

- Returns the number of characters printed
- Handles NULL strings by printing "(null)"
- Handles edge cases and invalid specifiers
- No memory leaks

## Files

- `_printf.c` - Main implementation
- `_putchar.c` - Character output helper
- `main.h` - Header file

## Usage

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s! Char: %c Percent: %%\n", "world", 'A');
    return (0);
}
