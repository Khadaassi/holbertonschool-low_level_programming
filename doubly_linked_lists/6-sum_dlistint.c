#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data in the doubly linked list.
 */

int sum_dlistint(dlistint_t *head)
 {
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
