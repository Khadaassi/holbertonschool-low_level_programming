#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 *
 * @size: size of the array of the hashtable
 * @key: key is the key :)
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);

	index = index % size;

	return (index);

}
