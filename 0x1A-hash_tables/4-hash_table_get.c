#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated to a key
 * @ht: the pointer to a hash table
 * @key: the key to retrieve
 *
 * Return: the value associated with the key or NULL
 * if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
