#include "main.h"
/**
 * puts2 - function that prints evrery other character
 *
 *@str: string of character
 */

void puts2(char *str)
{
	int i;
	{
	for (i = 0; str[i] != '\0'; i += 2)
		putchar(str[i]);
	}
	putchar('\n');
}
