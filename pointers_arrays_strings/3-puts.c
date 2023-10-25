#include "main.h"

/**
 * _puts - fonction that prints a string
 * @str: pointer to a string
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

