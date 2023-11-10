#include "main.h"
/**
 * _calloc - function that allocates a memory for an array
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	mem = (char *)malloc(total_size);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		mem[i] = 0;
	}

	return ((void *)mem);
}
