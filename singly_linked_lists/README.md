# Singly Linked Lists

This project contains implementations of singly linked lists in C for the Holberton School curriculum.

## Project Structure

- `0-print_list.c` - Function to print all elements of a list_t list
- `lists.h` - Header file containing the list structure and function prototypes

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
