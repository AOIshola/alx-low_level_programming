#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array in the hash table
 *
 * Return: pointer to the hash table or NULL if
 * something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t *));

	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
