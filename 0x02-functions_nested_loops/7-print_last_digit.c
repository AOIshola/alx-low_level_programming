#include "main.h"
/**
 *print_last_digit - prints the last digit of an integer
 *@n: integer parameter
 *Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	n %= 10;
	_putchar(n);
	return (n);
}
