#include "main.h"

/**
 * print_numbers - function that prints the numbers
 *
 * Description: using main function, print the numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)

{
	int c = '0';
	{
		while (c <= '9')
		{
		putchar(c);
		c++;
		}
		putchar('\n');

	}
}
