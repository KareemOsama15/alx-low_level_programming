#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number of coins
 *   to make change for an amount of money.
 * @argc: number of command line arguements
 * @argv: array of command line arguements
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc == 1 || argc > 2)
		return (printf("Error\n"), 1);

	cents = atoi(argv[argc - 1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		num_coins += 1;
	}

	printf("%d\n", num_coins);
	return (0);
}
