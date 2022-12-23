#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array of integers argument
 * @n: number of elements in array
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int counter, temp;

	n = n -1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
