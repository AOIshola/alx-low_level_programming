#include "main.h"
/**
 *print_alphabet_x10 - print alphabets 10 times
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
