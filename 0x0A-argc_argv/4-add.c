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

	for (i = 1; i < argc; i++)
	{
		if (*(argv + i) < '0' && *(argv + i) > '9')
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
