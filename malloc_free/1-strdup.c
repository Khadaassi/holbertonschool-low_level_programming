#include "main.h"
/**
 * _strdup - function that returns a pointer
 *
 * @str: string of char
 *
 * Return:  a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
	return (NULL);
	}
	new_str = (char *)malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
	return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);
}
