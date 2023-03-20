#include "main.h"
/**
 *_abs - prints the absolute value of a number
 *@n: integer parameter
 *Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
