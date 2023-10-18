#include <main.h>
/**
 * main - print alphabeet in lowercase
 *
 * Description: print alphabet in lowercase using _putchar
 *
 * Return: 0
 */
int main(void)
{
/**
 * _putchar - prints char
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * print_alphabet - print alphabet in lower case
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}

	_putchar('\n');
}

	print_alphabet();
	return (0);
}
