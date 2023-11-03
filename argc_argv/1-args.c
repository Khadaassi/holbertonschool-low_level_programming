#include <stdio.h>
/**
 * main - function that prints the number of arguments
 * @argc: parameter for the number of arguments
 * @argv: parameter for the list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
