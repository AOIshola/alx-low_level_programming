#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - dynamically allocate memory
 * @b: amount of memory to allocate
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
