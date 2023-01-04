#include <stdio.h>

/**
 * factorial - find factorial of a number
 * @n:number to find the factorial
 * Return: int factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} 
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
