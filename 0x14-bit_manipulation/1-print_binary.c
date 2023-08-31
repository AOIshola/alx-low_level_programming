#include "main.h"

/**
 * print_binary - print the binary representation of
 * a number
 * @n: number to represent in binary
 *
 * Return: Nothing.
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar(n & 1 ? '1' : '0');
}
