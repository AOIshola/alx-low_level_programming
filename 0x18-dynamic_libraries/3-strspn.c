#include <stdio.h>

/**
 * _strspn - function gets the length of a prefix substring
 * @s: string to search
 * @accept: target to match
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int matches = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (matches);
			}
		}

		i++;
	}

	return (matches);
}
