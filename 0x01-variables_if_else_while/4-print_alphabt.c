#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints alphabets except q and e
 *Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z')
		{
			if (c != 'q' || c != 'e')
			{
				putchar(c);
			}
		}
	putchar('\n');
	return (0);
}
