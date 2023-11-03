#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: parameter that counts the number of arguments
 * @argv: parameter that list the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
