#include "hash_tables.h"

/**
 * hash_table_get - Fonction qui récupère une valeur associée à une clé
 *
 * @ht: La table de hachage dans laquelle vous souhaitez rechercher
 * @key: La clé que vous recherchez
 *
 * Return: La valeur associée à l'élément
 *           ou NULL si la clé n'est pas trouvée
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}
	return (NULL);
}
