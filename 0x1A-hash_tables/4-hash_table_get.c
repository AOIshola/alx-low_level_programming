#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */

char *hash_tables_get(const hash_table_t *ht, const char *key)
{
	/* declare nodePtr adn idx variables */
	hash_node_t *nodePtr;
	unsigned long int idx;

	/* check if hash table is not empty and key is not empty */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	if (idx == NULL)
		return (NULL);
	nodePtr = ht->array[idx];

	while (nodePtr && strcmp(nodePtr->key, key) != 0)
		nodePtr = nodeptr->next;

	return ((nodePtr == NULL) ? NULL : nodePtr->value);
}
