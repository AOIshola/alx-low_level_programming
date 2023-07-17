#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of characters
 * @size: size of aray
 * @c: character in array
 *
 * Return: pointer to array, or NULL if memory
 * allocation fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int index = 0;

		while (index < size)
		{
			*(ptr + index) = c;
			index++;
		}
		return (ptr);
	}
}
