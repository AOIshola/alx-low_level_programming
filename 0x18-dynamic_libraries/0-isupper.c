#include "main.h"
/**
 *_isupper - checks uppercase characters
 *@c: function argument
 *Return: 0 or 1, depends on result
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
