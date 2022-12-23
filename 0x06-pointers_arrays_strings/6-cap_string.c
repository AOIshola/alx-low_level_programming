#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * separator of words includes space, tabulation, newline
 * @str: pointer to string
 * Return: String
 */

char *cap_string(char *str);
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (str[length] == ' ' || str[length] == '\t' || str[length] ==
				'\n' || str[length] == ',' || str[length] == '.'
				|| str[length] == ';' || str[length] == '!' ||
				str[length] == '?' || str[length] == '(' ||
				str[length] == ')' || str[length] == '{' ||
				str[length] == '}')
		{
			if (str[length + 1] >= 97 && str[length] <= 122)
			{
				str[length + 1] = str[length + 1] - 32;
			}
		}
		length++;
	}
	return (str);
}
