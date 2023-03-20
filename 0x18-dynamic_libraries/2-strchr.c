#include <stdio.h>

/**
 * _strchr - locates the first occurence of a character in a string
 * @s: string to search
 * @c: character to find
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
