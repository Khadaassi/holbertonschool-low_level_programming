#include "main.h"

void *malloc_checked(unsigned int b)

{
	void *mptr = malloc(b);

	if (mptr == NULL)
	{
		return (NULL);
	}
	return (mptr);
}
/**
 * array_range - function that creates an array of integer
 * @min: integer
 * @max: integer
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int size = max - min + 1;
	unsigned int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc_checked(size * sizeof(int));

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
