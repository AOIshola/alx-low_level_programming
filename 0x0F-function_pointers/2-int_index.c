#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return the index of the first occurence of int
 * @array: list of items
 * @size: size of the array
 * @cmp: pointer to comparison function
 *
 * Return: index of array, or -1 if integer not in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, search;

	if (array != NULL || cmp != NULL)
	{
		while (i < size)
		{
			search = (*cmp)(array[i]);

			if (search != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
