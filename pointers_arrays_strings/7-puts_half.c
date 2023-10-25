#include "main.h"
/**
 * puts_half - function that prints the last half of a string
 *@str: strint of characters
 */

void puts_half(char *str)

{
	int i;
	int length_of_the_string = strlen(str);
	int n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i < length_of_the_string; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
