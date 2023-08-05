#include "main.h"

/**
 * flip_bits - counts number of bits flips to convert one
 * number to another
 * @n: number to be converted
 * @m: number to convert to
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n > 0)
	{
		if (n & 1 != m & 1)
		{
			flips++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
