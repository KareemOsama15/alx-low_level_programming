#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers.
 *
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 *
 * Return: Always 0(success) , 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
