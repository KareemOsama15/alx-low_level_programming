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
	if (argc == 1)
		printf("0\n");

	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*(argv + i) < 48 || *(argv + i) > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
