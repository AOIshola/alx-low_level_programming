#include <stdio.h>
#include "main.h"

/**
 * main - prints thepath to the file
 * @argc: the argument count
 * @argv: pointer to an array of arguments
 * passed to main
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
