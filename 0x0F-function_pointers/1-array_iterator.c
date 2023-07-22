#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate over an array
 * @array: list of items to iterate
 * @size: size of array
 * @action: pointer to function that works on each item in list
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
