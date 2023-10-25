#include "main.h"
/**
 * rev_string - function that reverse a string
 *
 * @s: parameter of a string
 */

void rev_string(char *s)

{
	int c;
	int rev;
	char temp;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	rev = 0;
	for (c = c - 1; rev < c; rev++)
	{
		temp = s[c];
		s[c] = s[rev];
		s[rev] = temp;
		c--;
	}
}
