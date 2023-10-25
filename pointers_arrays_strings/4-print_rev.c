#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 *@s: pointer to the begginning of the string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
