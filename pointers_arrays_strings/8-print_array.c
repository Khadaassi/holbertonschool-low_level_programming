#include "main.h"
/**
 * print_array - function that print elements of an array.
 *
 * @n: number of elements of the array
 */

void print_array(int *a, int n)

{
	int i;

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
