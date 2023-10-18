#include<stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Description: using main function print all possible combination of
 * single-digit numbers followed by a ',' and a space
 *
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
