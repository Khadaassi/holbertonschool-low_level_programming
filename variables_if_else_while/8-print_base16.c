#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: using fonction main print all the numbers
 * of base 16 in loweercase followed by a new line
 *
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 0; i < 16; i++)
	{
		char hexDigit;

		if (i < 10)
		{
		hexDigit = i + '0';
		}
		else
		{
		hexDigit = i - 10 + 'a';
		}
		putchar(hexDigit);
	}
	putchar('\n');
	return (0);
}
