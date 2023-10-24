#include "main.h"

/**
 * swap_int - function that invert the values of two integers
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}
