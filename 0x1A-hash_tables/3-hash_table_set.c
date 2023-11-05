#include "hash_tables.h"

/**
 * hash_table_set - input an element in a hash table
 * @ht: pointer to the hash table
 * @key: the key to input
 * @value: the value to fill against key
 *
 * Return: 0 if unsuccessful, 1 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t)), *node, *tmp;
	unsigned long int index;

	if (new == NULL)
		return (0);
	if (key == NULL || ht == NULL)
		return (0);
	new->key = strdup(key), new->value = strdup(value);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		tmp = node;
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				free(new->value);
				free(new->key);
				free(new);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		new->next = node;
		ht->array[index] = new;
	}
	return (1);
}
