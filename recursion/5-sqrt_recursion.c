#include "main.h"

/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: parameter of the function
 * Return: square root of the number
 */

int _sqrt_recursion(int n)

{
	int sqrtn = _sqrt_recursion(n - 1);

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		if (sqrtn * sqrtn <= n && (sqrtn + 1) * (sqrtn + 1) > n)
		{
			return (sqrtn);
		}
		else
		{
			return (-1);
		}
	}
}
