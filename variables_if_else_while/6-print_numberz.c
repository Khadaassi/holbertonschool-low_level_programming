#include<stdio.h>

/*
 * main - prints all single digit numbers of base 10
 *
 * Description: using the main function
 * print all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)

{
	for (int number = 1; number <= 9; number++)
	{
	putchar(number + '0');
	}
	putchar('\n');
}
