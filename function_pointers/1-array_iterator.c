#include "function_pointers.h"
/**
 * array_iterator - Applies a function to each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: The function to apply to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
