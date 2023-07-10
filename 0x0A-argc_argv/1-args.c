#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * passed to the program
 * @argc: the number of arguments
 * @argv: pointer to array holding the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
