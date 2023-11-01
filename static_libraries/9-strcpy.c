#include "main.h"
/**
 * _strcpy - function that copies a string into an another array
 * @src: string source
 * @dest: destination array
 * Return: first_dest
 */

char *_strcpy(char *dest, char *src)
{
	char *first_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (first_dest);
}

