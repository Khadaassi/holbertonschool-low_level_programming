#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: unsigned integer
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)

{
	void *mptr = malloc(b);

	if (mptr == NULL)
	{
		return (NULL);
	}
	return (mptr);
}
