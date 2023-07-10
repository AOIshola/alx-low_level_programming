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
	printf("%s\n", *argv);
	return (0);
}
