#include "main.h"
/**
 * leet - encodes a string to 1337
 * @str: pointer to string to encode
 * Return: the designated pointer
 */
char *leet(char *str)
{
	int length = 0, n;
	int lower[] = {97, 101, 111, 116, 108};
	int caps[] = {65, 69, 79, 84, 76};
	int code[] = {52, 51, 48, 55, 49};

	while (*(str + length) != '\0')
	{
		for (n = 0; n < 5; n++)
		{
			if (*(str + length) == lower[n] || *(str + length) ==
					caps[n])
			{
				*(str + length) = code[n];
				break;
			}
		}
		length++;
	}

	return (str);
}
