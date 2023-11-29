#include "lists.h"
/**
 * print_list - function that prints a list
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
	   if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu]", h->len);
			printf("%s\n", h->str);
		}
		len++;

		h = h->next;
	}

	return (len);
}
