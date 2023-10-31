#include "main.h"

/**
 * _pow_recursion - function that returns the value of a number raised
 * @x: first number
 * @y: puissance
 *  Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
