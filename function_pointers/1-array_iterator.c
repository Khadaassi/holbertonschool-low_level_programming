#include "function_pointers.h"
/**
 *
 * @array
 * @size
 * @paction
*/


void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
