#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first pointer parameter
 * @b: second pointer parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*a = *b;
	*b = c
}
