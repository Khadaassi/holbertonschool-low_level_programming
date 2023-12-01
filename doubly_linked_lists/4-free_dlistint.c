#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Description: Frees each node in the doubly linked list and sets the head
 *              pointer to NULL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
