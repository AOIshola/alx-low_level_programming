#include "search_algos.h"

/**
 * printSearch - Prints current array being searched in current
 * recursive call
 * @array: array to search
 * @low: lower boundary of array to search
 * @high: higher boundary of array to search
 *
 * Return: Nothing.
 */
void printSearch(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * h_binary_search - helps binary_search function
 * @array: array to search
 * @low: lower boundary of array to search
 * @high: higher boundary of array to search
 * @value: value to search in array
 *
 * Return: index of value in array
 */
int h_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	while (low <= high)
	{
		printSearch(array, low, high);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (h_binary_search(array, low, mid - 1, value));
		else
			return (h_binary_search(array, mid + 1, high, value));
	}
	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: index where value is stored, -1 if value is absent
 * in array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	return (h_binary_search(array, low, high, value));
}
