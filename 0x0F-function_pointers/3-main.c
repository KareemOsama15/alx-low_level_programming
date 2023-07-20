#include "3-calc.h"

/**
 * main - function that excute the program
 *  and give its arguements
 *
 * @argc: number of passed arguements
 * @argv: string of passed arguements
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", operation(num1, num2));
	return (0);
}
