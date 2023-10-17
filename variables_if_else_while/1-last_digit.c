#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of ther number stored in the variable
 *
 *Description: using the main function
 *this program prints the last digit and a comment
 */

int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;

	if (mod > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	}
	if (mod == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, mod);
	}
	if (mod < 6 && mod != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}
	return (0);
}
