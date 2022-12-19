#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: first pointer argument
 * @n: second argument
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
