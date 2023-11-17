#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);

	if (n == 0)
		return (0);

	return (result);
}
