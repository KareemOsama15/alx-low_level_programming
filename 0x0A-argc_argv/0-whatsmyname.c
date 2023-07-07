#include <stdio.h>

/**
 * main - function that prints its name
 *
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
