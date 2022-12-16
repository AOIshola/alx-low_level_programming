#include "main.h"
/**
 * print_square - print a square
 * @size: parameter passed
 */

void print_square(int size)
{
	int m = 0, n;

	if (size > 0)
	{
		for (; m < size; m++)
		{
			for (n = 0; n < size; n++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
