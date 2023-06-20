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

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			res = x * y;

			_putchar(',');
			_putchar(' ');

			if (res <= 9)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
