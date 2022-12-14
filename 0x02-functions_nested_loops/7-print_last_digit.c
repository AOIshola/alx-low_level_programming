#include "main.h"
/**
 *print_last_digit - prints the last digit of an integer
 *@n: integer parameter
 *Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
