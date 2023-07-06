#include "main.h"

int len = 0;

/**
 * _strlen_recursion - gets the length of a string
 * @s: pointer to the string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return len;
	}
	len++;
	_strlen_recursion(++s);
}
