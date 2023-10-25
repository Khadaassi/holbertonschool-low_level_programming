#include "main.h"

/**
 * _strlen - function that gives the length of a string
 *
 * @s: string of characters
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;

	return (length);
}
