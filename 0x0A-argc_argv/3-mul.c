#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all integer arguments passed to main
 * and prints the result
 * @argc: the argument count
 * @argv: pointer to arguments passed to main
 *
 * Return: On success 0. On error, 1.
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);
}
