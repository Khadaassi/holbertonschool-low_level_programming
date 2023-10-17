#include <stdio.h>

/*
 * main -  main - Displays the string using the printf function
 *
 * Description:  this function prints the size of various types on the computer
 */

int main(void)//fonction main

{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
