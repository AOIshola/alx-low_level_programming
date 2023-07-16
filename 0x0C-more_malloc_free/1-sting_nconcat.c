#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - conatenate n bytes to a string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to string of NULL if memory
 * allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	conc = malloc((len1 + n + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	while (i < (n + len1))
	{
		conc[i] = s2[i - len1];
		i++;
	}
	conc[i] = '\0';

	return (conc);
}
