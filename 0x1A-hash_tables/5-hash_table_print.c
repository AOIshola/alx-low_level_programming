#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodePtr;
	unsigned long int i;
	unsigned char cf = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (cf == 1)
				printf(", ");

			nodePtr = ht->array[i];
			while (nodePtr != NULL)
			{
				printf("'%s': '%s'", nodePtr->key, nodePtr->value);
				nodePtr = nodePtrr->next;
				if (nodePtr != NULL)
					printf(", ");
			}
			cf = 1;
		}
	}
	printf("}\n");
}
