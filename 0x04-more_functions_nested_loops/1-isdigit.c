#include "main.h"
/**
 *_isdigit - checks for a digit through 0 and 9
 *@c: argument passed
 *Return: 0 or 1, depends on result
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
		return (0);
}
