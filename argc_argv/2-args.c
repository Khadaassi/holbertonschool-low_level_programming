#include <stdio.h>
/**
 * main - function that prints all arguments it receives
 * @argc: parameter for the number of arguments
 * @argv: parameter for the list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
