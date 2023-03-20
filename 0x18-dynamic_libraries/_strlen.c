#include <stdio.h>
#include "main.h"

/**
 * _strlen - return length of a string
 * @s: pointer argument
 * int i: index of string array
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
