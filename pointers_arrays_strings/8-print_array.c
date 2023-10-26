#include "main.h"
/**
 * print_array - function that print elements of an array.
 *
 * @n: number of elements of the array
 * @a: array of integers
 */

void print_array(int *a, int n)

{
	int i;

	if (n <= 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n == i + 1)
		{
			printf("\n");
		}
		else
			printf(", ");
	}
}
