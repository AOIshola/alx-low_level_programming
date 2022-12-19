#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer argument
 */

void print_rev(char *s)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
