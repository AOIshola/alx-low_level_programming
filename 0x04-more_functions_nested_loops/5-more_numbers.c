#include "main.h"
/**
 * more_numbers - multiples of 10
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int n = 0;
	int m;

	while (n < 10)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
		n++;
	}
}
