#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the addition of positive numbers
 * @argc: parameter for the number of arguments
 * @argv: parameter for the list of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
				j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
