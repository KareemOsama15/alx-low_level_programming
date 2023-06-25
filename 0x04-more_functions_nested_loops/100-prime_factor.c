#include <stdio.h>

/**
 * main - program prints the largest prime factor
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long int num = 612852475143;
	unsigned int i;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%d\n", i);
	return (0);
}
