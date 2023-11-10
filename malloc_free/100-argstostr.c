#include "main.h"

/**
 * argstostr - function that concatenates arguments of the prog
 * @ac: parameter for the number of arguments
 * @av: parameter for the list of arguments
 * Return: NULL or pointer to a new string
*/

char *argstostr(int ac, char **av)

{
	int i;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	str = (char *)malloc(sizeof(av[i]));
	return (str);
}
