#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *node = NULL;
	size_t i = 0;

	for (i = 0; i < ht->size; i++)
	{
		tmp = node = ht->array[i];
		while (node)
		{
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = node;
		}
	}
	free(ht->array);
	free(ht);
}
