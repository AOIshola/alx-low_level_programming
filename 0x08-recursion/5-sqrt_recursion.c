#include <stdio.h>
#include "main.h"

/**
 * test - Finds the square root of two numbers
 * @a: number
 * @b: number to test square root of
 * Return: square root of number
 */

int test(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	else
	{
		return (test(a, b + 1));
	}
}

/**
 * _sqrt_recursion - find natural square root of number
 * @n: number to find square root
 * Return: square root of n
 */

int int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (test(n, 1));i
}
