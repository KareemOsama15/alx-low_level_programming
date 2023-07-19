#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcodes
 *  of its own main function
 *
 * @argc: number of passed arguements
 * @argv: string of passed arguements
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *) main;
	int byt, i;

	if (argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != (byt - 1))
			printf(" ");
	}
	printf(\n);

	return (0);
}
