#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                            in a doubly linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Data to be stored in the new node.
 *
 * Return: If the function succeeds, return a pointer to the new node;
 * otherwise, return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

