#include <stdio.h>
/**
 *main - Entry point
 *Description: 'number combination'
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	while (a < 100)
	{
		putchar(a + '0');
		a++;
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
