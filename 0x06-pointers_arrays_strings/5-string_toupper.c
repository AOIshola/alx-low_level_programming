#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert lowercases to uppercase
 * @str: string to convert to uppercase
 * Return: char
 */

char *string_toupper(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (str[length] >= 97 && str[length] <= 122)
		{
			str[length] = str[length] - 32;
		}
		length++;
	}

	return (str);
}
