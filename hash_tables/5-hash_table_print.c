#include "hash_tables.h"

/**
 * hash_table_print - Fonction qui imprime une table de hachage
 *
 * @ht: La table de hachage à imprimer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int has_printed_key_value_pair = 0;

	hash_node_t *current_node = NULL;

	if (ht == NULL)
		return;

	printf("{");

	while (index < ht->size)
	{
		current_node = ht->array[index];
		if (current_node != NULL)
		{
			if (has_printed_key_value_pair == 1)
				printf(", ");

			printf("'%s': '%s'", current_node->key, current_node->value);
			while ((current_node = current_node->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", current_node->key, current_node->value);
			}
			has_printed_key_value_pair = 1;
		}
		index++;
	}
	printf("}\n");
}
