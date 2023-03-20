#include <stdio.h>

/**
 * _memset - fills memory area with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill memory
 * @n: number of bytes in memory area
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for(counter = 0; counter < n; counter++)
		*(s + counter) = b;

	return (s);
}
