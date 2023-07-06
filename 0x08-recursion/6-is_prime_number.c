#include "main.h"

/**
 * prime_helper - recursive function to check if
 * a number is a prime number
 * @n: number to check
 * @i: index to divide the number by
 *
 * Return: 0 or 1, depending on the number n
 */

int prime_helper(int n, int i)
{
	int rem = n % i;

	if (n <= 1)
	{
		return 0;
	}
	if (n == 2 || n == 3)
	{
		return 1;
	}
	if (rem == 0)
	{
		return 0;
	}
	if (i > n / 2)
	{
		return 1;
	}
	return prime_helper(n, i + 1);
}

/**
 * is_prime_number - checks prime number
 * @n: number to check if it is prime
 *
 * Return: 0 or 1 depending on the check
 */

int is_prime_number(int n)
{
	int i = 2;

	return prime_helper(n, i);
}
