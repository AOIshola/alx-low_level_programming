#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main - adds all integer arguments passed to main
 * @argc: the argument count
 * @argv: pointer to arguments passed to main
 *
 * Return: On success, 0. On error, 1.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
