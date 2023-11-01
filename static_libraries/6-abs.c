#include "main.h"

/**
 *_abs - the absolute value of an integer
 *
 * @c: is the int that will use for the function's argument
 *
 * Return: 0
 */

int _abs(int c)

{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
