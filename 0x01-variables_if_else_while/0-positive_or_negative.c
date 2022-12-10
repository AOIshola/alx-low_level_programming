#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		print("is positive\n");
	}else if (n == 0)
	{
		print("is zero\n");
	}else
	{
		print("is negative\n");
	}
	return (0);
}
