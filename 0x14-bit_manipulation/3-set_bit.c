#include "main.h"

/**
 * set_bit - set the bit at a given index to 1
 * @n: pointer to integer
 * @index: index of the bit to set
 *
 * Return: 1 for successful, -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
