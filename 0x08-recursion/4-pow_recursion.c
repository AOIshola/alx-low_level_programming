#include <stdio.h>

/**
 * _pow_recursion - find value of x raised to power y
 * @x: base number
 * @y: power integer
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1);
}
