#include <stdio.h>

/**
 * main - program prints sum of even-valued terms
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long int f1 = 0, f2 = 1, fn, sum = 0;
	int i;

	for (i = 0; i < 33; i++)
	{
		fn = f1 + f2;
		if (fn % 2 == 0)
		{
			sum += fn;
		}

		f1 = f2;
		f2 = fn;
	}
	printf("%ld\n", sum);
	return (0);
}
