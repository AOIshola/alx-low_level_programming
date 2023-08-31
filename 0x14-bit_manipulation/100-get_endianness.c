#include "main.h"

/**
 * get_endianess - checks the endianess
 *
 * Return: 0 if Big Endian, 1 if Little Endian
 */

int get_endianess(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *)&i;
	if (*c)
		return (1);
	else
		return (0);
}
