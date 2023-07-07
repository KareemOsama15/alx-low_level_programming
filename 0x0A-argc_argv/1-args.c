#include <stdio.h>

/**
 * main - function that prints
 *   the number of arguments passed into it
 *
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
