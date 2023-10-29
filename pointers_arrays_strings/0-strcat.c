#include "Main.h"
#include <string.h>

/**
 * _strcat - function that concatenates 2 strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
