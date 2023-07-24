#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separating string
 * @n: number of arguments passed to function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
