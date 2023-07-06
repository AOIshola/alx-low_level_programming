#include "main.h"

/**
 * sqrt_check - function to find square root of a number
 * @n: number to find square root
 * @i: number to test
 * Return: square root of number or -1
 * if n is less than 0 or has no natural sqrt
 */
int sqrt_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_check(n, i + 1));
	}
}

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the integer whose square root if being found
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(n, 1));
}
