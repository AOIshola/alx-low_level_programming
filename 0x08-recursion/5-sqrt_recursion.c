#include "main.h"

/**
 * binary_search - use binary search to find
 * square root of a number
 * @n: number to find square root
 * @low: lowest number in search range
 * @high: highest number in search range
 *
 * Return: square root of number or -1
 * if n is less than 0 or has no natural sqrt
 */
int binary_search(int n, int low, int high)
{
	if (n < 0)
	{
		return (-1);
	}
	if (low <= high)
	{
		int mid = (low + high) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square > n)
		{
			return (binary_search(n, low, mid - 1));
		}
		else
		{
			return (binary_search(n, mid + 1, high));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the integer whose square root if being found
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (binary_search(n, 0, n));
}
