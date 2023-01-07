#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer where copied string is stored
 * @src: pointer where string is stored
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
