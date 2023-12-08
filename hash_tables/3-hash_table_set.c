#include "hash_tables.h"

/**
 * hash_table_set - Fonction qui ajoute un élément à la table de hachage
 *
 * @ht: La table de hachage à laquelle vous souhaitez ajouter ou mettre
 * à jour la clé/valeur
 * @key: La clé :)
 * @value: La valeur associée à la clé
 *
 * Return: 1 si cela a réussi
 *           0 sinon
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
