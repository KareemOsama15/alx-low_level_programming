#include <stdio.h>

/**
 * main - program prints the largest prime factor
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long int num = 612852475143;
	unsigned int i, fp = 2;

	for (i = 2; i <= (num / 2); i++)
	{
		while (num % i == 0)
		{
			num = num / i;

			if (fp <= i)
				fp = i;
		}
	}
	printf("%d\n", fp);
	return (0);
}
