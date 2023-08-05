#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to strings of 0s and 1s characters
 *
 * Return: the converted number or 0 if any character
 * is not 0 or 1 or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, exp = 1;
	const char *idx = b;

	if (!b)
		return (0);
	while (*idx != '\0')
		idx++;
	idx--;

	while (b <= idx)
	{
		if (*idx == '0')
		{
			exp *= 2;
			idx--;
			continue;
		}
		else if (*idx == '1')
		{
			uint += exp;
			exp *= 2;
			idx--;
			continue;
		}
		return (0);
	}

	return (uint);
}
