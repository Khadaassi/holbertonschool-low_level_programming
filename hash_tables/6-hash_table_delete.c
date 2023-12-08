#include "hash_tables.h"

/**
 * hash_table_delete - Fonction qui supprime une table de hachage
 *
 * @ht: La table de hachage à supprimer
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;

	while (index < ht->size)
	{
		hash_node_t *current_node = ht->array[index];

		while (current_node != NULL)
		{
			hash_node_t *node_to_delete = current_node;

			current_node = current_node->next;
			free(node_to_delete->key);
			free(node_to_delete->value);
			free(node_to_delete);
		}
		index++;
	}

	free(ht->array);
	free(ht);
}
