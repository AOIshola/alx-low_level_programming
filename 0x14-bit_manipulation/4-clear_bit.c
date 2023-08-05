#include "main.h"

/**
 * clear_bit - sets the bit at a given position to 0
 * @n: pointer to integer
 * @index: position of the bit to set to 0
 *
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear = 1 << index;

	if (index > 53)
		return (-1);
	*n = *n & ~clear;
	return (1);
}
