#include <stdio.h>

/**
 * main - alphabet in reverse
 *
 * Description: using main function this program
 * prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: 0
 */

int main(void)

{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{ 
	putchar(ch);
	}

	putchar('\n');

	return (0);
}
