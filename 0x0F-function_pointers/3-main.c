#include <stdio.h>
#include <stdlib.h>
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
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] != "+") || (argv[2] != "-") || (argv[2] != "*") ||
		(argv[2] != "/") || (argv[2] != "%"))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
