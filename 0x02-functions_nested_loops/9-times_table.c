#include <stdio.h>
#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

	for (int i = 0; i < 10; i++)
	{
		numbers[] *= i;
		printf("%d, \n", numbers[]);
	}
}
