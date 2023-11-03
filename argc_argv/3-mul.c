#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the result of a multiplication
 * @argc: parameter for the number of arguments
 * @argv: parameter for the list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;

	if (arg1 == 0 || arg2 == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
		return (0);
	}
}
