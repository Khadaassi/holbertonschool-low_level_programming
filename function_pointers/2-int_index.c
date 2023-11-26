#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array.
* @array: Pointer to the array.
* @size: Number of elements in the array.
* @cmp: Pointer to the comparison function.
*
* Return: Index of the first non-matching element, or -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);

}
