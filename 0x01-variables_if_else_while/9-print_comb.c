#include <stdio.h>
/**
 *main - Entry point
 *Description: 'number combination'
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
