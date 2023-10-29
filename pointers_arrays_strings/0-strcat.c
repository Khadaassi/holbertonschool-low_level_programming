#include "Main.h"
#include <string.h>

/**
 * _strcat - function that concatenates 2 strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
