#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 *
 * @n: a pointer to the number whose bit will be cleared
 * @index: the index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n = (~(1 << index) & *n);

	return (1);
}
