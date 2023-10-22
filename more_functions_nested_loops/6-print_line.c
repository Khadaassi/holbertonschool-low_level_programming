#include "main.h"
/**
 * print_line - function that print a line in the terminal
 *
 * @n: the number of times the line is printed
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
	{
		putchar('_');
		}
		putchar('\n');
	}
}

