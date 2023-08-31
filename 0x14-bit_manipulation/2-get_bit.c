#include "main.h"

/**
 * get_bit - gets the bit value at a certain position
 * @n: integer
 * @index: position to pull bit value from
 *
 * Return: value of bit or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
