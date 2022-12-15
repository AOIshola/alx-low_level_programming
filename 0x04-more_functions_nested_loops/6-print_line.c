#include "main.h"
/**
 * print_line - draw a straight linr
 * @n: argument passed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i = 1;

	while (i <=  n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
