#include <stdio>
#include "3-calc.h"
/**
 * print_name - prints name using function pointer
 * @name: pointer to string
 * @f: pointer to function that prints name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
