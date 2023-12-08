#include "main.h"

/**
 * binary_to_uint - convert binary string to an unsigned int
 *
 * @b: pointer to the string containing the binary to convert
 *
 * Return: the converted unsigned number
 *         0 if b is NULL or if b contains characters other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result <<= 1;
		result += b[index] - '0';
		index++;
	}
	return (result);
}
