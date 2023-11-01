#include "main.h"

/**
 * _isupper - function that checks for uppercase characters.
 *
 * @c: valid ASCII character
 *
 * Description: this function checks for uppercase characters
 *
 * Return: 1 or 0
 *
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
