#include "lists.h"
/**
 * list_len - returns the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)

		{
			len++;

			h = h->next;
		}

	return (len);
}
