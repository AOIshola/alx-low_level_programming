#include "main.h"

/**
 * _pow_recursion: gets number x raised to power y
 * @x: base number
 * @y: exponent
 *
 * Return: x raised to power of y or 1 (if y is 0),
 * or -1 (if y is less than 0)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
