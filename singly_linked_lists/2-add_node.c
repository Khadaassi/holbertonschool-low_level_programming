#include "lists.h"
/**
 * add_node - Adds a new node to the beginning of a linked list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: A pointer to the newly created node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);

	new_node->next = NULL;
	*head = new_node;

	return (new_node);
}
