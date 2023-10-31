#include "main.h"

/**
 * is_prime_number - function that cheack if a number is a prime number
 * @n: value of the number checked
 * @d: diviser
 */

int is_prime_number(int n)

{
	int d = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n % d == 0)
	{
		return (0);
	}
	else if (d * d > n)
	{
		return (1);
	}
	return is_prime_number(d + 1);
}

