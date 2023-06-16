#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: n > 0: is positive , n = 0: is zero , n < 0: is negative
 */
int main(int n)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
}
