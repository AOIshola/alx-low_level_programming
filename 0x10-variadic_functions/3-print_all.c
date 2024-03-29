#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all arguments
 * @format: list of type identiers
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int a = 0, b, c = 0;
	char *str;
	char args[] = "cifs";

	va_start(ptr, format);
	while (format && format[a])
	{
		b = 0;
		while (args[b])
		{
			if (format[a] == args[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), c = 1;
				break;
			case 'i':
				printf("%i", va_arg(ptr, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), c = 1;
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} a++;
	}
	printf("\n"), va_end(ptr);
}
