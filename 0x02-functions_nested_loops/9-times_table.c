#include <stdio.h>
#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int x, y, res;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			res = x * y;

			_putchar(res);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
