#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */

void hash_table_delete(const hash_table_t *ht)
{
	hash_node_t *nodePtr, *temp;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nodePtr = ht->array[i];
			while (nodePtr != NULL)
			{
				temp = nodePtr->next;
				free(nodePtr->key);
				free(nodePtr->value);
				free(nodePtr);
				nodePtr = nodePtr->next;
			}
		}
	}
	free(head->array);
	free(head);
}
