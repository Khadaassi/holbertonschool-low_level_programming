#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates 2 strings
 * @dest: 1st string
 * @src: 2nd string
 * @n: size
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
