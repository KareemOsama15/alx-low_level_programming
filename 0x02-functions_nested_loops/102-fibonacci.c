#include <stdio.h>

/**
 * main - program prints the first 50 Fibonacci numbers
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long int f1 = 1, f2 = 2, fn;
	int i = 1;

	printf("%ld, %ld", f1, f2);
	while (i < 49)
	{
		fn = f1 + f2;
		printf(", %ld", fn);

		f1 = f2;
		f2 = fn;
		i++;
	}
	printf("\n");
	
	return (0);
}
