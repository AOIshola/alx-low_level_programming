#include "main.h"
/**
 * more_numbers - multiples of 10
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n = 0;
	int m;

	while (n <= 14)
	{
		m *= 10;
		_putchar(m);
	}
	_putchar('\n');
}
