#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of the head of the list
 * @n: integer value to store in the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	/* Check if head pointer is NULL */
	if (head == NULL)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, new node becomes the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* Add new node at the end */
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
