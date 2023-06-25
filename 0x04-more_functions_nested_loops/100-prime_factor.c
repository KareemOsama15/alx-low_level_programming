#include <stdio.h>

/**
 * main - program prints the largest prime factor
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long int num = 612852475143;
	unsigned int i, fp, p = 2;

	for (i = 2; i <= (num / 2); i++)
	{
		if (num % i == 0)
		{
			while (p <= i)
			{
				if (i % p == 0 && p == i)
					fp = p;
				p++;
			}
		}
		printf("%d", fp);
	}
	return (0);
}
