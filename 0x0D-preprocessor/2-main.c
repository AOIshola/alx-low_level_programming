#include <stdio.h>

/**
 * main - print the name of the compilation file
 * Description: program prints the name of file it was compiled from
 * Return: 0 for success
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
