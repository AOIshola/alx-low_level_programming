#include "hash_tables.h"

/**
 * key_index - returns the index of a key at which
 * @key: the key
 * @size: the size of the hash table
 *
 * Return: the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index %= size;

	return (index);
}
