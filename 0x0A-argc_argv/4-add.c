#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers.
 *
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		c = argc[i];

		if (c < '0' || c > '9')
			return (printf("Error\n"), 1);
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
