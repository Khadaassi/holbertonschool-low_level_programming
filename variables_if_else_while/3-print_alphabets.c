#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and in upper case
 *
 * Description: using the main function,
 * this program prints the alphabet in lowercase then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}

