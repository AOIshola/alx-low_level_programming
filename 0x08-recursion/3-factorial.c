#include "main.h"

/**
 * factorial: gets the factorial of a number
 * @n: number to find its factorial
 *
 * Return: factorial of the number n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
