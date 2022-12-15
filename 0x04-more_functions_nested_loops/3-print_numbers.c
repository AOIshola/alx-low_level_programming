#include "main.h"
/**
 *print_numbers - print 0 to 9
 *
 *Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
