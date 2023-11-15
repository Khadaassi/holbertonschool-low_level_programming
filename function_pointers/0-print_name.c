#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to be printed
 * @f: Function pointer to the print function
 *
 * Calls the specified print function (@f) to print the name.
 * After that, prints the name character by character and adds a newline.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return;
}
