#include <stdio.h>

/**
 * main - program prints the first 98 Fibonacci numbers
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long int f1 = 1, f2 = 2, fn;
	int i;

	printf("%ld, %ld", f1, f2);

	for (i = 0; i < 98; i++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;

		printf(", %ld", fn);
	}

	printf("\n");
	return (0);
}
