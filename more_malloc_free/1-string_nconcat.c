#include "main.h"
/**
 * get_length - Calculates the length of a string
 * @str: The input string
 * Return: The length of the string
 */

unsigned int get_length(char *str)
{
	unsigned int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * string_nconcat - function that concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1 = get_length(s1);
	unsigned int len_s2 = get_length(s2);
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < len_s2)
	{
		len_s2 = n;
	}

	result = (char *)malloc(len_s1 + len_s2 + 1);

	if (result == NULL)
		return (NULL);

	p = result;

	while (*s1 != '\0')
	{
		*p = *s1;
		p++;
		s1++;
	}

	while (n > 0 && *s2 != '\0')
	{
		*p = *s2;
		p++;
		s2++;
		n--;
	}
	*p = '\0';

	return (result);
}
