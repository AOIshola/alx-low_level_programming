#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 *
 * Return: pointer to array of integer or NULL if
 * function fails
*/

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int mv = min;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(arr));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= (max - min); i++)
	{
		arr[i] = mv++;
	}

	return (arr);
}
