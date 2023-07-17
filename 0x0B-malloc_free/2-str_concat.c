#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - evaluate length of a string
 * @str: string to be evaluated
 *
 * Return: lenght of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string to concatenate
 *
 * Return: pointer to concatenated string, or NULL
 * if function fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int size;
	unsigned int i = 0;

	size = _strlen(s1) + _strlen(s2) + 1;
	concat = malloc(size * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (*s2 != '\0')
	{
		concat[i] = *s2;
		i++;
		s2++;
	}
	concat[i] = '\0';

	return (concat);
}
