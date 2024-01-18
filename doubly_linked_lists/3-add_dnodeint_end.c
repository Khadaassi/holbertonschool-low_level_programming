#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node with the given value at the end
 *                   of a dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The value to be added to the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
