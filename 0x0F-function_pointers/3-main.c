#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program performs basic arithmetic
 * @argc: number of arguments
 * @argv: list of arguments to the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*solve)(int, int);
	int num1, num2, calc;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	solve = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (solve == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2] == '%' || argv[2] == '/') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	calc = solve(num1, num2);
	printf("%d\n", calc);

	return (0);

}
