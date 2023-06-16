#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: n > 0: is positive , n = 0: is zero , n < 0: is negative
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		return (n, "%f is positive");
	}
	else if (n < 0)
	{
		return (n, "%f is negative");
	}
	else
	{
		return (n, "%d is zero");
	}
}
