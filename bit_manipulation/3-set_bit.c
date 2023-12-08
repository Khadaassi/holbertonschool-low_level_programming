#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: A pointer to the number whose bit will be set
 * @index: The index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n = ((1 << index) | *n);

	return (1);
}
