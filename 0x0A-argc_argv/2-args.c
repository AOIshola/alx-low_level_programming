#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to main
 * @argc: the argument count
 * @argv: pointer to arguments passed to main
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *argv++);
		i++;
	}

	return (0);
}
