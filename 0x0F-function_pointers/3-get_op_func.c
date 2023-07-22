#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - pointer to function that gets operator sign
 * @s: operator sign given by user
 *
 * Return: pointer to the function that uses the appropriate
 * sign needed by user
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
