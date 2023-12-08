#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);

}
