#include "main.h"

/**
 * time_table - function to print the time table
 */

void times_table(void)

	{
	int i;
	int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			printf("%2d,  ", i * j);
		}
		if (j == 9)
		{
		printf("%2d\n", i*j);
		}
	}
	}
