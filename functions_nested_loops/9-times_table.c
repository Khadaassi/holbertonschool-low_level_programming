#include "main.h"

/**
 * times_table - function that prints the time table
 *
 * Description: using the function print the time tables starting with 0.
 */

void times_table(void)

{
	int i;
	int j;

	for (i = 0; i <= 9; i++)

	{
		printf("0, ");

		for (j = 1; j <= 9; j++)
		{
			if (j == 9)
			{
				printf("%2d\n", i * j);
			}
			else
			{
				printf("%2d, ", i * j);
			}
		}
	}
}
