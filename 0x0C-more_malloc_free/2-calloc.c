#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: number of members in array
 * @size: size of each member
 *
 * Return: pointer to array or NULL if function fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < (nmemb * size); n++)
	{
		arr[n] = 0;
	}

	return (arr);
}
