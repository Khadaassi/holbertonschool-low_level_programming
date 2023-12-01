#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve (starting from 0).
 *
 * Return: If the node at the specified index is found, return a pointer to
 * the node; otherwise, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	return (current);
}
