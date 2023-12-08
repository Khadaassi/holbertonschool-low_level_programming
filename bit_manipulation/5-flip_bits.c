#include "main.h"

/**
 * flip_bits - return the number of bits to flip to get from n to m
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	int index = 0;

	while (difference)
	{
		index++;
		difference &= (difference - 1);
	}

	return (index);
}
