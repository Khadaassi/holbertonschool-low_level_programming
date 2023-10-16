#include <stdio.h>

int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of short: %lu byte(s)\n", sizeof(short));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long: %lu byte(s)\n", sizeof(long));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
