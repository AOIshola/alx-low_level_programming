#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: pointer argument
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
