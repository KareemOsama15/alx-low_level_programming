#include <stdio.h>

/**
 * main - sum of all multiples of 3,5 below 1024
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
