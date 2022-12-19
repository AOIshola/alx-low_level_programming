#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first pointer parameter
 * @b: second pointer parameter
 * int c: variable to store swap
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
