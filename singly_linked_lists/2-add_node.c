#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 * 
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *str_copy;
    unsigned int len = 0;

    /* Check if head pointer is valid */
    if (head == NULL)
        return (NULL);

    /* Allocate memory for new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the string */
    if (str == NULL)
    {
        str_copy = NULL;
    }
    else
    {
        str_copy = strdup(str);
        if (str_copy == NULL)
        {
            free(new_node);
            return (NULL);
        }
    }

    /* Calculate string length */
    if (str != NULL)
    {
        while (str[len])
            len++;
    }

    /* Initialize new node */
    new_node->str = str_copy;
    new_node->len = len;
    new_node->next = *head;

    /* Update head to point to new node */
    *head = new_node;

    return (new_node);
}
