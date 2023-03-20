#include <stdio.h>

/**
 * _memcpy - function copies memory area
 * @dest: pointer to memory area where byte is copied to
 * @src: pointer ro memory area where bytes are copied from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
