#include "main.h"
/**
 * _strcmp: compare strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: integer
 */

int _strcmp(char *s1, char *s2);
{
	int counter, cmp;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmp = s1[counter] - s2[counter];
	return (cmp);
}
