#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)

		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, make the new node the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		/* Add the new node at the end */
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
