#include "hash_tables.h"

/**
 * node_len - gets the number of elements in hash table
 * @ht: pointer to the hash table
 *
 * Return: number of elements in table
 */
size_t node_len(const hash_table_t *ht)
{
	size_t index = 0, count = 0;
	hash_node_t *current_node = NULL;

	if (ht == NULL)
		return (0);

	while (index < ht->size)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			count++;
			current_node = current_node->next;
		}
		index++;
	}
	return (count);
}


/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 *
 * Return: Nothing.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	size_t i = 0, count = node_len(ht), counter = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			counter++;
			if (counter == count)
				printf("'%s': '%s'", node->key, node->value);
			else
				printf("'%s': '%s', ", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
