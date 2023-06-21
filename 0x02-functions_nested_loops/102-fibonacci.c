#include <stdio.h>

/**
 * main - program prints the first 50 Fibonacci numbers
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int f1 = 1, f2 = 2, fn, i = 0;

	printf("%d, %d", f1, f2);
	while (i < 48)
	{
		fn = f1 + f2;
		printf(", %d", fn);

		f1 = f2;
		f2 = fn;
		i++;
	}
	return (0);
}
